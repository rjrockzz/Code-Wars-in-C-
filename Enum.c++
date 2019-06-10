#include <iostream>
using namespace std;
enum week {Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};
int main()
{
    enum week day;
    day = Friday;
    cout<<"The day number is = "<<day+1<<endl;
    return 0;
}