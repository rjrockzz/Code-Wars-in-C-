#include<iostream>
using namespace std;
void display(int i)
{
    cout<<i;
}
void display(int i=1,int j= 6)
{
    cout<<i<<endl<<j;
}
int main()
{
    display(12);
    return 0;
}