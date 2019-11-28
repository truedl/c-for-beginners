// Your brother Alex is getting ready to participate at the 40km marathon in the next week. He is asking you to write a stopwatch program
// that he can start it and stop it and check his time in minutes.

#include <stdio.h>
#include <time.h>

int main(){
    clock_t start, end;
    _Bool quit = 0;
    char c, s;

    while(!quit){
        printf("Press enter to start or type ANY one character to quit.\n");
        scanf("%c", &c);

        switch(c){
            case '\n':
                start = clock();//check start time and save in value.
                printf("\nPress enter to stop the stopwatch.\n");
                scanf("%c", &s);
                end = clock() - start;//check end time and save in value.
                printf("Result: %.3f minutes.\n", end/1000.0/100.0);
                break;
            
            default:
                quit = 1;
                break;
        }
    }

    return 0;
}