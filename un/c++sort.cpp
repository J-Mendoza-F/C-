#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[]={9, 4, 1, 7, 3};

    cout<<"\033[33m=== C++ SORT ===\033[0m\n";
    sort(arr, arr+5);

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}