#include <iostream>
#include <string> // new command for using string features
using namespace std;
int main()
{
    string name = "Joy";
    cout << "The name is " << name << endl;
    cout << "The name length is " << name.length() << endl; // name.length() it gives how many alphabet is there
    cout << "The name part is " << name.substr(0,3) << endl; /* name.substr(0,3) gives the portion from index 0 
                                                             upto 3 charecters but this will not occur as 0,1,2
                                                             it wil be as 1,2,3 but the first num will still represent 
                                                             index num so that will be in order as 0,1,2,3*/ 
    cout << "The name part is " << name.substr(1,2) << endl;
    return 0;
}