#include <iostream>

using namespace std;

void printSomethingElse();

void printSomething(){
    cout << "Heyho world" << endl;
}

int main()
{
    cout << "Hello world!" << endl;
    printSomething();
    printSomethingElse();
    return 0;
}

void printSomethingElse(){
    cout << "Heyho world s'up" << endl;
}
