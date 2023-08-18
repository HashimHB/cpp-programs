#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum=0;
    int temp;

    while(n>0){
        int last = n%10;
        sum+=pow(last,3);
        n = n/10;
    }

    if(temp==n){
        cout<<"The given number is armstrong"<<endl;
    }
    else{
        cout<<"Not an armstrong number"<<endl;
    }

    return 0;
}