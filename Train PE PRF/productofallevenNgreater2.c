#include <stdio.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n,i;
	scanf("%d", &n);
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	int prod = 1;
	for ( i = 2; i <= n / 2; i++)		{
		if (i % 2 == 0)
		{
			prod = prod * i;
		}
	}
   printf("%d", prod);




  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}


