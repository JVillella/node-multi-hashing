#include "blake2.h"
#include <stdlib.h>
#include <stdio.h>

#include "blake2/blake2.h"


void blake2s_hash(const char* input, char* output, uint32_t len)
{
    blake2s(output, 32, input, len, NULL, 0);
}

void blake2b_hash(const char* input, char* output, uint32_t len)
{
    blake2b(output, 32, input, len, NULL, 0);
}
