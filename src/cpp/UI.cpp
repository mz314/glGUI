#include "UI.hpp"
namespace GlGUI {

    UI::UI(UiRenderer *renderer, EventConverter *event_converter, IoProcessor *io_processor)
    : 
    _renderer(renderer),
    _event_converter(event_converter),
    _io_processor(io_processor)
    {
        
    }
};