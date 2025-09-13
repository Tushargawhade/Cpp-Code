#include<iostream>
using namespace std;

void printarr(int arr [],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void sortarr(int arr[],int n){
    int l=0,m=0,h=n-1;

    while(m<=h){
        if(arr[m]==0){
            swap(arr[m],arr[l]);
            m++;
            l++;
        }
        else if(arr[m]==1){
            m++;
        }
        else{
            swap(arr[m],arr[h]);
            h--;
        }
    }
    printarr(arr , n);
}

int main(){

    int arr [] = {0,1,2,0,1,1,0,2,2,0};
    int n =sizeof(arr)/sizeof(int);

    sortarr(arr,n);

}