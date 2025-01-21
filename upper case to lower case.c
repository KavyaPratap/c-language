//converts upper case to lower case and vice versa
#include <stdio.h>
#include <math.h>
int main()
{   
    char ch;
    printf("enter the character: ");
    scanf("%c",&ch);
    
    if(ch>='A' && ch<='Z'){
        ch=ch+32;
        printf("%c\n",ch);
    }
    
    else if(ch>='a' && ch<='z'){
        ch=ch-32;
        printf("%c\n",ch);
    }
  else{
    printf("Enter valid character!!");
  }
  
    return 0;
}
