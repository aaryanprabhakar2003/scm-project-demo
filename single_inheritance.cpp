#include <iostream>
using namespace std;
class Base {
  public:
    float money = 900;
};
class salary: public Base {
  public: 
    float bonus = 100;
    void sum() {
      cout << "Your Total Salary is: " << (money + bonus) << endl;
    }
};
int main() {
  salary x;
  cout << "Your Salary is:" << x.money << endl;
  cout << "Your Bonus is:" << x.bonus << endl;
  x.sum();
  return 0;
}
