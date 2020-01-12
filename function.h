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

template <typename T>
T invint(T N)
{
    T temp = N, R = 0;
    while (temp > 0)
    {
        R = R * 10 + (temp % 10);
        temp /= 10;
    }

    return R;
}

template <typename T>
vector<T>* divisorOf(T n)
{
    vector<T>* divisor;
    for (T i=1; i<=sqrt(n); ++i)
        if (n%i == 0)
        {
            if (n/i == i)
                divisor->push_back(i);
            else
            {
                divisor->push_back(i);
                divisor->push_back(n/i);
            }
        }
    sort(divisor->begin(), divisor->end());
    return divisor;
}

void print(vector<int> data, char type='T', char sep='\n')
{
    cout << "----- ELENCO -----\n";
    for (auto i=data.begin(); i!=data.end(); i++)
        cout << *i << sep;
    cout << "==================\n";

}

template <typename T>
void print(T data, char type='T', char sep='\n')
{
    cout << "----- Valore -----\n";
        cout << data << sep;
    cout << "==================\n";
}

template <typename T>
T r_factorial(T n)
{
    return (n>1) ? n * r_factorial(n - 1) : 1;
}

template <typename T>
T l_factorial(T n)
{
    T factorial = 1;
    for(int i = 1; i <=n; ++i)
        factorial *= i;
    return factorial;
}

template <typename T>
bool isPrime (T n)
{
    T a;

    if (n == 1)
        return false;

    for(a = 2; a <= sqrt(n); a++)
        if (( n % a )== 0)
            return false;
    return true;
}

template <typename T>
T mcd(T a, T b)
{
  T resto = a % b;
  while(resto != 0)
  {
    a = b;
    b = resto;
    resto = a % b;
  }
  return b;
}

template <typename T>
T gcd(T v[], T N)
{
    T a = v[0];
    for(int i=1; i<N; i++
        a = mcd(a, v[i]);
    return a;
}

template <typename T>
T mcm(T a, T b)
{
    T temp = mcd(a, b);

    return temp ? (a / temp * b) : 0;
}

template <typename T>
T lcm(T v[], T N)
{
    T a = v[0];
    for(int i=1; i<N; i++)
        a = mcm(a, v[i]);
    return a;
}

string invstr(string s)
{
    int l=s.length();
    string c;
    for (int i=l; i>0; i--)
        c = c + s.at(i-1);
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
            bin = '0' + bin;
        else
            bin = '1' + bin;
    }

    n = atoi(bin.c_str());

    return n;
}


#endif // FUNCTION_H_INCLUDED
