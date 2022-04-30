#include <string>
#include <iostream>
using namespace std;
class SeaAnimal {
public:
    SeaAnimal(int weight) {
        m_weight = weight;
    }
    int getWeight() {
        return m_weight;
    }
    virtual string makenoise() {
        return "";
    }
private:
    int m_weight;
};

class Otter : public SeaAnimal {
public:
    Otter(int weight) :SeaAnimal(weight) {};
    virtual string makenoise() {
        return "Bark";
    }
};

class Squid : public SeaAnimal {
public:
    Squid(int weight) :SeaAnimal(weight) {};
    virtual string makenoise() {
        return "Squeak";
    }
};

class GiantSquid : public Squid {
public:
    GiantSquid() :Squid(1000) {};
    virtual string makenoise() {
        return "Burp";
    }
};

int main() {
    GiantSquid s = GiantSquid();
    cout << s.makenoise() << s.getWeight() << endl;
}