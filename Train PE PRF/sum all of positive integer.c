#include <stdio.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
 int n;
 scanf("%d",&n);
 int i;
 int sum=0;


  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(i=0;i<=n;i++){
  if(i<=n)
  sum+=i;
  }
  printf("%d",sum);

  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

