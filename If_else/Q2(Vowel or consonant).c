/*Write a Program to Check Whether a Character is
Vowel or Consonant.*/
#include<stdio.h>

int main(){

    int ch;
    printf("Enter an Alphabet:\n");
    scanf("%c",&ch);
    int uppercase= ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U';
    int lowercase= ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
    if(uppercase||lowercase){
        printf("Vowel");
    }else{
        printf("Consonant");
    }
    return 0; 
}