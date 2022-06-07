// Virtual Function
#include<iostream>
using namespace std;

class figure
{
    public:
    virtual void area()
    {
        cout << "Area function called";
    }
};
class sqaure : public figure
{
    int a;
    public:
    void input()
    {
        cout << "Enter Length: ";
        cin >> a;
    }
    void area()
    {
        cout << "Area  = " << a*a;
    }
};
int main()
{
    figure *obj_ptr;
    sqaure obj;
    obj_ptr = &obj;
    obj.input();
    obj_ptr->area();
    return 0;
}