#include<iostream>
using namespace std;

void rowsum(int arr[][4], int row, int col){
    cout<<"Row sum of array is :- "<<endl;
    for(int i=0;i<row;i++){
        int sum = 0;
        for(int j=0;j<col;j++){
            sum = sum + arr[i][j];
        }
        cout<<sum<<endl;
    }
}

void colsum(int arr[][4], int row, int col){
    cout<<"Col sum of array is :- "<<endl;
    for(int i=0;i<row;i++){
        int sum = 0;
        for(int j=0;j<col;j++){
            sum = sum + arr[j][i];
        }
        cout<<sum<<endl;
    }
}


int main(){

    int arr[4][4]={
        {1,2,3,4},
        {2,3,4,1},
        {5,6,1,3},
        {1,4,9,6}
    };

    int row = 4;
    int col = 4;
    
    //Row sum of 2-D array
    rowsum(arr,row,col);
    cout<<endl;

    //Col sum of 2-D array
    colsum(arr,row,col);

}