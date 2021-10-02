#include <iostream>
using namespace std;
int main()
{
    int a = 7;
    int *ptra;
    ptra = &a;
    cout << "The Value of a is : " << *ptra << endl;//To know the value its *ptra with pointer concept
    cout << "The Value of a is : " << a << endl;//The old way of getting the value
    cout << "The Address of a is : " << &a << endl;//To know address 
    cout << "The Address of a is : " << ptra << endl;// to know address with pointer
    return 0;
}