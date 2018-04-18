#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int tab[4][4];
bool c_1;
bool c_2;
bool c_3;
bool c_4;
int main()
{
    srand(time(NULL));
    tab[0][0]=rand()%4+1;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
        if((i==2&&j==2)||(i==2&&j==0)||(i==0&&j==2)) //1
            {
                for(int z=0; z<4; z++)
                {
                    if(tab[i][z]==1 || tab[z][j]==1)
                    {
                        c_1=false;
                        break;
                    }
                    else if(tab[i][j+1]==1 || tab[i+1][j]==1 || tab[i+1][j+1]==1)
                    {
                        c_1=false;
                        break;
                    }
                    else
                        c_1=true;
                }
                for(int z=0; z<4; z++)
                {
                    if(tab[i][z]==2 || tab[z][j]==2)
                    {
                        c_2=false;
                        break;
                    }
                    else if(tab[i][j+1]==2 || tab[i+1][j]==2 || tab[i+1][j+1]==2)
                    {
                        c_2=false;
                        break;
                    }
                    else
                        c_2=true;
                }
                for(int z=0; z<4; z++)
                {
                    if(tab[i][z]==3 || tab[z][j]==3 )
                    {
                        c_3=false;
                        break;
                    }
                    else if (tab[i][j+1]==3 || tab[i+1][j]==3 || tab[i+1][j+1]==3)
                    {
                        c_3=false;
                        break;
                    }
                    else
                        c_3=true;
                }
                for(int z=0; z<4; z++)
                {
                    if(tab[i][z]==4 || tab[z][j]==4  )
                    {
                        c_4=false;
                        break;
                    }
                    else if(tab[i][j+1]==4 || tab[i+1][j]==4 || tab[i+1][j+1]==4)
                    {
                        c_4=false;
                        break;
                    }
                    else
                        c_4=true;
                }
            }
            else if ((i==0&&j==1)||(i==0&&j==3)||(i==2&&j==1)||(i==2&&j==3)) //2
            {
                for(int z=0; z<4; z++)
                {
                    if(tab[i][z]==1 || tab[z][j]==1  )
                    {
                        c_1=false;
                        break;
                    }
                    else if(tab[i][j-1]==1 || tab[i-1][j]==1 || tab[i-1][j-1]==1 )
                    {
                        c_1=false;
                        break;
                    }
                    else
                        c_1=true;
                }
                for(int z=0; z<4; z++)
                {
                    if(tab[i][z]==2 || tab[z][j]==2 )
                    {
                        c_2=false;
                        break;
                    }
                    else if(tab[i][j-1]==2 || tab[i-1][j]==2 || tab[i-1][j-1]==2)
                    {
                        c_2=false;
                        break;
                    }
                    else
                        c_2=true;
                }
                for(int z=0; z<4; z++)
                {
                    if(tab[i][z]==3 || tab[z][j]==3 )
                    {
                        c_3=false;
                        break;
                    }
                    else if(tab[i][j-1]==3 || tab[i-1][j]==3 || tab[i-1][j-1]==3)
                    {
                        c_3=false;
                        break;
                    }
                    else
                        c_3=true;
                }
                for(int z=0; z<4; z++)
                {
                    if(tab[i][z]==4 || tab[z][j]==4)
                    {
                        c_4=false;
                        break;
                    }
                    else if(tab[i][j-1]==4 || tab[i-1][j]==4 || tab[i-11][j-1]==4 )
                    {
                        c_4=false;
                        break;
                    }
                    else
                        c_4=true;
                }
            }
            else if ((i==1&&j==0)||(i==1&&j==2)||(i==3&&j==0)||(i==3&&j==2)) //3
            {
                for(int z=0; z<4; z++)
                {
                    if(tab[i][z]==1 || tab[z][j]==1)
                    {
                        c_1=false;
                        break;
                    }
                    else if(tab[i-1][j]==1 || tab[i][j+1]==1 || tab[i-1][j+1]==1)
                    {
                        c_1=false;
                        break;
                    }
                    else
                        c_1=true;
                }
                for(int z=0; z<4; z++)
                {
                    if(tab[i][z]==2 || tab[z][j]==2  )
                    {
                        c_2=false;
                        break;
                    }
                    else if(tab[i-1][j]==2 || tab[i][j+1]==2 || tab[i-1][j+1]==2)
                    {
                        c_2=false;
                        break;
                    }
                    else
                        c_2=true;
                }
                for(int z=0; z<4; z++)
                {
                    if(tab[i][z]==3 || tab[z][j]==3 )
                    {
                        c_3=false;
                        break;
                    }
                    else if(tab[i-1][j]==3 || tab[i][j+1]==3 || tab[i-1][j+1]==3)
                    {
                        c_3=false;
                        break;
                    }
                    else
                        c_3=true;
                }
                for(int z=0; z<4; z++)
                {
                    if(tab[i][z]==4 || tab[z][j]==4 )
                    {
                        c_4=false;
                        break;
                    }
                    else if(tab[i-1][j]==4 || tab[i][j+1]==4 || tab[i-1][j+1]==4)
                    {
                        c_4=false;
                        break;
                    }
                    else
                        c_4=true;
                }
            }
            else if ((i==1&&j==1)||(i==1&&j==3)||(i==3&&j==1)||(i==3&&j==3)) //4
            {
                for(int z=0; z<4; z++)
                {
                    if(tab[i][z]==1 || tab[z][j]==1 )
                    {
                        c_1=false;
                        break;
                    }
                    else if(tab[i-1][j]==1 || tab[i][j-1]==1 || tab[i-1][j-1]==1)
                    {
                        c_1=false;
                        break;
                    }
                    else
                        c_1=true;
                }
                for(int z=0; z<4; z++)
                {
                    if(tab[i][z]==2 || tab[z][j]==2  )
                    {
                        c_2=false;
                        break;
                    }
                    else if(tab[i-1][j]==2 || tab[i][j-1]==2 || tab[i-1][j-1]==2)
                    {
                        c_2=false;
                        break;
                    }
                    else
                        c_2=true;
                }
                for(int z=0; z<4; z++)
                {
                    if(tab[i][z]==3 || tab[z][j]==3 )
                    {
                        c_3=false;
                        break;
                    }
                    else if(tab[i-1][j]==3 || tab[i][j-1]==3 || tab[i-1][j-1]==3)
                    {
                        c_3=false;
                        break;
                    }
                    else
                        c_3=true;
                }
                for(int z=0; z<4; z++)
                {
                    if(tab[i][z]==4 || tab[z][j]==4 )
                    {
                        c_4=false;
                        break;
                    }
                    else if(tab[i-1][j]==4 || tab[i][j-1]==4 || tab[i-1][j-1]==4)
                    {
                        c_4=false;
                        break;
                    }
                    else
                        c_4=true;
                }
            }
            if(c_1==true)
                tab[i][j]=1;
            else if(c_2==true)
                tab[i][j]=2;
            else if(c_3==true)
                tab[i][j]=3;
            else if(c_4==true)
                tab[i][j]=4;}
    }
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
