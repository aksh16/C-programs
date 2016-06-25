/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
int binsearch();

bool search(int value, int values[], int n)
{   
    if(n<0)
        return false;
    
    else
    {
        int i = binsearch(value, values,0 ,n - 1);
    
        if(i == 1)
            return true;
    
        else
            return false;
    }   
}

int binsearch(int value, int values[],int start, int end)
{   
    int i;
    if(start <= end)
    {
        int mean = (end + start)/2;
        if(value == values[mean])
            return 1;
        
        else if(value > values[mean])
        {
          i = binsearch(value, values, mean + 1, end);
          if(i == 0)
               return 0;
          else
               return 1;
        }
        
        else
        {  
          i = binsearch(value, values,start, mean - 1);
          if(i == 0)
               return 0;
          else
               return 1;
        }
    }
    
    else 
        return 0;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    for(int i = 1;i < n;i++)
    {
        int pos = i;
        int temp = values[i];
        for(int j = i - 1;j > -1;j--)
        {
            if(values[j]>temp)
            {
                values[j+1] = values[j];
                pos = j;
            }
        }
        if(pos != i)
            values[pos] = temp;
    }
    return;
}
