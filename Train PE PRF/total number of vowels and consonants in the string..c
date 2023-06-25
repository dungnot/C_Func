#include <stdio.h>
#include <string.h>
int main(){
char st[100];
gets(st);
int i;
int vowels=0,consonants=0;
while(st[i] != '\0') {
if(st[i] == 'u' || st[i] == 'e' || st[i] == 'a' || st[i] == 'o' || st[i] == 'i' )
vowels=vowels+st[i];
else
consonants=consonants+st[i];
}
printf("\n%d",vowels);
printf("\n%d",consonants);
}
