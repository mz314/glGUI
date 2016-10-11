CFLAGS=-Isrc/hpp/ 

test: test.o UI.o IoProcessor.o UiRenderer.o EventConverter.o SDLEventConverter.o SDL2GLRenderer.o
	g++  $^ -lSDL2 -lSDL2_ttf -lGL -o test 
	

test.o: staging/guitest.cpp
	g++ $(CFLAGS) -lSDL2 -lSDL2_ttf -c $^ -o $@
	


UI.o: src/cpp/UI.cpp
	g++  $(CFLAGS) -c  -fPIC  $^ -o $@ 

IoProcessor.o: src/cpp/IoProcessor.cpp
	g++  $(CFLAGS) -c  -fPIC  $^ -o $@ 
	
UiRenderer.o: src/cpp/UiRenderer.cpp
	g++  $(CFLAGS) -c  -fPIC  $^ -o $@ 
	

EventConverter.o: src/cpp/EventConverter.cpp
	g++  $(CFLAGS) -c  -fPIC  $^ -o $@ 
	
SDLEventConverter.o: src/cpp/SDLEventConverter.cpp
	g++  $(CFLAGS) -c  -fPIC  $^ -o $@ 

SDL2GLRenderer.o: src/cpp/SDL2GLRenderer.cpp
	g++  $(CFLAGS) -c  -fPIC  $^ -o $@ 
	

clean:
	rm ./*.o