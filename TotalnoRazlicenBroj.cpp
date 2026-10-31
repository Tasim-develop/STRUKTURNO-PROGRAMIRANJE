#include <iostream>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    int broj = N - 1;

    while (true) {
        int temp = broj;
        bool tocno = true;

        while (temp > 0) {
            int cifra = temp % 10;
            int x = X;

            while (x > 0) {
                if (cifra == x % 10) {
                    tocno = false;
                }
                x /= 10;
            }

            temp /= 10;
        }

        if (tocno) {
            cout << broj;
            break;
        }

        broj--;
    }

    return 0;
}
