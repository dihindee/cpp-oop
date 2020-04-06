#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammal : public Animal {
public:
    Mammal(string name, string kind, string sound);

    string sound() const override;

protected:
    string soundStr;
};

#endif
