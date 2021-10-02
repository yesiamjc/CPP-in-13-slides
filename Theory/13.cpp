#include <iostream>
using namespace std;
class Entrepreneur
{
  public:
  string username,name;
  Entrepreneur(string u, string n)
  {
    this->username=u;
    this->name=n;
    // this->netWorth=nw;
  }
  void printInfo()
  {
    cout<<"The username of the Entrepreneur is : "<<this->username<<endl;
    cout<<"The name of the Entrepreneur is : "<<this->name<<endl;
  }
//   void getnetWorth()
//   {
//       cout<<"His estimated netwoth is :"<<this->netWorth<<" Trillion Dollars."<<endl;
//   }
//   private :
//   int networth;
};
int main()
{
    Entrepreneur Jc("yesiamjc", "Joy Chakraborty");
    Jc.printInfo();
    // Jc.getnetWorth();
    return 0;
}