//add2,sub5,mul3,div6,mod8
/*#include<stdio.h>
int main(){
    int num,add,sub,mul,div,mod;
    printf("Enter a number : ");
    scanf("%d",&num);
    add=num+2;
    printf("Addition : %d\n",add);
    sub=num-5;
    printf("Subtraction : %d\n",sub);
    mul=num*3;
    printf("Multipication : %d\n",mul); 
    div=num/6;
    printf("Division : %d\n",div);
    mod=num%8;
    printf("Modulus : %d\n",mod);
    return 0;
}*/

//2 digit print 1s nd 10s digit
/*#include<stdio.h>
int main(){
    int num,o1,o2;
    printf("Enter a two digit number : ");
    scanf("%d",&num);
    o1=num%10;
    o2=num/10;
    printf("1s digit of %d is %d\n",num,o1);
    printf("10s digit of %d is %d\n",num,o2);
}*/

//3 digit
/*#include<stdio.h>
int main(){
    int num,o1,o2,o3,sp,sum;
    printf("Enter a three digit number : ");
    scanf("%d",&num);
    o1=num%10;
    sp=num/10;
    o2=sp%10;
    o3=sp/10;
    printf("1s digit of %d is %d\n",num,o1);
    printf("10s digit of %d is %d\n",num,o2);
    printf("100s digit of %d is %d\n",num,o3);
    sum=o1+o2+o3;
    printf("The sum of digit of %d is %d\n",num,sum);
}*/

//Reverse 3 and 2 digits
/*#include<stdio.h>
int main(){
    int num;
    printf("Enter a three digit number to perform reverse: ");
    scanf("%d",&num);
    while(num>0){
        printf("%d",num%10);
        num=num/10;
    }
    return 0;
}*/

//reverse last and first 2 digits
/*#include<stdio.h>
int main(){
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    int last2=num%100;
    int remaining=num/100;
    int reversed=(last2%10)*10+(last2/10);
    int result=(remaining*100)+reversed;
    printf("The answer is %d",result);
    return 0;
}*/

//reverse 1st 2 digit
/*#include<stdio.h>
int main(){
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    int last2=num%100;
    int remaining=num/100;
    int reversed=(remaining%10)*10+(remaining/10);
    int result=(reversed*100)+last2;
    printf("The answer is %d",result);
    return 0;
}*/

//last digit =0 for 2 digit num
/*#include<stdio.h>
void onez(int num){
    int o1=num%10;
    int o2=num/10;
    o1=0;
    int result1=(o2*10)+o1;
    printf("The result is %d\n",result1);
}
void tenz(int num){
    int o1=num%10;
    int o2=num/10;
    int o3=num/100;
    o2=1;
    int result1=(o3*100)+(o2*10)+o1;
    printf("The result is %d\n",result1);
}
void onz3(int num){
    int o1=num%10;
    int o2=num/10;
    o1=2;
    int result1=(o2*10)+o1;
    printf("The result is %d\n",result1);
}
void tenz3(int num){
    int o1=num%10;
    int o2=num/10;
    int o3=num/100;
    o2=0;
    int result1=(o3*100)+(o2*10)+o1;
    printf("The result is %d\n",result1);
}
int main(){
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    onez(num);
    tenz(num);
    onz3(num);
    tenz3(num);
    return 0;
}*/

//sub 5 and find if odd
/*#include<stdio.h>
void odd(){
    printf("The number is odd!");
}
void not(){
    printf("The number is even!");
}
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int result=a-5;
    printf("After subtracting the result is: %d\n",result);
    (result%2!=0)?(odd()):(not());
    return 0;
}*/

//sub 5 and if 10's digit is odd
/*#include<stdio.h>
void odd(){
    printf("The ten's number is odd!");
}
void not(){
    printf("The ten's number is even!");
}
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int result=a-5;
    int o1=result/10;
    printf("The result is: %d\n",o1);
    (o1%2!=0)?(odd()):(not());
    return 0;
}*/

//sub 5 and if their sum is odd
/*#include<stdio.h>
void odd(){
    printf("The sum is odd!");
}
void not(){
    printf("The sum is even!");
}
int main(){
    int a;
    printf("Enter a two digit number: ");
    scanf("%d",&a);
    int result=a-5;
    int o1=result/10;
    int o2=result%10;
    int sum=o1+o2;
    printf("The result is: %d\n",sum);
    (sum%2!=0)?(odd()):(not());
    return 0;
}*/

//sub 5 and if their 1's and 100's is same
/*#include<stdio.h>
void print(){
    printf("The digits are same!");
}
void not(){
    printf("The digits are not same!");
}
int main(){
    int a;
    printf("Enter a three digit number: ");
    scanf("%d",&a);
    int result=a-5;
    int o1=result%10;
    int sp=result/10;
    int o2=sp%10;
    int o3=sp/10;
    printf("The result is: %d\n",result);
    (o1==o3)?(print()):(not());
    return 0;
}*/

//sub 5 and if their 10's and 100's is same
/*#include<stdio.h>
void print(){
    printf("The digits are same!");
}
void not(){
    printf("The digits are not same!");
}
int main(){
    int a;
    printf("Enter a four digit number: ");
    scanf("%d",&a);
    int result=a-5;
    int o1=result%10;
    int sp1=result/10;
    int o2=sp1%10;
    int sp2=sp1/10;
    int o3=sp2%10;
    int o4=sp2/10;
    printf("The result is: %d\n",result);
    (o2==o3)?(print()):(not());
    return 0;
}*/

//3 digits sum 10
/*#include<stdio.h>
int main(){
    int a,o1,o2,o3,sp,sum;
    printf("Enter the three digit number: ");
    scanf("%d",&a);
    o1=a%10;
    sp=a/10;
    o2=sp%10;
    o3=sp/10;
    sum=o1+o2+o3;
    printf("The sum value is %d\n",sum);
    if(sum==10){
        printf("Success!");
    }
    else{
        printf("Failure!");
    }
    return 0;
}*/

//

