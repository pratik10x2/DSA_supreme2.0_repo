#include<iostream>
using namespace std;

int getQuotient(int divisor,int divident){
    int s=0;
    int e=divident;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s <= e){
        if(mid * divisor == 0){
            return 0;
        }
        if(mid * divisor == divident){
            return mid;
        }
        else if(mid * divisor < divident){
            //ans stores
            ans=mid;
            //right me jao
            s=mid+1;
        }
        else{
            //left me jao
            e=mid-1;
        }
        //mid updation is important
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int divisor=-5;
    int divident=-25;
    int ans=getQuotient(abs(divisor),abs(divident));
    if((divisor >0 && divident <0) || (divisor <0 && divident >0)){
        ans=0-ans;

    }
    cout<<"The quotint is:"<<ans;
    return 0;
}
//home work me point me aa raha h vo print krna h