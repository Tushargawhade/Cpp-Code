#include<iostream>
#include<climits>
using namespace std;

void printsubarray(int arr[], int n){
    int maxsum= INT_MIN;

    for(int start=0; start<n; start++){
        int currsum = 0;
        for(int end=start; end<n; end++){
            currsum+=arr[end];
            maxsum = max(maxsum,currsum);
        }
    }
    cout<<"Maximum value is :"<<maxsum;
}

int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n=6;

    printsubarray(arr,n);

    return 0;
}