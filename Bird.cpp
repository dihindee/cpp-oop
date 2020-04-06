#include "Bird.h"

Bird::Bird(string name, string kind):Animal(name,kind){};
string Bird::sound() const{
return "Chirp!";
}
string Bird::moves() const{
return "fly";
}
string Bird::output() const{
return name + " " + kind + " " + "Bird";
}