#include<iostream>
using namespace std;

int findoddOccuring(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
   

    while(s<=e){
        //single elment 
        if(s == e){
            return s;
        }
        if(mid & 1){ //mid &1 --> true h to odd print hoga
            if( mid-1 >=0 && arr[mid] == arr[mid-1]){    //mid -1 me agar ye 0 se pich chala na jaye isliye mid-1>=0 kiya
                s=mid+1;
            }
            else{
                e=mid-1;
            }

        }
        else{//even condition
            if(mid+1 < n && arr[mid] == arr[mid+1]){  //mid +1 me ye bahar na nikal jaye isliye mid+1<n krr diya
                s=mid+2;
            }
            else{
                //ya to mai ans prr hu
                //ya to mai right part prr  khada hu
                //that's why e=mid-1 se ans lost ho sakta h

                e=mid;
            }

        }
        mid=s+(e-s)/2;
    }
    return -1;

}
int main(){
    // int arr[]={10,10,2,2,5,5,2,5,5,20,20,1,1,10,10};
    // int n=15;
    // int arr[]={10};
    // int n=1;
    int arr[]={10,10,2,2,5,5,5,5,20,20,1,1,10,10,2};
    int n=15;
    int ans=findoddOccuring(arr,n);
    cout<<"Final ans is:"<<ans;


    return 0;

}