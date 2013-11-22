/* /root/samba-4.0.10/bin/default/source4/heimdal/lib/wind/combining_table.h */
/* Automatically generated at 2013-10-10T19:59:44.455368 */

#ifndef COMBINING_TABLE_H
#define COMBINING_TABLE_H 1

#include <krb5-types.h>

struct translation {
  uint32_t key;
  unsigned combining_class;	
};

extern const struct translation _wind_combining_table[];

extern const size_t _wind_combining_table_size;
#endif /* COMBINING_TABLE_H */
