#include<iostream>
using namespace std;

int main()
{
    int array[2][3] = {{10,20,30},{40,50,60}};
    // first [] define the row of the matrix and second is column

    for(int i = 0; i<2; i++){              // row 
        for(int j = 0; j<3; j++){        // column
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

     cout<<endl;

    int array2[3][3] = {{10,20,30},{40,50,60}};
   // we were not intilize the third row but run the loop so it take default value 0 0 0

    for(int i = 0; i<3; i++){              // row 
        for(int j = 0; j<3; j++){        // column
            cout<<array2[i][j]<<" ";
        }
        cout<<endl;
    }
   
    return 0;
}