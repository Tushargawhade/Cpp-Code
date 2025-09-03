#include<iostream>
using namespace std;

bool findElem(int arr [][3], int row, int col, int key){
    bool val = false;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==key){
                val = true;
            }

        }
    }
    return val;
}
int main(){
    int arr [3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int row = 3;
    int col = 3;
    int key = 15;


    int ans =findElem(arr,row,col,key);

    if(ans == true){
        cout<<"Element is present in array";
    }
    else{
        cout<<"Element is not present in array";
    }

}