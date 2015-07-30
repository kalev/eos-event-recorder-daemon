/* -*- mode: C; c-file-style: "gnu"; indent-tabs-mode: nil; -*- */

/* Copyright 2014 Endless Mobile, Inc. */

#include "emer-cache-version-provider.h"

typedef struct _EmerCacheVersionProviderPrivate
{
  gboolean foo;
} EmerCacheVersionProviderPrivate;

G_DEFINE_TYPE_WITH_PRIVATE (EmerCacheVersionProvider,
                            emer_cache_version_provider,
                            G_TYPE_OBJECT);

static void
emer_cache_version_provider_class_init (EmerCacheVersionProviderClass *klass)
{
}

static void
emer_cache_version_provider_init (EmerCacheVersionProvider *self)
{
}

EmerCacheVersionProvider *
emer_cache_version_provider_new ()
{
  return g_object_new (EMER_TYPE_CACHE_VERSION_PROVIDER, NULL);
}

EmerCacheVersionProvider *
emer_cache_version_provider_new_full (const gchar *cache_version_file_path)
{
  return g_object_new (EMER_TYPE_CACHE_VERSION_PROVIDER, NULL);
}

gboolean
emer_cache_version_provider_get_version (EmerCacheVersionProvider *self,
                                         gint                     *version)
{
  *version = 0;
  return TRUE;
}

gboolean
emer_cache_version_provider_set_version (EmerCacheVersionProvider *self,
                                         gint                      new_version,
                                         GError                  **error)
{
  return TRUE;
}
