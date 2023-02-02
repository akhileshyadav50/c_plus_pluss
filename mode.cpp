#include<iostream>
using namespace std;
class A{
    int a;
    protected:
    int b;
    public:
    int c;
};
class B: public A{
    protected:
    int b;
    public public:
    int c;
    public:
};
int main(){
    A obj;
    B obj;
    cout<<obj.a<<obj.b<<obj.c<<endl;
    return 0;
}