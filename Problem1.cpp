#include<iostream>
using namespace std;
class test()
{
  void test(float s,float t)
{
    cout << "Function with float called ";
}
void test(int s, int t)
{
    cout << "Function with int called ";
}	
};
int main()
{ test obj;
    obj.test(3.5, 5.6);
    return 0;
}
