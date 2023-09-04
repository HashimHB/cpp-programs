#include <iostream>
using namespace std;

int main()
{
    // int i=5;
    // int *ptr = &i;
    // cout<<*ptr<<endl;
    // cout<<ptr<<endl;

    // ptr++;
    // cout<<ptr<<endl;


    int arr[]={10,20,30,40,50}; 
    cout<<*arr<<endl;

    int *ptr = arr;
    for(int i=0;i<4;i++){
        cout<<*ptr<<endl;
        *ptr++;
    }

    return 0;
}
