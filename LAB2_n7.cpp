#include <iostream>

using namespace std;

int main() {
  int x;
    cout << "Enter a three-digital intager" << endl;
    cin>> x;
    int a=x/100;
    int b = x%10;
    if (a==b) {
        cout<< x << " is palindrome" << endl;
    } else {
        cout << x << " is not palindrome" << endl;
    }
    return 0;
}
