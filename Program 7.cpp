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
    friend class B;
};

class B
{
    int age = 19;
    public:
    void display(A& x)
    {
        cout <<"Name : " << x.name << " Registration number : " << x.reg_no << " Age : " << age;
    }
};

int main()
{
    A obj;
    obj.input();
    B obj_2;
    obj_2.display(obj);
    return 0;
}