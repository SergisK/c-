#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int tab[4][4] {};

int uzupelnienie()
{
    srand(time(NULL));
    tab[0][0]=rand()%4+1;
 tab[4][4]=rand()%4+1;
 tab[4][0]=rand()%4+1;
 tab[0][4]=rand()%4+1;
}

int wypisanie()
{
    for(int i=0; i < 4; i++)
    {
        for(int j=0; j< 4; j++)
        {
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }
}


int czy(int n,int i,int j)
{
bool spr=true;
        if((j+1)%2==0&&(i+1)%2==0)
        {

           for(int z=0;z<4;z++)
           {
            if(tab[z][j]==n || tab[i][z]==n || tab[i-1][j-1]==n )
            {
               spr=false;
            }
           }
            }
        else if((j+1)%2!=0&&(i+1)%2==0)
        {
           for(int z=0;z<4;z++)
           {
            if(tab[z][j]==n || tab[i][z]==n || tab[i-1][j+1]==n )
            {
                spr=false;
            }
        }}
        else if((j+1)%2!=0&&(i+1)%2!=0)
        {
           for(int z=0;z<4;z++)
           {
            if(tab[z][j]==n || tab[i][z]==n || tab[i+1][j+1]==n )
            {
                spr=false;
            }
        }}
        else if((j+1)%2==0&&(i+1)%2!=0)
        {
           for(int z=0;z<4;z++)
           {
            if(tab[z][j]==n || tab[i][z]==n || tab[i+1][j-1]==n )
            {
                spr=false;
            }

            }
        }


        if(spr==true)
            return true;
        else return false;
}

int main()
{
    uzupelnienie();

    for(int i=0; i < 4; i++)
    {
        for(int j=0; j< 4; j++)
        {
           if(czy(1,i,j)==true)
            {
                tab[i][j]=1;
            }
            if(czy(2,i,j)==true)
            {
                tab[i][j]=2;
            }

            else if(czy(4,i,j)==true)
            {
                tab[i][j]=4;
            }
            else if(czy(3,i,j)==true)
            {
                tab[i][j]=3;
            }

        }
    }

    wypisanie();
    return 0;
}
