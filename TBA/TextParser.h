#pragma once
#include <iostream>
#include <string>

using namespace std;
class GameData;
class TextParser {
	private:
		const GameData * const parentGame;
	public:
		TextParser(GameData* game);
		bool ParseText(string text);
		string GetNextCommand();
};