#ifndef WIDGET_HPP
#define	WIDGET_HPP

#include <vector>

namespace GlGUI {
 
    class Widget {
        
        std::vector<Widget *> _children;
        public:
            void addWidget(Widget *w);
            std::vector<Widget *> getChildren();
        
    };
    
};


#endif	

