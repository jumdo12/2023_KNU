#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int key;
}element;
typedef struct{
    element heap[MAX_SIZE];
    int size;
}HeapType;

HeapType* create(){
    return (HeapType*)malloc(sizeof(HeapType));
}

void init(HeapType *h){
    h -> size = 0;
}

void insert(HeadType *h , element item){
    int i = ++(h -> size);
    while(i > 1 && h -> heap[i/2].key < item.key){
        h -> heap[i] = h -> heap[i/2];
        i /= 2;
    } 
    h -> heap[i] = item;
}

element del_max_heap(HeapType *h){
    element temp = h -> heap[h->size--];
    element item = h -> heap[1];
    int parent = 1;
    int child = 2;

    while(child <= h -> size){
        if(child < h -> size && h -> heap[child].key < h -> heap[child+1].key){
            child++;
        }
        if(temp.key > h -> heap[child]) break;
        h -> heap[parent] = h -> heap[child];
        parent = child;
        child = parent * 2;
    }
    h -> heap[parent] = temp;
    return item;
}

void heap_sort(element *list , int n){
    HeapType* h;
    h = create();
    init(h);
    for(int i=0; i<n; i++){
        insert(h , list[i]);
    }
    for(int i=0; i<n; i++){
        list[i] = del_max_heap(h);
    }
    free(h);
}

int main(){
    element list[] = {23 ,25,13212,1422,14,15,421,41312,2};
    heap_sort(list , 9);
    for(int i=0; i<9; i++){
        printf("%d" , list[i]);
    }
    return 0;
}