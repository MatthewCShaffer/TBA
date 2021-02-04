#pragma once
#include <vector>
#include <memory>
#include "GameObject.h"

using namespace std;

class Scene {
	public:
		Scene();
		vector<unique_ptr<GameObject>> * GetObjects();
	private:
		vector<unique_ptr<GameObject>> SceneObjects;
};
