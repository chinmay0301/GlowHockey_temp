#include<iostream>

using namespace std;

void swap(int &a,int &b)
{
int x;
x=a;
a=b;
b=x;
}
void rotate(int ar[8][8],int n)
{
for(int i=n+1;i<8-n;i++)
{
swap(ar[n][i],ar[n][i-1]);
}

for(int i=n+1;i<8-n;i++)
{
swap(ar[i][7-n],ar[i-1][7-n]);
}

for(int i=n+1;i<8-n;i++)
{
swap(ar[7-n][7-i],ar[7-n][7-i+1]);
}

for(int i=n+1;i<7-n;i++)
{
swap(ar[7-i][n],ar[7-i+1][n]);
}

}

int  main()
{
int ar[8][8];

for(int i=0;i<8;i++)
for(int j=0;j<8;j++)
ar[i][j]=i+j;

for(int i=0;i<8;i++)
{
cout<<"\n";
for(int j=0;j<8;j++)
cout<<ar[i][j]<<" ";
}

rotate(ar,0);
rotate(ar,1);
rotate(ar,2);
rotate(ar,3);
cout<<"\n\n\n\n";

for(int i=0;i<8;i++)
{
cout<<"\n";
for(int j=0;j<8;j++)
cout<<ar[i][j]<<" ";
}

return 0;
}
