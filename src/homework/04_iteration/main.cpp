//write include statements
#include "dna.h"
#include <iostream>

//write using statements


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	std::cout<<get_gc_content("AGCTATAG");
	std::cout<<get_gc_content("CGCTATAG");
	std::cout<<get_reverse_string("AGCTATAG");
	std::cout<<get_reverse_string("CGCTATAG");
	std::cout<<get_dna_complement("AAAACCCGGT");
	std::cout<<get_dna_complement("CCCGGAAAAT");

	return 0;
}