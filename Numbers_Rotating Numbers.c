#include <stdio.h>
#include <math.h>
int palindrome(int);
int prime(int);
int right(int,int);
int left(int,int);
int totaldigit(int);
int main() 
{    
    
    int t;
    scanf("%d",&t);
    
    for(int i=1 ; i<=t ; i++)
 {
    int n;
    scanf("%d",&n);
    int digit=totaldigit(n);
    
    if(digit >=3 && (palindrome(n) || prime(n)))
    {
      if(palindrome(n) && prime(n))
       printf("%d\n",n);
        
        else if(palindrome(n))
        {
            printf("%d\n",right(n,2));
        }
        
        else if(prime(n))
        {
            printf("%d\n",left(n,2));
        }
     
    }
   else if(n%2==0) 
    printf("%d\n",right(n,1));   
    
    else if(n%2!=0) 
    printf("%d\n",left(n,1));    
    
    } 
    
    
    
    return 0;
}
 
int palindrome(int n)
{
    int dup=n;
    int sum=0;
    while(dup>0)
    {
        int rem=dup%10;
        sum=10*sum+rem;
        dup=dup/10;
    }
    
    if(sum==n)
        return 1;
    
    else
        return 0;
}


int prime(int n)
{
   int flag=1;
   for(int i=2 ; i*i<=n ; i++)
   {
       if(n%i==0)
           flag=0;
   }
    
    if(flag==1)
        return 1;
    
    else
        return 0;
    
}

int right(int n, int k)
{ 
   int digit=totaldigit(n);
    
  int divide=1;                  
  for(int i=1 ; i<=k ; i++)
  {
      divide=divide*10;
  }
   
    int rem=n%divide;      // 123456 ka 6 alag
    
    int multiply=1; 
    for(int i=1 ; i<=digit-k ; i++)
    {
        multiply=multiply*10;    // digit-k= 5 so we have 100000
    }                            // for 612345 6 *100000 + 12345
    
    int toadd=n/divide;
    
    int rotated = rem*multiply + toadd;
    
    return rotated;
    
}

int left(int n,int k)
{
    
    int digit=totaldigit(n);
    
        if (digit == 1)  
        return n;
    
    int divide = 1;
    for (int i = 1; i <= digit - k; i++) 
    {
        divide = divide *10;
    }
    
    int firstdigits=n/divide;
    int remaining=n%divide;
    
    int multiply = 1;
    for (int i = 1; i <= k; i++)  
    {
        multiply = multiply* 10;
    }  
   return remaining * multiply + firstdigits; 
   
}
int totaldigit(int n)
{
    int count=0;
    if(n==0)
        count=1;
    
    else
    {  
       int dup=n;
        while(dup>0)
         {
          count++;
          dup=dup/10;
         }
    }
    
    return count;
}
