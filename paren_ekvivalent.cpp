#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    if (x <= 0 || y <= 0) {
        cout << "Invalid input";
        return 0;
    }

    int pomal, pogolem;

    if (x < y) {
        pomal = x;
        pogolem = y;
    } else {
        pomal = y;
        pogolem = x;
    }

    int pozicija = 1;
    int cifra;
    int rezultat = 0;
    int mesto = 1;

    while (pogolem > 0) {
        cifra = pogolem % 10;

        if (pozicija % 2 == 0) {
            rezultat += cifra * mesto;
            mesto *= 10;
        }

        pozicija++;
        pogolem /= 10;
    }

    if (rezultat == pomal) {
        cout << "PAREN";
    } else {
        cout << "NE";
    }

    return 0;
}
