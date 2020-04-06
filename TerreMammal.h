#ifndef TERREMAMMAL_H
#define TERREMAMMAL_H

#include "Mammal.h"

class TerreMammal : public Mammal {
public:
    TerreMammal(string name, string kind, string sound);

    string moves() const override;

    string output() const override;
};

#endif