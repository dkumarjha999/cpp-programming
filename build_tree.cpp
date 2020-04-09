#include<bits/stdc++.h>
using namespace std;

void buildTree(int *arr,int *tree,int start,int end,int treeNode){
 
 if(start==end){        // base case it is leaf node  value
   tree[treeNode]=arr[start];
   return;
  }
 int mid=(start+end)/2;
 
 buildTree(arr,tree,start,mid,2*treeNode);  // left tree node 
 
 buildTree(arr,tree,mid+1,end,2*treeNode+1);  // right tree node
 
 tree[treeNode]=tree[2*treeNode]+tree[2*treeNode+1];  // value of tree

 }
 
void updateTree(int *arr,int *tree,int start,int end,int treeNode,int indx,int value){
  if(start==end){
     arr[indx]=value;
     tree[treeNode]=value;
     return;
    }
  
  int mid=(start+end)/2;
  if(indx>mid){    // we have to update right side of tree, node value=2*treeNode+1
     updateTree(arr,tree,mid+1,end,2*treeNode+1,indx,value);
   }
   else{     // we have to update left side of tree, node value=2*treeNode
     updateTree(arr,tree,start,mid,2*treeNode,indx,value);
    }
   tree[treeNode]=tree[2*treeNode]+tree[2*treeNode+1];   // updating other node values
    
 } 
 
int Querry(int * tree,int start,int end,int treeNode,int left,int right){
 // completely outside the range 
 if(start>right||end<left){
   return 0;
  }
  
  // completely inside
  if(start>=left && end<=right){
    return tree[treeNode];
   }
   
   // partiall inside or partially outside
   int mid=(start+end)/2;
   int ans1=Querry(tree,start,mid,2*treeNode,left,right);   // call on left
   int ans2=Querry(tree,mid+1,end,2*treeNode+1,left,right);
   return ans1+ans2;
 } 

int main()
{
  int n;
  cin>>n;
  int *arr=new int[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
    }
        
  int * tree=new int[2*n];      // total node in  tree 2n-1, taking 1 as start pont
   
  buildTree(arr,tree,0,n-1,1);
  
  for(int i=1;i<2*n;i++){
   cout<<tree[i]<<" ";
   }
   
   cout<<"\nEnter index and value : ";
   int indx,value;
   cin>>indx>>value;
   cout<<"\nupdate new tree \n";
  updateTree(arr,tree,0,n-1,1,indx-1,value); 
  for(int i=1;i<2*n;i++){
   cout<<tree[i]<<" ";
   }
   cout<<"\nEnter range: ";
   int left,right;
   cin>>left>>right;
   cout<<"\n Querry \n";
   cout<<Querry(tree,0,4,1,left,right)<<"\n\n";
return 0;
}
