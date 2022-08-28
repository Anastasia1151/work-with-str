#include <stdio.h>

int my_strlen(char line[]);
void my_strcpy(char str[], char line[]);

int main()
{
    char line[20] = "";
    char str[20] = "";

    printf("Введите строку 1:\n");
    scanf("%s", str);
    int len = my_strlen(str);
    printf("Длина строки равна %d\n", len);

    printf("Введите строку 2:\n");
    scanf("%s", line);
    len = my_strlen(line);
    printf("Длина строки равна %d\n", len);

    my_strcpy(str, line);

    return 0;
}

int my_strlen(char line[]){
    int i = 0;
    while ( line[i] != '\0'){
        i++;
    }
    return i;
}

void my_strcpy(char str[], char line[]){
    int i = 0;
    for ( ; str[i] != '\0'; i++ ){
        str[i] = line[i];
    }
    str[i] = '\0';
    printf("Изменённая строка: %s\n", str);
}
