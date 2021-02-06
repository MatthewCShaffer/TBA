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
            cout << it->view() << "\n";
    }
    cout << endl;
}

void Inventory::AddInventory(unique_ptr<GameObject>& Object)
{
    cout << "Adding Item to Inventory: " << Object->view() << endl;
    InventoryObjects.push_back(move(Object));
}

bool Inventory::RemoveInventory(unique_ptr<GameObject>& Object)
{
    auto location = std::remove(InventoryObjects.begin(), InventoryObjects.end(), Object);
    if (location != InventoryObjects.end())
    {
        cout << "Removinging Item from Inventory: " << Object->view() << endl;
        InventoryObjects.erase(location);
        return true;
    }
    else
        return false;
}