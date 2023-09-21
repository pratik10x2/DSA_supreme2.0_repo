#include<iostream>
using namespace std;

int searchNearlySorted(int arr[],int n ,int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(mid-1 >=0 &&  arr[mid-1] == target){  //yaha pr 0 ke case me 0-1 hone prr negative targetindex aa jayega to isliye ye condition required h
            return mid-1;
        }
        else if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid+1] == target){
            return mid+1;
        }
        if(target > arr[mid]){
            //target bada h to right me jao
            //s=mid+1;
            s=mid+2;// +2 krne se sirf ek bar hi comparison hoga ,,+1 se do bar comparison hoga
        }
        else if(target < arr[mid]){
            //target chota h to left me jao
            // e=mid-1;
            e=mid-2; //same conditon for this block
        }
        //mid updation is important
        mid=s+(e-s)/2;
    }
    return -1;
}

int main(){
    int arr[]={20,10,30,50,40,70,60};
    int n=7;
    int target=20;

    int targetindex=searchNearlySorted(arr,n,target);
    if(targetindex == -1){
        cout<<"Element not found";
    }
    else{
        cout<<"Element is :"<<targetindex;
    }

    return 0;
}