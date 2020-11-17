// We need gettime from LWP to match OSGetTime.
#include "pd_info.h"
#include "pd_data.h"
#include <ogc/lwp_watchdog.h>
#include <stdio.h>

// TODO:
// printf("%llu\n", gettime());

void *PD_SeekInfoBlock() {
    void *pointerToContents = PD_GetFileContents();
    unsigned char *contents = (unsigned char *)pointerToContents;
    printf("%c %c %c %c %x\n", contents[0], contents[1], contents[2], contents[3], contents[4]);

    return NULL;
}

struct PDInfoBlock *PD_ParseInfoBlock() {
    void *blockPointer = PD_SeekInfoBlock();
    if (blockPointer == NULL) {
        return NULL;
    }

    return NULL;
}
