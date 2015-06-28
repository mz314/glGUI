#include "UI.hpp"
#include "SDLEventConverter.hpp"
#include "IoProcessor.hpp"
#include "UiRenderer.hpp"
#include "SDL2GLRenderer.hpp"

using namespace GlGUI;

int main() {
    UI *ui;
    SDL2GLRenderer *r=new SDL2GLRenderer();
    EventConverter *ec=new SDLEventConverter();
    IoProcessor *p=new IoProcessor();
    ui=new UI((UiRenderer *)r,ec,p); 
}
