#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "TextParser.h"
#include "DataBase.h"
#include "Scene.h"

using namespace std;
class TextParser;
class DataBaseReader;
class GameData {
	public:
		GameData();
		~GameData();
		void Start();
	private:
		TextParser parser;
		DataBaseReader reader;
		Scene * CurrentScene;
		vector<unique_ptr<Scene>> Scenes;
};