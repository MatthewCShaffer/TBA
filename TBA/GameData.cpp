#include "GameData.h"
#include <iostream>
#include <string>

using namespace std;

GameData::GameData() : parser{ TextParser(this) }, reader{ DataBaseReader() } {
    Scenes.push_back(make_unique<Scene>());
    CurrentScene = Scenes.at(0).get();
}

GameData::~GameData() {
}

void GameData::Start() {
    cout << "The game has started" << endl;
    string input;
    cout << CurrentScene->GetObjects()->at(0)->view() << endl;
    while (input != "exit") {
        input = parser.GetNextCommand();
    }
    cout << reader.GetStringByKey("TestKey") << endl;
}