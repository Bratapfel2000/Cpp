#include <iostream>

using namespace std;

void printNumber(int x){
    cout << "integer is: " << x << endl;
}

void printNumber(float x){
    cout << "float is: " << x << endl;
}


int main()
{
    int a = 54;
    float b = 124.653;

    printNumber(a);
    printNumber(b);

}
