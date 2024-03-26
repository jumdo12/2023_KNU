#include <stdio.h>
#define DIGITS 4
#define BUCKETS 10

void Radix_Sort(int *list, int n){
    int i,d,b,factor=1;
    QueueType queues[BUCKETS];
    for(b=0;b<BUCKETS;b++){
        init(&queues[b]);
    }
    for(d=0;d<DIGITS;d++){
        for(i=0;i<n;i++){
            enqueue(&queues[(list[i]/factor)%10],list[i]);
        }
        for(b=i=0;b<BUCKETS;b++){
            while(!is_empty(&queues[b])){
                list[i++] = dequeue(&queues[b]);
            }
        }
    }
}