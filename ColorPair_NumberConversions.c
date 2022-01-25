#include<stdio.h>
#include<assert.h>

#include "ColorPair_NumberConversions.h"

const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

/* Functions Name: GetColorFromPairNumber
*  Declaration: ColorPair GetColorFromPairNumber(int pairNumber) ;
*  Definition: This function gives the color pair from the given number.
*/

ColorPair GetColorFromPairNumber(int pairNumber) 
{
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = (enum MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor = (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

/* Functions Name: ColorPairToString
*  Declaration: void ColorPairToString(const ColorPair* colorPair, char* buffer);
*  Call hierarchy: This function is called from testNumberToPair
*  Purpose: Prints the colorpair names in string format
*/

void ColorPairToString(const ColorPair* colorPair, char* buffer) 
{
   sprintf(buffer, "%s %s", MajorColorNames[colorPair->majorColor],MinorColorNames[colorPair->minorColor]);
}

/* Functions Name: GetPairNumberFromColor
*  Declaration: int GetPairNumberFromColor(const ColorPair* colorPair);
*  Call hierarchy: This function is called from testPairToNumber
*  Purpose: Returns the pair number from the color pair
*/
int GetPairNumberFromColor(const ColorPair* colorPair) 
{
    return colorPair->majorColor * numberOfMinorColors + colorPair->minorColor + 1;
}
