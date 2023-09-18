#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int compare(char a[],char b[]);
int main()
{
    char string1[20];
    printf("Enter first string: ");
    gets(string1);
    printf("%s",string1);
    printf("\n");

    char string2[20];
    printf("Enter second string:");
    gets(string2);
    printf("%s",string2);

    if(strlen(string1)!=strlen(string2))
    {
        printf("\nDissimilar");
    }

    int k =compare(string1,string2);
    if(k==0)
    {
        printf("\nSimilar");
    }
    else
    {
        printf("\nDissimilar");
    }

    
}

int compare(char a[],char b[])
{
    int flag=0;
    int i=0;
    while(a[i]!='\0' && b[i]!='\0')
    {
        if(a[i]!=b[i])
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
    {
        return 0;
    }
    else{
            return 1;
    }
}