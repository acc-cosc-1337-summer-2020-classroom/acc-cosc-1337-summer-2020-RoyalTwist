//cpp
#include "tic_tac_toe.h"


bool TicTacToe::game_over()
{
    if (check_row_win())
    {
        set_winner();
        return true;
    }
    else if (check_column_win())
    {
        set_winner();
        return true;
    }
    else if (check_diagonal_win())
    {
        set_winner();
        return true;
    }
    else if (check_board_full())
    {
        return true;
    }
    else
    {
        return false;
    }
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

void TicTacToe::start_game(std::string first_player)
{
    player = first_player; 
    clear_board();
}

void TicTacToe::display_board()const
{
    for (std::size_t i = 0; i < pegs.size(); i+=3)
    {
        std::cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }
    
}

void TicTacToe::set_next_player()
{
    if (player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
    
    
}

void TicTacToe::clear_board()
{
    for (std::size_t i = 0; i < pegs.size(); i++)
    {
        pegs[i] = " ";
    }
    
}

bool TicTacToe::check_board_full()const
{
    for(auto peg: pegs)
    {
        if(peg == " ")
        {
            return false;
        }
    }

    return true;
}

std::string TicTacToe::get_winner()
{
    return winner;
}

bool TicTacToe::check_column_win()
{
    if (pegs[0] == pegs[3] && pegs[3]== pegs[6] && pegs[0] != " ") return true;

    else if (pegs[1] == pegs[4] && pegs[4]== pegs[7] && pegs[1] != " ") return true;

    else if (pegs[2] == pegs[5] && pegs[5]== pegs[8] && pegs[2] != " ") return true;

    else return false;
}

bool TicTacToe::check_row_win()
{
    if (pegs[0] == pegs[1] && pegs[1]== pegs[2] && pegs[0] != " ") return true;

    else if (pegs[3] == pegs[4] && pegs[4]== pegs[5] && pegs[3] != " ") return true;

    else if (pegs[6] == pegs[7] && pegs[7]== pegs[8] && pegs[6] != " ") return true;

    else return false;
}

bool TicTacToe::check_diagonal_win()
{
    if (pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[0] != " ") return true;

    else if (pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[2] != " ") return true;

    else return false;
}

void TicTacToe::set_winner()
{
    if (player.compare("X") == 0)
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}