#pragma once
#include <SDL.h>

namespace bw {

class Screen
{
public:
	const static int WIDTH = 800;
	const static int HEIGHT = 600;
private:
	SDL_Window* m_window;
	SDL_Renderer* m_renderer;

public:
	Screen();
	~Screen();
	bool processEvent();
	bool init();
	void close();
	SDL_Renderer* getRenderer();
};
}