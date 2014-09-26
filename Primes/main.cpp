/**
*           PrimeFinder Test Program  v 1.0.3
*                         and
*              FindPrimes Library  v 0.1.5
*
*                Copyright JWarren 2014
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
    FindPrimes primeSearch;

    cout << endl << endl << "    The following lists the primary functions of the FindPrimes Library,";
    cout << endl << "    as written by JWarren, and gives usage examples." << endl << endl;
    cout << endl << "    Finding the 10,000th prime in the list of all natural numbers.";
    cout << endl << "  - Calling function .searchPrimes(10000)" << endl;
    cout << endl << "  " << primeSearch.searchPrimes(10000) << endl;
    cout << endl << "    Finding the 10,000th prime in the range of 1 to 105,000.";
    cout << endl << "  - Calling function .searchPrimes(1, 105000, 10000)" << endl;
    cout << endl << "  " << primeSearch.searchPrimes(1, 105000, 10000) << endl;
    cout << endl << "    Finding all primes in the range of 105 to 150.";
    cout << endl << "  - Calling function .searchPrimes(105, 150)" << endl;
    primeSearch.searchPrimes(105, 150);
    cout << endl << endl << "    Finding all prime factorials of 30524.";
    cout << endl << "  - Calling function .searchPrimeFactorials(30524)" << endl;
    primeSearch.searchPrimeFactorials(30524);
    cout << endl << endl << "    Finding all prime factorials of 782496.";
    cout << endl << "  - Calling function .searchPrimeFactorials(782496)" << endl;
    primeSearch.searchPrimeFactorials(782496);
    cout << endl << endl << "    Finding the highest prime factorial of 105847";
    cout << endl << "  - Calling function searchPrimeFactorials(105847, true)" << endl;
    primeSearch.searchPrimeFactorials(105847, true);
    cout << endl << "    Checking to see if 8475 has any prime factorials.";
    cout << endl << "  - Calling function .searchPrimeFactorials(8475, false)" << endl;
    primeSearch.searchPrimeFactorials(8475, false);
    cout << endl << endl << "    Checking to see if 104729 has any prime factorials.";
    cout << endl << "  - Calling function .searchPrimeFactorials(104729, false)" << endl;
    primeSearch.searchPrimeFactorials(104729, false);

    cout << endl << endl << endl << "  *Caution* calling .primeSearch() without passing any arguments will";
    cout << endl << "  cause primeSearch to print all primes in the range of all natural numbers.";
    cout << endl << "  This function has been included for testing, and scientific purposes." << endl << endl;

    return 0;
}
