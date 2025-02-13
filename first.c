//to find ascii value of an character
/*#include<stdio.h>
int main(){
    char all;
    printf("Enter a character: ");
    scanf("%c",&all);
    printf("The ascii value is %d",all);
    return 0;
}*/

//multiply two float values
/*#include<stdio.h>
int main(){
    float n1=3.14,n2=12.4,result;
    result= n1*n2;
    printf("result is %f",result);
    return 0;
}*/

//farenheit to celsius
/*#include<stdio.h>
int main(){
    float f,c;
    printf("Enter farenheit value : ");
    scanf("%f",&f);
    c=(((f-32)*5)/9);
    printf("The celsius value is %f",c);
    return 0;
}*/

//find the size of int,float,double and char
/*#include<stdio.h>
int main(){
    printf("The size of character is %d\n", sizeof (char));
    printf("The size of integer is %d\n", sizeof (int));
    printf("The size of float is %d\n", sizeof (float));
    printf("The size of double is %d\n", sizeof (double));
    return 0;
}*/

//swap two numbers without temp var
/*#include<stdio.h>
int main(){
    int v1=2,v2=5;
    printf("Before swapping : %d %d\n",v1,v2);
    v1= v1+v2;
    v2= v1-v2;
    v1= v1-v2;
    printf("After swapping : %d %d",v1,v2);
    return 0;
}*/

//if and else
/*#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a>=0){
        printf("The number is positive!");
    }
    else{
        printf("The number is negative!");
    }
    return 0;
}*/

//even or odd
/*#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a%2==0){
        printf("The number is Even!");
    }
    else{
        printf("The number is Odd");
    }
    return 0;
}*/

//character is alphabet or not
/*#include<stdio.h>
int main(){
    char al;
    printf("Enter a character: ");
    scanf("%c",&al);
    if(al>='a' && al<='z' || al>='A' && al<='Z'){
        printf("The character is alphabet");
    }
    else{
        printf("The character is not an alphabet");
    }
    return 0;
}*/

//largest of three num
/*#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three Integers : ");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c){
        printf("%d is greater",a);
    }
    else if(b>c){
        printf("%d is greater",b);
    }
    else{
        printf("%d is greater",c);
    }
    return 0;
}*/

//divisible by 5 or 3 or both
/*#include<stdio.h>
int main(){
    int a;
    printf("Enter a positive number:");
    scanf("%d",&a);
    if(a%5==0 && a%3==0){
        printf("The number is divisible by 5 and 3");
    }
    else if(a%5==0){
        printf("The number is divisible by 5");
    }
    else if(a%3==0){
        printf("The number is divisible by 3");
    }
    else{
        printf("The number is not divisible by both 5 and 3");
    }
    return 0;
}*/

//ternary operator
/*#include<stdio.h>
int main(){
    int a,b,re;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    re=(a>b)?a:b;
    printf("Greatest number is %d",re);
    return 0;
}*/

//switch statement
/*#include<stdio.h>
int main(){
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
    return 0;
}*/

//days of week
/*#include<stdio.h>
int main(){
    int num;
    printf("Enter a number(1 to 7) : ");
    scanf("%d",&num);
    switch(num){
        case 1:
        printf("The equivalent day for %d is Sunday",num);
        break;
        case 2:
        printf("The equivalent day for %d is Monday",num);
        break;
        case 3:
        printf("The equivalent day for %d is Tuesday",num);
        break;
        case 4:
        printf("The equivalent day for %d is Wednesday",num);
        break;
        case 5:
        printf("The equivalent day for %d is Thursday",num);
        break;
        case 6:
        printf("The equivalent day for %d is Friday",num);
        break;
        case 7:
        printf("The equivalent day for %d is Saturday",num);
        break;
        default:
        printf("Invalid!!!");
    }
    return 0;
}*/

//looping statements
/*#include<stdio.h>
int main(){
    char ch;
    printf("Enter an alphabet to start the flow: ");
    scanf("%c",&ch);
    for(int i=ch;i<=90;i++){
        printf("%c\n",i);
    }
    return 0;
}*/

//while
/*#include<stdio.h>
int main(){
    int i=0;
    while(i<10){
        printf("%d\n",i);
        i++;
    }
    return 0;
}*/

//do-while
/*#include<stdio.h>
int main(){
    int i=1;
    do{
        printf("Vanakkam");
        i++;
    }while(i<4);
    return 0;
}*/

//sum of n even natural numbers
/*#include<stdio.h>
int main(){
    int a,result=0;
    printf("Enter the value: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        if(i%2==0){
            result=result+i;
        }
    }
    printf("The required sum is: %d",result);
    return 0;
}*/

//seperate the didgits
/*#include<stdio.h>
int main(){
    int a,o1,o2,o3,sp;
    printf("Enter the digit to be seperated: ");
    scanf("%d",&a);
    o1=a%10;
    sp=a/10;
    o2=sp%10;
    o3=sp/10;
    printf("The one's digit is: %d\n",o1);
    printf("The ten's digit is: %d\n",o2);
    printf("The hundred's digit is: %d\n",o3);
    return 0;
}*/

//reverse the given digit
/*#include<stdio.h>
int main(){
    int a,o1,o2,o3,sp1,sum,sp2,sp3;
    printf("Enter the number to be reversed: ");
    scanf("%d",&a);
    sp1=a%10;
    o1=sp1*100;
    sp2=a/10;
    sp3=sp2%10;
    o2=sp3*10;
    o3=(sp2/10)*1;
    printf("The hundred's digit is: %d\n",sp1);
    printf("The ten's digit is: %d\n",sp3);
    printf("The one's digit is: %d\n",o3);
    sum=o1+o2+o3;
    printf("The sum of the reversed digit is: %d",sum);
    return 0;
}*/

//to find the number of digits and reverse value
/*#include<stdio.h>
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
}*/

//power value
/*#include<stdio.h>
int main(){
    int val,pow,result=1;
    printf("Enter the value to be powered: ");
    scanf("%d",&val);
    printf("Enter the power value: ");
    scanf("%d",&pow);
    while(pow>0){
        result=result*val;
        pow--;
    }
    printf("The final value is %d",result);
    return 0;
}*/

//functions
/*#include<stdio.h>
int add();
int sub();
int main(){
    int a,b;
    printf("Enter two Integers : ");
    scanf("%d %d",&a,&b);
    int re1=add(a,b);
    int re2=sub(a,b);
    printf("The result of Addition is %d\n",re1);
    printf("The result of Subtraction is %d",re2);
    return 0;
}
int add(int x,int y){
    int c=x+y;
    return c;
}
int sub(int x,int y){
    int c=x-y;
    return c;
}*/

//natural number function
/*#include<stdio.h>
int nature(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int re=nature(num);
    printf("Sum is %d",re);
    return 0;
}*/

//functions
#include<stdio.h>
int main(){
    int arr[10];
    //to store the data
    for(int i=0;i<10;i++){
        printf("Enter the value of index %d :",i);
        scanf("%d",&arr[i]);
    }
    printf("The data of indices is\n");
    //to retrieve the data
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}