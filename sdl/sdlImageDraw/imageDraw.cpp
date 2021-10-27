//SDL and Standard IO
#include <SDL2/SDL.h>
#include <stdio.h>

//Screen dimension
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

//Starts SDL and creates window
bool init();

//Loads media
bool loadMedia();

//Frees media and shuts down SDL
void close();

//Window to be rendered at
SDL_Window* gWindow = NULL;

//Surface contained by the window
SDL_Surface* gScreenSurface = NULL;

//The image that will be loaded
SDL_Surface* gHelloWorld = NULL;

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
//		create window
		gWindow = SDL_CreateWindow("SDL_Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
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
//	load success flag
	bool success = true;

//	load splash image
	gHelloWorld = SDL_LoadBMP("hello_world.bmp");
	if (gHelloWorld == NULL)
	{
		printf( "Unable to load image %s! SDL Error: %s\n", "hello_world.bmp", SDL_GetError());
		success = false;
	}

	return success;
}

void close()
{
//	deallocate surface
	SDL_FreeSurface(gHelloWorld);

//	Destroy window
	SDL_DestroyWindow(gWindow);
	gWindow = NULL;

//	Quit SDL subsystems
	SDL_Quit();

}

int main(int argc, char* args[])
{
//	Starts up SDL and create window
	if(!init())
	{
		printf("Failed to init\n");
	}
	else
	{
//		load media
		if(!loadMedia())
		{
			printf("Failed to load media!\n");
		}
		else
		{
//			Apply the image
			SDL_BlitSurface(gHelloWorld, NULL, gScreenSurface, NULL);

//			Update the surface
			SDL_UpdateWindowSurface(gWindow);

//			Wait five secs
			SDL_Delay(5000);
		}
	}
//	Free resources and close SDL
	close();

	return 0;
}
