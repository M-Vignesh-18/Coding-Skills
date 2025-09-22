#include<iostream>

using namespace std;
int sum_of_digit(int n,int r){
    int sum;
    if (n % 9 == 0 || r % 9 == 0){
        sum = 9;
    }
    else{
        n = n % 9;
        sum = n * (r % 9);
    }
    return sum;
}
int main(){
    int n,i,sum,result;
    cout<<"Enter Number : ";
    cin>>n;
    cout<<"Enter no. of times: ";
    cin>>i;
    sum = sum_of_digit(n,i);
    cout<<sum;
}
