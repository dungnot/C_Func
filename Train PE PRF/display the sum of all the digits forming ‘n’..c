#include <stdio.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char c[100];
	int tong = 0, i, len;
	gets(c);
	len = strlen(c);
	for (i = 0; i < len; i++)
	{
		tong += ((int) c[i] - 48);
	}

  


  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
   printf("%d", tong);




  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}


