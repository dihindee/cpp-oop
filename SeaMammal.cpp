#include "SeaMammal.h"

SeaMammal::SeaMammal(string name, string kind, string sound) : Mammal(name, kind, sound) {};

string SeaMammal::moves() const {
    return "swim";
}

string SeaMammal::output() const {
    return name + " " + kind + " " + "SeaMammal";
}