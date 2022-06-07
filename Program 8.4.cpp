#include<iostream>
using namespace std;
// Hierarchial Inheritance
class shape
{
    public:
    void diplay_1()
    {
        cout << "This is a shape";
    }
};

class sqaure : public shape
{
    public:
    void display_2()
    {
        cout << "And this is sqaure";
    }
};

class circle: public shape
{
    public:
    void display_3()
    {
        cout << "And this is a circle";
    }
};

int main()
{
    circle obj_1;
    obj_1.diplay_1();
    obj_1.display_3();
    sqaure obj_2;
    obj_2.diplay_1();
    obj_2.display_2();
    return 0;
}