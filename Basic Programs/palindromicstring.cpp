#include <iostream>
using namespace std;

int main()
{   

    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool flag = 1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            flag = 0;
            break;
        }
    }

    if(flag==true){
        cout<<"The given word is Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
    return 0;
}
