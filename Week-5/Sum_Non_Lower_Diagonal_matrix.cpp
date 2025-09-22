#include<iostream>

using namespace std;

int main(){
    int r,c,i,j,sum = 0;
    int a[10][10];
    cout<<"Enter Rows: ";
    cin>>r;
    cout<<"Enter Columns: ";
    cin>>c;
    for(i = 0 ; i < r ; i++){
        for(j = 0 ; j < c ; j++){
           cout<<"Enter element: ";
           cin>>a[i][j];
        }
    }
    for(i = 0 ; i < r ; i++){
        for(j = 0 ; j < c ; j++){
            if(j > i){
                sum += a[i][j];
            }
        }
    }
    cout<<"Sum is : "<<sum;
}
