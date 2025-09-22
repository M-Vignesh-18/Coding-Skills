#include<iostream>
#include<cmath>

using namespace std;

int is_Square(long long a){
    long long s = sqrt(a);
    if(s * s == a) return 1;
    else return 0;
}
int check_number(long long n){
    long long a,b;
    a = 5 * n * n + 4;
    b = 5 * n * n - 4;
    if(is_Square(a) || is_Square(b)){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    long long n;
    cout<<"Enter a number to check whether the number is in fibonacci series or not: ";
    cin>>n;
    int res = check_number(n);
    
    if(res==1) cout<<"The number "<<n<<" exists in the fibonacci series.";
    else cout<<"The number "<<n<<" not exists in the fibonacci series.";
}
