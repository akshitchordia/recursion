//akshit chordia 
//24070123008
//ENTC A1

#include <iostream>
using namespace std;

void printReverse(string str, int index) {
    if (index < 0)
        return;
    cout << str[index];
    printReverse(str, index - 1);
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << "Reversed string: ";
    printReverse(s, s.length() - 1);
    return 0;
}

//OUTPUT:
//Enter a string: akshit
//Reversed string: tihska
