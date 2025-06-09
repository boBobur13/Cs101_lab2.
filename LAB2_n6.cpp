#include <iostream>

using namespace std;

int main() {
  char c;
    cin>>c;
    if (c>='A' && c<='Z') {
        cout<<"Uppercase Alphabet"<< endl;
    }
    else if (c>'a'&& c<='z') {
        cout << " Lower-Case  alphabet" << endl;
    }
    else {
        cout << " It is not an alphabet " << endl;
    }
    return 0;
}
