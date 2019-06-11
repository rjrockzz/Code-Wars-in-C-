#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    char key[] = "arjun";
    char buffer[50];
    do {
        cout<<"What is my name!? ";
        cin>>buffer;
    } while (strcmp (key,buffer) != 0);
    cout<<"Answer is correct!!"<<endl;
    cout<<strcmp (key,buffer);
    return 0;
}  