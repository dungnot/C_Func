#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// DE BAI: Nhap vao 1 day, in ra phan tu la so chan va xuat hien nhieu lan (tu 2 do len)

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n,i,j,k;
	scanf("%d",&n); // Nhap vao n
	int a[n],b[1000]={0};
	for(i=0; i<n; i++) 
		scanf("%d",&a[i]); // Nhap vao day n so
	for(i=0; i<n; i++)
	{
		b[a[i]] = 1;
		for(j=i+1; j<n; j++)
		{
			if(a[i] == a[j])
			{
				for(k=j; k<n; k++) // Luu gia tri xuat hien nhieu lan
                {
                    a[k] = a[k + 1];
                }
                n--;
                j--;
                b[a[i]] ++;
			}
		}
	}
  
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(i=0; i<n; i++)
	{
		if(a[i]%2 == 0 && b[a[i]] > 1)
			printf("%d\n",a[i]); // In ra theo yeu cau de bai
	}
	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}


