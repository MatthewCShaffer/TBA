#pragma once
#include <vector>
#include <memory>
#include "GameObject.h"

class Scene {
	public:
		Scene();
		std::vector<std::unique_ptr<GameObject>> * GetObjects();
		void ListSceneObjects();
	private:
		std::vector<std::unique_ptr<GameObject>> SceneObjects;
};
