#include <iostream>

using namespace std;

int main()
{
    int dings[5] = {123,124,1421,124,54241};
    int sum = 0;

    for(int i=0; i < 5; i++){
        sum += dings[i];
    }
    cout << "sum is: " << sum << endl;
}
