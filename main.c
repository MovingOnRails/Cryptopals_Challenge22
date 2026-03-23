#include <stdlib.h>
#include <unistd.h>

#include "../Challenge21/MT19937_creators.c"

unsigned long routine(unsigned long seed){
    init_genrand(seed);
    int sleepSeconds = (rand() % 20)+10;
    sleep(sleepSeconds);
    sleepSeconds = (rand() % 20)+10;
    sleep(sleepSeconds);
    return genrand_int32();
}