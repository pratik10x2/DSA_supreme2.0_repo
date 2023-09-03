#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "ENter the value:";
    cin >> n;

// Pattern 1--Full pyramid

    //       for(int i=0;i<n;i++){
    //          for(int j=0;j<n-i-1;j++){
    //              cout<<" ";
    //          }
    //          for(int j=0;j<i+1;j++){
    //              cout<<"* ";
    //          }
    //          cout<<endl;
    //       }

// Pattern 2--Inverted full pyramid

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

// Pattern 3--Diamond pattern

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
    //     for (int j = 0; j < num- i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

// Pattern 4--Pattern 5--hollow  full pyramid

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

// Pattern 5--hollow inverted full pyramid

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

// Pattern 6 --Hollow Diamond

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

// Pattern 7-- Hollow inverted and hollow half pyramid

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

// Pattern 8

    //  for(int i=0;i<n;i++){
    //      for(int j=0;j<2*i+1;j++){
    //          if(j%2==1){
    //              cout<<"*";
    //          }
    //          else{
    //              cout<<i+1;
    //          }
    //      }
    //      cout<<endl;
    //  }

// Pattern 9

    //  for(int i=0;i<n;i++){
    //      for(int j=0;j<2*n-2*i-1;j++){
    //          if(j%2==1){
    //              cout<<"*";
    //          }
    //          else{
    //              cout<<n-i;
    //          }
    //      }
    //      cout<<endl;
    //  }

// Pattern 10--
            /*
            1
            2*2
            3*3*3
            */

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

// Pattern 11-- Hollow inverted half Pyramid

    //  for(int i=0;i<n;i++){
    //      for(int j=0;j<n-i;j++){
    //          if(i==0 || j==0 || j==n-i-1){
    //              cout<<"* ";
    //          }
    //          else{
    //              cout<<"  ";
    //          }
    //      }
    //      cout<<endl;
    //  }

// Pattern 12--half ABC pyramid

    //  for(int i=0;i<n;i++){
    //      for(int j=0;j<i+1;j++){
    //          int num=j+1;
    //          char ch=num+'A'-1;
    //          cout<<ch;
    //      }

    //     cout<<endl;
    // }

// Pattern 13 --ABC pattern

    //  for(int i=0;i<n;i++){
    //      char ch;
    //      for(int j=0;j<i+1;j++){
    //          int num=j+1;
    //           ch=num+'A'-1;
    //          cout<<ch;
    //      }

    //     for(char alpha=ch;alpha>'A';){
    //         alpha=alpha-1;
    //         cout<<alpha;
    //     }

    //     cout<<endl;
    // }

// Pattern 14 --Numeric hollow inverted half pyramid

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

// Pattern 15-- Numeric palindorm equilateral pyramid

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

// Pattern 16--

    //  for(int i=0;i<n;i++){
    //      for(int j=0;j<8-i;j++){
    //          cout<<"* ";
    //      }
    //      for(int j=0;j<2*i+1;j++){
    //          if(j%2==1 ){
    //              cout<<"* ";
    //          }
    //          else{
    //              cout<<i+1<<" ";
    //          }
    //      }
    //       for(int j=0;j<8-i;j++){
    //          cout<<"* ";
    //      }
    //      cout<<endl;
    //  }

// Pattern 17 --Solid half diamond

    //  int num=n/2;
    //  for(int i=0;i<num;i++){
    //      for(int j=0;j<i+1;j++){
    //          cout<<"* ";
    //      }

    //     cout<<endl;
    // }

    // for(int i=0;i<num;i++){
    //     for(int j=0;j<num-i;j++){
    //         cout<<"* ";
    //     }

    //     cout<<endl;
    // }

// Pattern 18--floyds triangle

    //     int p=1;
    //    for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //             // if(p<100){
    //             //     cout<<p<<" ";
    //             // }
    //             // else{
    //             //     cout<<p<<" ";

    //             // }
    //                 cout<<p<<" ";
    //             p++;
    //     }
    //     cout<<endl;
    //    }

// Pattern 19--Butterfly Pattern

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     for (int j = 0; j < 2 * n - 2 * i - 2; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     for (int j = 0; j < 2 * i; j++)
    //     {
    //         cout << "  ";
    //     }

    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    return 0;
}
