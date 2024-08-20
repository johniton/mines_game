#ifndef MINES_HEADER_HPP
#define MINES_HEADER_HPP



#ifndef MINES_HEADER
#define MINES_HEADER

extern int A[5][5];  // Declaration of the array
//extern float cash{};
void arr_initialization(int A[][5]);
void arr_display(int A[][5]);
int mine_generator();
void main_game(float& money, int mines);
void check(int mines);
void loser(float& money, int mines);
void winner(float& money, int mines);
float display_money(float money);
#endif




#endif
