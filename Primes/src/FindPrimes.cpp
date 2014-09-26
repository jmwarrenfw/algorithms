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
#include "FindPrimes.h"

using namespace std;

FindPrimes::FindPrimes()
{
    //ctor
}

FindPrimes::~FindPrimes()
{
    //dtor
}



void FindPrimes::searchPrimes()
{
    //set variables to return all primes starting wtih 2
    prec rangeStart = 1;
    bool runState = true;
    curPrime = 0;
    counter = 1;

    //call primeFinder to begin primes search
    primeFinder(rangeStart, pMax, 0, true, runState);

}


void FindPrimes::searchPrimes(prec nStart, prec nEnd)
{
    //set user variables to find all primes in a user defined range
    prec rangeStart = nStart, rangeEnd = nEnd;
    bool runState = true;
    curPrime = 0;
    counter = 1;

    //call primeFinder to begine primes search
    primeFinder(rangeStart, rangeEnd, 0, true, runState);
}


prec FindPrimes::searchPrimes(int pNum)
{
    //set variables to find user defined nth prime in the range of all natural numbers
    prec rangeStart = 1;
    bool runState = true;
    curPrime = 0;
    counter = 0;

    //call primeFinder to begine primes search
    primeFinder(rangeStart, pMax, pNum, false, runState);

    return nthPrime;

}


prec FindPrimes::searchPrimes(prec nStart, prec nEnd, int pNum)
{
    //set variables to find nth prime of a user defined range of numbers
    prec rangeStart = nStart, rangeEnd = nEnd;
    bool runState = true;
    curPrime = 0;
    counter = 0;

    //call primeFinder to begine primes search
    primeFinder(rangeStart, rangeEnd, pNum, false, runState);

    return nthPrime;

}


void FindPrimes::searchPrimeFactorials(prec tNum)
{
    //set variables to find all prime factorials of a user defined number
    prec searchStart = 2;
    bool runState = true;
    curFactorial = 0;

    //call factorialFinder to begine prime factorials search
    factorialFinder(searchStart, tNum, false, false, true, runState);
}


prec FindPrimes::searchPrimeFactorials(prec tNum, bool maxP)
{
    //set variables to find prime factorials of a user defined number
    prec searchStart = 2;
    bool runState = true;
    bool hasFactorials;
    curFactorial = 0;

    //if maxP is set to true, return only the highest prime factorial
    if (maxP)
        hasFactorials = false;
    else //return if number has any prime factorials
        hasFactorials = true;

    factorialFinder(searchStart, tNum, maxP, hasFactorials, false, runState);
    if(maxP)
        return curFactorial;
}


void FindPrimes::primeFinder(prec rangeStart, prec rangeEnd, int pNum, bool printScreen, bool runState )
{
    //set variables and begin search for possible primes
    prec pEnd = rangeEnd;
    prec pRoot;
    nthPrime = 0;
    int nthNum = pNum;
    bool printP = printScreen;
    bool runLoop = runState;

    if ( pNum > 0)  //called when searching for an nth prime
    {
        for(prec pStart = rangeStart; pStart < pEnd && counter < pNum; pStart++)
        {
                checkPrime(pStart, printP, runLoop);
                if (pNum != 0)
                {
                    if (counter == pNum - 1 && pNum > 0)
                    {
                        nthPrime = curPrime;
                    }
                }
        }
    }
    else  //called when searching for a range of primes or all primes
    {
    for(prec pStart = rangeStart; pStart < pEnd; pStart++)
        {
            checkPrime(pStart, printP, runLoop);
            if (pNum != 0)
            {
                if (counter == pNum - 1 && pNum > 0)
                {
                    nthPrime = curPrime;
                }
            }
        }
    }
}


void FindPrimes::factorialFinder(prec searchStart, prec targetNum, bool maxP, bool hasFactorial, bool printScreen, bool runState)
{
    //set variables and search for prime factorials
    prec pStart = searchStart;
    prec maxSearch = (targetNum/2) + 1;
    bool nthNum = maxP;
    bool printP = printScreen;
    bool dblCheck = true;
    prec j;

        for (pStart; pStart <= maxSearch && runState; pStart++)
        {
            if (targetNum % pStart == 0 && pStart < maxSearch)
            {
                j = 2;
                    dblCheck = true;
                    while(dblCheck)
                    {
                        if(pStart % j == 0 && j < pStart)
                        {
                            dblCheck = false;
                        }
                        else if (j == pStart || pStart % j == 0)
                        {
                            if(pStart > curFactorial)
                                curFactorial = pStart;

                            if (printP)
                                cout << endl << "  " << pStart << " is a prime factorial of " << targetNum;
                                dblCheck = false;
                         }
                         j++;
                    }

            }
        }
        //if maxP is true, return highest prime factorial
        if (maxP)
            cout << endl << "  " << curFactorial << " is the highest prime factorial of " << targetNum << endl;
        //if maxP is false and hasFactorial is true return has prime factorials if prime factorials were found
        if (!(maxP) && curFactorial !=0 && hasFactorial)
            cout << endl << "  " << targetNum << " has prime factorials" << endl;
        //if no prime factorials were found
        if (curFactorial == 0)
        {
            cout << endl << "  " << targetNum << " has no prime factorials" << endl;
        }
}


void FindPrimes::checkPrime(prec checkNum, bool printScreen, bool runState)
{
    //set variables and validate possible primes
    prec pRoot = checkNum/2;
    prec pCheck = 2;
    bool runLoop = runState;


        bool dblCheck = true;
        pCheck = 2;
            //validate possible primes up to 1/2 of test number
            while(pCheck <= (pRoot + 1) && dblCheck)
            {   //if modulus of test number by check number returns 0 test number is not prime
                if(checkNum % pCheck == 0 && pCheck != checkNum)
                {
                    dblCheck = false;
                }
                else if
                (pCheck == pRoot || pCheck == checkNum)  //number is prime
                {
                    ++counter;
                    runLoop = false;

                    if(checkNum > curPrime)
                        curPrime = checkNum;

                    if(printScreen)
                        cout << endl << "  " << curPrime << " is prime";
                }
                pCheck++;
            }
}
















