//In the name of Allah\\

#include<bits/stdc++.h>
#define mygc(c) (c)=getchar()
#define mypc(c) putchar(c)
using namespace std;
template<typename __ll>
inline void read(__ll &m)
{
    __ll x=0,f=1;char ch=getchar();
    while(!(ch>='0'&&ch<='9')){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    m=x*f;
}
int reader(char c[]){int i,s=0;for(;;){mygc(i);if(i!=' '&&i!='\n'&&i!='\r'&&i!='\t'&&i!=EOF) break;}c[s++]=i;for(;;){mygc(i);if(i==' '||i=='\n'||i=='\r'||i=='\t'||i==EOF) break;c[s++]=i;}c[s]='\0';return s;}
void writer(int x, char c){int s=0,m=0;char f[10];if(x<0)m=1,x=-x;while(x)f[s++]=x%10,x/=10;if(!s)f[s++]=0;if(m)mypc('-');while(s--)mypc(f[s]+'0');mypc(c);}

//###################################################################################################################################################################################################################


int main() {

    int n;
    read(n);

    int an = 0;

    for (int i = 0; i < n; ++i) {
        int a, b, c, d;
        read(a); read(b); read(c); read(d);
        an += (c - a + 1) * (d - b + 1);
    }

    writer(an,'\n');
    return 0;
}