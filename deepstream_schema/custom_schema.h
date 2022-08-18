
#ifndef NVCUSTOMMSGCONV_H_
#define NVCUSTOMMSGCONV_H_

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
    gchar *lcStatus;
    gchar *direction;
    gchar *classId;
    guint hasVest;
    guint hasHelm;
    guint full;    
} NvDsPPEObject;

#ifdef __cplusplus
}
#endif
#endif /* NVCUSTOMMSGCONV_H_ */
