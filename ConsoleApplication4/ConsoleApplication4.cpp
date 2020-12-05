#include <iostream>
#include <iomanip>
#include <limits.h>
using namespace std;

unsigned long long fatorial(int);

int main(void)
{
    int i = 0;
    unsigned long long N = 2;
    unsigned long long antes = 0;
    while (1)
    {
        N = fatorial(i);
        if (N < antes)
        {
            cout << "\n\t" << ULLONG_MAX << "\t   ULLONG_MAX\n";
            cout << "\n\t" << i << "! excede o limite para int com 8 bytes\n";
            break;
        }
        antes = N;
        std::cout << std::setw(2) << i
            << "! =\t" << setw(20) << N;
        i += 1;
        if (N > UINT_MAX)
            std::cout << "\t > UINT_MAX\n";
        else
            std::cout << "\n";
    };
};

unsigned long long fatorial(int N)
{
    if (N == 0) return 1;
    return N * fatorial(N - 1);
};

/*
* 
 0! =                      1
 1! =                      1
 2! =                      2
 3! =                      6
 4! =                     24
 5! =                    120
 6! =                    720
 7! =                   5040
 8! =                  40320
 9! =                 362880
10! =                3628800
11! =               39916800
12! =              479001600
13! =             6227020800     > UINT_MAX
14! =            87178291200     > UINT_MAX
15! =          1307674368000     > UINT_MAX
16! =         20922789888000     > UINT_MAX
17! =        355687428096000     > UINT_MAX
18! =       6402373705728000     > UINT_MAX
19! =     121645100408832000     > UINT_MAX
20! =    2432902008176640000     > UINT_MAX
21! =   14197454024290336768     > UINT_MAX
22! =   17196083355034583040     > UINT_MAX

        18446744073709551615       ULLONG_MAX

        23! excede o limite para int com 8 bytes
        
*/