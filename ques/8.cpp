#include <iostream>
using namespace std;

class A{
    public:
        A() { cout<<"1";}
        virtual ~A() {cout<<"2";}
};

class B: public A {
    public:
        B() {cout << "3";}
        ~B() {cout<<"4";}
};

int main(){
    A* p = new B[2];
    delete [] p;
    return 0;
}