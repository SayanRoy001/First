#include <iostream>
using namespace std;
int pivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + ((e - s) / 2);
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + ((e - s) / 2);
    }
    return e;
}
int BinSearch(int arr[], int s, int e, int key)
{
    int start = s;
    int end = e;
    int mid = s + ((e - s) / 2);
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
    
    else if (arr[mid] < key)
    {
        s = mid + 1;
    }
    else
    {
        e = mid - 1;
    }
    int mid = s + ((e - s) / 2);

    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int arr[8] = {3, 4, 5, 6, 7, 8, 1, 2};
    int piv= pivot(arr, 8);
    int target=6;
    int ans=0;
    if(target>=arr[piv]&&target<=arr[7]){
    ans = BinSearch(arr,piv,7,target);
    }
    else
    {
    ans = BinSearch(arr, 0, piv, target);
    }
cout<<ans;
    return 0;
}
