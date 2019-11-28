#include <iostream>
using namespace std;

class A{
    public:
        A() { cout<<"A";}
        ~A() {cout<<"~A";}
};

class C{
    public:
        C() { cout<<"C";}
        virtual ~C() {cout<<"~C";}
};

class B: public A, public C {
    public:
        B():A(),C() {cout << "B";}
        ~B() {cout<<"~B";}
};

int main(){
    B b;
    return 0;
}