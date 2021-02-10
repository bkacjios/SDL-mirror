/*
  Simple DirectMedia Layer
  Copyright (C) 1997-2020 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/
#include "../../SDL_internal.h"

#if SDL_VIDEO_DRIVER_POCKETGOS30

/* Being a null driver, there's no event stream. We just define stubs for
   most of the API. */

#include "../../events/SDL_events_c.h"

#include <sys/stat.h>
#include <fcntl.h>
#include <linux/input.h>
#include <unistd.h>

#include "SDL_scancode.h"
#include "../../events/scancodes_pocketgos30.h"

static int fdevent0;
static int fdevent3;

/*struct input_event {
    struct timeval time;
    unsigned short type;
    unsigned short code;
    unsigned int value;
};*/

void S30_EventsInit()
{
	fdevent0 = open("/dev/input/event0", O_RDONLY|O_NONBLOCK);
	fdevent3 = open("/dev/input/event3", O_RDONLY|O_NONBLOCK);
}

void S30_EventsQuit()
{
	if (fdevent0 > 0)
		close(fdevent0);
	
	if (fdevent3 > 0)
		close(fdevent3);
}

static void S30_HandleEvent(struct input_event event) {
	if (event.type > 0 && event.code > 0) {
		int code = pocketgo30_scancode_table[event.code];
		//printf("event.type %d, event.code %d, event.value %d\n", event.type, event.code, event.value);
		if (code > SDL_SCANCODE_UNKNOWN) {
			//printf("event.code %d -> %d\n", event.code, code);
			SDL_SendKeyboardKey(event.value, code);
		}
	}
}

void
S30_PumpEvents(_THIS)
{
	struct timeval tv;
    fd_set fds;
    int maxfd;
    int res;
	struct input_event event;

    tv.tv_sec = 0;
    tv.tv_usec = 0;

    FD_ZERO(&fds); // Clear FD set for select
    FD_SET(fdevent0, &fds);
    FD_SET(fdevent3, &fds);

    maxfd = fdevent0 > fdevent3 ? fdevent0 : fdevent3;

    select(maxfd + 1, &fds, NULL, NULL, &tv);

	if (FD_ISSET(fdevent0, &fds)) {
		res = read(fdevent0, &event, sizeof(struct input_event));
		if (res > 0) {
			S30_HandleEvent(event);
		}
	}

	if (FD_ISSET(fdevent3, &fds)) {
		res = read(fdevent3, &event, sizeof(struct input_event));
		if (res > 0) {
			S30_HandleEvent(event);
		}
	}
}

#endif /* SDL_VIDEO_DRIVER_POCKETGOS30 */

/* vi: set ts=4 sw=4 expandtab: */
