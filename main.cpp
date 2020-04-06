#include <iostream>
#include <cassert>
#include "Fish.h"
#include "Bird.h"
#include "TerreMammal.h"
#include "SeaMammal.h"

using namespace std;

void test() {
    cout << "--Testing started--" << endl;
    Animal *f = new Fish("f", "f");
    Animal *b = new Bird("b", "b");
    Animal *tm = new TerreMammal("tm", "tm", "tm");
    Animal *sm = new SeaMammal("sm", "sm", "sm");
    cout << "testing moves()" << endl;
    assert(f->moves() == "swim");
    assert(b->moves() == "fly");
    assert(tm->moves() == "run");
    assert(sm->moves() == "swim");
    cout << "testing sound()" << endl;
    assert(f->sound() == "nothing");
    assert(b->sound() == "Chirp!");
    assert(tm->sound() == "tm");
    assert(sm->sound() == "sm");
    cout << "testing output()" << endl;
    assert(f->output() == "f f Fish");
    assert(b->output() == "b b Bird");
    assert(tm->output() == "tm tm TerreMammal");
    assert(sm->output() == "sm sm SeaMammal");
    cout << "name uniqueness test 1: ";
    try {
        Animal *ff = new Fish("f", "foo");
    } catch (const char[]) {
        cout << "passed" << endl;
    }
    delete f;
    cout << "name uniqueness test 1: ";
    Animal *ff = new Fish("f", "foo");
    cout << "passed" << endl;
    delete ff;
    delete b;
    delete tm;
    delete sm;
    cout << "--All tests passed--" << endl;
}

int main() {
    test();
    Animal *animals[5];
    animals[0] = new Fish("Tooth", "Shark");
    animals[1] = new Bird("Kesha", "Eagle");
    animals[2] = new SeaMammal("Not-a-Fish", "Whale", "Ooooo");
    animals[3] = new TerreMammal("Belka", "Dog", "bark");
    animals[4] = new TerreMammal("Strelka", "Dog", "bork");
    for (auto e : animals) {
        cout << *e << endl;
        cout << "Sound: " << e->sound() << "; Moves: " << e->moves() << endl;
    }
    //
    for (auto e : animals)delete e;
    return 0;
}
