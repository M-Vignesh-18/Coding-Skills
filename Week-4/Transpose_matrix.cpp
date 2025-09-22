#include<iostream>

using namespace std;

int main(){
    int a[100][100],i,j,n,temp;
    cout<<"Enter no. of rows: ";
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
    cout<<"\nTranspose Matrix: \n";
    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < n ; j++){
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}
