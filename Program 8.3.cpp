#include<iostream>
using namespace std;
// Multi Level Inheritance
class a
{
    public:
    void diplay_1()
    {
        cout << "Display in class A" << endl;
    }
};

class b : public a
{
    public:
    void display_2()
    {
        cout << "Display in class B" << endl;
    }
};

class c: public b
{
    public:
    void display_3()
    {
        cout << "Display in class C" << endl;
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