#ifndef EVENTCONVERTER_HPP
#define	EVENTCONVERTER_HPP

#include "Event.hpp"

namespace GlGUI {

    class EventConverter {
    public:
        virtual Event  convert(void *event)=0;
        EventConverter();
    };

}

#endif	

