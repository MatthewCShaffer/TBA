#pragma once
#include <vector>
#include <memory>
#include "TextParser.h"
#include "DataBase.h"
#include "Scene.h"
#include "Inventory.h"

class GameObject;
class GameData {
	public:
		GameData();
		~GameData();
		void Start();
		void Take(std::unique_ptr<GameObject>& Object);
		void Drop(std::unique_ptr<GameObject>& Object);
	private:
		TextParser parser;
		DataBaseReader reader;
		Scene * CurrentScene;
		std::vector<std::unique_ptr<Scene>> Scenes;
		Inventory PlayerInventory;
		
};