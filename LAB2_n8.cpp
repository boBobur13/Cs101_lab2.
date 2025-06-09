#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    int a = x / 1000;
    int b = (x / 100) % 10;
    int c = (x / 10) % 10;
    int d = x % 10;

    int even = 0, odd = 0;

    if (a % 2 == 0) even++; else odd++;
    if (b % 2 == 0) even++; else odd++;
    if (c % 2 == 0) even++; else odd++;
    if (d % 2 == 0) even++; else odd++;

    if (even > odd)
        cout << "More even digits" << endl;
    else if (odd > even)
        cout << "More odd digits" << endl;
    else
        cout << "Equal even and odd digits" << endl;

    return 0;
}
