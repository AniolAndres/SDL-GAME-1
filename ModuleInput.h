#include "Module.h"
#include "Globals.h"
#include "SDL/include/SDL_scancode.h"

typedef unsigned __int8 Uint8;


enum EventWindow
{
	WE_QUIT = 0,
	WE_HIDE = 1,
	WE_SHOW = 2,
	WE_COUNT
};

class ModuleInput : public Module
{
public:
	
	ModuleInput();
	~ModuleInput();

	bool Init();
	update_status Update();
	bool CleanUp();

private:
	const Uint8 *keyboard = NULL;
	bool windowsEvents[WE_COUNT];
};