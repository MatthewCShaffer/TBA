#include "Textparser.h"

TextParser::TextParser(GameData* game) : parentGame{ game }
{
}

bool TextParser::ParseText(string text)
{
	return true;
}

string TextParser::GetNextCommand()
{
	string input;
	cin >> input;
	ParseText(input);
	return input;
}