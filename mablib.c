#include <stdio.h>
#include <string.h>
int main (){
char noun[100] = "" ;
char pornstar[100] = "" ;
char anchor[100] = "" ;
char place[100] = "" ;
printf("Enter a noun: ");
fgets(noun, sizeof(noun), stdin) ;
noun[strlen(noun) - 1] = '\0' ;
printf("enter your favourite pornstar: ");

fgets(pornstar, sizeof(pornstar), stdin);
pornstar[strlen(pornstar) - 1] = '\0' ;
printf("enter you favourite place : ");
fgets(place,sizeof(place), stdin);
printf("enter the name of daughter of modi: ");
fgets(anchor,sizeof(anchor), stdin);

printf(" i went to zoo and saw %s ", anchor);
printf("%s was dancing at the %s", pornstar, place);
return 0

}