#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file_ptr;
    file_ptr.open("C:\\Users\\asmit\\ProjectC++\\Sample.txt",ios::out);
    string a;
    while (getline(file_ptr, a))
    {
        cout << a << endl;
    }
    file_ptr.close();
    return 0;
}