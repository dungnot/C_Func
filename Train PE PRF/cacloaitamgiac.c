#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int i,j;
/*
*
**
***
****
*****

for(i=1;i<=n;i++){
for(j=1;j<=i;i++)
printf("*");
}
printf("\n");
*/

/*
*****
****
***
**
*

for(i=1;i<=n;i++){
for(j=1;j<=n+1-i;j++)
printf("*");
}
printf("\n");

/*
    *
   **
  ***
 ****
*****

for(i=1;i<=n;i++){
for(j=1;j<=n;j++)
if(j<=n-i){
printf(" ");
}else{
printf("*");
}
printf("\n");
}  
}      
*/
for(i=1;i<=n;i++){
for(j=1;j<=n;j++)
if(j<i){
printf(" ");
}else{
printf("*");
}
printf("\n");
}  
}      

