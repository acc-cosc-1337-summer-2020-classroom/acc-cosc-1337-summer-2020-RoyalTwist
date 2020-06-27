#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const std::string name)
{
    double gc = 0;
    for (size_t i = 0; i <= name.length()-1; i++)
    {
        if (name[i] == 'G' || name[i] == 'C')
        {
            gc += 1;
        }
    }
    return gc / name.size();
}

/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

std::string get_reverse_string(std::string name)
{
    std::string reverse = "";
    for (size_t i = name.length()-1; i >= 0; i--)
    {
        reverse.append("" + name[i]);
    }
    return reverse;
}

/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

std::string get_dna_complement(std::string dna)
{
    std::string revstring = get_reverse_string(dna);
    std::string returnstring = "";

    for (size_t i = 0; i <= dna.length()-1; i++)
    {
        if (dna[i] == 'A') returnstring.append("T");
        else if (dna[i] == 'T') returnstring.append("A");
        else if (dna[i] == 'C') returnstring.append("G");
        else if (dna[i] == 'G') returnstring.append("C");
        else returnstring.append("" + dna[i]);
    }
    return returnstring;
    
}