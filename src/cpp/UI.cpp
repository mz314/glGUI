#include "UI.hpp"
namespace GlGUI {

    UI::UI(UiRenderer *renderer, EventConverter *event_converter, IoProcessor *io_processor)
    : 
    _renderer(renderer),
    _event_converter(event_converter),
    _io_processor(io_processor)
    {
        this->_io_processor->setEventConverter(event_converter);
    }
    
   IoProcessor * UI::getIoProcessor() {
       return this->_io_processor;
   }
};