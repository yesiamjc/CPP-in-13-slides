#include <iostream>
using namespace std;
int mply(int a, int b)
{
    int c;
    c = a*b;
    return c;
}
int main()
{
    int a, b;
    cout<<"Enter 1st Num :"<<endl;
    cin>>a;
    cout<<"Enter 2nd Num :"<<endl;
    cin>>b;
    cout<<"The return value of inputs : "<<mply(a,b);
}
/* 
These are called functions and like this we may creat many more as per our use and 
use that in our code as per need 

we can use unlimited amount of functions 

we can even declare function in a function not necessarily in the main
 function
*/