//SDL and standard IO
#include <SDL2/SDL.h>
#include <stdio.h>

//Screen dimension
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

//Starts up SDL and creates window
bool init();

//media loader
bool loadMedia();

//frees media and shuts down SDL
void close();

//The window being rendered to
SDL_Window* gWindow = NULL;

//Surface contained by window
SDL_Surface* gScreenSurface = NULL;

//Image to be loaded onto the screen
SDL_Surface* gXOut = NULL;

bool init()
{
//	Init flag
	bool success = true;

//	Initialize SDL
	if(SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not init! SDL_Error: %s\n", SDL_GetError());
		success = false;
	}
	else
	{
//		Create window
		gWindow = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

		if(gWindow == NULL)
		{
			printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
			success = false;
		}
		else
		{
//			Get window surface
			gScreenSurface = SDL_GetWindowSurface(gWindow);
		}
	}

	return success;
}

bool loadMedia()
{
//	Loading success flag
	bool success = true;

//	
}
