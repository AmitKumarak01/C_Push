#include<stdio.h>
#include<stdlib.h>


int main()
{
    FILE *p = NULL;
    char ch;
    int linesCount = 0;
    int WordCount =0;

    p = fopen("test.txt", "r");

    if(p == NULL)
    {
        printf("File does not open because it will not exist \n");
        return -1;
    }

    while((ch=fgetc(p))!= EOF)
    {
        WordCount++;
        if(ch=='\n')
        {
            linesCount++;
        }
    }

    fclose(p);
    p = NULL;

    printf("Total number of lines in that file is : %d\n", linesCount+1);
    printf("Total number of words is : %d",WordCount );

    



    return 0;
}

