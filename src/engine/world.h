
enum                            // hardcoded texture numbers
{
	DEFAULT_SKY = 0,
	DEFAULT_GEOM
};

#define MAPVERSION 34           // bump if map format changes, see worldio.cpp

struct octaheader
{
	char magic[4];              // "CARD"
	int version;                // any >8bit quantity is little endian
	int headersize;             // sizeof(header)
	int worldsize;
	int numents;
	int numpvs;
	int lightmaps;
	int blendmap;
	int numvars;
	int numvslots;
};

// TODO: is this still relevant?
struct compatheader             // map file format header
{
	char magic[4];              // "CARD"
	int version;                // any >8bit quantity is little endian
	int headersize;             // sizeof(header)
	int worldsize;
	int numents;
	int numpvs;
	int lightmaps;
	int lightprecision, lighterror, lightlod;
	uchar ambient;
	uchar watercolor[3];
	uchar blendmap;
	uchar lerpangle, lerpsubdiv, lerpsubdivsize;
	uchar bumperror;
	uchar skylight[3];
	uchar lavacolor[3];
	uchar waterfallcolor[3];
	uchar reserved[10];
	char maptitle[128];
};

#define WATER_AMPLITUDE 0.4f
#define WATER_OFFSET 1.1f

enum 
{ 
	MATSURF_NOT_VISIBLE = 0,
	MATSURF_VISIBLE,
	MATSURF_EDIT_ONLY
};

#define TEX_SCALE 8.0f

struct vertex { vec pos; bvec4 norm; vec2 tc; svec2 lm; bvec4 tangent; };

