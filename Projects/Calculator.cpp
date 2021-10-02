#include <iostream>
using namespace std;
int main()
{
    int N1, N2, O;
    cout << "Enter the first number :" << endl;
    cin >> N1;
    cout << "Enter the second number :" << endl;
    cin >> N2;
    cout << "Choose the preffered operation :" << endl;
    cout << "1 = +" << endl;
    cout << "2 = -" << endl;
    cout << "3 = *" << endl;
    cout << "4 = /" << endl;
    cin >> O;
    switch (O)
    {
    case 1:
        cout << "Answer will be : " << N1 + N2 << endl;
        break;
    case 2:
        cout << "Answer will be : " << N1 - N2 << endl;
        break;
    case 3:
        cout << "Answer will be : " << N1 * N2 << endl;
        break;
    case 4:
        cout << "Answer will be : " << N1 / N2 << endl;
        break;

    default:
        cout << "Invalid input !!!" << endl;
        break;
    }
    return 0;
}