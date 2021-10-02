#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age :" << endl;
    cin >> age;
    switch (age)
    {
    case 18:
        cout << "You are 18";
        break;
    case 12:
        cout << "You are 12";
        break;
    default:
        cout << "You are neither 18 nor 12 !!!";
        break;
    }
    return 0;
}
/*
in switch case we get suggestions from the compiler by typing switch we have to fill that fomat 
but break is very necessary to pause compiler from reading other unnecessary statements but sometimes
its useful not to use all over it depends on the problem 

right click and format documents to use proper indentation 

select and press tab to erase long texts 
*/