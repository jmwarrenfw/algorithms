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

FindPrimes::FindPrimes()
{
    //ctor
}

FindPrimes::~FindPrimes()
{
    //dtor
}

void FindPrimes::findAll()
{


    for(pStart = 3; pStart < pMax; pStart++)
        {
            pRoot = sqrt(pStart);
            while( pCheck <= (pRoot+1) && dblCheck)
            {
                if(pStart % pCheck == 0)
                    dblCheck = false;

                if(pCheck == pRoot)
                {
                    if(pStart > curPrime)
                        curPrime = pStart;
                        cout << endl << "  " << curPrime << " is prime";
                }
                pCheck++;
            }
            pCheck = 2;
            dblCheck = true;

        }

    cout << endl;
}


void FindPrimes::findInRange(prec nStart, prec nEnd)
{
    pStart = nStart;
    pEnd = nEnd;
     for(pStart; pStart < pEnd; pStart++)
        {
            pRoot = sqrt(pStart);
            while( pCheck <= (pRoot+1) && dblCheck)
            {
                if(pStart % pCheck == 0)
                    dblCheck = false;

                if(pCheck == pRoot)
                {
                    if(pStart > curPrime)
                        curPrime = pStart;
                        cout << endl << "  " << curPrime << " is prime";
                }
                pCheck++;
            }
            pCheck = 2;
            dblCheck = true;

        }

    cout << endl;
}

prec FindPrimes::findNthPrime(int pNum)
{
    counter = 1;

        for(pStart = 3; pStart < pMax && counter < pNum; pStart++)
            {
                // using 1/2 of pStart instead of sqrt() for improved accuracy, using sqrt() will miss several primes
                pRoot = pStart/2;
                while( pCheck <= (pRoot+1) && dblCheck)
                {
                    if(pStart % pCheck == 0)
                        dblCheck = false;

                    if(pCheck == pRoot)
                    {
                        if(pStart > curPrime)
                            curPrime = pStart;
                            ++counter;
                            if(counter == pNum)
                                nthPrime = pStart;

                    }
                    pCheck++;
                }
                pCheck = 2;
                dblCheck = true;

            }


    return nthPrime;
}


prec FindPrimes::findNthPrime(prec nStart, prec nEnd, int pNum)
{
    counter = 1;

        pStart = nStart;
        pEnd = nEnd;
         for(pStart; pStart < pEnd && counter < pNum; pStart++)
            {
                pRoot = pStart/2;
                while( pCheck <= (pRoot+1) && dblCheck)
                {
                    if(pStart % pCheck == 0)
                        dblCheck = false;

                    if(pCheck == pRoot)
                    {
                        if(pStart > curPrime)
                                curPrime = pStart;
                                ++counter;
                                if(counter == pNum)
                                    nthPrime = pStart;
                    }
                    pCheck++;
                }
                pCheck = 2;
                dblCheck = true;

            }

    return nthPrime;
}












