#include <stdio.h>
int main(void) {
int T;
scanf("%d",&T);
	while(T!=0){
	  int N,R_P,days,cnt=0,RO;
	  scanf("%d %d %d",&N,&R_P,&days);
	  int A[N],tp=0;
	    for(int i=1;i<=N;i++){
	        scanf("%d",&A[i]);}
	    for(int i=1;i<=N;i++){
	        tp=tp+A[i];}
	      RO=tp/R_P;
          if(RO<=0){
            printf("0");}
          else if(RO>=days){
            printf("days");}
          else{
            while(RO!=0){
              RO--;
              cnt++;}
              printf("%d",cnt);}
	  T--;}
	return 0;}

/*Chef wants to host some Division-3 contests. Chef has N setters who are busy creating new problems for him. The ith setter has made Ai problems where 1≤i≤N.

A Division-3 contest should have exactly K problems. Chef wants to plan for the next D days using the problems that they have currently. But Chef cannot host more than one Division-3 contest in a day.

Given these constraints, can you help Chef find the maximum number of Division-3 contests that can be hosted in these D days?
*/
