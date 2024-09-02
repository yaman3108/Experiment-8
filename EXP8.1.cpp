#include <iostream>
using namespace std;
int main(){
    int temp[3][3],i,j,k,l;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"enter element- ("<<i<<j<<"): ";
            cin>>temp[i][j];
        }
    }
    for(k=0;k<3;k++)
    {
        for(l=0;l<3;l++)
        {
            cout<<temp[k][l];
            cout<<" ";
        }
    }    
    return 0;
}
