/*
a string in c is a one dimensional array of characters terminated by a null character. (\0).
STRINGS ARE USED TO STORE TEXT DATA.
eg

1.using string literal--
char str[] = "Hello";..............str is a string of size 6 (5 characters + 1 null character (\0))

2. using character by character
char str2[6]={'h','e','l','l','o','\0'};

3. Using gets or scanf----
scanf("%s",&str);

*/
/*
#include <stdio.h>
void main(){
//limitation of scanf is when we write a string, and if we give space [whitespace], it terminates and do not store string after space.
// if string is kavya pratap it gives kavya as output.
	char str[20];
	printf("Enter the string: \n");
	scanf("%s",&str);
	printf("%s\n",str);
}
*/
/*
#include <stdio.h>
void main(){
//the output of this program is same as above the only difference is there is no & in this program because str is an array, and it starts from 0 index [memory address] so no need of &.
	char str[20];
	printf("Enter the string: \n");
	scanf("%s",str);
	printf("%s\n",str);
}
*/
/* string with function
#include <stdio.h>
void printstring(char []);
void printstring(char str[]){
	printf("String %s\n",str);
}
void main(){
	char message[]="Hello, functions!";
	printstring(message);
}
*/

/*Using gets

#include <stdio.h>
void main(){
char str[20];
	printf("Enter the string: \n");
	gets(str); //this dont breaks if it encounters a space [whitespace]. if string is kavya pratap it gives kavya pratap as output.
	//problem with gets---if str is of size 10 and we input str of size 15, it gives warnig of stack smashing.
	puts(str);
	
}*/
/*
creating own input function
#include <stdio.h>

int input(char str[], int n) {
    int i = 0, ch;
    while ((ch = getchar()) != '\n' ) {// use this--&& i < n - 1 to terminate once length of string specified is reached. // Corrected: proper assignment and condition
	    //here is the mistake
        str[i] = ch;
        i++;
    }
    str[i] = '\0';  // Null-terminate the string
    return i;  
}

int main() {
    char str[100];
    int n;
    n = input(str, 100);
    printf("%s", str);  // Print the entered string
}

}*/


/*using fgets
#include <stdio.h>

int main() {
	//this is vest to use as if we mention size of a string, it terminates once that size is acheived...
    char buff[100];  
    int n = 10;
  
    printf("Enter a string: ");
  
    // Read input from the user
    fgets(buff, n, stdin);
    printf("You entered: %s", buff);
    return 0;
}
*/
/*
fgets to get input of specified space and strlen() to get length of string
#include <stdio.h>
int main() {
	//this is best to use as if we mention size of a string, it terminates once that size is acheived...
    char buff[100];  
    int n = 10;
  
    printf("Enter a string: ");
  
    // Read input from the user
    fgets(buff, n, stdin);
    printf("You entered: %s", buff);
    printf("Length of string: %zu\n",strlen(buff));
	return 0;
}

*/
/* custom string function of length and input
#include <stdio.h>
#include <stdio.h>

int input(char str[], int n) {
    int i = 0, ch;
    while ((ch = getchar()) != '\n' && i < n - 1) {  // Corrected: proper assignment and condition
	    //here is the mistake
        str[i] = ch;
        i++;
    }
    str[i] = '\0';  // Null-terminate the string
    return i;  
}

int count(char str[],int n){
	int count=0;
	while(str[count]!='\0'){
		count++;
	}
	printf("\nLength is %d",count);

}

void main(){
	char str[100];
	int n;
	n=input(str,100);
	printf("%s",str);
	count(str,100);	
}

*/

/*strcat
#include <stdio.h>
void main(){
char str1[]="Hello";
char str2[]="World";
strcat(str1,str2);
printf("%s",str1);
}
*/
/*user defined strcat

#include <stdio.h>

int input(char str[], int n) {
    int i = 0, ch;
    while ((ch = getchar()) != '\n' && i < n - 1) {  
        str[i] = ch;
        i++;
    }
    str[i] = '\0';  
   
}

void concat(char str1[],char str2[]){
	int n,i=0;
	int count=0;
	while(str1[count]!='\0'){
		count++;
	}
	n=count;
	while(str2[i]!='\0'){
		str1[n+i]=str2[i];
		i++;
	}
	printf("Concatenated string: %s",str1);
	//printf("%zu",strlen(str1));
}
void main(){
	char str1[100];
	char str2[100];
	int n1,n2;
	n1=input(str1,100);
	n2=input(str2,100);

	concat(str1,str2);
}
	
*/
/*
#include <stdio.h>
int input(char str[], int n) {
    int i = 0, ch;
    while ((ch = getchar()) != '\n') {  
        str[i] = ch;
        i++;
    }
    str[i] = '\0';  
   
}
int compare(char str1[], char str2[]) {
    int i = 0;
    
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i]; 
        }
        i++;
    }
    return str1[i] - str2[i]; 
}

int main() {

    char str1[100];
	char str2[100];
	int n1,n2,result;
	n1=input(str1,100);
	n2=input(str2,100);
    result = compare(str1, str2);
    
    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result < 0) {
        printf(" %s comes before %s.\n",str1,str2);
    } else {
        printf("%s comes after %s.\n",str1,str2);
    }
    
    return 0;
}
*/
/*
#include <stdio.h>
int input(char str[], int n) {
    int i = 0, ch;
    while ((ch = getchar()) != '\n') {  
        str[i] = ch;
        i++;
    }
    str[i] = '\0';  
   
}
void rev(char str[]){
	int n,i=0;
	int count=0;
	while(str[count]!='\0'){
		count++;
	}
	char str2[100];
	while (str[i]!='\0'){
		str2[i]=str[count-i-1];
		i++;
	}
	printf("%s",str2);
}


int main() {
	int n1;
    char str1[100];
	n1=input(str1,100);
	rev(str1);
	return 0;
}
*/
/*Palindrome*/
#include <stdio.h>
#include <string.h>
int input(char str[], int n) {
    int i = 0, ch;
    while ((ch = getchar()) != '\n') {  
        str[i] = ch;
        i++;
    }
    str[i] = '\0';  
   
}
void rev(char str[]){
	int n,i=0;
	int count=0;
	while(str[count]!='\0'){
		count++;
	}
	char str2[100];
	while (str[i]!='\0'){
		str2[i]=str[count-i-1];
		i++;
	}
	n=strcmp(str,str2);
	if(n!=0){
		printf("%s is not a palindrome",str2);
	}
	else {
		printf("%s is a palindrome",str2);
	}
	}



int main() {
	int n1;
    char str1[100];
	n1=input(str1,100);
	rev(str1);
	return 0;
}
