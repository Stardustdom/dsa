/*
In this we are going to be using division reminder method
collision resolving technique to be used: Linear probing

division reminder method:
h(k)=k mod m 

linear probing:
h(k,i)=[(h'(k)+i) mod m]
*/

#include <stdio.h>
#include <malloc.h>

int main(){
    int m,h,h1,i,k,j;
    printf("Enter the total no of slots: ");
    scanf("%d",&m);
    int *hash_table=(int*)malloc(m*sizeof(int));
    for (i=0;i<m;i++){
        hash_table[i]=-1;
    }
    for(i=0;i<m;i++){
        printf("Enter a key value: ");
        scanf("%d",&k);
        h=k%m;
        if(hash_table[h]==-1){
            hash_table[h]=k;
        }
        else{
            for(j=1;j<=m-1;j++){
                h1=(h+j)%m;
                if(hash_table[h1]==-1){
                    hash_table[h1]=k;
                    break;
                }
            }
        }
        for(k=0;k<m;k++){
        printf("Slot %d: %d\n",k,hash_table[k]);
    }
    
    }
}