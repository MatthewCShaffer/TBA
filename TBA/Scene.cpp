#include "Scene.h"
#include <iostream>

using namespace std;

Scene::Scene() {
	SceneObjects.push_back(make_unique<GameObject>("A thing"));
}

void Scene::ListSceneObjects()
{
	cout << "The scene contains: " << endl;
	for (auto& it : SceneObjects) {
        if (it != nullptr)
		    cout << it->view() << "\n";
	}
	cout << endl;
}

vector<unique_ptr<GameObject>>* Scene::GetObjects()
{
	return &SceneObjects;
}