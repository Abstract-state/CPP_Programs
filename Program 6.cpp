#include <iostream>
using namespace std;
class A
{
    int reg_no;
    string name;
public:
    void input()
    {
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter reg no : ";
        cin >> reg_no;
    }
    friend void dispaly(A obj);
};

void display(A obj)
{
    cout <<"Name : " << obj.name << "Registration number : " << obj.reg_no;
}

int main()
{
    A obj;
    obj.input();
    dispaly(obj);
    return 0;
}



