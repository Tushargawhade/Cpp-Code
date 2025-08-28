#include<iostream>
#include<vector>
using namespace std;
int main(){
 
    int arr[] = {1,2,3,4,6,8};
    int sizea = 6;
    int brr[] = {3,4,9,10};
    int sizeb = 4;

    vector<int> inter;

    for(int i=0; i<sizea; i++){
        for(int j=0; j<sizeb; j++){
            if(arr[i]==brr[j]){
                //Mark the repeted element 
                brr[j]=-1;
                inter.push_back(arr[i]);
            }
        }
    }
    
    for(int k=0;k<inter.size();k++){
        cout<<inter[k]<<" ";
    }

}