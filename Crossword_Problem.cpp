#include<bits/stdc++.h>
using namespace std;
#define N 10
                  // check this code again
void printmatrix(char matrix[][N]){   // all names are filled so print matrix
 for(int i=0;i<N;i++){
  	 for(int j=0;j<N;j++){
  	 	cout<<matrix[i][j];
  	 	}
  	 	cout<<endl;
   	}
  return; // to break execution
}

void resetHorizontal(char matrix[][N],vector<bool>&helper,int row,int col,string reset_word){
  int val=0;
 for(int i=col;i<N && i<col+reset_word.size() ;i++){
  	if(helper[val]==true){
  	   matrix[row][i]='-';      // we have filled it wrongly so vacate it
  	   val++;
  	 }
  	 else{
  	       val++;      // already some char so no need to vacate
  	   }
     }
}

void setHorizontal(char matrix[][N],vector<bool>&helper,string set_word,int row,int col){
   int val=0;
   for(int i=col;i<N && i<col+set_word.size() ;i++){
   	 if(matrix[row][i]=='-'){
   	 	matrix[row][i]=set_word[val];
   	 	helper.push_back(true);
   	 	}
   	  else if(matrix[row][i]==set_word[val]){
   	  	helper.push_back(false);
   	  	}
   	  val++;
   	}
}

bool isValidHorizontal(char matrix[][N],string check_word,int row,int col){
	int val=0;
	for(int i=col;i<N;i++){
		if((matrix[row][i]==check_word[val])||(matrix[i][col]=='-')){
		    val++;
		 }
		 else{
		     break;
		   }
	  }
	 if(val==check_word.length()){
	    return true;
	  }
          else{
              return false;
           }
 }
 
 
void resetVertical(char matrix[][N],vector<bool>&helper,int row,int col,string reset_word){
  int val=0;
 for(int i=row;i<N && i<row+reset_word.size() ;i++){
  	if(helper[val]==true){
  	   matrix[i][col]='-';      // we have filled it wrongly so vacate it
  	   val++;
  	 }
  	 else{
  	       val++;      // already some char so no need to vacate
  	   }
     }
}

void setVertical(char matrix[][N],vector<bool>&helper,string set_word,int row,int col){
   int val=0;
   for(int i=row;i<N && i<row+set_word.size();i++){
   	 if(matrix[i][col]=='-'){
   	 	matrix[i][col]=set_word[val];
   	 	helper.push_back(true);
   	 	}
   	  else if(matrix[i][col]==set_word[val]){
   	  	helper.push_back(false);
   	  	}
   	  val++;
   	}
}

bool isValidVertical(char matrix[][N],string check_word,int row,int col){
	int val=0;
	for(int i=row;i<N && i<check_word.size();i++){
		if((matrix[i][col]==check_word[val])||(matrix[i][col]=='-')){
		    val++;
		 }
		 
		else{
		   break;
		}
	}
	if(val==check_word.length()){
	    return true;
	  }
         else{
              return false;
           }
}

void crossword(char matrix[][N],vector<string>word,int index){
   if(index==word.size()){
	printmatrix(matrix);
	return;
    }
    for(int i=0;i<N;i++){
	   for(int j=0;j<N;j++){
	   	 if(matrix[i][j]=='-'||matrix[i][j]==word[index][0])
		     {
		       if(isValidVertical(matrix,word[index],i,j)){
		             vector<bool>helper;    // to get which all position we filled char
			     setVertical(matrix,helper,word[index],i,j);
			     crossword(matrix,word,index+1);
			     resetVertical(matrix,helper,i,j,word[index]);
		  	     
		  	   		  	       
			   }
			   
		        if(isValidHorizontal(matrix,word[index],i,j)){
		   	      vector<bool>helper;    // to get which all position we filled char
		  	      setHorizontal(matrix,helper,word[index],i,j);
		  	      crossword(matrix,word,index+1);
		  	      resetHorizontal(matrix,helper,i,j,word[index]);
			
			  
		             }
		
		     }
	         }	 
        }

}


int main()
{
char matrix[N][N];

for(int i=0;i<N;i++){
	for(int j=0;j<N;j++){
		cin>>matrix[i][j];
		}	
	}
	
 cnt=0;
 /*
 string st,temp;
 vector<string>vect;
 getline(cin, st); 
 stringstream X(st);    //X is stringstream object to take hole string as input
 while (getline(X, temp, ';')) {     // temp is used for storing temporary string value end with ;  
	vect.push_back(temp);
	cnt++;
    }
    
    
    */
    
    vector<string> words; 
    string s,temp;
    cin>>s;
    int i=0,j=0;
    while(s[j]!='\0'){
        if(s[j]==';'){
            words.push_back(s.substr(i,j-i));
            i=j+1;
        }
        j++;
    }
    words.push_back(s.substr(i,j-i));
crossword(matrix,words,0);    
return 0;
    
}

