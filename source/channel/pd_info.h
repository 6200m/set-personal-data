#include <stdint.h>

// In the following, we use uint16_t to denote UTF-16 characters.
struct PDInfoBlock {
    // Appears to be used only when other "profiles" of information
    // are set. The first profile, what this program currently only supports,
    // do not set a name and instead store an unknown value.
    // It's unknown what would happen if it was set -
    // most likely nothing, as observed from RVL_SDKs dated 2009 to 2011.
    uint16_t registrationName[32];

    // Noted to have a cap of 8 characters.
    uint16_t firstName[32];
    uint16_t lastName[32];

    // Observed to be in the format 123-4567, despite being longer in storage.
    // https://en.wikipedia.org/wiki/Postal_codes_in_Japan
    uint16_t zipCode[16];

    // Observed to be 0x19E.
    uint32_t unknown;

    // Possibly used for prefecture?
    uint16_t unknownString[32];

    // TODO: flesh out rest
};

struct PDInfoBlock *PD_ParseInfoBlock();
