#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int & func(int &a)
{
	a = a + 1;
	return a;
  cout << a << endl;
  cout << &a << endl;
}

int main()
{
  int x = 10;

  func(x);

  cout << "This address belongs to x: " << &x << endl;
  cout << x << endl;

}
