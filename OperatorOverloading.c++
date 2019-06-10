#include<iostream>
using namespace std;
class test
{
private:
    int num;
public:
    test():num(10){}
    void operator++()
    {
        num+=2;
    }
    void display()
    {
        cout<<"The number is = "<<num<<endl;
    }
};
int main()
{
    test t1;
    t1.display();
    ++t1;
    t1.display();
}