#include<iostream>
#include<vector>
using namespace std;
int main(){ 

    vector<int> arr{5,10,20,30,40,45,50};
    int sum = 80;


    cout<<"The Quadrat of sum "<<sum<<" is :- "<<endl;
    for(int i=0; i<arr.size(); i++){

        for(int j=i+1; j<arr.size(); j++){

            for(int k=j+1; k<arr.size(); k++){

                for(int l=k+1; l<arr.size(); l++){

                    if(arr[i] + arr[j] + arr[k] + arr[l] == sum){
                    cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<","<<arr[l]<<endl;
                    }
                }
            }
        }
    }    
}