#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int najgolemBroj = 1;
    int najgolemZbir = 0;

    for (int i = 1; i < n; i++) {
        int zbir = 0;

        for (int j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                zbir += j;
            }
        }

        if (zbir > najgolemZbir) {
            najgolemZbir = zbir;
            najgolemBroj = i;
        }
    }

    cout << najgolemBroj << endl;
    return 0;
}
