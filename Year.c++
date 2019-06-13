#include<iostream>
using namespace std;
int main()
{
    int i = 1329;
    int k = i/365;
    int j = i%365;
    int l = j/7;
    int m = j%7;
    cout<<"The years are = "<<k<<endl;
    cout<<"The weeks are = "<<l<<endl;
    cout<<"The days are = "<<m<<endl;
    return 0;
}
