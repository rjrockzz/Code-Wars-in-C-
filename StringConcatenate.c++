#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char buffer[50];
    char  initial[50];
    cin>>buffer;
    cin>>initial;
    cout<<"\nThe buffer is = "<< buffer<<endl;
    cout<<"The appended value is "<<initial<<endl;
    cout<<"The concatenated string is = "<< strcat(buffer, initial);
    return 0;
}