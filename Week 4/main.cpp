#include <iostream>
using namespace std;

int binarysearch(int arr[], int  n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }

        else if (target < arr[mid])
        {
            end = mid - 1;
        }
    }
    return -1;
}

int firstoccurance(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
          
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }

        else if (target < arr[mid])
        {
            end = mid - 1;
        }
       mid= (start + end) / 2;
        
    }
    return ans;


}
int lastoccurance(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
           
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }

        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        mid= (start + end) / 2;
    }
    return ans;


}
int totaloccurance(int arr[],int n,int target){
    int first=firstoccurance(arr,n,target);
    int last=lastoccurance(arr,n,target);
    int total =last-first+1;
    return total;
}

int main()
{
 // find target using binary search
    //  int arr[]={10,20,30,40,50,60};
    //  int n=6;
    //  int target=30;
    // int ans=binarysearch(arr,n,30);
    // cout<<ans;

// finding the first occurance
    // int arr[] = {10, 30, 30, 40, 50, 60};
    // int n = 6;
    // int target = 30;
    // cout << "The first occurance is:"<<firstoccurance(arr, n, target);

// finding the last occurance
    // int arr[] = {10, 30, 30, 40, 50, 60};
    // int n = 6;
    // int target = 30;
    // cout << "The last occurance is:"<<lastoccurance(arr, 6, 30);

//find the total occurance
    int arr[] = {10, 30, 30, 40, 50, 60};
    int n = 6;
    int target = 30;
    cout << "The total occurance is:"<<totaloccurance(arr, n, 30);
    cout<<"helo ji";

    return 0;
}