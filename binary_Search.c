#include <stdio.h>
#define MAX 100  
int sort(int [], int);
int sort(int a[], int n) {
    int i, j, temp;
    int b[MAX];  
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {         
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++) {
        b[i] = a[i];
    }
    return b;  
}
int binary_search(int [], int, int);
int binary_search(int b[], int key, int n) {
    int low, high;
    float mid;  
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;  
        if (key == b[(int)mid]) { 
            return mid;  
        }
        else if (key < b[(int)mid]) { 
            high = (int)mid - 1;
        }
        else {  
            low = (int)mid + 1;
        }
    }
    return -1; 
}
int main(){
    int x, n, i, key;
    printf("Enter size of array-> ");
    scanf("%d", &n);
    int a[n];  
    printf("Enter elements of array-> ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);  
    }
    printf("Enter element to find-> ");
    scanf("%d", &key);
    sort(a, n);  
    int index = binary_search(a, key, n);
    if (index != -1) {
        printf("Element found");
    } else {
        printf("Element not found!\n");
    }
    return 0; 
}

