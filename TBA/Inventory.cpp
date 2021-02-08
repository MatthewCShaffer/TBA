#include "Inventory.h"
#include <iostream>

using namespace std;

Inventory::Inventory() {

}

vector<unique_ptr<GameObject>>* Inventory::GetInventory()
{
    return &InventoryObjects;
}

void Inventory::ListInventroy()
{
    cout << "Your Inventory contains: " << endl;
    for (auto& it : InventoryObjects) {
        if (it != nullptr)
            it->View();
    }
    cout << endl;
}

void Inventory::AddInventory(unique_ptr<GameObject>& Object)
{
    InventoryObjects.push_back(move(Object));
}

bool Inventory::RemoveInventory(const unique_ptr<GameObject>& Object)
{
    auto location = std::remove(InventoryObjects.begin(), InventoryObjects.end(), Object);
    if (location != InventoryObjects.end())
    {
        InventoryObjects.erase(location);
        return true;
    }
    else
        return false;
}