
#include <iostream>
char convertedCase(char ch);
int main() {
    char ch;
    printf("Enter character");
    scanf("%c",&ch);
    char converted=convertedCase(ch);
    printf("converted character %c\n",converted);
   
}
char convertedCase(char ch){
    if(ch>='A'&&ch<='Z'){
        return ch + 32;
    }
    else if(ch>='a'&&ch<='z'){
        return ch-32;
    }
    else{
        return ch;
    }
}
































// Online C++ compiler to run C++ program online
#include <iostream>
typedef enum{
    POSITIVE,
    NEGATIVE,
    ZERO
}NumberCategory;
int main() {
   int num;
   NumberCategory category;
   printf("enter number");
   scanf("%d",&num);
   if(num>0){
       category=POSITIVE;
   }
   else if(num<0){
       category=NEGATIVE;
   }
   else if (num=0){
       category=ZERO;
   }
   switch(category){
       case POSITIVE:
       printf("the number is positive \n");
       break;
       case NEGATIVE:
       printf("the number is negative \n");
       break;
       case ZERO:
       printf("the number is ZERO \n");
       break;
       default:
       printf("Unexpected case \n");
       break;
   }
}








// Online C++ compiler to run C++ program online
#include <iostream>
int main(){
    int i;
    for(i=32;i<=127;i++){
        printf("ASCII CODE %d : %c\n",i,i);
    }
}





// Online C++ compiler to run C++ program online
#include <iostream>
int main(){
    int i,num;
    printf("Even|Square|Cube\n");
    printf("-----------------\n");
    for(i=1;i<=10;i++){
        num=i*2;
        printf("%11d|%6d|%4d\n",num,num*num,num*num*num);
    }
}