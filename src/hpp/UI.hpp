#ifndef UI_HPP
#define	UI_HPP

#include "UiRenderer.hpp"
#include "IoProcessor.hpp"
#include "EventConverter.hpp"
#include "Event.hpp"

namespace GlGUI {

    class UI {
    protected:
        UiRenderer *_renderer;
        EventConverter *_event_converter;
        IoProcessor *_io_processor;
    public:
        UI(
                UiRenderer *renderer,
                EventConverter *event_converter,
                IoProcessor *io_processor
        ); 
    };
}

#endif	

