#include<iostream>

using namespace std;

int main(){
    int i,j,a[100],n,Max1,Max2;
    cout<<"Enter size: ";
    cin>>n;

    for(i = 0 ; i < n ; i++){
        cout<<"Enter element: ";
        cin>>a[i];
    }
    if (a[0] > a[1]){
        Max1 = a[0];
        Max2 = a[1];
    }
    else{
        Max1 = a[1];
        Max2 = a[0];
    }
    for(j = 2 ; j < n ; j++){
        if(Max1 < a[j]){
            Max2 = Max1;
            Max1 = a[j];
        }
        else if (Max2 < a[j]){
            Max2 = a[j];
        }
        
    }
    cout<<Max1<<" "<<Max2;
}
