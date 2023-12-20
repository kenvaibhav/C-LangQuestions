//1)WAP to find the length of string
//2)WAP to count vowel and consonent in string.
//3)WAP to convert the string from lowercase to uppercase and uppercase to lowercase
//4)Write a C program to reverse string
//5)Write program to check whether string is palindrome 
//6)Write a program to check whether character is vowel or not
#include<stdio.h>
#include<conio.h>

void main(){
    //1)WAP to find the length of string
    char str[10];
    gets(str);
    int count = 0;
    for(int i=0; str[i] != '\0';i++){
        count++;
    }
    printf("\nLength of %s is %d",str,count);
    //2)WAP to count vowel and consonent in string.
    int vowel = 0;
    int consonent = 0;
    for(int i=0 ; i<count; i++){
        int num1 = str[i];
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            vowel++;
        }else if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            vowel++;
        }else if ((num1 > 64 && num1 < 91 ) || (num1 < 123 && num1 >96)){
            consonent++;
        }
    }
    printf("\nThe no of Vowel are %d and no of consonents are %d",vowel,consonent);
    //3)WAP to convert the string from lowercase to uppercase and uppercase to lowercase
    
    for(int i=0; i<count; i++){
        int num = str[i];
        if(num > 96 && num < 123){
            str[i] = num-32;
        }else if(num < 91 && num > 64){
            str[i] = num + 32;
        }
    }
    printf("\nThe change of the string is %s",str);
    //4)Write a C program to reverse string
    for(int i=0,j=count-1; i<count/2; i++,j--){
        int temp = str[i];
        str[i] = str[j];
        str[j] = str[i];
    }
    printf("\nThe reverse of the string is %s",str);
    //5)Write program to check whether string is palindrome
    int flag = 1;
    for(int i=0,j=count-1; i<count/2; i++,j--){
        if(str[i] != str[j]){
            printf("\nThe given string %s is not a Palindrome.",str);
            flag = 0;
            break;
        }
    }
    if(flag)printf("\nThe given string %s is a Palindrome.",str);
    //6)Write a program to check whether character is vowel or not
    //take input character
    char a;
    printf("\nEnter a character to check: ");
    scanf("%c",&a);
    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'||a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U' )
        printf("Yes %c is a vowel",a);
    else
        printf("NO %c is not vowel",a);
}