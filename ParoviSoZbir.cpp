#include <iostream>
using namespace std;

int main() {
    int z, a, b;
    cin >> z;

    int vkupno = 0, brojac = 0;

    cin >> a >> b;

    while (a != 0 || b != 0) {
        vkupno++;

        if (a + b == z) {
            brojac++;
        }

        cin >> a >> b;
    }

    cout << "Vnesovte " << brojac << " parovi od broevi chij zbir e " << z << endl;

    if (vkupno == 0)
        cout << "Nema vneseni parovi." << endl;

    if (vkupno != 0)
        cout << "Procentot na parovi so zbir " << z << " e " << (brojac * 100.0) / vkupno << "%" << endl;

    return 0;
}
