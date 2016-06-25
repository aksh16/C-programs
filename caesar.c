#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("You didn't cooperate");
        return 1;
    }
    
    else
    {
        int k = atoi(argv[1]);
        printf("Enter text to encrypt:");
        string s = GetString();
        
        for(int i = 0,n = strlen(s);i < n;i++)
        {
            if(isalpha(s[i]))
            {
                if(isupper(s[i]))
                    s[i] = (s[i]-'A'+k) % 26 + 'A';
                
                
                else
                   s[i] = (s[i]-'a'+k) % 26 + 'a'; 
            } 
            
        }
        printf("Your encrypted text is:");
        for(int i = 0,n = strlen(s);i < n;i++)
            printf("%c",s[i]);
       printf("\n"); 
       return 0;
    }
        
}
