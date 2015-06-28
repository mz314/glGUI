#ifndef IOPROCESSOR_HPP
#define	IOPROCESSOR_HPP

#include "Event.hpp"
#include "EventConverter.hpp"

namespace GlGUI {

    class IoProcessor {
    protected:
        EventConverter * _event_converter;
    public:
        bool processEvent(const Event & e);
        bool passEvent(void *e);
        void setEventConverter(EventConverter *ec);
    };

}

#endif	

