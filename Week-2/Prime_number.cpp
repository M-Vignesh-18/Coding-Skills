#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int i,n,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    int q = sqrt(n);
    if(n != 2 && n % 2 == 0){
        sum = 1;
    }
    else if(n != 3 && n % 3 == 0){
        sum = 1;
    }
    else{
        for(i = 5 ; i <= q ; i += 6){
        if (n%i == 0 || n % (i + 2)==0){
            sum = 1;
            break;
        }
    }
    }
    if(sum == 0) cout<<n<<" is a Prime Number.";    
    else cout<<n<<" is a Composite Number.";

}
