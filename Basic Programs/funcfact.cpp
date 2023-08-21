#include <iostream>
using namespace std;

int fact(int num1){
    int fact =1;
    for(int i=1;i<=num1;i++){
        fact = fact*i;
    }
    return fact;
}




int main(){
    cout<<"The factorial of the given number is: "<<fact(5);
    return 0;
}