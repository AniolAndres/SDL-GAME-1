#ifndef __MODULE_H__
#define __MODULE_H__

class Application;

class Module
{
public:

	Module()
	{
	}

	virtual bool Init() 
	{
		return true; 
	}

	virtual bool Start()
	{
		return true;
	}

	virtual update_status PostUpdate()
	{
		return UPDATE_CONTINUE;
	}

	virtual update_status PreUpdate()
	{
		return UPDATE_CONTINUE;
	}

	// TODO 3: Create a new method "Start()" that should be calling all modules just before the first frame

	virtual update_status Update()
	{
		return UPDATE_CONTINUE;
	}

	virtual bool CleanUp() 
	{ 
		return true; 
	}
};

#endif // __MODULE_H__