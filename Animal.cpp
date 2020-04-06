#include "Animal.h"
#include <algorithm>

vector<Animal*> Animal::entities = vector<Animal*>();

Animal::Animal(string name, string kind): name(name),kind(kind){
    for(auto &e : entities){
        if(this->name == e->name){
            throw "Animal names must be unique";
        }
    }
    entities.push_back(this);
};
 Animal::~Animal(){
    entities.erase(std::find(entities.begin(),entities.end(),this));
}

ostream &operator<<(ostream &out, const Animal &obj) {
    out << obj.output();
    return out;
}
