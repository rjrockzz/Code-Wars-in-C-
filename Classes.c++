#include<iostream>
using namespace std;
class Arjun
{
    public:
    int id;
    string name;
    void insert(int x, string y)
    {
        id = x;
        name = y;
    }
    void display() {
        cout << "The id is = " << id << endl;
        cout<<"The name is = " << name << endl;    
    }
};
int main()
{
    Arjun a1;
    a1.insert(1,"Arjun");
    a1.display();
    a1.insert(2,"Arun");
    a1.display();
}
