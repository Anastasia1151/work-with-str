#include <stdio.h>

int my_strlen(char line[]);
int main()
{
    char line[] = "";

    printf("Введите строку:\n");
    scanf("%s", &line);
    int len = my_strlen(line);
    printf("Длина строки равна %d\n", len);

    return 0;
}

int my_strlen(char line[]){
    int i = 0;
    while ( line[i] != '\0'){
        i++;
    }
    return i;
}
