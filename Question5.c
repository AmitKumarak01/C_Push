#include<stdio.h>
#include<stdlib.h>


int main()
{
    FILE *p=NULL;
    char filename[]="test.txt";
    char option;

    p = fopen(filename,"r");

    if(p==NULL)
    {
        printf("Error in opening the file i.e file does not exist");
        return 0;
    }

    while(1)
    {
        printf("1. Display the file content:\n");
        printf("2. Count the number of lines:\n");
        printf("3. Count the number of characters:\n");
        printf("4. Exit:\n");

        printf("Enter the choice by the user : ");

        scanf("%c",&option);

        switch (option)
        {
        case '1':
            printf("The content of the file is  %s : ",filename);
            rewind(p);
            int ch;
            while((ch=fgetc(p))!=EOF)
            {
                putchar(ch);
            }
            break;

        case '2':
            printf("Number of lines in that file is : ");
            rewind(p);
            int line_count=0;
            while((ch=fgetc(p))!= EOF)
            {
            if(ch=='\n')
                {
                    line_count++;
                }
            }
            printf("%d\n",line_count+1);
            break;

        case '3':
            printf("Count the number of characters :");
            rewind(p);
            int character_count=0;
            while((ch=fgetc(p))!= EOF)
            {
                character_count++;
            }
            printf("%d\n",character_count);
            break;

        case '4':
            printf("Exit the program :");
            fclose(p);
            exit(0);
        
        default:
            break;
        }

    }
}
// Removing 2 lines from the file and added one new line....
