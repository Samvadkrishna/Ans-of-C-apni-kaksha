#include<stdio.h>

// int main() {
//     float x,y,z;
//     printf("Entre the 1st no. ");
//     scanf("%f",&x);
//     printf("Entre the 2nd no. ");
//     scanf("%f",&y);
//     printf("Entre the 3rd no. ");
//     scanf("%f",&z);
//     printf("Average of Three No. is %f",(x+y+z)/3);
//     return 0;
// }


// int main(){
// char x;
// printf("Entre the ch. ");
// scanf("%c",&x);
// printf("If ans is 1 the is a number and if 0 it is a ch : %d \n", (x>='0' && x<='9'));
// return 0;
// }


//////// Ques.:W.a.p to find student is pass or fail?


// int main(){
//     int x;
//     printf("entre your marks: ");
//     scanf("%d",&x);
//     if (x>=30){
//         printf("Pass \n");
//         if(x>=91 && x<=100){
//             printf("Grade A");
//         }
//         else if(x>=81 && x<=90){
//             printf("Grade B");
//         }
//         else if(x>=71 && x<=80){
//             printf("Grade C");
//         }
//         else if(x>=61 && x<=70){
//             printf("Grade D");
//         }
//         else{
//             printf("But Need Improvement");
//         }
//     }
//     else{
//         printf("Fail Fail Fail Fail");
//     }
// }
// int main(){
//     int x;
//     printf("entre your marks: ");
//     scanf("%d",&x);
// x>=30?printf("Pass \n"):printf("Fail Fail Fail Fail");  
// }

// int main(){
//     char ch;
//     printf("entre the Charachter(a-z): ");
//     scanf("%c", &ch);

//     if (ch>='a'&& ch<='z'){
//         printf("Lowercase");
//     }
//     else if(ch>='A'&& ch<='Z'){
//         printf("Uppercase");
//     }
//     else{
//         printf("Not found");
//     }
//     return 0;
// }

// Practice Qs 13:

// int main(){
//     int i;
//     for(i=0;i<=10;i+=1){
//         printf("%d ",i);
//     }
// }

// Practice Qs 14:

// for loop:
// int main(){
//     int i,a;
//     printf("entre the no. ");
//     scanf("%d", &a);
//     for (i=0;i<=a;i++){
//         printf("%d \n",i);
//     }
// }

// while loop:
// int main(){
//     int i=0,a;
//     printf("entre the no. ");
//     scanf("%d", &a);
//     while (i<=a){
//         printf("%d \n",i);
//         i++;
//     }
// }

// Practice Qs 15:

// int main(){
//     int a=0,i,n;
//     printf("Entre the no.");
//     scanf("%d", &n);
//     for(i=1;i<=n;i++){
//         a=a+i;
//         printf("%d \n",a);
//     }
//     printf("%d \n",a);
//     for(i=n;i>1;i--){
//         a=a-i;
//         printf("%d \n",a);
//     }
// }

// Practice Qs 16:

// int main(){
//     int i,a;
//     printf("Entre the no.");
//     scanf("%d", &i);
//     for(a=01;a<=10;a++){
//         printf("%d ",i);
//         printf("* %d ",a);
//         printf("= %d \n",i*a);

//     }
// }

// Practice Qs 17:

// int main(){
//     for (int i;;){
//         printf("Entre the no.");
//         scanf("%d", &i);
//         if (i%2!=0){
//             break;
//         }
//     }
 
// }

// Practice Qs 18:

// int main(){
//     for (int i;;){
//         printf("Entre the no.");
//         scanf("%d", &i);
//         if (i%7==0){
//             break;
//         }
//     }
// }

// Practice Qs 19:

// int main(){
//     for (int i=1;i<=10;i++){
//         if (i == 6){
//             continue;
//         }
//         printf("%d \n",i);
//     }
// }

// Practice Qs 20:

// int main(){
//     for (int i=5;i<=50;i++){
//         if (i%2==0){
//             continue;
//         }
//         printf("%d ",i);
//     }
// }

// int main(){
//     for(int i=5;i<=50;i++){
//         i%2!=0?printf("%d ",i):(void)0;
//     }
// }

// Practice Qs 21:

// int main(){
//     float a=1,i,n;
//     printf("Entre the no. ");
//     scanf("%f", &n);
//     for (i=1;i<=n;i++){
//         a*=i;
//     }
//     printf("Factorial of n is : %f",a);

// }


// Practice Qs 22:

// int main(){
//     int i,n;
//     printf("Entre the no. ");
//     scanf("%d", &n);
//     for (i=10;i>=1;i--){
//         printf("%d *",n);
//         printf("%d ",i);
//         printf("= %d \n",n*i);
//     }

// }

