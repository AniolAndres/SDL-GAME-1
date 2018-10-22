#include "Module.h"
#include "Globals.h"
#include "SDL/include/SDL.h"

class ModuleScene :	public Module
{
public:
	ModuleScene();
	~ModuleScene();
	bool Start();
	update_status Update();
	bool CleanUp();

public:
	SDL_Texture * graphics = nullptr;

};

