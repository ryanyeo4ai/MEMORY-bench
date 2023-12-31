
#ifndef INC_MEMCHCKR_RANDOM_H
#define INC_MEMCHCKR_RANDOM_H

#ifndef _WINDOWS_
#error Must include <Windows.h> before including this header!
#endif

typedef struct
{
	ULONG32 x, y, z, w, v, d;
}
rand_state_t;

BOOL random_seed(rand_state_t *const state);
ULONG32 random_next(rand_state_t *const state);
void random_bytes(rand_state_t *const state, BYTE *buffer, SIZE_T size);

#endif