// Practice Qs 23:

// int main(){

//     int i=0,a;
//     for (a=5;a<=50;a++){
//         i+=a;
//     }
//     printf("%d ",i);

// }

// Practice Qs 27:

// void hello();
// void goodBye();

// int main(){
//     hello();
//     goodBye();
//     return 0;
// }

// void hello(){
//     printf("Hello Ji \n");
// }

// void goodBye(){
//     printf("Good Bye Ji \n");
// }

// Practice Qs 28:

// void printNamaste();
// void printBonjour();

// int main(){
//     char a;
//     printf("Entre your country French(F)/Indian(I) ");
//     scanf("%c", &a);

//     if (a == 'I'){
//         printNamaste();
//         }
//     else if(a == 'F'){
//         printBonjour();
//     }
//     return 0;
// }

// void printNamaste(){
//     printf("Namaste");
// }
// void printBonjour(){
//     printf("Bonjour");
// }

// Practice Qs 29:

// #include<math.h>

// int main(){
//     float n;
//     printf("Entre Number :");
//     scanf("%f", &n);
//     float x = pow(n,2);
//     printf("Square of n : %f",x);

// }

// Practice Qs 31:

// void square();
// void circle();
// void rec();

// int main(){
//     char x;
//     printf("Entre for which shape you want area rec(r)/square(s)/circle(c): ");
//     scanf("%c", &x);
//     if (x=='r'){
//         int a,b;
//         printf("Entre the length of Rec. : ");
//         scanf("%d", &a);
//         printf("Entre the width of Rec. : ");
//         scanf("%d", &b);
//         rec(a,b);
//         return 0;
//     }
//     else if(x=='s'){
//         int a;
//         printf("Entre the side of Sqaure : ");
//         scanf("%d", &a);
//         square(a);
//         return 0;
//     }
//     else if(x=='c'){
//         int a;
//         printf("Entre the radius of circle : ");
//         scanf("%d", &a);
//         circle(a);
//         return 0;
//     }
// }

// void square(int a){
//     printf("%d \n",a*a);
// }
// void circle(int a){
//     float x=3.14;
//     printf("%f \n",x*a*a);

// }
// void rec(int a,int b){
//     printf("%d \n",a*b);
// }


// // Practice Qs 30

// int sum(int n);

// int main(){
// int a;
// printf("Entre the No.");
// scanf("%d", &a);
// printf("The sum is %d",sum(a));
// }

// int sum(int n){
//     if (n==1){
//         return 1;
//     }
//     int sumIt=sum(n-1);
//     int sumN=sumIt+n;
// }


// Practice Qs 31

// int fact(int n);

// int main(){
// int a;
// printf("Entre the No.");
// scanf("%d", &a);
// printf("The sum is %d",fact(a));
// }

// int fact(int n){
//     if (n==0){
//         return 1;
//     }
//     int sumIt=fact(n-1);
//     int sumN=sumIt*n;
//     return sumN;
// }



// Practice Qs 32

// float cTof(float n);

// float main(){
// float a;
// printf("Entre the temp. in Celsius: ");
// scanf("%f", &a);
// printf("The temp. in Farenheit is %f",cTof(a));
// }

// float cTof(float n){
//     float x;
//     x = (1.8*n)+32;
//     return x;
// }


// Practice Qs 33

// float percent(float a,float b,float c);

// float main(){
// float a,b,c;
// printf("Entre the marks in Maths: ");
// scanf("%f", &a);
// printf("Entre the marks in Science: ");
// scanf("%f", &b);
// printf("Entre the marks in Sanskrit: ");
// scanf("%f", &c);
// printf("The percentage in class is %f",percent(a,b,c),"%");
// }

// float percent(float a,float b,float c){
//     float x;
//     x = ((a+b+c)/300)*100;
//     return x;
// }


// Practice Qs 34

// int fab(int n);

// int main(){
//     int a;
//     printf("Entre which no. you want of fab seq.");
//     scanf("%d", &a);
//     printf("The 5th fab. no is %d",fab(a));

// }

// int fab(int n){
//         if (n == 0){
//             return 0;
//         }
//         if (n == 1){
//             return 1;
//         }
//     int fabn = fab(n-1)+fab(n-2);
//     return fabn;
// }

// Practice Qs 35

// int main(){
//     int *ptr;
//     int x;

//     ptr = &x;
//     *ptr = 0;

//     printf("x= %d \n",x);
//     printf("*ptr= %d \n",*ptr);
    
//     *ptr +=5;
//     printf("*x= %d \n",x);
//     printf("*ptr= %d \n",*ptr);
    
//     (*ptr) ++;
//     printf("*x= %d \n",x);
//     printf("*ptr= %d \n",*ptr);
    
// }


