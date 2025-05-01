#include<stdio.h>
//Q1
/*
int main(){
 
   printf("Size of Character Constant is %d",sizeof('A'));

}


//Q2
int main(){
 
    printf("Size of Real Constant is %d",sizeof(22.2));
 
 }
  


//Q3
int main(){
 char c1='A';

    printf("%c",++c1);
 
 }


//Q4
int main(){
   int a,b,temp;
   printf("Enter two numbers\n");
   scanf("%d %d",&a &b);
   printf("a=%d and b=%d",a,b);
   a=temp;
   a=b;
   b=temp;
   printf("a=%d and b=%d",a,b);


   
}


//Q5
int main(){
   int a,b;
   printf("Enter two numbers\n");
   scanf("%d %d",&a &b);
   printf("a=%d and b=%d",a,b);
   a=a+b;
   a=a-b
   b=a-b;
   printf("a=%d and b=%d",a,b);


   
}


//Q6
int main(){
   int a,b;
   printf("Enter two numbers\n");
   scanf("%d %d",&a &b);
   printf("a=%d and b=%d",a,b);
   a=a*b;
   a=a/b
   b=a/b;
   printf("a=%d and b=%d",a,b);


   
} 


//Q7
int main(){
   int a,b;
   printf("Enter two numbers\n");
   scanf("%d %d",&a &b);
   printf("a=%d and b=%d",a,b);
   a=a^b;
   a=a^b
   b=a^b;
   printf("a=%d and b=%d",a,b);
 
} 
*/


//Q8
int main(){
   int a,b;
   printf("Enter two numbers\n");
   scanf("%d %d",&a &b);
   printf("a=%d and b=%d",a,b);
   a = (a + b) - (b = a);
   printf("a=%d and b=%d",a,b);
 
} 