#ifndef TEST_TEL_CO_COLOR_CODER_H
#define TEST_TEL_CO_COLOR_CODER_H

#include "TelCoColorCoder.h" 

void testNumberToPair(int pairNumber,
    TelCoColorCoder::MajorColor expectedMajor,
    TelCoColorCoder::MinorColor expectedMinor);

void testPairToNumber(
    TelCoColorCoder::MajorColor major,
    TelCoColorCoder::MinorColor minor,
    int expectedPairNumber);

#endif 
