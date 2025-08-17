#include<iostream>
using namespace std;

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minidx =i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minidx]){
                minidx =j;
            }
        }
        swap(arr[i],arr[minidx]);
    }
    printarr(arr,n);
}

int main(){
    int arr[]={5,4,1,3,2};
    int n=sizeof(arr)/sizeof(int);
    selectionsort(arr,n);

    return 0;
}