#include "GameObject.h"
#include <iostream>

using namespace std;

GameObject::GameObject(string name) : Identifier(name) {
	cout << "Made an object with the name: " << name << endl;
}

GameObject::~GameObject() {
	cout << "Destroying an object with the name: " << Identifier << endl;
}

string GameObject::view() {
	return "I am " + Identifier;
}