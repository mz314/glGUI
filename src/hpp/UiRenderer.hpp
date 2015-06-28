#ifndef UIRENDERER_HPP
#define	UIRENDERER_HPP
namespace GlGUI {
    class UiRenderer {
    protected:
        void *params;
    public:
        virtual void initialize()=0;
        virtual void passParams(void *params);
    };
}
#endif	

