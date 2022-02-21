#include<stdio.h>
#include <time.h>
#include <fcntl.h>

void display_flags(char *label, unsigned int value) {
    printf("%s = %d\n", label, value);
}

int main (int argc, char *argv[]){
    display_flags("O_RDONLY", O_RDONLY);
    display_flags("O_WRONLY", O_WRONLY);
    display_flags("O_RDWR", O_RDWR);
    display_flags("O_APPEND", O_APPEND);
    display_flags("O_TRUNC", O_TRUNC);
    display_flags("O_CREAT", O_CREAT);

    display_flags("CLOCK_REALTIME", CLOCK_REALTIME);
}
