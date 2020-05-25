#include <iostream>
#include <string>

using namespace std;

class ThatsANewClass{
    public:
        void setName(string x){
            name = x;
        }
        string getName(){
            return name;
        }
    private:
        string name;

};


int main()
{
    ThatsANewClass neu;
    neu.setName("Newer Name");
    cout << neu.getName();
    return 0;
}
