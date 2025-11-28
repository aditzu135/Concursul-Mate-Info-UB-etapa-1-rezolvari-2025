#include <iostream>

using namespace std;

int v[] = {0 , 2 , 5, 8},x[5],nr;
int f[4]={0};
const int n = 5;
int poz(int x)
{
    for (int i=0;i<=3;i++)
         if(v[i]==x)
            return i;
}
void adiback(int k)
{
    if(k==n)
    {
        bool ok=0;
        for(int i=1;i<4;i++)
            if(!f[i]) ok=1;
        if(!ok)
        nr++;
        return;
    }

    for(int i=0;i<4;i++)
    {
        x[k] = v[i];
        f[i]++;
        adiback(k+1);
        f[i]--;
    }
}
int main()
{
    adiback(0);
    cout<<nr;
}
