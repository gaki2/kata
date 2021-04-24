typedef struct _heap
{
    PriorityComp *comp;
    int numOfData;
    HData heapArr[HEAP_LEN];
} Heap;

void HeapInit(Heap *ph, PriorityComp pc)
{
    ph->numOfData = 0;
    ph->comp = pc;
}

void HInsert(Heap *ph, HData data);