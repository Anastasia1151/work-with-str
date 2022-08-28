#include <stdio.h>

int my_strlen(char line[]);
void my_strcpy(char str[], char line[]);
void my_strchr(char line[], int symbol);

int main()
{
    char line[20] = "";
    char str[20] = "";

    printf("Введите строку 1:\n");
    scanf("%s", str);
    int len = my_strlen(str);
    printf("Длина строки равна %d\n\n", len);

    printf("Введите строку 2:\n");
    scanf("%s", line);
    len = my_strlen(line);
    printf("Длина строки равна %d\n", len);

    my_strcpy(str, line);
    my_strchr(line, '6');

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
    for ( ; line[i] != '\0'; i++ ){
        str[i] = line[i];
    }
    str[i] = '\0';
    printf("Изменённая строка: %s\n\n", str);
}

void my_strchr(char line[], int symbol){
    int i = 0;
    for ( ; line[i] != '\0'; i++){
        if ( line[i] == symbol ) printf("Искомый символ находится в строке 2 на позиции %d\n", i + 1);
    }
}
