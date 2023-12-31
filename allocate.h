
#ifndef INC_MEMCHCKR_ALLOCATE_H
#define INC_MEMCHCKR_ALLOCATE_H

#ifndef _WINDOWS_
#error Must include <Windows.h> before including this header!
#endif

typedef struct
{
	SIZE_T total;
	SIZE_T avail;
}
meminfo_t;

SIZE_T get_page_size();
BOOL change_working_set_size(const SIZE_T size);
meminfo_t get_physical_memory_info();

PVOID allocate_physical_memory(const SIZE_T size);
void free_physical_memory(const PVOID addr);

#endif
