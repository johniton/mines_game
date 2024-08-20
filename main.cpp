// CASE 2 error
// print winner loser
//case 3
// cases in the winner loser increase to 25
//money value not changing

#include<iostream>
#include "mines_header.hpp"
int A[5][5];
extern float cash;
int main()
{

    float money{};
    int ch{},mines{};
    std::cout<<"WELCOME TO MINES \n IN THIS GAME YOU HAVE TO CHOOSE THE AMOUNT OF MINES TO BE PRESENT OUT OF 25 \n IF YOU ARE ABLE TO GUESS THE BOX WITHOUT THE MINE YOU GET AN INCREMENT ON THE MONEY THAT YOU INITIALLY PUT \n \nYOU ARE PROVIDED WITH INITIAL 500 INR TO START YOUR JOURNEY \n HAPPY GAMBLING cough*cough* I MEAN HAPPY GAMING\n ";

    std::cout<<"\n \n ENTER YOUR MONEY:";
    std::cin>>money;
    arr_initialization(A);

    while(ch!=4)
    {
        bool a=true;
        std::cout<<"\n ENTER YOUR CHOICE: \n 1] PLAY THE GAME \n 2] SEE YOUR MONEY \n 3] CHANGE CURRENCY \n 4]QUIT \n";
        std::cin>>ch;
        switch(ch)
        {
        case 1:
            while(a)
            {
            std::cout<<"ENTER THE NUMBER OF MINES ONLY FROM [1 to 25]:";
            std::cin>>mines;
            if(!(mines>25 && mines<1))
                a=false;
            } //works for mines=0 but shudnt
               main_game(money,mines);
               arr_initialization(A);
               break;
        case 2:

        std::cout<<"YOUR CASH CURRENTLY IS :"<<money;

        break;
        case 3:break;
        case 4:break;
        default : break;
        }
    }
}
void arr_initialization(int A[5][5])
{

    int i,j;
    int count=1;
    for(i=0;i<5;i++)
    {

        for(j=0;j<5;j++)
            {
                A[i][j]=count++;;


            }

    }
arr_display(A);
}
void arr_display(int A[][5])
{
    std::cout<<'\n';
    for(int k=1;k<=40;k++)
    {
        std::cout<<'_';
    }
    for(int i=0;i<5;i++)
    {
        std::cout<<'\n';

        for(int j=0;j<5;j++)
          {
              std::cout<<'|'<<A[i][j]<<'\t';
          }
        std::cout<<'|';
        std::cout<<'\n';
    for(int k=1;k<=40;k++)
    {
        std::cout<<'_';
    }
    }

}

