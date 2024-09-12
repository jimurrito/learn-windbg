#include <unistd.h>
#include <stdlib.h>

int main(void) {
    malloc(1024 * 1024 * 50); // alloc 50 Mbs
    printf("Leaker running!");
    for(;;) sleep(1024 * 1024);
}