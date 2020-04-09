// S and T - input strings
// You need to check if string T is present in S or not

int findString(char S[], char T[]) {
    // Write your code here
    int sI = -1;
    int tI = 0;
    int lenS = 0;
    int lenT = 0;
    for(int i=0;S[i]!=0;i++)
        lenS++;
    for(int i=0;T[i]!=0;i++)
        lenT++;
    for(int i=0;i<lenS;i++){
        if(S[i]==T[tI]){
            int match = 1;
            for(int j=1;j<lenT;j++){
                if(S[i+j]==T[j])
                    match++;
            }
            if(match==lenT){
                sI = i;
                goto A;
            }
        }
    }
    A:
    return sI;
}
