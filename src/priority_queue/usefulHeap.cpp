#include "usefulHeap.h"

void HeapInit(Heap *ph, PriorityComp pc)
{
    ph->numOfData = 0;
    ph->comp = pc;
}

int GetHiPriChildIDX(Heap *ph, int idx)
{
    if (GetLChildIDX(idx) > ph->numOfData)
    {
        return 0;
    }

    else if (GetLChildIDX(idx) == ph->numOfData)
        return GetLChildIDX(idx);
    
    else{
        if (ph->comp(ph->heapArr[GetLChildIDX(idx)], ph->heapArr[GetRChildIDx(idx)]) < 0)
            return GetRChildIDX(idx);
        else
            return GetLChildIDX(idx);
    }
}

void HInsert(Heap *ph, HData data)
{
    int idx = ph->numOfData+1;

    while(idx != 1)
    {
        if (ph->comp(data, ph->heapArr[GetParentIDX(idx)]) > 0)
        {
            ph->heapArr[idx] = ph->heapArr[GetParentIDX(idx)];
            idx=GetParentIDX(idx);
        }
        else
        {
            break;
        }
    }
    ph->heapArr[idx] = data;
    ph->numOfData += 1;
}


int DataPriorityComp(char ch1, char ch2)
{
    return ch2-ch1;
}