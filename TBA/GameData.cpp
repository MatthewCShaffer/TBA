#include "GameData.h"

GameData::GameData() : parser{ TextParser(this) }, reader{ DataBaseReader() } {
}

GameData::~GameData() {
    //delete parser;
    //delete reader;
}

void GameData::Start() {
    cout << "The game has started" << endl;
    string input;
    while (input != "exit") {
        input = parser.GetNextCommand();
    }
    cout << reader.GetStringByKey("TestKey");
}