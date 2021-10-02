#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age :"<<endl;
    cin>>age;
    if (age>150 || age < 4)
    cout<<"Invalid input !!!"<<endl;
    else if (age>= 18)
    cout<<"You are eligible to VOTE."<<endl;
    else
    {
     cout<<"Your age is less than minimum eligiblity requirements !!!"<<endl;
     cout<<"You still got " << 18 - age;
     cout<<" years to become eligible.";
    }
    return 0;
}

/*

 O>> All are same just as c but key points are if the "if statement" came up true
     the compiler won't check more and it gives output accordingly so we have to choose wisely
     which statement to put on if,else if & else as best of our use.

0>>  There are no limitation of how many else if we can give in a program.    

0>>  To comment out long code lines first select all + press ctrl + / 

*/