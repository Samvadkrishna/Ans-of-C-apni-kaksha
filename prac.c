#include <stdio.h>

// int main(){
// int x;
// printf("Entre the Marks of Student:");
// scanf("%d",&x);
// if (x>=91 && x<=100){
//     printf("your grade is A");
// }
// else if (x>=81 && x<=90){
//     printf("your grade is B");
// }
// else if (x>=71 && x<=80){
//     printf("your grade is C");
// }
// else{
//     printf("discallified");
// }
// return 0;
// }
// int main(){
// int x;
// printf("Entre the Age of Student:");
// scanf("%d",&x);
// x>=18?printf("Legal"):printf("not legal");
// return 0;
// }

// int main(){
// int x;
// printf("Entre the Day(1-7):");
// scanf("%d",&x);
// switch (x){
//     case 1:printf("Monday");
//         // break;
//     case 2:printf("Tuesday");
//         // break;
//     case 3:printf("Wednesday");
//         // break;
//     case 4:printf("Thusday");
//         break;
//     case 5:printf("Friday");
//         // break;
//     case 6:printf("Saturday");
//         // break;
//     case 7:printf("Sunday");
//         break;
//     default:printf("Out");
// }
// return 0;
// }

// int main(){
//     int i;
//     for(i=1;i<=20;i+=1){
//         printf("%d \n",i);
//     }
//     int a;
//     for(a=20;a>=1;a-=1){
//         printf("%d \n",a);
//     }
// }

// int main(){
//     int i;
//     printf("Entre the no. ");
//     scanf("%d", &i);
//     while(i<=10){
//         printf("Hello World \n");
//         i++;
//     }
// }
// int main(){
//     int i=1;
//     do {
//         printf("%d \n",i);
//         i++;

//     }while (i<1);

// }

// void printHello();

// int main(){
//     printHello();
//     printHello();
//     printHello();
//     printHello();
//     printHello();
//     return 0;
// }

// void printHello(){
//     printf("Hello! Samvad \n");
//     printf("How Are you \n");
// }

// void printTable();

// int main(){
//     int n;
//     printf("Entre Number :");
//     scanf("%d", &n);

//     printTable(n);

//     return 0;

// }

// void printTable(int n){
//     for(int i=1;i<=10;i++){
//         printf("%d * ",n);
//         printf("%d = ",i);
//         printf("%d \n",n*i);
//     }
// }

// void printBill(float n);

// int main(){
//     float n;
//     printf("Entre the bill amount:  ");
//     scanf("%f", &n);
//     printBill(n);
//     return 0;
// }

// void printBill(float n){
//     printf("Base Amount : %f \n",n);
//     printf("GST: %f \n",n*0.18);
//     printf("Net Total: %f \n",n+(n*0.18));
// }

///??Homework chapter 5

// #include<math.h>

// int s_qrt(int n);
// int main(){
//     int a;
//     printf("Entre the no.");
//     scanf("%d", &a);
//     printf("Square root of n is %d",s_qrt(a));
// }
// int s_qrt(int n){
//     float x=pow(n,0.5);
//     return x;
// }

// int temp(float n);
// int main() {
//     int a;
//     printf("Entre the no.");
//     scanf("%d", &a);
//     temp(a);

// }
// int temp(float n){
//     if ( n>=20){
//         printf("Garam hai Garam hai!!!");
//     }
//     else{
//         printf("Thanda hai thanda hai!!!");
//     }

// }

// int sumToN(int n);

// int main(){
//     int x;
//     printf("Entre the Value");
//     scanf("%d", &x);
//     printf("Sum of n natural no. %d",sumToN(x));
// }

// int sumToN(int n){
//     if (n==1){
//         return 1;
//     }
//     int sum=n+sumToN(n-1);
// }

// float factor(float n);

// float main(){
// float x;
//     printf("Entre the no.");
//     scanf("%f", &x);
//     printf("the factorial of that no is %f",factor(x));

// }

// float factor(float n){
//     if (n==0 || n==1){
//         return 1;
//     }
//     float fact=n*factor(n-1);
// }

// int main(){
//     int age = 22;
//     int *ptr= &age;
//     // int _age=*ptr;
//     // printf("the no. is %d \n",_age);
//     // printf("the no. is %p",ptr);
//     printf("the add. of age is %p",&age);
//     printf("the add. of age is %u",ptr);

// }

// int main(){
//     int i;
//     int *ptr=&i;
//     int **ptr1=&ptr;

//     printf("entre the value  ");
//     scanf("%d", &i);
//     printf("%d \n",**ptr1);

// }

// int main(){
//     int i
// }

