#include<random>
#include<iostream>
#include "mines_header.hpp"
float cash{};
int g_point=0;
int g_ini=500;

int mine_generator()
{
    std::random_device rd;
    std::seed_seq ss{rd(),rd(),rd(),rd(),rd(),rd(),rd()};
    std::mt19937 mt{ss};
    std::uniform_int_distribution<int>rando{1,25};
    return(rando(mt));
}
void main_game(float& money,int mines)
{
    int index{};
    int B[mines];
    B[0]=mine_generator();
    for(int i=1;i<=mines-1;i++) //generation of mines
        {

            B[i]=mine_generator();
            index=i;
            bool b=true;
          while(b)
          {
              int j=1;
              if(B[j]==B[i] && index!=i)
                B[i]=mine_generator();
              for(j=1;j<=i;j++)
              {
                  if(B[i]==B[j] && index!=j)
                    b=true;
                    else
                        b=false;
              }
          }
        }


    int chance{},p{1};
    for(int i=1;i<=25-mines;i++)        //  RECHECK FULL FUNCTION
    {

        bool b=true;
        while(b)
        {
        std::cout<<"\n ENTER THE POSITION:";
        std::cin>>chance;
        if (chance>=1 && chance <=25 )
        {

               if(chance<=5 && chance>=1 && A[0][chance-1]==100) //works
                   {
                      b=false;

                   }
                else if(chance<=10 && chance>5 &&  A[1][chance%(6)]==100) //works
                   {
                      b=false;

                   }
                else if(chance<=15 && chance>10 && A[2][chance%11]==100)
                  {
                      b=false;

                  }
                else if(chance<=20 && chance>15 && A[3][chance%16]==100)
                    {
                        b=false;
                    }
                  else if(chance<=225 && chance>20 && A[4][chance%21]==100)
                    {
                        b=false;

                    }
                    if(b)
                        break;
                    else
                        std::cout<<"ENTER THE POSITION THAT YOU HAVENT ALREADY CHOSEN";
        }
        else
            std::cout<<"ENTER POSITIONS FROM 1 to 25 ONLY";
        }
        for(int j=0;j<=mines-1;j++)
        {
            if(chance==B[j])
            {
                p=0;
                break;
            }
            else
            {
                if(chance<=5 && chance>=1) //works
                   {
                      A[0][chance-1]=100;

                   }
                else if(chance<=10 && chance>5) //works
                   {
                       A[1][chance%(6)]=100;

                   }
                else if(chance<=15 && chance>10)
                  {
                      A[2][chance%11]=100;

                  }
                else if(chance<=20 && chance>15)
                    {
                        A[3][chance%16]=100;

                    }
                  else if(chance<=225 && chance>20)
                    {
                        A[4][chance%21]=100;

                    }

            }

        }
arr_display(A);
    }
    if(p)
    {
        loser(money,mines);

    }
    else
    {
        winner(money,mines);

    }

}

void loser(float &money,int mines )
{

      for( int i=1;i<=5;i++)
    {
        std::cout<<'\n';
        for(int j=1;j<=5;j++)
            if(j==1 || j==5 || i==5)
            std::cout<<"*";
        else
        std::cout<<" ";
    }
    std::cout<<"\n loser";
    g_point--;
    switch(mines)
    {
        case 1:money=money - 0.02*money + g_ini;break;
        case 2:money=money - 0.06*money + g_ini;break;
        case 3:money=money - 0.1*money + g_ini;break;
        case 5:money=money - 0.2*money + g_ini;break;
        case 6:money=money - 0.24*money + g_ini;break;
        case 7:money=money - 0.3*money + g_ini;break;
        case 8:money=money - 0.34*money + g_ini;break;
        case 9:money=money - 0.4*money + g_ini;break;
        case 10:money=money - 0.45*money + g_ini;break;
        case 11:money=money - 0.50*money + g_ini;break;
        case 12:money=money - 0.60*money + g_ini;break;
        case 13:money=money - 0.70*money + g_ini;break;
        case 14:money=money - 0.80*money + g_ini;break;
        case 15:money=money - 0.99*money + g_ini;break;
        case 16:money=money - money + g_ini;break;
    }

}
void winner(float &money,int mines )
{
    float cashout{};
      for( int i=1;i<=5;i++)
    {
        std::cout<<'\n';
        for(int j=1;j<=5;j++)
            if(j==1 || j==5 || i==5)
            std::cout<<"+";
        else
        std::cout<<" ";
    }
    std::cout<<"\n winner";
    g_point++;
    switch(mines)
    {
        case 1:money=money + 0.02*money + g_ini;break;
        case 2:money=money + 0.06*money + g_ini;break;
        case 3:money=money + 0.1*money + g_ini;break;
        case 4:money=money + 0.16*money + g_ini;break;
        case 5:money=money + 0.2*money + g_ini;break;
        case 6:money=money + 0.24*money + g_ini;break;
        case 7:money=money + 0.3*money + g_ini;break;
        case 8:money=money + 0.34*money + g_ini;break;
        case 9:money=money + 0.4*money + g_ini;break;
        case 10:money=money + 0.45*money + g_ini;break;
        case 11:money=money + 0.50*money + g_ini;break;
        case 12:money=money + 0.60*money + g_ini;break;
        case 13:money=money + 0.70*money + g_ini;break;
        case 14:money=money + 0.80*money + g_ini;break;
        case 15:money=money + 0.99*money + g_ini;break;
        case 16:money=money + money + g_ini;break;

    }
display_money(money);
}
float display_money(float money)
{
   float t=money;
}
