#include<bits/stdc++.h>
using namespace std;

void printsolution(int** solution,int n){
 for(int i=0;i<n;i++){
 	for(int j=0;j<n;j++){
 		cout<<solution[i][j]<<" ";
 		}
 	}
     cout<<endl;
 }

void mazehelp(int maze[][20],int n,int **solution,int x,int y){

  if(x==n-1&&y==n-1){
   solution[x][y]=1;
   printsolution(solution,n);
    /*
    these two are optional line if we want we can put 
    then also code work fine
    
   solution[x][y]=0;
   return;
    
    */
   }
 
 if(x>=n||x<0||y>=n||y<0||maze[x][y]==0||solution[x][y]==1){
  return;
  }
  
  solution[x][y]=1;
  mazehelp(maze,n,solution,x-1,y);  // left
  mazehelp(maze,n,solution,x+1,y);   // right
  mazehelp(maze,n,solution,x,y-1);     // up
  mazehelp(maze,n,solution,x,y+1);      // down
  solution[x][y]=0;
}

void ratInAMaze(int maze[][20],int n){

  int ** solution=new int*[n];   // temporary 2d array
  
  for(int i=0;i<n;i++){
 	solution[i]=new int[n];
 	}
 mazehelp(maze,n,solution,0,0);  //fun to explore in all 4 dirn
 
}


int main(){

  int n; 
  cin >> n ;
  int maze[20][20];
  for(int i = 0; i < n ;i++){
	for(int j = 0; j < n; j++){
        	cin >> maze[i][j];
        }		
  }
  ratInAMaze(maze, n);
return 0;
}
/*

int main()
{

int n;
cin>>n;
int arr[n][n];
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cin>>arr[i][j];
		}
	}
		
ratInAMaze(arr,n);
return 0;
}

*/
