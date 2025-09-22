#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int i,j,n,sum=1;
    cout<<"Enter a number: ";
    cin>>n;
    int q = sqrt(n);
    for(i = 2 ; i <= q ; i++){
            if(n % i == 0 && i != n/i){
                sum += (i + n / i);
            }
        }
    if (sum == n){
            cout<<n<<" is perfect Number. ";
        }
    else{
        cout<<"Not a perfect number.";
    }
    
}
