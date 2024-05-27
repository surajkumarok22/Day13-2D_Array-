#include<iostream>
using namespace std;

int main()
{

    int n = 4;
    int array[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

//  Required outPut = 1,2,3,4,8,12,16,15,14,13,9,5,6,7,11,10
    int stRow = 0, stCol = 0;
    int edCol = n-1, edRow = n-1;

    while(stRow <= edRow && stCol <= edCol)
    {
    // top
        for(int i = stCol; i<=edCol; i++){
            cout<< array[stCol][i]<<" ";
            if(stRow == edRow){
                break;
            }
            // stRow++;
        }
    // right 
        for(int i = stRow+1; i<=edRow; i++){
            cout<<array[i][edCol]<< " ";
             if(stRow == edRow){
                break;
            }
        }
    // bottom
        for(int i = edCol-1; i>=stCol; i--){
            cout<<array[edRow][i]<<" ";
             if(stRow == edRow){
                break;
            }
        }

    // left 
        for(int i = edRow-1; i> stRow; i--){
            cout<<array[i][stCol]<<" ";
             if(stRow == edRow){
                break;
            }
        }

        stRow++; stCol++; 
        edCol--; edRow--;

    } 

    return 0;
}