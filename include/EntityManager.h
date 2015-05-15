#pragma once

#include "LinkedList.h"

class Entity;

class EntityManager
{
private:
	static LinkedList<Entity*>* _entities;
	EntityManager(void);
	~EntityManager(void);
public:
	static bool Initialise();
	static bool LoadContent();
	static bool Update();
	static void UnloadContent();
	static LinkedList<Entity*>* GetRenderOrder();
	static void Clear();
	static void ShutDown();
	static void RegisterEntity(Entity* entity);
	static void RemoveEntity(Entity* entity);
};
