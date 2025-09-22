#include<iostream>

using namespace std;

int main(){
    int n,t1,t2,t3,s1,s2,s3,result;
    cout<<"Enter a natural Number : ";
    cin>>n;
    t1 = (n - 1) / 3;
    t2 = (n - 1) / 5;
    t3 = (n - 1) / 15;
    s1 = 3 * t1 * (t1  + 1) / 2;
    s2 = 5 * t2 * (t2  + 1) / 2;
    s3 = 15 * t3 * (t3  + 1) / 2;
    result = s1 + s2 - s3;
    cout<<result;
}
