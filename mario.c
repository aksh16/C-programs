#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    int r;
    int c;
    int tag;
    do
    {
        printf("Enter height for the pyramid:");
        h = GetInt();
    }
    while(h<0 || h>23);
    
    for(r = 1; r < h + 1; r++)
    {
        for(c = h - r; c > 0; c--)
            printf(" ");
        {
            for(tag = 0; tag < r + 1; tag++)
            {
                printf("#");
            }
        }
        printf("\n");
    }
}
    
       
