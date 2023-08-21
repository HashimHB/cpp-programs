#include <iostream>
using namespace std;

void print(int num){
    cout<<num<<endl;
}

int addsum(int num1,int num2){
    print(num1);
    print(num2);
    int sum = num1+num2;
}



int main(){
    cout<<"The sum of numbers is: "<<addsum(3,4);
    return 0;
}