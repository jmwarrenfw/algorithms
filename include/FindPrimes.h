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

        void findAll(); //prints all primes from 2 to 2e64-1 CAUTION - very slow could take years to finish
        void findInRange(prec nStart, prec nEnd); //prints all primes in a given range
        prec findNthPrime(int pNum); //returns nth prime in range of all primes
        //returns nth prime of a given range
        prec findNthPrime(prec nStart, prec nEnd, int pNum); //Does not return nth prime of all primes

    protected:

    private:
    prec pStart;  //start of primes search range
    prec pEnd;    //end of primes search range
    prec pCheck = 2;  //verification variable
    prec curPrime; //stores most recent prime number in search
    const prec pMax = 2e64-1;    //max value that can be searched for
    prec pRoot;   //root of possible prime
    int counter;  //used for finding nth prime
    bool dblCheck = true;
    prec nthPrime;
};

#endif // FINDPRIMES_H
