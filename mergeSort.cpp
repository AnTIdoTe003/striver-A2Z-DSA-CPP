#include <iostream>
using namespace std;
void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = high;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= mid)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = ; low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
    for (int i = low; i <= high; i++)
    {
        cout << arr[i] << " ";
    }
}
void mS(vector<int> &arr, int low, int high)
{
    if (low == high){
        return;
    }
    int mid = (high + low) / 2;
    mS(arr, low, mid);
    mS(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int mergeSort()
{
    vector<int> arr = {3, 2, 4, 1, 5};
    mS(arr, 0, 4);
}