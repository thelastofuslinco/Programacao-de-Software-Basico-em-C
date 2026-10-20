#include <stdio.h>
#include <time.h>

int main(){
    time_t t;
    struct tm *tm_info;
    char buffer[26];

    time(&t);
    tm_info = localtime(&t);
    strftime(buffer, 26, "%d-%m-%Y %H:%M:%S", tm_info);
    printf("Data e hora formatada: %s\n", buffer);
}