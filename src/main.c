
#include <stdio.h>
#include "espl_lib.h"

int main(void)
{

char h;
int n;
int i=1;

while(i==1){
printf("Write a number : \n");
scanf("%d", &n);
printf("%s\n", num_to_words(n));
printf("Wanna play again write r , to quit write q : \n" );
h = getchar();
scanf("%c",&h);
if ( h == 'q') i =0;
}
}