//Using SDL and standard IO
#include <SDL2/SDL.h>
#include <stdio.h>

//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main(int argc, char* args[])
{
//	The window that will be rendered to
	SDL_Window* window = NULL;
	
//	The surface contained by the window
	SDL_Surface* screenSurface = NULL;

//	Initialize SDL
	if(SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize!!! SDL_Error: %\n,", SDL_GetError());
	}
	else
	{
//		Create Window
		window = SDL_CreateWindow("SDL_Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if(window == NULL)
		{
			printf("SDL could not initialize!!! SDL_Error: %\n,", SDL_GetError());
		}
		else
		{
//			Get window surface
			screenSurface = SDL_GetWindowSurface(window);

//			Fill the surface white
			SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));

//			update the surface
			SDL_UpdateWindowSurface(window);

//			Wait two seconds
			SDL_Delay(2000);
		}
	}

//	Destroy window
	SDL_DestroyWindow(window);

//	quit SDL subsystems
	SDL_Quit();

	return 0;
}
