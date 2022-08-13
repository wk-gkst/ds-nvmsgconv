
#ifndef NVCUSTOMMSGCONV_H_
#define NVCUSTOMMSGCONV_H_

#include <string>
#include <glib.h>

using namespace std;

#ifdef __cplusplus
extern "C"
{
#endif

typedef struct NvDsPPEObject
{
    gchar *stream_id;
    gchar *frame_unique_id;
    gchar *frame;
    guint hasVest;
    guint hasHelm;
    guint full;
    gchar *lcStatus;
    gchar *direction;
} NvDsPPEObject;

#ifdef __cplusplus
}
#endif
#endif /* NVCUSTOMMSGCONV_H_ */
