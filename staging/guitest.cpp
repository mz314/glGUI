#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

#include "UI.hpp"
#include "SDLEventConverter.hpp"
#include "IoProcessor.hpp"
#include "UiRenderer.hpp"
#include "SDL2GLRenderer.hpp"

using namespace GlGUI;

SDL_Window *window;
SDL_Renderer *renderer;
SDL_Surface *screen;
SDL_GLContext context;

void initSDL() {
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_CreateWindowAndRenderer(640, 480,
            SDL_WINDOW_OPENGL, &window, &renderer);
    screen = SDL_GetWindowSurface(window);
    context = SDL_GL_CreateContext(window);
}

int main() {
    UI *ui;
    SDL2GLRenderer *r = new SDL2GLRenderer();
    EventConverter *ec = new SDLEventConverter();
    IoProcessor *p = new IoProcessor();
    ui = new UI((UiRenderer *) r, ec, p);
    initSDL();
    SDL_Event event;
    bool exit = false;
    while (!exit) {
        while (SDL_PollEvent(& event)) {
            ui->getIoProcessor()->passEvent((void *)&event);
            if (event.type == SDL_QUIT) {
                exit = true;
            }
        }
    }
}
