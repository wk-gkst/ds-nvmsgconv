
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


typedef enum NvDsObjectTypeCustom {
  //  NVDS_OBJECT_TYPE_VEHICLE,
  //  NVDS_OBJECT_TYPE_PERSON,
  //  NVDS_OBJECT_TYPE_FACE,
  //  NVDS_OBJECT_TYPE_BAG,
  //  NVDS_OBJECT_TYPE_BICYCLE,
  //  NVDS_OBJECT_TYPE_ROADSIGN,
  //  NVDS_OBJECT_TYPE_VEHICLE_EXT,
  //  NVDS_OBJECT_TYPE_PERSON_EXT,
  //  NVDS_OBJECT_TYPE_FACE_EXT,
   NVDS_OBJECT_TYPE_PPE = 0x103,
  //  NVDS_OBJECT_TYPE_RESERVED = 0x100,
  //  NVDS_OBJECT_TYPE_CUSTOM = 0x101,
  //  NVDS_OBJECT_TYPE_UNKNOWN = 0x102,
  //  NVDS_OBEJCT_TYPE_FORCE32 = 0x7FFFFFFF
 } NvDsObjectTypeCustom;