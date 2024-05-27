#include<iostream>
using namespace std;

int main()
{
    int array[3][3];


    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout<<"enter the "<<i+1<< "  row value"<<endl;

            cin>>array[i][j];
        }
    }

       for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
           cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

// A 2D Array is represented as a contiguous block of memory cells (linearly)

// row major  array[3][3] = {{1 2 3},{4 5 6}, {7 8 9}}
//1,2,3 first row 4,5,6 second row 7,8,9 third row

//1,4,7 first column 2,5,8 second column 3,6,9 third column

    return 0;
}