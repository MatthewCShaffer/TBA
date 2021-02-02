#pragma once
#include <iostream>
#include <string>
#include "TextParser.h"
#include "DataBase.h"

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
};