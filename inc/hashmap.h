/*! \file hashmap.h
 *  \brief Header file for the HashMap data structure implementation
 */

#ifndef HASHMAP_H
#define HASHMAP_H

#ifdef __cplusplus
extern "C" {
#endif

#include "map.h"
#include "list.h"

typedef struct {
  List_t *data;
  size_t size;
  float load_fact;
  int (*cmp)(void *, void *);
} HashMap_t;

int hashmap_init(HashMap_t *map, size_t size, float load_fact, int (*cmp)(void *, void *));
int hashmap_deinit(HashMap_t *map);

int hashmap_add(HashMap_t *map, void *key, void *val);
int hashmap_get(HashMap_t *map, void *key, void *val);
int hashmap_rem(HashMap_t *map, void *key, void *val);

static int hashmap_rehash(HashMap_t *map);

#ifdef __cplusplus
}
#endif

#endif // HASHMAP_H