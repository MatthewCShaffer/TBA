#pragma once
#include <vector>
#include <memory>
#include "TextParser.h"
#include "DataBase.h"
#include "Scene.h"

class GameData {
	public:
		GameData();
		~GameData();
		void Start();
	private:
		TextParser parser;
		DataBaseReader reader;
		Scene * CurrentScene;
		std::vector<std::unique_ptr<Scene>> Scenes;
};