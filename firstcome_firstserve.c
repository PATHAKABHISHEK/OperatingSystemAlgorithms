// This is a CPU Scheduling Algorithm

#include <stdio.h>

void bubble_sort(int array[], int process);

void main(){

    int process;

    //arrays
    int process_arrival_time[50], process_burst_time[50];
    int process_duration[50], waiting[50], turn_around[0];

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

    // Sorting arrival times

    bubble_sort(process_arrival_time, process);

    // Sorting burst times

    bubble_sort(process_burst_time, process);

    // Calculating the overall duration of a single process

    for(int i = 0; i < process; i++){
        process_duration[i] = process_arrival_time[i] + process_burst_time[i];
    }

    // Now Creating gantt chart

    // This logic will only work when processes arrival time will be
    // different

    for(int i = 0; i < process; i++){
        waiting[i] = 0;
        turn_around[i] = process_duration[i] - process_arrival_time[i];
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