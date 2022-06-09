#include<iostream>
using namespace std;

#include "function1.h"
int main(){
    int n;
    cin>>n;
    int** arr=new int*[n];
    for(int i=0; i<n; i++){
        arr[i]=new int[n];
        for(int j=0; j<n; j++){
            arr[i][j]=0;
        }
    }
    if(nQueen(arr, 0, n)){
        for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" "; 
        }cout<<endl;
        }
    }

    
    return 0;
}
