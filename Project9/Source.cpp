#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <stdio.h>
using namespace std;

long int iterativ_fib(long int n)	
//varianta de implementare iterativa
{
  if (n==0) return 0;
  if (n==1) return 1;
  int i; 
  long int a, b, c; 
  a=0; b=1;
  for (i=2; i<=n; i++)
  {
   c=b; b+=a; a=c;
  }
  return b;
}

long int recursiv_fib(long int n)	
//varianta de implementare recursiva
{
  if (n==0) return 0;
  if (n==1) return 1;
  long int i1=recursiv_fib(n-1);
  long int i2=recursiv_fib(n-2);
  return i1+i2;
}

int main(int argc, char *argv[])
{
  int n;
  for (n=10; n<=40; n++)  
  {
     clock_t t1, t2, t3;
     cout<<CLK_TCK<<'\n';
     t1=clock();
     long int f1=iterativ_fib(n);
     t2=clock();
     long f2=recursiv_fib(n);
     t3=clock();
     double timp1=(double)(t2-t1)/CLK_TCK;
     double timp2=(double)(t3-t2)/CLK_TCK;
     cout<<"ITERATIV: "<<f1<<" t="<<timp1<<endl;
     cout<<"RECURSIV: "<<f2<<" t="<<timp2<<endl;
   } 
  system("PAUSE");
  return 0;
}
