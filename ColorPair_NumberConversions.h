#include<stdio.h>
#include<assert.h>

typedef struct 
{
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

/* Function declarations */
extern ColorPair GetColorFromPairNumber(int pairNumber);
extern void ColorPairToString(const ColorPair* colorPair, char* buffer);
extern void ColorPairToString(const ColorPair* colorPair, char* buffer);
extern int GetPairNumberFromColor(const ColorPair* colorPair);
