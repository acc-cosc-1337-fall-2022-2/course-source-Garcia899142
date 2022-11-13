#include "memory_leak.h"

void ArrayList::Adjust_Elements(int index)
{
    for (int i= index; i<ArrayList::Size(); i++)
    {
        if(i==(ArrayList::Size()-1)){break;}
        

        elements[i] = elements[i+1];
    }
}
