#include <stdio.h>
#include <stdlib.h>

int n;//no of disks

//the three pegs of tower of hanoi
char topeg;//destination peg
char frompeg;//source peg
char auxpeg;//auxilliary peg

//to check if input pegs are valid
void checkpeg(char topeg, char frompeg){
    
if(topeg=='a'){
        if(frompeg=='b'){
            auxpeg='c';
    }
        else if(frompeg=='c'){
        auxpeg='b';
        }
        else{
            printf("Invalid input\n");
            exit(0);
        }
    }
    else if(topeg=='b'){
        if(frompeg=='a'){
            auxpeg='c';
        }
        else if (frompeg=='c'){
            auxpeg='a';
        }
        else{
            printf("Invalid input\n");
            exit(0);
        }
    }
    else if (topeg=='c'){
        if(frompeg=='a'){
            auxpeg='b';
        }
        else if(frompeg=='b'){
            auxpeg='a';
        }
        else{
            printf("Invalid input\n");
            exit(0);
        }
    }
    else{
            printf("Invalid input\n");
            exit(0);
        }
}

//tower operation with recursion
void tower(int a,char from,char aux,char to){
    if(a==1){
       printf("\nMove disc 1 from %c to %c",from,to);
       return;
    }
    else{
       tower(a-1,from,to,aux);
       printf("\nMove disc %d from %c to %c",a,from,to);
       tower(a-1,aux,from,to);
    }
}
 
//step calculator
int count(int a){
    if(a==1)
    return 1;
    else
    return 2*count(a-1)+1;
}

int main(){
    printf("Enter the number of disks: ");
    scanf("%d",&n);
    printf("Three pegs of the Tower of Hanoi are named a,b,c.\n Enter the source peg: ");
    scanf(" %c",&frompeg);
    printf("\n Enter the destination peg: ");
    scanf(" %c",&topeg);
    checkpeg(topeg,frompeg);
    tower(n,frompeg,auxpeg,topeg);
    printf("Number of steps required: %d", count(n));
    return 0;
}