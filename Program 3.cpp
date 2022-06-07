#include<iostream>
using namespace std;

class time
{
    private:
    int minute, hour;
    public:
    time(int h = 0, int m = 0)
    {
        minute = m;
        hour = h;
    }
    void display();
    time operator ++();
    time operator --(int);
};

time time::operator++()
{
    time temp;
    temp.minute = ++minute;
    if (temp.minute == 60)
    {
        temp.hour = ++hour;
        minute = 0;
        temp.minute = 0;
    }
    if (temp.hour > 12)
    {
        temp.hour -= 12;
    }
    return temp;
}

time time::operator--(int)
{
    time temp;
    temp.minute = --minute;
    if(temp.minute <0)
    {
        minute=59;
        temp.minute=59;
        temp.hour = --hour;
    }
    if(temp.hour<1)
    {
        temp.hour=12;
    }
    return temp;
}

void time::display()
{
    cout << hour <<"Hr" << minute << "Minute";
}

int main()
{
    time A(11,59), B(12,00);
    ++A;
    A.display();
    B--;
    B.display();
    return 0;
}