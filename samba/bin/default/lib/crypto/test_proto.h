#ifndef __DEFAULT_LIB_CRYPTO_TEST_PROTO_H__
#define __DEFAULT_LIB_CRYPTO_TEST_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

/* this file contains prototypes for functions that are private 
 * to this subsystem or library. These functions should not be 
 * used outside this particular subsystem! */


/* The following definitions come from ../lib/crypto/md4test.c  */

bool torture_local_crypto_md4(struct torture_context *torture);

/* The following definitions come from ../lib/crypto/md5test.c  */

bool torture_local_crypto_md5(struct torture_context *torture) ;

/* The following definitions come from ../lib/crypto/hmacmd5test.c  */

bool torture_local_crypto_hmacmd5(struct torture_context *torture) ;

/* The following definitions come from ../lib/crypto/aes_cmac_128_test.c  */

bool torture_local_crypto_aes_cmac_128(struct torture_context *torture);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __DEFAULT_LIB_CRYPTO_TEST_PROTO_H__ */

