#include<iostream>
using namespace std;

int main()
{
    int arr[5][5]={
                    {10,20,30,40,50},
                    {40,50,60,70,80},
                    {70,80,90,10,20},
                    {20,40,60,10,80},
                    {30,40,50,60,70}
                  };
    int rowSize=5;
    int colSize=5;
    
    for(int i=0,j=colSize-1 ;i<rowSize,j>=0 ;i++,j--){
        cout<<arr[i][j]<<" ";
    }
}