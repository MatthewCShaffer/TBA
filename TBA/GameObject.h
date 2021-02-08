#pragma once
#include <string>

class GameObject {
	public:
		GameObject(std::string Name, std::string Description, bool canBeTaken = false);
		~GameObject();
		void View();
		std::string GetIdentifier();
		bool canTake();
	private:
		std::string Identifier;
		std::string Discription;
		bool canBeTaken;
};