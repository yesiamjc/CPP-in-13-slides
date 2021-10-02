// THIS IS A SOURCE CODE NOT WRITTEN BY ME 

#include <iostream>
using namespace std;
class Employee //Objects & Classes
{
public:
  string name;
  int salary;
  Employee(string n, int s, int sp)
  {
    this->name = n;            // this->name used for giving a large name as a alphabet
    this->salary = s;          // here used for giving a large num as a alphabet
    this->secretPassword = sp; // here also used for giving a large name as a alphabet
  }
  void printDetails()
  {
    cout << "The name of our first employee is " << this->name << " and his salary is " << this->salary << " Dollars" << endl;
  }
  void getSecretPassword()
  {
    cout << "The secret password of employee is " << this->secretPassword;
  }

private:
  int secretPassword;
};
// class Programmer : public Employee
// {
// public:
//   int errors;
// };
int main()
{
  Employee har("Harry constructor", 344, 324432);
  //  har.name = "harry";
  // har.salary = 100;
  har.printDetails();
  har.getSecretPassword();
  // cout<<har.secretPassword;
  // cout<<"The name of our first employee is "<< har.name << " and his salary is "<<har.salary<<" Dollars"<<endl;
  return 0;
}