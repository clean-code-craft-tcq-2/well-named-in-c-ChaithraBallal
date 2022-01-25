#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include<assert.h>

extern void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
extern void testPairToNumber(enum MajorColor major, enum MinorColor minor,int expectedPairNumber);

const int MAX_COLORPAIR_NAME_CHARS = 16;

/*type definitions */
typedef struct 
{
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

/* Function declarations */
extern ColorPair GetColorFromPairNumber(int pairNumber);
extern void ColorPairToString(const ColorPair* colorPair, char* buffer);
extern void ColorPairToString(const ColorPair* colorPair, char* buffer);
extern int GetPairNumberFromColor(const ColorPair* colorPair);
#endif /* MAIN_H */
