#include<iostream>
#include<unordered_map>
using namespace std;
int findFirstOccurence(int a[],int n){

    unordered_map<int,int>hash;
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }

    for(int i=0;i<n;i++){
        if(hash[a[i]]>1){
            return i+1;
        }
    }
    return 0;

}
int main(){
  
    int a[] = {1,5,3,4,3,5,6};
    int n= sizeof(a)/sizeof(int);


    cout<<findFirstOccurence(a,n);
    
}