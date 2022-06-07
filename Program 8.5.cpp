#include<iostream>
using namespace std;
// Hybrid Inheritance
class figures
{
    public:
    void dispaly()
    {
        cout << "This is a figure"
    }
}
class shape : public figures
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
    obj_1.dispaly();
    obj_1.diplay_1();
    obj_1.display_3();
    sqaure obj_2;
    obj_2.dispaly();
    obj_2.diplay_1();
    obj_2.display_2();
    return 0;
}