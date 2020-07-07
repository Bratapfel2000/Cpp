#include <iostream>
using namespace std;

int main(){

    int c;
    char a;

    double g;
    double bucky[10];

    cout << "sizeof(c): " << sizeof(c) << endl;
    cout << "sizeof(a): " << sizeof(a) << endl;

    cout << "sizeof(g): " << sizeof(g) << endl;
    cout << "sizeof(bucky): " << sizeof(bucky) << endl;

    cout << "amount of elements in array: " << sizeof(bucky) / sizeof(bucky[0]) << endl;

}
