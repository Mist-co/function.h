#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

#include <bits/stdc++.h>
using namespace std;

void selectsort (int data[],int n)
{
    int mon,tmp,i,j,min_id;

    for (i=0; i<n-1; i++)
    {
        mon = data[i];
        for (j=i+1; j<n; j++)
            if (data[j] < mon)
            {
                mon = data[j];
                min_id = j;
            }
        tmp = data[i];
        data[i] = data[min_id];
        data[min_id] = tmp;
    }
}

void bubblesort(int data[],int n)
{
   int tmp,i,j;

    for (i=0; i<n-1; i++)
    {
        for (j=0; j<n-i-1; j++)
            if (data[j] > data[j+1])
            {
               tmp = data[j];
               data[j] = data[j+1];
               data[j+1] = tmp;
            }
    }
}

void quicksort (int data[],int left,int right)
{
   int mid,tmp,i,j;

   i = left;
   j = right;
   mid = data[(left + right)/2];
   do
   {
        while(data[i] < mid)
            i++;
        while(mid < data[j])
            j--;
        if (i <= j)
        {
            tmp = data[i];
            data[i] = data[j];
            data[j] = tmp;
            i++;
            j--;
        }
   }while (i <= j);
   if (left < j) quicksort(data,left,j);
   if (i < right) quicksort(data,i,right);
}

void insertionsort (int data[],int n)
{
    int tmp,i,j;

    for (j=1; j<n; j++)
    {
        i =j - 1;
        tmp = data[j];
        while ( (i>=0) && (tmp < data[i]) )
        {
            data[i+1] = data[i];
            i--;
        }
        data[i+1] = tmp;
    }
}

int invint(int N)
{
    int T = N, R = 0;
    while (T > 0)
    {
        R = R * 10 + (T % 10);
        T /= 10;
    }

    return R;
}

int mcd(int a, int b)
{
  int resto = a % b;
  while(resto != 0)
  {
    a = b;
    b = resto;
    resto = a % b;
  }
  return b;
}

int gcd(int v[], int N)
{
    int a = v[0];
    for(int i=1; i<N; i++)
    {
        a = mcd(a, v[i]);
    }
    return a;
}

int mcm(int a, int b)
{
    int temp = mcd(a, b);

    return temp ? (a / temp * b) : 0;
}

int lcm(int v[], int N)
{
    int a = v[0];
    for(int i=1; i<N; i++)
    {
        a = mcm(a, v[i]);
    }
    return a;
}

string invstr(string s)
{
    int l=s.length();
    string c;
    for (int i=l; i>0; i--)
    {
        c = c + s.at(i-1);
    }
    s=c;

    return s;
}

int dectobin(int n)
{
    int q=0;
    int r=0;
    string bin;
    while(n!=0)
    {
        q = n/2;
        r = n%2;
        n = q;
        if(r==0)
        {
            bin = '0' + bin;
        }
        else
        {
            bin = '1' + bin;
        }
    }

    n = atoi(bin.c_str());

    return n;
}


#endif // FUNCTION_H_INCLUDED
