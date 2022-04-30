#include <iostream>
#include <string>
using namespace std;

class BadComedian {
public:
    BadComedian() {
        myJoke = "";
        numTimes = 0;
    }
    BadComedian(const string& joke, int times) {
        myJoke = joke;
        numTimes = times;
    }
    void tellJoke() const {
        for (int i = 0;i < numTimes;i++)
            cout << myJoke << endl;
    }
private:
    string myJoke;
    int numTimes;
};

class NightClub {
public:
    NightClub(int count) {
        sam = BadComedian("A man walks into a bar...ouch!", count);
        david = BadComedian("A fish swims into a wall...Damn!", count * 2);
    }

    void doShow() {
        sam.tellJoke();
        david.tellJoke();
    }
private:
    BadComedian sam;
    BadComedian david;
};

int main() {
    NightClub n = NightClub(6);
    n.doShow();
}