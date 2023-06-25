#include <stdio.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  int i;
  int checkSquare;
  scanf("%d",&n);
  for(i=0;i<=n;i++){
  if(i*i==n){
  checkSquare++;
  }
  }

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
   if(checkSquare==0){
   printf("Not Square");
   }else{
   printf("Square");
   }


  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}


