#pragma once

void Chroma_GenColorConversionPalettes();
int geti(void* ptr, int offset);
void puti(void* ptr, unsigned long value, int offset);
unsigned int _RLE_WriteRep(unsigned char* dest, unsigned int* destOffset, unsigned char value,
                           unsigned char count, unsigned int maxDestSize);
unsigned int _RLE_WriteNonRep(unsigned char* dest, unsigned int* destOffset, unsigned char value,
                              unsigned char count);
unsigned int RLE_Encode(unsigned char* dest, unsigned char* src, unsigned int srcSize);
unsigned int RLE_Decode(unsigned char* dest, unsigned char* src, unsigned int srcSize);
