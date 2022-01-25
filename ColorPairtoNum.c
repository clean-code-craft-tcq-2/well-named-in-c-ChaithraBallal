#include<stdio.h>
#include<assert.h>

#include "ColorPairtoNum.h"

/*
* Function Name: testPairtoNumber
* Declaration: void testPairToNumber(enum MajorColor major, enum MinorColor minor,int expectedPairNumber);
* This function verifies the number for the given pair of colors
*/

void testPairToNumber(enum MajorColor major, enum MinorColor minor,int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}
