#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *outputPrime(void * userInput){

    //accepting our parematers pass as a int.
    int uI = *((int *) userInput);

    //prime numbers can only be divided twice.
    //run loop and check if primeCheck <= 2 each loop.

    printf("prime numbers from 1 to %d are: ", uI);

    //prime number for loop checker.. see above.
    for(int iterate = 1; iterate<=uI; iterate++){

        int primeCheck = 0;

        for(int i = 1; i<=iterate; i++){
            if(iterate % i == 0){
                primeCheck++;
            }
        }

        if(primeCheck <= 2){
            printf("%d ", iterate);
        }
    }
    //for looking pretty..
    printf("\n");

    //stopping thread.
    pthread_exit (0);
    }

//main
int main(){

    pthread_t tid;
    pthread_attr_t attr;

    int userInput = 0;
    

    //getting input
    printf("\n");
    printf("Please enter a number: ");
    scanf("%d", &userInput);


    //creating thread with the prime number function passed to run.
    printf("Creating thread.. \n");
    pthread_attr_init(&attr);
    pthread_create (&tid , &attr, *outputPrime, &userInput);
    pthread_join (tid, NULL);

    //for looking pretty.. 
    printf("\n");

    return 0;
}