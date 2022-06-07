#include<iostream>
using namespace std;
class single_a
{
    int a = 5;
    public:
    void display_1()
    {
        cout << "This is class A";
    }
};

class single_b : public single_a
{
    public:
    void display_2()
    {
        cout << "Display in class B";
    }
};

int main()
{
    single_b obj;
    obj.display_1();
    obj.display_2();
    return 0;
}