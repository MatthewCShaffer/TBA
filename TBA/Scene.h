#pragma once
#include <vector>
#include <memory>
#include "GameObject.h"

class Scene {
	public:
		Scene();
		std::vector<std::unique_ptr<GameObject>> * GetObjects();
	private:
		std::vector<std::unique_ptr<GameObject>> SceneObjects;
};
