//Write a C prog to check whether a letter is vowel or consonant
#include<stdio.h>

int main(){
    char a;
    printf("Enter any character : ");
    scanf("%c",&a);
    // Check it is vowel or consonant
    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'){
        printf("%c is vowel",a);
    }else{
        printf("%c is consonant",a);
    }
}