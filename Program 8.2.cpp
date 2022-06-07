#include<iostream>
using namespace std;
// Multiple Inheritance
class a
{
    public:
    void diplay_1()
    {
        cout << "Display in class A";
    }
};

class b
{
    public:
    void display_2()
    {
        cout << "Display in class B";
    }
};

class c: public a, public b
{
    public:
    void display_3()
    {
        cout << "Display in class C";
    }
};

int main()
{
    c obj;
    obj.diplay_1();
    obj.display_2();
    obj.display_3();
    return 0;
}