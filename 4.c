#include <stdio.h>
#include <string.h>

int main(void)
{
char input[30]; 
int i;
int x;
x=0;

printf("please enter a word: \n");
scanf("%29s", input);
i=strlen(input);

while (x < i)
{
 x++;
}
 printf("Number of letters in input is %d", x);


return 0;
}
