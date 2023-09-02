#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "ENter the value:";
    cin >> n;

    // Pattern 1
    //       for(int i=0;i<n;i++){
    //          for(int j=0;j<n-i-1;j++){
    //              cout<<" ";
    //          }
    //          for(int j=0;j<i+1;j++){
    //              cout<<"* ";
    //          }
    //          cout<<endl;
    //       }

    // Pattern 2
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // Pattern 3
    // int num=n/2;
    // for (int i = 0; i < num; i++)
    // {
    //     for (int j = 0; j < num - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < num; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < num - i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // Pattern 4
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < 2 * i + 1; j++)
    //     {
    //         if (j == 0 || j == 2 * i)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // Pattern 5
    //  for (int i = 0; i < n; i++)
    //  {
    //      for (int j = 0; j < i ; j++)
    //      {
    //          cout << " ";
    //      }
    //      for (int j = 0; j < 2*n-i-1; j++)
    //      {
    //          if (j == 0 || j == 2*n-2*i-2)
    //          {
    //              cout << "*";
    //          }
    //          else
    //          {
    //              cout << " ";
    //          }
    //      }
    //      cout << endl;
    //  }

    // Pattern 6
    // int num=n/2;
    // for (int i = 0; i < num; i++)
    // {
    //     for (int j = 0; j < num - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < 2 * i + 1; j++)
    //     {
    //         if (j == 0 || j == 2 * i)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < num; i++)
    // {
    //     for (int j = 0; j < i ; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < 2*num-i-1; j++)
    //     {
    //         if (j == 0 || j == 2*num-2*i-2)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

// Pattern 7
    // for (int i = 0; i < n; i++)
    // {
    //     // print the inverted half pyramid formula--(n-row)
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     // print full pyramid  formula--(2*row+1)
    //     for (int j = 0; j < 2 * i + 1; j++)
    //     {
    //         cout << "  ";
    //     }
    //     // print the inverted half pyramid formula--(n-row)
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<n;i++){
    //      // print the half pyramid formula--(row+1)
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     // print inverted full pyramid  formula--(2*n-2*row-1)
    //     for (int j = 0; j < 2 * n - 2 * i - 1; j++)
    //     {
    //         cout << "  ";
    //     }
    //     // print the  half pyramid formula--(row+1)
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout<<endl;
    // }

//Pattern 8
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<2*i+1;j++){
    //         if(j%2==1){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<i+1;
    //         }
    //     }
    //     cout<<endl;
    // }

//Pattern 9
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<2*n-2*i-1;j++){
    //         if(j%2==1){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<n-i;
    //         }
    //     }
    //     cout<<endl;
    // }

    
//Pattern 10

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<2*i+1;j++){
    //         if(j%2==1){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<i+1;
    //         }
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<2*n-2*i-1;j++){
    //         if(j%2==1){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<n-i;
    //         }
    //     }
    //     cout<<endl;
    // }

//Pattern 11
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         if(i==0 || j==0 || j==n-i-1){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

//Pattern 12
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         int num=j+1;
    //         char ch=num+'A'-1;
    //         cout<<ch;
    //     }
        
    //     cout<<endl;
    // }

//Pattern 13
    // for(int i=0;i<n;i++){
    //     char ch;
    //     for(int j=0;j<i+1;j++){
    //         int num=j+1;
    //          ch=num+'A'-1;
    //         cout<<ch;
    //     }

    //     for(char alpha=ch;alpha>'A';){
    //         alpha=alpha-1;
    //         cout<<alpha;
    //     }

    //     cout<<endl;
    // }

//Pattern 14

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         if(i==0 || j ==0 ||  j==n-i-1){

    //         cout<<j+i+1<<" ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
            
    //     }
    //     cout<<endl;
    // }

//Pattern 15

    // for( int i=0;i<n;i++){
    
    //     int num;
    //     //first print spaces
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<"  ";
    //     }
    //     //second print half pyramid
    //     for(int j=0;j<i+1;j++){
    //         num=j+1;
    //         cout<<num<<" ";
    //     }
    //     //Third print the reverse order 
    //     for(int j=num;j>1;){
    //         j=j-1;
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

//Pattern 16
    for(int i=0;i<n;i++){
        for(int j=0;j<8-i;j++){
            cout<<"* ";
        }
        for(int j=0;j<2*i+1;j++){
            if(j%2==1 ){
                cout<<"* ";
            }
            else{
                cout<<i+1<<" ";
            }
        }
         for(int j=0;j<8-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    

    return 0;
}
