#include <stdio.h>
#include <string.h>

int main() {
    char arr[] = {'B', 'C', 'D', 'E'};
    int n = sizeof(arr) / sizeof(arr[0]);
    //printf("%d",n);
    char insert = 'A';

    //char arr2[]={'A'};

    for (int i = n; i >= 1; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[0] = insert;
    //printf("%c",arr[5]);

    n++;

    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
    return 0;
}


