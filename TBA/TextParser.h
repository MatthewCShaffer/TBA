#pragma once
#include <string>

class GameData;
class TextParser {
	private:
		const GameData * const parentGame;
	public:
		TextParser(GameData* game);
		bool ParseText(std::string text);
		std::string GetNextCommand();
};