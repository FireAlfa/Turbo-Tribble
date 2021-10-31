#ifndef __MODULE_SCENE_INTRO_H__
#define __MODULE_SCENE_INTRO_H__

#include "Module.h"
#include "GameObject.h"


class ModuleSceneIntro : public Module
{
public:

	// Constructor
	ModuleSceneIntro(Application* app, bool startEnabled = true);
	// Destructor
	~ModuleSceneIntro();

	// Load Scene
	bool Start();
	// Update
	UpdateStatus Update(float dt);
	// Unload Scene
	bool CleanUp();

	// Draw everything on screen, called by ModuleRenderer
	void Draw();

	// Game Object creator
	GameObject* CreateGameObject(const char* name);

	GameObject* root;
};

#endif // !__MODULE_SCENE_INTRO_H__