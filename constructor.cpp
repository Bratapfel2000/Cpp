#include <iostream>
#include <string>

using namespace std;

class ThatsANewClass{
    public:
        ThatsANewClass(){
        cout << "new constructor stuff";
        }
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
    ThatsANewClass newz;
    return 0;
}
