#pragma once
#include <string>

class GameObject {
	public:
		GameObject(std::string Name);
		~GameObject();
		std::string view();
	private:
		std::string Identifier;
};