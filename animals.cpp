/*
  The functions declared through scope
  operators.

  https://selectedfew.io
  selectedfew@yahoo.com
  
*/

#include <iostream>
#include "animals.hpp"

using std::string;

const string & Animal::name() const { return _name; }
const string & Animal::type() const { return _type; }
const string & Animal::sound() const { return _sound; }

void Animal::speak() const {
	printf("%s the %s says %s\n", _name.c_str(), _type.c_str(), _sound.c_str());
}

int Dog::walk() { return ++walked; }
int Cat::pet() { return ++petted; }
int Pig::feed() { return ++fed; }
