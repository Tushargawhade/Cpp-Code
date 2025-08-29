#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> arr{10,20,30,40,50};
    int sum = 60;
    cout<<"The pair of "<<sum<<" is :- "<<endl;
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i] + arr[j] == sum){
                cout<<arr[i]<<","<<arr[j]<<endl;
            }
        }
    }
}