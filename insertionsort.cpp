#include<iostream>
using namespace std;

void printarr(int arr[],int n);
void insertionsort(int arr[],int n);
int main(){
    int arr[]={4,5,2,1,3};
    int n = sizeof(arr)/sizeof(int);

    insertionsort(arr,n);

    return 0;
}

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void insertionsort(int arr[],int n){
    for(int i=1; i<n; i++){
        int current = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>current){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=current;
    }
    printarr(arr,n);
}
