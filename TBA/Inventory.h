#pragma once
#include <vector>
#include <memory>
#include "GameObject.h"

class Inventory {
	public:
		Inventory();
		std::vector<std::unique_ptr<GameObject>>* GetInventory();
		void AddInventory(std::unique_ptr<GameObject>& Object);
		bool RemoveInventory(const std::unique_ptr<GameObject>& Object);
		void ListInventroy();
	private:
		std::vector<std::unique_ptr<GameObject>> InventoryObjects;

};