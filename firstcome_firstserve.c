// This is a CPU Scheduling Algorithm

#include <stdio.h>

void bubble_sort(int array[], int process);

void main(){

    int process;

    //arrays
    int process_arrival_time[50], process_burst_time[50];

    printf("Enter the no. of processes");
    scanf("%d", &process);

    // Taking arrival times of the processes

    for(int i = 0; i < process; i++){
        scanf("%d", &process_arrival_time[i]); 
    }

    // Taking burst times of the processes

    for(int j = 0; j < process ; j++){
        scanf("%d", &process_burst_time[j]);
    }

}

void bubble_sort(int array[], int process){
    int temp;
    for(int i = 0; i < process; i++)
    for(int j = 0; j < process-1; j++){
        if(array[j]>array[j+1]){
            temp = array[j+1];
            array[j+1] = array[j];
            array[j] = temp;
        }
    }
}