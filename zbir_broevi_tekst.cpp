#include <iostream>
using namespace std;

int main() {
    char znak;
    int tekoven = 0;
    int zbir = 0;

    while (true) {
        cin >> noskipws >> znak;

        if (znak >= '0' && znak <= '9') {
            tekoven = tekoven * 10 + (znak - '0');
        } else {
            zbir += tekoven;
            tekoven = 0;
        }

        if (znak == '!') {
            break;
        }
    }

    cout << zbir << endl;

    return 0;
}
