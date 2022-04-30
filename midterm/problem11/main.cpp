#include <string>
#include <iostream>
using namespace std;

class Stomach {
public:
    Stomach(string items[], int n) {
        count = n;

        if (n <= 3) {  // if <= 3 items then use array
            for (int i = 0;i < n;i++)
                contents[i] = items[i];
        }
        else {          // otherwise use new to alloc array
            moreThanThree = new string[n];
            for (int i = 0;i < n;i++)
                moreThanThree[i] = items[i];
        }
    }
    Stomach(const Stomach& obj) {
        count = obj.count;
        if (count > 3) {
            moreThanThree = new string[count];
            for (int i = 0; i < count; i++) {
                moreThanThree[i] = obj.moreThanThree[i];
            }
        }
        else {
            for (int i = 0; i < count; i++) {
                contents[i] = obj.contents[i];
            }
        }
    }
    ~Stomach() {
        if (count > 3)
            delete[] moreThanThree;
    }

private:
    string contents[3];
    string* moreThanThree;
    int count;
};
