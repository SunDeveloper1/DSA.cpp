#include<bits/stdc++.h>

using namespace std;

int logCounter(int value){
    int a= (int)log10(value);
    cout<<"A"<<a<<endl;
    return a+1;
}

void normalCounter(int n){
    int counter=0;
    while(n>0){
        counter=counter+1;
        n=n/10;
    }
    cout<<"Cout of Digits="<<counter<<endl;

}

void reverseTheNumber(int number){

    int reverseNum=0;
    while(number>0){
        int lastDigit=number%10;
        // cout<<"REverse Number:"<<reverseNum<<endl;
        reverseNum=(reverseNum*10)+ lastDigit;
        number=number/10;
    }

    cout<<"Reverse Number : "<< reverseNum<<endl;
    
}

void checkPalindrome(string value){
    string reverseStr="";
    for(char i: value){
        reverseStr=i+reverseStr;
    }
    cout<< "Reverse Number : "<<reverseStr<<endl;

    if(reverseStr == value){
        cout<< value <<" - Palindrome"<<endl;
    }else{
        cout<< value <<" - Not Palindrome"<<endl;
    }


}

int main(){

    int n;
    int m=n;
    cout<<"Enter the digit"<<endl;
    cin>>n;

    reverseTheNumber(n);
    checkPalindrome("NooN");


}