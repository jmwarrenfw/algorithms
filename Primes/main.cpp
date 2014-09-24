/**
* PrimeFinder Test Program
*         and
* FindPrimes Library
*
* Copyright JWarren 2014
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
**/


#include <iostream>
#include "FindPrimes.h"

using namespace std;

int main()
{
    cout.precision(30);

    FindPrimes primeSearch;

    cout << endl << "  Testing FindPrimes lib." << endl;
    cout << endl << "  Executing command findInRange(300, 500)" << endl;
    primeSearch.findInRange(300, 500);
    cout << endl << "  Executing command findNthPrime(366)" << endl;
    cout << endl << "  " << primeSearch.findNthPrime(366) << endl;
    cout << endl << "  Executing command findNthPrime(3000, 6000, 15)" << endl;
    cout << endl << "  " << primeSearch.findNthPrime(3000, 6000, 15) << endl;

    return 0;
}
