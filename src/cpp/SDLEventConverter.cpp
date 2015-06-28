#include "SDLEventConverter.hpp"

namespace GlGUI {
    Event SDLEventConverter::convert(void *event) {
        Event e;
        SDL_Event *sdl_event=(SDL_Event *)event;
        if (sdl_event->type == SDL_QUIT) {
            e.type=EXIT;
        }
        return e;
    }
};