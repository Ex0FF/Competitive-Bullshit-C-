#include<stdio.h>
#include<iostream>

using namespace std;
int binary(int arr[],int target,int l)
{
    int base=0,limit=l,mid;
    while(base<=limit)
    {
         mid=(base+limit)/2;
         if(arr[mid]==target)
            return mid;
         else if(arr[mid]>target)
            base = mid-1;
         else
            limit = mid+1;
    }
    return -1;
}
int main()
{
    int a,e,i=0,t=0; scanf("%i",&a); int b[a];
    for(i=0;i<a;i++)
    {
        scanf("%i",&b[i]);
        t+=b[i];
    }
    scanf("%i",&e);
    int j[e];
    for(i=0;i<e;i++)
    {
        scanf("%i",&j[i]);
    }
    int c[t],ii=0,temp=b[0];
    for(i=0;i<t;i++)
    {
        if(temp>0)
        {
            c[i] = ii;
            temp--;
        }
        else
        {
            ii++;
            temp=b[ii];
            c[i]=ii;
            temp--;
        }
    }
    for(i=0;i<e;i++)
    {
        printf("%i %s",c[j[i]-1]+1,"\n");
    }
}