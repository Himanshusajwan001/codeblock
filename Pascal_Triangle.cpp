#include<iostream>
#include<math.h>
using namespace std;

int pascal(int i,int j,int N)
{
    int z;
    if(i-1<0||j-1<0||j==i)
        return 1;
    else
        z=pascal(i-1,j,N)+pascal(i-1,j-1,N);
    
    return z; 
}

int main()
{
    int N,i,j,z;
    cin>>N;
    for(i=0;i<N;i++)
    {
        for(j=0;j<i+1;j++)
        {
            z=pascal(i,j,N);
                cout<<z<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
