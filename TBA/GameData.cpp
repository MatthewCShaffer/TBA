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
    cout << "The game has started. Hello!" << endl;
    cout << reader.GetStringByKey("TestKey") << endl;
    string input;

    //Testing Moving Objects around
    auto objects = CurrentScene->GetObjects();
    auto &target = objects->at(0);
    CurrentScene->ListSceneObjects();
    PlayerInventory.ListInventroy();

    PlayerInventory.AddInventory(target);

    CurrentScene->ListSceneObjects();
    PlayerInventory.ListInventroy();

    PlayerInventory.RemoveInventory(PlayerInventory.GetInventory()->at(0));

    CurrentScene->ListSceneObjects();
    PlayerInventory.ListInventroy();

    //Test game loop
    while (input != "exit") {
        input = parser.GetNextCommand();
    }
    cout << "The game has ended. Goodbye!" << endl;
}
