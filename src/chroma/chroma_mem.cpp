#include "chroma_mem.h"
#include "nn/types.h"

void malloc (ulong size);
void free(void *__ptr);

void Chroma_Alloc(unsigned int size) {
    return malloc((ulong)size);
}

void Chroma_AllocAligned(unsigned int size, unsigned int alignment) {
    return malloc((ulong)size);
}

void Chroma_Free(void* ptr) {
    if(ptr != nullptr) {
        free(ptr);
    }
}

void Chroma_FreeAligned(void* ptr) {
    if(ptr != nullptr) {
        free(ptr);
    }
}

