#ifndef FISH_H
#define FISH_H

#include "Animal.h"

class Fish : public Animal {
public:
    Fish(string name, string kind);

    string sound() const override;

    string moves() const override;

    string output() const override;
};

#endif //KG1_FISH_H
