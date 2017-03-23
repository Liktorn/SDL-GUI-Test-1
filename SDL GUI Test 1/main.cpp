#include <SDL.h>
#include<iostream>
#include"Screen.h"

using namespace bw;

int main(int argc, char ** argv)
{
	//Create the screen object
	Screen screen;
	// Initialize the screen
	screen.init();
	// Getting the statics from Screen
	static int WIDTH = screen.WIDTH;
	static int HEIGHT = screen.HEIGHT;
	// Setting the length from the middle of the screen to the triangles points.
	static int LENGTH = 111;


	// Game loop
	while (true) {



		// Checking the event list and break if quit
		if (screen.processEvent() == false)
			break;
	}

	//Pause the console so that the window does not exit imediatly
	std::cout << "like this" << std::endl;
	system("PAUSE"); // <-- this will stop the console from closing.

	// De-initialize the screen
	screen.close();
	return 0;
}