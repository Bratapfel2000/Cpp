#include <iostream>

using namespace std;

int main()
{
    int dings[9];

    cout << "Element - Value" << endl;

    for(int i=0; i<9; i++){
        dings[i] = 0;

        cout << i << "       -    " << dings[i] << endl;
    }
}
