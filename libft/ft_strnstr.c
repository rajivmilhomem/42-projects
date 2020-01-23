/* strstr.c */
#include <stdio.h>
#include <string.h>
 
int main() {
    printf("1: %s\n", strstr("Testando", "st"));
    printf("2: %s\n", strstr("O rato roeu a roupa do rei de Roma", "ro"));
    printf("3: %s\n", strstr("Nao vai achar", "vai nada"));
    printf("4: %s\n", strstr("Vai achar no fim", "fim"));
    printf("5: %s\n", strstr("Logo no inicio vai ser encontrado", "Logo no inicio"));
    printf("6: %s\n", strstr("Nao vai procurar nada", ""));
    printf("7: %s\n", strstr("", "Vai procurar em lugar nenhum"));
    printf("8: %s\n", strstr("", ""));
    return 0;
}