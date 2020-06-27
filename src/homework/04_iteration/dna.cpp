#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const std::string dna)
{
    double gc = 0;
    for (int i = 0; i < dna.length(); i++)
    {
        if (dna[i] == 'G' || dna[i] == 'C')
        {
            gc += 1;
        }
    }
    return gc / dna.size();
}

/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

std::string get_reverse_string(std::string dna)
{
    std::string reverse = dna;
    int j = 0;
    for (int i = dna.length()-1; i >= 0; i--)
    {
        reverse[j] = dna[i];
        j++;
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

    for (int i = 0; i <= revstring.length()-1; i++)
    {
        if (revstring[i] == 'A') returnstring.append("T");
        else if (revstring[i] == 'T') returnstring.append("A");
        else if (revstring[i] == 'C') returnstring.append("G");
        else if (revstring[i] == 'G') returnstring.append("C");
        else returnstring.append("" + revstring[i]);
    }
    return returnstring;
    
}