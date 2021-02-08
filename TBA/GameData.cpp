#include "GameData.h"
#include <iostream>
#include <string>

using namespace std;

GameData::GameData() : parser{ TextParser(this) }, reader{ DataBaseReader() } {
    Scenes.push_back(make_unique<Scene>("Default Scene"));
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
    CurrentScene->View();
    PlayerInventory.ListInventroy();

    Take(target);

    CurrentScene->View();
    PlayerInventory.ListInventroy();

    if(!PlayerInventory.GetInventory()->empty())
        PlayerInventory.RemoveInventory(PlayerInventory.GetInventory()->at(0));

    CurrentScene->View();
    PlayerInventory.ListInventroy();

    //Test game loop
    while (input != "exit") {
        input = parser.GetNextCommand();
    }
    cout << "The game has ended. Goodbye!" << endl;
}

void GameData::Take(unique_ptr<GameObject>& Object)
{
    if (!Object->canTake())
    {
        cout << "You cannot take that" << endl;
        return;
    }
    PlayerInventory.AddInventory(Object);
    CurrentScene->RemoveObject(Object);
}

void GameData::Drop(unique_ptr<GameObject>& Object)
{
    CurrentScene->AddObject(Object);
    PlayerInventory.RemoveInventory(Object);
}
