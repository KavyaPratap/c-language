/*question
aabbbeeeeffggg
a2b3e4f2g3.
*/
#include <stdio.h>
#include <string.h>

void sort(char str[], int size) {
    int i,j;
    char temp;
	for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}


void search(char str[]) {
	int i,n1,count;
	char str2[100];
	n1 = strlen(str);
	count = 1;
    for (i = 0; i<n1; i++) {
        if (str[i] == str[i + 1]) {
            count++;}
		else{

			str2[i]=str[i];
			printf("%c%d",str[i],count);
			count=1;
		}
		
}
}
void main() {
    int n;
	char a;
	char str[100];
    char str1[100];
	a=scanf("%s",&str1);
	n=strlen(str1);
	sort(str1,n);
    search(str1);
}

