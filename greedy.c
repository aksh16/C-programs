#include <cs50.h>
#include <stdio.h>

int main(void)

{
float dollar = 0;
int a;
int b;
int c;
int d;
int h = 100;

 do
 {
    printf("How much change do I owe you?\n");
    dollar = GetFloat();
 }
 while(dollar <= 0);
 int change = dollar*h;
 
 if(change%25 == 0)
 {
    a = change/25;
    
    printf("%i\n", a);
 }
 
 else if(change < 25)
 {
      if(change%10 == 0)
      {
          a = change/10;
          printf("%i\n", a);
      }
      
      else if(change < 10)
      {
          if(change%5 == 0)
          {
              a = change/5;
              printf("%i\n", a);
              
          }
          else if(change < 5)
          {
              int f = change;
              printf("%i\n", f);
          }
          
          else
          {
              a = change/5;
              b = change%5;
              int e = a+b;
              printf("%i\n", e);
          }
            
       }
       else
       {
          a = change/10;
          b = change%10;
          c = b/5;
          d = b%5;
          int g = a+c+d;
          printf("%i\n", g);
       }
  }
  
  else
  {
    a = change/25;
    b = change%25;
    c = b/10;
    d = b%10;
    int e = d/5;
    int f = d%5;
    int g = a+c+e+f;
    printf("%i\n", g);
  }
}
   
   
      
    
