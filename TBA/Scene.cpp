#include "Scene.h"

using namespace std;

Scene::Scene() {
	SceneObjects.push_back(make_unique<GameObject>());
}

vector<unique_ptr<GameObject>>* Scene::GetObjects()
{
	return &SceneObjects;
}