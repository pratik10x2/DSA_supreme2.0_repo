#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;


//for Printing the array
void printarray(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void printarray1(int arr[][3], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

//find tha array
bool findarray(int arr[][3], int row, int col, int target)
{
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {

            if (arr[i][j == target])
            {
                // if found
                return true;
            }
        }
    }
    return false;
}

//find max
int findmax(int arr[][3], int row, int col)
{
    int maxans = INT_MIN;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {

            if (arr[i][j > maxans])
            {
                maxans = arr[i][j];
            }
        }
    }
    return maxans;
}

//find min
int findmin(int arr[][3], int row, int col)
{
    int minans = INT_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            if (arr[i][j] < minans)
            {
                minans = arr[i][j];
            }
        }
    }
    return minans;
}

//sum of row 
void rowsum(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
    int sum=0;
        for (int j = 0; j < col; j++)
        {

           sum=sum+arr[i][j];
        }
        cout<<sum<<" ";
    }
    
}

//sum of column
void colsum(int arr[][3], int col, int row)
{
    for (int i = 0; i < col; i++)
    {
    int sum=0;
        for (int j = 0; j < row; j++)
        {

           sum=sum+arr[i][j];
        }
        cout<<"The colsum:"<<sum<<" ";
    }
    
}

//sum of diagonals
void diagonalsum(int arr[][3], int row, int col)
{
    int sum=0;
    for (int i = 0; i < row; i++)
    {
         sum=sum+arr[i][col];
        
    }
        cout<<sum<<" ";
    
}

//transpose of matrix
void transpose(int arr[][3], int row, int col){
    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}




int main()
{
// creating 2D array
    //  int arr[3][3];

 // Initializing the array
    //  int arr[3][3]={
    //      {1,2,3},{1,2,3},{1,2,3}

    // };


    // int arr[4][3]={
    //     {1,2,3},{4,5,6},{7,8,9},{10,11,12}

    // };
    // int row=4;
    // int col=3;
    // printarray(arr,row ,col);
    // printarray1(arr,row ,col);

// input
    //  int arr[3][3];
    //  int row=3;
    //  int col=3;

    //  for(int i=0;i<col;i++){
    //     for(int j=0;j<row;j++){
    //         cout<<"Enter the input for row index "<<i<<" column index "<<j<<endl;
    //         cin>>arr[i][j];
    //     }
    // }
    // printarray(arr,row ,col);


 //find target
    //     int arr[3][3];
    //     int row=3;
    //     int col=3;
    //     int target=4;

    //      for(int i=0;i<col;i++){
    //         for(int j=0;j<row;j++){
    //             cout<<"Enter the input for row index "<<i<<" column index "<<j<<endl;
    //             cin>>arr[i][j];
    //         }
    //     }
    //    cout<<"Found or not "<< findarray(arr,row ,col,target)<<endl;

// maximum number

    // int arr[4][3] = {
    //     {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {100, 11, 12}

    // };
    //  int row=4;
    // int col=3;

    // int maximun=findmax(arr,row,col);
    // cout<<"The maximun element is:"<<maximun<<endl;

// minimum number

    // int arr[4][3] = {
    //     {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {100, 11, 12}

    // };
    //  int row=4;
    // int col=3;

    // int mini=findmin(arr,row,col);
    // cout<<"The mini element is:"<<mini<<endl;


//row wise sum
    // int arr[4][3] = {
    //     {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}

    // };
    //  int row=4;
    // int col=3;
    // rowsum(arr,row ,col);

    // //col wise sum
    // int arr[3][3] = {
    //     {1, 2, 3}, {4, 5, 6}, {7, 8, 9}

    // };
    // int col=3;
    //  int row=3;
    // colsum(arr,col ,row);


//diagonal sum
    // int arr[3][3] = {
    //     {1, 2, 3}, {4, 5, 6}, {7, 8, 9}

    // };
    //  int row=3;
    // int col=3;
    // diagonalsum(arr,row ,col);



//transpose 
    
    // int arr[3][3] = {
    //     {1, 2, 3}, 
    //     {4, 5, 6},
    //      {7, 8, 9}

    // };
    //  int row=3;
    // int col=3;
    // printarray(arr,row,col);
    // transpose(arr,row,col);
    // printarray(arr,row,col);



//vector
    // int arr[5];
    // // vector<int>arr; declaration
    // // vector<int>v(5); size given
    // vector<int>v(5,101); //initialize with 101
 
 
    // cout<<"Size of vector:"<<v.size()<<endl;
    // cout<<"Printing vector:"<<endl;
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;


//2D vector
    // vector<vector<int>> arr(5,vector<int>(10,0));
    // for(int i=0;i<arr.size();i++){
    //     for(int j=0;j<arr[i].size();j++){

    //     cout<<arr[i][j]<<" ";
    //     }
    // cout<<endl;
    // }

//Jagged array
// vector<vector<int>> brr;

    // vector<int>vect1(10,1);
    // vector<int>vect2(15,0);
    // vector<int>vect3(10,1);
    // vector<int>vect4(5,0);
    // vector<int>vect5(5,1);

    // brr.push_back(vect1);
    // brr.push_back(vect2);
    // brr.push_back(vect3);
    // brr.push_back(vect4);
    // brr.push_back(vect5);

    //  for(int i=0;i<brr.size();i++){
    //     for(int j=0;j<brr[i].size();j++){

    //     cout<<brr[i][j]<<" ";
    //     }
    // cout<<endl;
    // }
   
    
    return 0;
}