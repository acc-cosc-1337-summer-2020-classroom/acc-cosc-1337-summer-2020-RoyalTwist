#include "tic_tac_toe.h"

int main() 
{
	TicTacToe tic_tac_toe;
	std::string player;
	int choice;
	do
	{
		/* code */
		std::cout<<"Enter X or O: ";
		std::cin>>player;

		tic_tac_toe.start_game(player);

		do
		{
			int position;
			std::cout<<"Enter position from 1 to 9: ";
			std::cin>>position;
			tic_tac_toe.mark_board(position);
			tic_tac_toe.display_board();

		} while (tic_tac_toe.game_over() == false);

		std::cout<<"Game over!\n";

		if (tic_tac_toe.get_winner()!="C") std::cout<<tic_tac_toe.get_winner()<<" wins!";
		else std::cout<<"It's a Tie!";

		std::cout<<"Enter 1 to play again...:";
		std::cin>>choice;
	} while (choice == 1);

	return 0;
}