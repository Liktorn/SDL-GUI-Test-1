#include "Screen.h"

using namespace bw;

// Constructor
Screen::Screen()
{
	m_window = NULL;
	m_renderer = NULL;
}
// Destructor
Screen::~Screen()
{
}
// Initialize the window and renderer
bool Screen::init() {
	// If not initialized correctly, return false.
	if (SDL_Init(SDL_INIT_VIDEO) == 0) {
		m_window = NULL;
		m_renderer = NULL;
	}
	else
		return false;
	// If not initialized correctly, return false.
	if (SDL_CreateWindowAndRenderer(WIDTH, HEIGHT, 0, &m_window, &m_renderer) == 0) {
		SDL_bool done = SDL_FALSE;
	}
	else
		return false;

	return true;
}
// Destroying all the instances
void Screen::close() {
	if (m_renderer) {
		SDL_DestroyRenderer(m_renderer);
	}
	if (m_window) {
		SDL_DestroyWindow(m_window);
	}
	SDL_Quit();
}

bool Screen::processEvent() {
	// Checking the event list.
	SDL_Event event;
	SDL_PollEvent(&event);
	if (event.type == SDL_QUIT) {
		return false;
	}
	else
		return true;
}
// Returns the renderer
SDL_Renderer* Screen::getRenderer() {
	return m_renderer;
}