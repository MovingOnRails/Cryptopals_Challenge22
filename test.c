#include <time.h>

#include "./main.c"

int main(){
    time_t secondsSinceEpoch = time(NULL);
    unsigned long randomValue = routine(secondsSinceEpoch);

    time_t now = time(NULL);
    time_t seed;
    for(int i=0;i<1000;i++){
        time_t targetEpoch = now-i;
        init_genrand(targetEpoch);
        unsigned long randomFromTargetEpoch = genrand_int32();
        if(randomFromTargetEpoch == randomValue){
            printf("Found seed: %i",targetEpoch);
            printf("\n");
        }
    }
    return 0;
}