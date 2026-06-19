#include <stdio.h>
#include <math.h>

int main(){
    double principal = 0 ;
    double rate = 0.0 ;
    int year = 0;
    int timescompounds = 0;
    double total = 0.0;
    printf("this is a compound interest calculator\n");
    printf("enter the principal :");
    scanf("%lf", &principal);
printf("enter the  rate:");
scanf("%lf", &rate);
rate = rate / 100 ;

printf("enter the no of year: ");
scanf("%d", &year);
printf("enter times compund per year : ");
scanf("%d", &timescompounds);
total = principal*(pow(1 + rate / timescompounds, timescompounds*year));
printf("total amount recieved : %lf", total);


}