/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.6 at Wed Oct 26 00:46:11 2016. */

#include "fence_vertex.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t px4_fence_vertex_pb_fields[4] = {
    PB_FIELD(  1, UINT64  , REQUIRED, STATIC  , FIRST, px4_fence_vertex_pb, timestamp, timestamp, 0),
    PB_FIELD(  2, FLOAT   , REQUIRED, STATIC  , OTHER, px4_fence_vertex_pb, lat, timestamp, 0),
    PB_FIELD(  3, FLOAT   , REQUIRED, STATIC  , OTHER, px4_fence_vertex_pb, lon, lat, 0),
    PB_LAST_FIELD
};


/* @@protoc_insertion_point(eof) */