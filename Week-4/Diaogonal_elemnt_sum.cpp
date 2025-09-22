#include<iostream>

using namespace std;

int main(){
    int a[100][100],i,j,n,sum = 0;
    cout<<"Enter no.of rows: ";
    cin>>n;
    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < n ; j++){
            cout<<"Enter elements: ";
            cin>>a[i][j];
        }
    }
    cout<<"\nMatrix entered by user: \n";
    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < n ; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < n ; j++){
            if(i == j || i + j == n - 1){
                sum += a[i][j];
            }
        }
    }
    cout<<"Sum is: "<<sum;
}
