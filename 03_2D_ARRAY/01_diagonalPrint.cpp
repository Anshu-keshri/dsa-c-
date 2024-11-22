#include<iostream>
using namespace std;

int main()
{
    int arr[3][3]={
                    {10,20,30},
                    {40,50,60},
                    {70,80,90}
                  };
    int rowSize=3;
    int colSize=3;
    
    for(int i=0,j=colSize-1 ;i<rowSize,j>=0 ;i++,j--){
        cout<<arr[i][j]<<" ";
    }
}