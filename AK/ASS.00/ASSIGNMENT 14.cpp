#include<iostream>
using namespace std;
int fact(int a){
    if(a==0||a==1) return 1;
    else return a*fact(a-1);
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Factorial of "<<num<<" is "<<fact(num)<<endl;
    return 0;
}
