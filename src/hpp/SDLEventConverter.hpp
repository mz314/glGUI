#ifndef SDLEVENTCONVERTER_HPP
#define	SDLEVENTCONVERTER_HPP
#include <SDL2/SDL.h>
#include "EventConverter.hpp"
#include "Event.hpp"

namespace GlGUI {

    class SDLEventConverter : public EventConverter {
         virtual Event  convert(void *event);
    };
    
};

#endif	

