#include "Scene.h"
#include <iostream>

using namespace std;

Scene::Scene(std::string Description) : Description(Description) {
	SceneObjects.push_back(make_unique<GameObject>("Thing", "A generic thing"));
}

vector<unique_ptr<GameObject>>* Scene::GetObjects()
{
	return &SceneObjects;
}

void Scene::View() {
	cout << Description << endl;
	for (auto& it : SceneObjects) {
		if (it != nullptr)
			it->View();
	}
	cout << endl;
}

bool Scene::RemoveObject(const unique_ptr<GameObject>& Object) {
	auto location = std::remove(SceneObjects.begin(), SceneObjects.end(), Object);
	if (location != SceneObjects.end())
	{
		SceneObjects.erase(location);
		return true;
	}
	else
		return false;
}

void Scene::AddObject(unique_ptr<GameObject>& Object) {
	SceneObjects.push_back(move(Object));
}