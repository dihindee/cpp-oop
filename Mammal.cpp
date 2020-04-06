#include "Mammal.h"

Mammal::Mammal(string name, string kind, string sound) : Animal(name, kind), soundStr(sound) {};

string Mammal::sound() const {
    return soundStr;
};