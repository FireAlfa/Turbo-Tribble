#ifndef __COMPONENT_H__
#define __COMPONENT_H__

#include "GameObject.h" 

class GameObject;

enum class CompType
{
	TRANSFORM,
	MESH,
	MATERIAL,
	LIGHT,
};

class Component
{
public:

	virtual void Enable() { active = true; }
	virtual void Disable() { active = false; }

	virtual void Update(float dt) {}

	virtual bool IsEnabled() { return active; }

	virtual bool GetOwner() { return owner; }

protected:

	CompType type;
	bool active;
	GameObject* owner;
};

#endif // !__COMPONENT_H__
