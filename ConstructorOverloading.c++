#include<iostream>
using namespace std;
class adder
{
    public:
    adder(int x, int y)
    {
        cout<<"The sum of "<< x << " and " << y <<"= "<< x + y<< endl;
    }
    adder(int x, int y, int z)
    {
        cout<<"The sum of "<< x << " and " << y <<" and "<< z << " = " << x+y+z << endl;
    }
};
int main()
{
    adder a1(23,32);
    adder a2(1,5,3);
    return 0;
}