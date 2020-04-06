#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

class Bird : public Animal {
public:
    Bird(string name, string kind);

    string sound() const override;

    string moves() const override;

    string output() const override;
};

#endif
