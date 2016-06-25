#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

string encrypt();

int main(int argc, string argv[])
{
   int i, m;
   string word=argv[1];
       if(argc != 2)
       {
           printf("You didn't cooperate.\n");
           return 1;
       }
    
     
       else
       {
           for(i=0,m=strlen(word);i<m;i++)
           {
               if(isalpha(word[i]) == 0)
               {
                   printf("You didn't cooperate.\n");
                   return 1;
               } 
           }
           
        string text=encrypt(word);
        printf("Your encrypted text is:");
        
        for(i = 0,m = strlen(text);i < m;i++)
            printf("%c",text[i]);
     
        printf("\n"); 
        return 0;
       }
}     
            

string encrypt(string key)
{
     printf("Enter text to encrypt:");
           string s = GetString();
           int n=strlen(key);
           for(int i = 0,j=0,m = strlen(s);i < m;i++)
           {
                
                if(isalpha(s[i]))
                {
                    int k = j % n;
                    if(isupper(s[i]))
                    {
                        if(isupper(key[k]))
                            s[i] = (s[i]-'A'+ key[k]-'A' ) % 26 + 'A';
                        else
                            s[i] = (s[i]-'A' + key[k]-'a') % 26 + 'A';
                    }
                
                
                    else
                    {
                        if(isupper(key[k]))
                            s[i] = (s[i]-'a'+ key[k]-'A' ) % 26 + 'a';
                        else
                            s[i] = (s[i]-'a' + key[k]-'a') % 26 + 'a';
                    }
                    j++; 
                }
            }
     return s;
}
                
           
                    
                        
                    
                
                    
    
   
        
