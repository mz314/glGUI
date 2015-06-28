#ifndef EVENT_HPP
#define	EVENT_HPP

namespace GlGUI {
    
    enum EVENT_TYPE {
        EXIT,
        KEYDOWN,
        KEYUP,
        MOUSECLICK,
        MOUSEMOVE
    };
    
    class Event {
    public:
        EVENT_TYPE type;
    };
};

#endif	

