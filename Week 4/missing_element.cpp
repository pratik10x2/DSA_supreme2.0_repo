#include<iostream>
using namespace std;

// int missingelement(int arr[],int n){
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;
//     int ans=-1;
    
//     while(s<=e){
//         int diff=arr[mid]-mid;
//         if(diff ==1){
//             s=mid+1;
//         }
//         else{
//             ans=mid;
//             e=mid-1;

//         }
//         mid=s+(e-s)/2;
//     }
//     if(ans+1==0){
//         return n+1;
//     }
//     return ans+1;

// }

// int main(){
//     int arr[]={1,2,3,4,5,7,8,9};
//     int n=8;
//     cout<<"Missing element is:"<<missingelement(arr,n);

//     return 0;
// }



// int countbit(int n){
//     int count=0;
//     while(n>0){
//         int bit=n%2;
//         if(bit == 1){
//             count++;
//         }
//         n=n/2;
//     }
//     return count;
// }
// int countbit(int n){
//     int count=0;
//     while(n>0){
//         int bit=n&1;
//         if(bit == 1){
//             count++;
//         }
//         n=n>>1;
//     }
//     return count;
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<"Set bits are:"<<countbit(n);
// }

// int number(int n){
//     int num=0;
    
//     for(int i=0;i<n;i++){
//         cout<<"ENter the digit "<<i+1<<":";
//         int digit;
//         cin>>digit;
//         num=num *10 + digit;
//         cout<<"Number created so far:"<<num<<endl;

//     }
//     return num;

// }
// int main(){

//     int digit;
//     cin>>digit;
//     cout<<"Final number is created is:"<<number(digit);
    
// }

//  void printdigit(int n){
//     int num;
//     while(n>0){
//         num=n%10;
//         cout<<"The digit is:"<<num<<endl;
//         n=n/10;

//     }

    
//  }
//  int main(){
//     int number;
//     cin>>number;
//     printdigit(number);
    
//  }