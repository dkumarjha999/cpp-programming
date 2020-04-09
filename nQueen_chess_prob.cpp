#include<bits/stdc++.h>
using namespace std;

int chessboard[11][11];

bool isPossible(int n,int row,int column){
   // checking element in same column
  for(int i=row-1;i>=0;i--){
	if(chessboard[i][column]==1){
		return false;
		}	
	}  
  // checking queen at upper left diagonal 
    for(int i=row-1,j=column-1;i>=0,j>=0;i--,j--){
	if(chessboard[i][j]==1){
		return false;
		}	
	}
    // checking queen at upper right diagonal 
    for(int i=row-1,j=column+1;i>=0,j<n;i--,j++){
	if(chessboard[i][j]==1){
		return false;
		}	
	}
  return true;
}
void nQueenHelper(int n,int row){
 if(row==n){
 	// we have reached some solution
 	// print board matrix
 	// return
 	
 	 for(int i=0;i<n;i++){
 	 	for(int j=0;j<n;j++){
 	 	 	cout<<chessboard[i][j]<<" ";	
 	 	 	
 	 		}
 	 	}
 	  cout<<endl;  // nextline for printng other matrix
 	   return;
 	}
 	 	
   // else place at all possible position and move to smaller problem
   for(int j=0;j<n;j++){
   	
   	if(isPossible(n,row,j)){
   		chessboard[row][j]=1;    // if possible then make value =1
   		nQueenHelper(n,row+1);   // making smaller problem
   		chessboard[row][j]=0;   // while again backtracking val=0
   		}  	
       }   
  return;    	
}
void placeNQueens(int n){
/*
We can use memset() to set all values as 0 or -1 for integral data types also.
It will not work if we use it to set as other values.
The reason is simple, memset works byte by byte.
*/
 memset(chessboard, 0, sizeof(chessboard));  
 nQueenHelper(n,0);  // to get value for all possible matrix
 
}

int main()
{

int n;
cin>>n;
placeNQueens(n);
return 0;
}
