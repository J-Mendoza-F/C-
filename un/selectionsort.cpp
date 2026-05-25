#include <iostream>
using namespace std;

int main(){
    cout<<"\033[33m=== SELECTION SORT ===\033[0m\n";

    int arr[]={64, 25, 12, 22, 11};
    int n=5;

    for(int i=0; i<n-1; i++){
        int min=1;

        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}