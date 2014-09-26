/**
*           PrimeFinder Test Program  v 1.0.2
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
#include <limits>
#include <math.h>

using namespace std;

typedef unsigned long long int prec;


#ifndef FINDPRIMES_H
#define FINDPRIMES_H


class FindPrimes
{
    public:
        FindPrimes();
        virtual ~FindPrimes();

        /**
        *   \brief searchPrimes(); prints all primes to screen
        *   very slow
        **/
        void searchPrimes();

        /**
        *   \brief prec - long long int value
        *          nStart - start of search range
        *          nEnd - end of search range
        **/
        void searchPrimes(prec nStart, prec nEnd);

        /**
        *   \brief pNum - searches for nth prime of all primes
        **/
		prec searchPrimes(int pNum);

		/**
		*   \brief  nStart  - start of search range
		*           nEnd    - end of search range
		*           pNum    - returns nth prime of the given range
		*           return value is of the type 'long long int'
		**/
		prec searchPrimes(prec nStart, prec nEnd, int pNum);

		/**
		*   \brief  tNum    - Target number for prime factorial search
		*           prints all prime factorials of target number to screen
		**/
		void searchPrimeFactorials(prec tNum);

		/**
		*   \brief tNum     - Target number for prime factorial search
		*          maxP     - Bool for returning highest factorial is has factorials
		*          maxP = true for return highest, false checks to see if target has
        *          prime factorials
		**/
		prec searchPrimeFactorials(prec tNum, bool maxP);



    protected:



    private:
        prec curPrime;			
        prec curFactorial;		
		prec counter;	
		prec nthPrime;
        const prec pMax = std::numeric_limits<prec>::max();  //set pMax to the max value of usigned long long int for the current system

		void primeFinder(prec rangeStart, prec rangeEnd, int pNum, bool printScreen, bool runState );

        void factorialFinder(prec searchStart, prec targetNum, bool maxP, bool hasFactorial, bool printScreen, bool runState);

        void checkPrime(prec checkNum, bool printScreen, bool runState);

};

#endif // FINDPRIMES_H
