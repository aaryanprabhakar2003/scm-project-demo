#include <iostream>
using namespace std;
class Base {
  public:
    float salary = 900;
};
class salary: public Base {
  public: 
    float bonus1 = 100;
    void sum() {
      cout << "Your Total Salary is: " << (salary + bonus1) << endl;
    }
};
int main() {
  salary x;
  cout << "Your Salary is:" << x.salary << endl;
  cout << "Your Bonus is:" << x.bonus1 << endl;
  x.sum();
  return 0;
}
//this is simple inheritance programm in c++ example.
