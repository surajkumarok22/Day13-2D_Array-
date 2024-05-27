#include<iostream>
using namespace std;

// using brute force technique

void bruteSearch(int mtrx[][4], int n, int key){
    bool flag = 0; int row = 0, column = 0; 
    for(int i = 0; i<n; i++){
        for(int j =0; j<n; j++){
            if(mtrx[i][j] == key){
                row = i;
                column = j;
                flag = 1;
                break;
            }
        }
    }
    if(flag == 1){
        cout<< " key is present at "<<row<<" row and "<<" at column "<<column<<endl;
    }
    else{
        cout<< " key is not present"<<endl;
    }
}



bool search(int mtrx[][4], int n, int m, int key){
    int i = 0, j = m-1;

    while(i < n && j >= 0){
        if(mtrx[i][j] == key){
            cout<< " found at cell "<< i <<","<<j<<endl;
            return true;
        }
        else if(mtrx[i][j] > key){
            // left
            j--;
        }
        else{
         //   down
            i++;
        }
    }
    cout<<"key not found"<<endl;
    return false;
}

int main()
{
    int mtrx[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    bruteSearch(mtrx, 4 , 15);
    return 0;
}