#include "Fish.h"

Fish::Fish(string name, string kind) : Animal(name, kind) {};

string Fish::sound() const {
    return "nothing";
};

string Fish::moves() const {
    return "swim";
};

string Fish::output() const {
    return name + " " + kind + " " + "Fish";
}