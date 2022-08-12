
#include <string>

using namespace std;

struct NvDsPPEObject
{
    gchar* stream_id;
    gchar* frame_unique_id;
    gchar* frame;
    int hasVest;
    int hasHelm;
    int full;
    gchar* lcStatus;
    gchar* direction;
};
