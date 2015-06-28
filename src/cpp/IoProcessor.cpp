#include "IoProcessor.hpp"
namespace GlGUI {

    bool IoProcessor::processEvent(const Event & e) {

    }

    bool IoProcessor::passEvent(void *e) {
        Event ec = this->_event_converter->convert(e);
    }

    void IoProcessor::setEventConverter(EventConverter *ec) {
        this->_event_converter = ec;
    }
};
