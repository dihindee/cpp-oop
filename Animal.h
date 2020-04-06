#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <vector>
using namespace std;
class Animal{
public:
    Animal(string name, string kind);
    virtual ~Animal();
    virtual string moves() const = 0 ;
    virtual string sound() const = 0;
    virtual string output() const = 0;
    friend ostream& operator<<(ostream& out, const Animal& obj);
protected:
    string name;
    string kind;
private:
    static vector<Animal*> entities;
};

#endif
