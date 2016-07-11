// C++ program to rotate a matrix
 
#include <bits/stdc++.h>
/*#define R 4
#define C 4*/
using namespace std;
 
// A function to rotate a matrix mat[][] of size R x C.
// Initially, m = R and n = C

/* Driver program to test above functions */
int main()
{
    // Test Case 1
    int a[100][100];
	/*= { {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9,  10, 11, 12},
        {13, 14, 15, 16}  };
 
    // Tese Case 2
    /* int a[R][C] = {{1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9}
                     };
     */  
	 
	 int n;
	 cin>>n;
	 int k=n;
	 int count=0;
	 for(int i=0; i<2;i++)
	 {
	 	for(int j=0; j<2; j++)
	 	{
	 		cin>>a[i][j];
	 		count++;
	 	}
	 }
cout<<"Matrix is :"<<endl;
 for(int i=0; i<2;i++)
	 {
	 	for(int j=0; j<2; j++)
	 	{
	 		cout<<a[i][j]<<" ";
	 	}
	 	cout<<endl;
	 }
	 
	 
	
		 cout<<endl;
		 	 cout<<endl;
			   cout<<endl;
/*void rotatematrix(int m, int n, int mat[R][C])
{
    int row = 0, col = 0;
    int prev, curr;
 
    /*
       row - Staring row index
       m - ending row index
       col - starting column index
       n - ending column index
       i - iterator
    */
    int m;
    m=n;
     int row = 0, col = 0;
    int prev, curr;
 int mat[100][100];
 for(int i=0;i<2;i++)
 {
 	for(int j=0; j<2; j++)
 	{
 		mat[i][j]=a[i][j];
 	}
 }
   if((n*n)== count)
   { 
    while (row < m && col < n)
    {
 
        if (row + 1 == m || col + 1 == n)
            break;
 
        // Store the first element of next row, this
        // element will replace first element of current
        // row
        prev = mat[row + 1][col];
 
         /* Move elements of first row from the remaining rows */
        for (int i = col; i < n; i++)
        {
            curr = mat[row][i];
            mat[row][i] = prev;
            prev = curr;
        }
        row++;
 
        /* Move elements of last column from the remaining columns */
        for (int i = row; i < m; i++)
        {
            curr = mat[i][n-1];
            mat[i][n-1] = prev;
            prev = curr;
        }
        n--;
 
         /* Move elements of last row from the remaining rows */
        if (row < m)
        {
            for (int i = n-1; i >= col; i--)
            {
                curr = mat[m-1][i];
                mat[m-1][i] = prev;
                prev = curr;
            }
        }
        m--;
 
        /* Move elements of first column from the remaining rows */
        if (col < n)
        {
            for (int i = m-1; i >= row; i--)
            {
                curr = mat[i][col];
                mat[i][col] = prev;
                prev = curr;
            }
        }
        col++;
    }
 
    // Print rotated matrix
    for (int i=0; i<k; i++)
    {
        for (int j=0; j<k; j++)
          cout << mat[i][j] << " ";
        cout << endl;
    }
}
else
cout<<"ERROR"<<endl;

	 
    return 0;
}
