#include <iostream>
using namespace std;

class MagicPower {
public:
    MagicPower() { cout << "MP\n"; }
    ~MagicPower() { cout << "~MP\n"; }
};

class Wand {
public:
    Wand() { cout << "Wand\n"; }
    ~Wand() {
        cout << "~Wand\n";
    }
private:
    MagicPower myPower;
};

class Wizard {
public:
    Wizard() { cout << "Wizard\n"; }
    ~Wizard() { cout << "~Wizard\n"; }
private:
    Wand myWand;
    Wand* secondWand;
};

int main() {
    Wizard* tom;
    tom = new Wizard;
    Wizard david[2];
}
/*
tom = new Wizard instantiates new wizard class
The wizard creates only one instance of Wand since secondwand is only a ptr
call Magic Power then Wand Then Wizard
then space for two more wizard is created so the above get called another 2 times
Since tom is a pointer is does not get automatically destructed
Only the two wizards stored in david get destructed
When destructing first Wizard is destructed then Wand then Magic Power
This happens twice
OUTPUT :
MP
Wand
Wizard
MP
Wand
Wizard
MP
Wand
Wizard
~Wizard
~Wand
~MP
~Wizard
~Wand
~MP

*/
