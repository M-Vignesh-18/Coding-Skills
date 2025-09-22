#include<iostream>

using namespace std;

int main(){
    int a = 0, b = 1,c;
    int n;
    cout<<"Enter no. of terms: ";
    cin>>n;
    if(n < 0){
        cout<<"Invalid Input";
    }
    else if (n == 0){
        cout<<a<<" ";
    }
    else if(n == 1){
        cout<<a<<" "<<b<<" ";
    }
    else{
        cout<<a<<" "<<b<<" ";
        for (int i = 2 ; i < n ; i++){
            c = a + b;
            cout<<c<<" ";
            a = b;
            b = c;
        }
    }
    
}
