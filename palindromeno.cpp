#include<iostream>
using namespace std;
void checkpalinndrome(int n){
    
    int num = n; 
    int val = 0;

    while(n>0){
        int lstdigit = n%10; 
        val = val*10+lstdigit; 
        n = n/10;
    }

    if(val == num){
        cout<<"Number is Palindrome."<<endl;
    }
    else{
        cout<<"Number is not Palindrome."<<endl;
    }
}
int main(){

    int n = 121;
    checkpalinndrome(n);

    return 0;
}