#include <stdio.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
 int a,b,c,d;
 scanf("%d %d %d %d",&a,&b,&c,&d);
 int i;
 int max=0;


  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if(max<a)
  max=a;
  if(max<b)
  max=b;
  if(max<c)
  max=c;
  if(max<d)
  max=d;
  
  printf("%d",max);

  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

