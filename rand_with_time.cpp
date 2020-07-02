#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
 //   srand(121);
    srand(time(0));

    cout << "time:" << time(0) << endl;

    for(int x = 1; x<25;x++){

        cout << 1+(rand()%6) << endl;
 //       cout << 1+(rand()) << endl;
    }
}
