#include <iostream>
using namespace std;
void insertionSort(int arr[], int n){
    int j;
    for(int i=0;i<n;i++){
         j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]= arr[j];
            arr[j]= temp;
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the range of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array"<<endl;
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    insertionSort(arr, n);
    return 0;
}