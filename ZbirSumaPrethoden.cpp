#include <iostream>
using namespace std;

int main() {
    int broj;
    int maxPrethoden = 0;
    bool prv = true;

    while (cin >> broj) {
        int temp = broj;
        int suma = 0;
        int max = 0;

        while (temp > 0) {
            int cifra = temp % 10;

            suma += cifra;

            if (cifra > max) {
                max = cifra;
            }

            temp = temp / 10;
        }

        if (prv) {
            cout << broj << ": " << suma << endl;
            prv = false;
        } else {
            cout << broj << ": " << suma + maxPrethoden << endl;
        }

        maxPrethoden = max;
    }

    return 0;
}
