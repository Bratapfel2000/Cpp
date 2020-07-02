#include <iostream>

using namespace std;

int main()
{
    int x = 3;
    int y = 780;

    if(x>3 && y >500){
        cout << ">   x*y=" << x*y << endl;
    }

    if(x>4 || y >500){
        cout << ">>   x*y=" << x*y << endl;
    }
}
