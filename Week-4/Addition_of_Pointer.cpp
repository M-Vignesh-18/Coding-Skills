#include<iostream>

using namespace std;

int main(){
    int a = 10,b = 20,c = 30;
    int *pa;
    int *pb;
    int *pc;
    pa =& a;
    pb =& b;
    pc =& c;
    c = a + b;
    cout<<pa<<"\n";
    cout<<a<<"\n";
    cout<<pb<<"\n";
    cout<<b<<"\n";
    cout<<pc<<"\n";
    cout<<c<<"\n";
}
