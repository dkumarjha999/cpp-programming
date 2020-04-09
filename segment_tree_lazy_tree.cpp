#include<bits/stdc++.h>
using namespace std;

void buildTree(int *arr,int *tree,int start,int end,int tree_index){
 if(start==end){
   tree[tree_index]=arr[start];
   return;
   }
  int mid=(start+end)/2;
  buildTree(arr,tree,start,mid,2*tree_index);  // left child of tree node
  buildTree(arr,tree,mid+1,end,2*tree_index+1);
  tree[tree_index]=min(tree[2*tree_index],tree[2*tree_index+1]);
  return;
   }
 
 void updateSegmentLazyTree(int *tree,int* lazy,int start,int end,int treeIndex,int stR,int enR,int inR)
  {
  if(start>end){
    return ;
    }
    
   if(lazy[treeIndex]!=0){            // agr lazy pe kuch hai to segment tree us value se update hoga 
     tree[treeIndex]+=lazy[treeIndex];
     
     if(start!=end){             // ie this is not leaf node so update lazy child node value too
     
       lazy[2*treeIndex]+=lazy[treeIndex];
       lazy[2*treeIndex+1]+=lazy[treeIndex];
       }
      lazy[treeIndex]=0;    // ye value use ho gya so isko 0 bna diya 
    }
     
    if(stR>end || enR<start){      // no overlap
       return ;
      }
    
   if(stR<=start && end<=enR){         // complete overlap
       tree[treeIndex]+=inR;
       if(start!=end){
         lazy[2*treeIndex]+=inR;
         lazy[2*treeIndex+1]+=inR;
        }
       return; 
     }
      
    //otherwise partial overlap 
    
   int mid=(start+end)/2;
   
   updateSegmentLazyTree(tree,lazy,start,mid,2*treeIndex,stR,enR,inR);
   updateSegmentLazyTree(tree,lazy,mid+1,end,2*treeIndex+1,stR,enR,inR); 
   
   tree[treeIndex]=min(tree[2*treeIndex],tree[2*treeIndex+1]);
  
  }
  
int queryInRange(int *tree,int* lazy,int start, int end, int treeIndex,int stR,int enR){ 
   
   
    
   if(lazy[treeIndex]!=0){            // agr lazy pe kuch hai to segment tree us value se update hoga 
      tree[treeIndex]+=lazy[treeIndex];
     
     if(start!=end){             // ie this is not leaf node so update lazy child node value too
     
       lazy[2*treeIndex]+=lazy[treeIndex];
       lazy[2*treeIndex+1]+=lazy[treeIndex];
       }
      lazy[treeIndex]=0;    // ye value use ho gya so isko 0 bna diya 
    }
     
    if(stR>end || enR<start){      // no overlap out of range 
       return INT_MAX;
      }
    
   if(stR<=start && end<=enR){         // complete overlap completely in range 
       return tree[treeIndex]; 
     }
      
    //otherwise partial overlap 
    
   int mid=(start+end)/2;
   
   queryInRange(tree,lazy,start,mid,2*treeIndex,stR,enR);
   queryInRange(tree,lazy,mid+1,end,2*treeIndex+1,stR,enR); 
   
   tree[treeIndex]=min(tree[2*treeIndex],tree[2*treeIndex+1]);
    
   return tree[treeIndex]; 
  }
  

  
  
int main()
{
  int n; 
  cin>>n;
  int * arr=new int[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
    }
  int *tree=new int[4*n];
  buildTree(arr,tree,0,n-1,1);  
  for(int i=1;i<4*n;i++){
    cout<<tree[i]<<endl;
    }
  int *lazy=new int[4*n]();              // () with this means all node of lazy tree will be initialized with 0
  
  
  int stR,enR,inR;           // stR start range like wise enR end range and inR means increment
  cin>>stR>>enR>>inR;  
  updateSegmentLazyTree(tree,lazy,0,n-1,1,stR,enR,inR);
  
   cout<<"\ntree \n\n";
   for(int i=1;i<4*n;i++){
    cout<<tree[i]<<endl;
    }
    cout<<"\n lazy \n\n";
    
   for(int i=1;i<4*n;i++){
    cout<<lazy[i]<<endl;
    }
    
    cout<<"\n\n";
  cin>>stR>>enR>>inR; 
  updateSegmentLazyTree(tree,lazy,0,n-1,1,stR,enR,inR);  
    cout<<"\ntree \n\n";
   for(int i=1;i<4*n;i++){
    cout<<tree[i]<<endl;
    }
    cout<<"\n lazy \n\n";
    
   for(int i=1;i<4*n;i++){
    cout<<lazy[i]<<endl;
    }
    cout<<"\n\n";
    
 cin>>stR>>enR;    
 cout<<queryInRange(tree,lazy,0,n-1,1,stR,enR)<<endl;
 
   cout<<"\ntree \n\n";
   for(int i=1;i<4*n;i++){
    cout<<tree[i]<<endl;
    }
    cout<<"\n lazy \n\n";
    
   for(int i=1;i<4*n;i++){
    cout<<lazy[i]<<endl;
    }
    cout<<"\n\n";
    
    
    
return 0;
}
