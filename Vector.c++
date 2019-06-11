#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string> v1;
    v1.push_back("Hello ");
    v1.push_back("Arjun!");
    for(vector<string>::iterator itr1 = v1.begin();itr1!=v1.end();++itr1)
    {
        cout<<*itr1;
    }
}
