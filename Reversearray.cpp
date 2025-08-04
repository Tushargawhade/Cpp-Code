#include<iostream>
using namespace std;

int printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={9,4,7,8,2,1,6};
    int n=sizeof(arr)/sizeof(int);

    int copyarr[n];

    for(int i=0;i<n;i++){
        int j = n-i-1;
        copyarr[i] = arr[j];
    }
    
    for(int i=0;i<n;i++){
        arr[i]=copyarr[i];
    }

    printarray(arr,n);


    return 0;
}