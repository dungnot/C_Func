#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// DE BAI: Kiem tra so nguyen to

int nt(int n) // Ham kiem tra nguyen to
{
	int i;
	for(i=2; i<sqrt(n); i++)
	{
		if(n%i == 0)
			return 0;
	}
	if(n > 1)
		return 1;
	return 0;
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  scanf("%d",&n); // Nhap vao n
  
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

if(nt(n) == 0) // Kiem tra va in theo mau de bai
	printf("%d is not a prime number",n);
else
	printf("0x%X",n);




  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
