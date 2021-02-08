#pragma once
#include <vector>
#include <memory>
#include <string>
#include "GameObject.h"

class Scene {
	public:
		Scene(std::string Description);
		std::vector<std::unique_ptr<GameObject>> * GetObjects();
		void View();
		bool RemoveObject(const std::unique_ptr<GameObject>& Object);
		void AddObject(std::unique_ptr<GameObject>& Object);
	private:
		std::vector<std::unique_ptr<GameObject>> SceneObjects;
		std::string Description;
		
};
