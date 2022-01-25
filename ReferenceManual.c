#include <stdio.h>
#include <assert.h>

#include "main.h"

extern int numberOfMajorColors;
extern int numberOfMinorColors;
extern const int MAX_COLORPAIR_NAME_CHARS;

void PrintReferenceManual(void)
{
  int pairNumber;
  printf("\nReference manual for the Personnel\n");
  for( pairNumber = 1; pairNumber < (numberOfMajorColors*numberOfMinorColors); pairNumber++)
  {
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf(" PairNumber: %d \t ColorPair: %s \t MajorColor: %d \t MinorColor: %d \n",pairNumber,colorPairNames,colorPair.majorColor+1,colorPair.minorColor+1 );
  }
}
