#include <iostream>
using namespace std;

class t {
    public:
    int a,b;
    virtual void fun() {}
    t(int te1 = 0, int te2 = 0) {
        a = te1;
        b = te2;
    }
    int gea(){
        return a;
    }
    int geb(){
        return b;
    }
};

int main(){
    t obj(5, 10);
    int *p = (int*)&obj;
    *(p+0) = 100;
    *(p+1) = 200;

    cout<<obj.gea()<<endl<<obj.geb()<<endl;
}