// the EAX property GUIDs referenced by the sound code used to come from the
// eaxguid.lib import library shipped with the old OpenAL SDK, they are
// defined in source now
#include <initguid.h>

// {C4D79F1E-F1AC-436b-A81D-A738E7045469}
DEFINE_GUID(EAXPROPERTYID_EAX40_FXSlot0, 
    0xc4d79f1e, 
    0xf1ac, 
    0x436b, 
    0xa8, 0x1d, 0xa7, 0x38, 0xe7, 0x4, 0x54, 0x69);

// {1B86B823-22DF-4eae-8B3C-1278CE544227}
DEFINE_GUID(EAXPROPERTYID_EAX40_Source, 
    0x1b86b823, 
    0x22df, 
    0x4eae, 
    0x8b, 0x3c, 0x12, 0x78, 0xce, 0x54, 0x42, 0x27);
