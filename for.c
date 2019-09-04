#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    do{
        printf("Enter any char");
        scanf("%s",&s);
        printf("Ky tu vua nhap:%s",s);
    }while(strcmp(s, "s"));
return 3;
}