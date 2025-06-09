#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;
    cin >> a >> b >> c;

    float discriminant = b*b - 4*a*c;
    if (discriminant > 0) {
        float bob = sqrt(discriminant);
        float x1 = (-b + bob)/(2*a);
        float x2 = (-b - bob)/(2*a);
        cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    else if (discriminant == 0) {
        float x = -b/(2*a);
        cout << "x1 = x2 = " << x << endl;
    }
    else {
        cout << "Error " << endl;
    }

    return 0;
}
