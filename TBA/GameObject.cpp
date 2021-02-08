#include "GameObject.h"
#include <iostream>

using namespace std;

GameObject::GameObject(string name, string Description, bool canBeTaken) : Identifier(name), Discription(Description), canBeTaken(canBeTaken) {
	cout << "Made an object with the name: " << name << endl;
}

GameObject::~GameObject() {
	cout << "Destroying an object with the name: " << Identifier << endl;
}

string GameObject::GetIdentifier() {
	return Identifier;
}
void GameObject::View()
{
	cout << Discription << endl;
}

bool GameObject::canTake()
{
	return canBeTaken;
}