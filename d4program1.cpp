#include <iostream>
using namespace std;
class base
{
public:
    int a;
    void get_a()
    {
        cout<<"Enter the value of a: "<<endl;
        cin>>a;
    }
};
class sub : public base
{
    int b;
public:
    void get_b()
    {
        cout<<"Enter the value of b: "<<endl;
        cin>>b;
    }
    void display()
    {
        cout<<"Addition of "<<a<<" and "<<b<<" is "<<(a+b);
    }
};
int main()
{
    sub s;
    s.get_a();
    s.get_b();
    s.display();
    return 0;
}