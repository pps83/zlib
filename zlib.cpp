#ifdef _MSC_VER
#pragma warning(disable: 4127 4244 4996)
#endif

#include "zutil.h"

#include "adler32.c"
#undef DO1
#undef DO8
#include "compress.c"
#include "crc32.c"
#include "deflate.c"
#include "infback.c"
#undef LOAD
#undef RESTORE
#undef INITBITS
#undef PULL
#undef PULLBYTE
#undef NEEDBITS
#undef BITS
#undef DROPBITS
#undef BYTEBITS
#undef ROOM
#include "inffast.c"
#define fixedtables fixedtables_inflate
#include "inflate.c"
#include "inftrees.c"
#include "trees.c"
#include "uncompr.c"
#undef GZIP
#include "zutil.c"
#include "gzclose.c"
#include "gzlib.c"
#include "gzread.c"
#include "gzwrite.c"
