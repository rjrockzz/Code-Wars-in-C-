#include <iostream>
using namespace std;
class Account {
public:
    int accno;
    string name;
    static int count;
    Account(int accno, string name)
    {
        this->accno = accno;
        this->name = name;
        count++;
    }
    void display()
    {
        cout<<accno<<" "<<name<<endl;
    }
};
int Account::count=0;
int main(void) {
    Account a1 =Account(201, "Arjun");
    Account a2=Account(202, "M'Bappe");
    Account a3=Account(203, "Remi");
    a1.display();
    a2.display();
    a3.display();
    cout<<"Total Objects are: "<<Account::count;
    return 0;
}