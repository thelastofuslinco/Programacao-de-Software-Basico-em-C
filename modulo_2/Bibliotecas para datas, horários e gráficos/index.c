#include <time.h>
#include <stdio.h>

int main(){
    time_t t = time(NULL);
    printf("Data e hora atual: %s", ctime(&t));

    return 0;
}