#include "TerreMammal.h"

TerreMammal::TerreMammal(string name, string kind, string sound) : Mammal(name, kind, sound) {};

string TerreMammal::moves() const {
    return "run";
}

string TerreMammal::output() const {
    return name + " " + kind + " " + "TerreMammal";
}