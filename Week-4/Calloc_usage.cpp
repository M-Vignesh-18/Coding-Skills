#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    int *a = (int *)calloc(5,sizeof(int));
    for(int i = 0 ; i < 5 ; i++){
        cout<<"Enter elements: ";
        cin>>a[i];
    }
    for(int i = 0 ; i < 5 ; i++){
        cout<<a[i]<<" ";
    }
}
