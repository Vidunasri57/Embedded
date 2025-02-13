//calculator using switch and functions
/*#include <stdio.h>
int calc(){
    int a,b,r,choice;
    printf("Enter two numbers: ");
    scanf("%d %d",&a, &b);
    printf("Calculations \n 1)Addition\n 2)Subtraction\n 3)Multiplication\n 4)Division\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        r=a+b;
        printf("Addition value is %d",r);
        break;
        case 2:
        r=a-b;
        printf("Subtraction value is %d",r);
        break;
        case 3:
        r=a*b;
        printf("Multiplication value is %d",r);
        break;
        case 4:
        r=a/b;
        printf("Division value is %f",r);
        break;
        default:
        printf("Error!"); 
    }
}
int main(){
    calc();
    return 0;
}*/

//sum of n digits using function
/*#include<stdio.h>
int ans(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("The resultant answer is: %d",sum);
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    ans(n);
}*/

//leap year
/*#include<stdio.h>
int main(){
    int yr;
    printf("Enter the year: ");
    scanf("%d",&yr);
    if(yr%400==0){
        printf("The %d year is leap year",yr);
    }
    else if (yr%100 == 0) {
        printf("%d is not a leap year.", yr);
     }
     else if (yr%4 == 0) {
        printf("%d is a leap year.", yr);
     }
    else{
        printf("The %d year is not leap year",yr);
    }
    return 0;
}*/

//to find prime or not
/*#include<stdio.h>
int prime(int n){
    if(n<=1){
        printf("The number %d is not a prime!",n);
    }
    else {
        int count= 0;
        for(int i=1;i<=n;i++){
           if(n%i==0){
            count++;}         
        }
    if(count>2){
        printf("The number %d is not a prime!",n);
    }
    else{
        printf("The number %d is prime!",n);
    }
    }
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    prime(n);
}*/

//factorial ERROR!!!
/*#include<stdio.h>
#include<conio.h>
int fact(int n){
    int facto;
    if(n<=1){
        printf("The factorial value is 1!");
    }
    else{
        int factorial=1;
        for(int i=1;i<=n;i++){
            facto = n*factorial*(n-1);
        }
    }
    printf("The factorial of %d is: %d",n,facto);
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    fact(n);
}*/

//printing patterns
/*#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter the number of rows: ");
    scanf("%d",&n1);
    printf("Enter the number of columns: ");
    scanf("%d",&n2);
    for(int i=1;i<=n1;i++){
        for(int j=1;j<=n2;j++){
            printf(" 1 ");
        }

        printf("\n");
    }
    return 0;
}*/

//another to print numbers
/*#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter the number of rows: ");
    scanf("%d",&n1);
    printf("Enter the number of columns: ");
    scanf("%d",&n2);
    for(int i=1;i<=n1;i++){
        for(int j=1;j<=n2;j++){
            printf(" %d ",j);
        }
        printf("\n");
    }
    return 0;
}*/

//code2
/*#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter the number of rows: ");
    scanf("%d",&n1);
    printf("Enter the number of columns: ");
    scanf("%d",&n2);
    for(int i=1;i<=n2;i++){
        for(int j=1;j<=n1;j++){
            printf(" %d ",i);
        }
        printf("\n");
    }
    return 0;
}*/

//
#include<stdio.h>
int main(){
    int a, count=0;
    printf("enter the num: ");
    scanf("%d",&a);
    while(a>0){
        printf("%d",a%10);
        a=a/10;
        count++;
    }
    printf("\nThe number of digits: %d",count);
    return 0;
}

