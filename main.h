#include<stdio.h>
#include<assert.h>

#include "ColorPair_NumberConversions.h"

void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
void testPairToNumber(enum MajorColor major, enum MinorColor minor,int expectedPairNumber);

const int MAX_COLORPAIR_NAME_CHARS = 16;

/*type definitions */
enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
