#include<iostream>
using namespace std;

void digonalSum(int mat[][3], int n){
int  sum = 0;

    for(int i = 0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j){
                sum += mat[i][j];
            }
            else if(j == n-i-1){
                sum += mat[i][j];
            }
        }
    }
        cout<<"digonal sum is "<<sum<<endl;
}

void digonalSum2(int mat[][4], int n){
int  sum = 0;

    for(int i = 0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j){
                sum += mat[i][j];
            }
            else if(j == n-i-1){
                sum += mat[i][j];
            }
        }
    }
        cout<<"digonal sum is "<<sum<<endl;

}

int main()
{

    // find out digonal sum of matrix if n = m (square matrix)

    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int n =3;
    digonalSum(mat, n);

    int mat2[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    digonalSum2(mat2, 4);
  
    return 0;
}