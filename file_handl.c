#include <stdio.h>

int main()
{   FILE *file;
    char user_input[256];
    file = fopen("file_handl.txt","w");
    int flag;
    printf("Enter smth\n");
    scanf("%[^\n]%*c",user_input);
    //printf("%s ",user_input);
    fprintf(file,"%s",user_input);
    fclose(file);
    return 0;
   
}