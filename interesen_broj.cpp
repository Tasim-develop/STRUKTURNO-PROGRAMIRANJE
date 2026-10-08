#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 9) {
        cout << "Brojot ne e validen";
        return 0;
    }

    for (int i = n - 1; i >= 10; i--) {
        int broj = i;
        int obraten = 0;
        int cifri = 0;

        while (broj > 0) {
            int cifra = broj % 10;
            obraten = obraten * 10 + cifra;
            cifri++;
            broj /= 10;
        }

        if (obraten % cifri == 0) {
            cout << i;
            return 0;
        }
    }

    return 0;
}
