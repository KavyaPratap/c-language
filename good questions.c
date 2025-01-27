/*question
aabbbeeeeffggg
a2b3e4f2g3
*/
#include <stdio.h>
#include <string.h>

void search(char str[]) {
	int i,n1,count;
	n1 = strlen(str);
	count = 1;
    for (i = 0; i<n1; i++) {
        if (str[i] == str[i + 1]) {
            count++;}
		else{
			printf("%c%d",str[i],count);
			count=1;
		}
		
}
}
int main() {
    int n1;
	char str[100];
    char str1[100];
	n1=scanf("%s",&str1);
    search(str1);
    return 0;
}
