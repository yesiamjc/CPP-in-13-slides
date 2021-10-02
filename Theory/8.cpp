#include <iostream>
using namespace std;
int main()
// {
//     int arr[3] = {1,2,3};
//     //Index       0 1 2   how it works array size 3 matlab 3 elements at 0,1,2 th position
//     cout<<"1st element of array is : "<<arr[0]<<endl;
//     cout<<"2nd element of array is : "<<arr[1]<<endl;
//     cout<<"3rd element of array is : "<<arr[2]<<endl;
//     return 0;
// }
// {
//     int marks[6];
//     for (int i = 0; i < 6; i++)
//     {
//         cout<<"Enter The marks of "<<i+1<<"th student :"<<endl;
//         cin>>marks[i];
//     }
//     for (int i = 0; i < 6; i++)
//     {
//         cout<<"marks of "<<i+1<<"th student is :"<<marks[i]<<endl;
//     }
//     return 0;
// }
{
    int arr[2][3] =
        {
            {1, 2, 3},
            {4, 5, 6}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "The value at " << i << "," << j << " is : " << arr[i][j] << endl;
        }
    }
    return 0;
}