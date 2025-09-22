#include<iostream>

using namespace std;

int main(){
    int a[100][100],i,j,n,count = 0;
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

    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < n ; j++){
            if(a[i][j] == a[j][i]){
                count += 1;
            }
        }
    }
    if (count == n * n){
        cout<<"It is symmetric.";
    }
    else{
        cout<<"It is not symmetric";
    }
}
