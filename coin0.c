#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int coin[3];
  int h=0;
  int t=0;
  srand(time(NULL));
  for(int i=0;i<3;i++)
  {
    coin[i]=rand()%2;  
  }
  printf("Tossing a coin...\n");
  for(int i=0;i<3;i++)
  {
    if(coin[i]==0)
    {
      printf("Round %d: Heads\n",i+1);
      h++;
    }
    else
    {
      printf("Round %d: Tails\n",i+1);
      t++;
    }
  }
  printf("Heads: %d, Tails: %d\n",h,t);
  

}
