#include<iostream>
#include<limits.h>
using namespace std;

// int main(){
    
    // int arr[100]; Array declarationn
    // char brr[20];
    // int a=5;
    // cout<<"Size of a:"<<sizeof(a)<<endl;
    // cout<<"Address of a"<<&a<<endl;
    // int arr[10];
    // cout<<"Size of a:"<<sizeof(arr)<<endl;
    // cout<<"Address of a"<<&arr<<endl;
    // cout<<"Base address if arr is"<<arr<<endl;

    // int arr[]={1,2,3,4,5};  Array initialization
    // int brr[5]={1,2,3,4,5};
    // int crr[5]={1,2};
    // int drr[2]={1,2,3,4,5};// too many initializers it gives error

    // int arr[5]={1,2,3,4,5};
    // int n=5;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<endl;
    // }

    // int arr[5];
    // int n=5;
    // for(int i=0;i<n;i++){
    //     cout<<"ENter the value at index"<<i<<" ";
    //     cin>>arr[i];

    // }
    // for(int i=0;i<n;i++){
        
    //     cout<<arr[i]<<" ";

    // }

//Print double of array
    // int arr[10];
    // int n=10;
    //  for(int i=0;i<n;i++){
    //     cout<<"Enter the value at index"<<i<<" ";
    //     cin>>arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     arr[i]=2*arr[i];
    //     // cout<<arr[i]<<" ";   
    // }
    // for(int i=0;i<n;i++){
        
    //     cout<<arr[i]<<" ";   
    // }
    
//Print sum of Array
    // int arr[5];
    // int n=5;
    // for(int i=0;i<n;i++){
    //     cout<<"Enter the value at index"<<i<<" ";
    //     cin>>arr[i];
    // }
    // int sum=0;
    // for(int i=0;i<n;i++){
    //     sum=sum+arr[i];

    // }
    // cout<<"Sum of given array:"<<sum;

//using Linear search find target
    // int arr[5]={2,4,6,8,10};
    // int target=11;
    // int n=5;
    // bool flag=0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]== target){
    //         flag=1;
    //         break;
    //     }
    // }
    // if(flag==0){
    //     cout<<"Not found";
    // }
    // else{
    //     cout<<"Found";
    // }
   
// }

//using Linear search find target

    // void printarray(int arr[],int size){
    //     for(int i=0;i<size;i++){
    //         cout<<arr[i]<<" ";
    //     }
    // }


    // bool linearsearch(int arr[],int size,int target){
    //     for(int i=0;i<size;i++){
    //         if(arr[i]==target){
    //             return true;
    //         }
    //     }
    //     return false;
    // }
    // int main(){
    //     int arr[5]={1,2,3,4,5};
    //     int size=5;
    //     int target=6;
    //    bool ans= linearsearch(arr,size,target);
    //     if(ans==1){
    //         cout<<"Found";
    //     }
    //     else{
    //         cout<<"Not found";
    //     }
    //     return 0;
    // }

//Print the zero and ones 

    // void countZeroOne(int arr[],int size){
    //     int zerocount=0;
    //     int onecount=0;
    //     for(int i=0;i<size;i++){
    //         if(arr[i]==0){
    //             zerocount++;
    //         }
    //         if(arr[i]==1){
    //             onecount++;
    //         }
    //     }
    //     cout<<"Zerocount="<<zerocount<<endl;
    //     cout<<"onecount="<<onecount<<endl;

    // }
    // int main(){
    //     int arr[5]={0,1,0,1,1};
    //     int size=5;
    //     countZeroOne(arr,size);
    //     return 0;
    // }

//Print minimum of number
    // int printMin(int arr[],int size){
    //     int min=INT_MAX;
    //     for(int i=0;i<size;i++){
    //         if(arr[i] < min){
    //             min=arr[i];
    //         }
    //     }
    //     return min;
    // }
    // int main(){
    //     int arr[5]={12,2,3,4,5};
    //     int size=5;
    //     int ans=printMin(arr,size);
    //     cout<<ans;
    // }

//Print the reverseorder

         // void reverseorder(int arr[],int size){
                //     int left =0;
                //     int right=size-1;

                //     while(left<=right){
                //         swap(arr[left],arr[right]);
                //         left++;
                //         right--;
                //     }
                //     for(int i=0;i<size;i++){
                //         cout<<arr[i]<<" ";
                //     }
                
                // }
                // int main(){
                //     int arr[5]={1,2,3,4,5};
                //     int size=5;
                //     reverseorder(arr,size);

                // }

//Print extreme order of array
    // void extremeorder(int arr[],int size){
    //     int left =0;
    //     int right=size-1;

    //     while(left<=right){
    //         if(left == right){
    //             cout<<arr[left]<<" ";
    //         }
    //         else{
                
    //         cout<<arr[left]<<" ";
    //         cout<<arr[right]<<" ";
    //         }
    //         left++;
    //         right--;
    //     }
    // }
    // int main(){
    //     int arr[5]={1,2,3,4,5};
    //     int size=5;
    //     extremeorder(arr,size);
    // }



//Print the max of array
   
    // void maxNum(int arr[],int size){
    //     int max=INT_MIN;
    //     for(int i=0;i<size;i++){
    //         if(arr[i]>max){
    //             max=arr[i];
    //         }

    //     }
    //     cout<<"Maximum number is:"<<max;
    // }
    // int main(){
    //     int arr[6]={1,2,3,4,5,6};
    //     int size=6;
    //     maxNum(arr,size);
        
    // }