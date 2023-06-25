#include <stdio.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n,i;
  scanf("%d",&n);
  int checkPrime=1;
  for(i=2;i<=n-1;i++){
  if(n%i==0)
  checkPrime=0;
  }
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
   if(checkPrime==1){
   printf("Not Prime");
   }else{
   if(checkPrime==0)
   printf("Prime");
   }
   

  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}


