#ifndef SEAMAMMAL_H
#define SEAMAMMAL_H

#include "Mammal.h"

class SeaMammal : public Mammal {
public:
    SeaMammal(string name, string kind, string sound);

    string moves() const override;

    string output() const override;
};

#endif
