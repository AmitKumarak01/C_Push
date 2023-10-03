#include <stdio.h>
#include<stdlib.h>

int main() {
    int array[] = {0, 3, 1, 0, 5, 1, 2, 0, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i<n; i++) 
    {
        int count = 0;
        for (int j = i + 1; j <n; j++) 
        {
            if (array[i] == array[j]) 
            {
                count++;
                array[j] = -1;
            }
        }
        if (count > 0 && array[i] != -1) {
            printf("%d -- %d times\n", array[i], count + 1);
        }
    }

    return 0;
}

