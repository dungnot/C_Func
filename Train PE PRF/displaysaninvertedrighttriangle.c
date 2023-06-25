#include <stdio.h>
/*   
                     *
                     **
                     ***
                     ****
                     *****
          for(i=1;i<=n;i++){
		  //hien thi 1 dong
		  for(j=1;j<=i;j++){
		  printf("*");
		  }
		  printf("\n");
		  }
*****                     
 ****                     
  ***                     
   **                     
    *                     
*/
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int i, n, j, k;
	scanf("%d", &n);



  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
   for (i = n; i >= 1; i--)
	{
		for (j = n - i; j > 0; j--)
		{
			printf(" ");
		}
		for (k = i; k > 0; k--)
		{
			printf("*");
		}
		printf("\n");
	}

  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}


