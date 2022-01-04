#include "iostream"

using namespace std;

int main() {
    int x, nr;
    cin >> x;
    nr = 0;
    while (x > 0) {
        if (x % 2 == 0)
            nr = nr + 1;
        x = x / 2;
    }
    cout << nr;
}