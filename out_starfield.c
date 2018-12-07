// Preamble
#define __USE_MINGW_ANSI_STDIO 1
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif
#ifndef _CRT_NONSTDC_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
#endif

#if _MSC_VER >= 1900 || __STDC_VERSION__ >= 201112L
// Visual Studio 2015 supports enough C99/C11 features for us.
#else
#error "C11 support required or Visual Studio 2015 or later"
#endif

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wvarargs"
#endif

#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>
#include <stdarg.h>
#include <assert.h>

typedef unsigned char uchar;
typedef signed char schar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef long long llong;
typedef unsigned long long ullong;

#ifdef _MSC_VER
#define alignof(x) __alignof(x)
#else
#define alignof(x) __alignof__(x)
#endif

#define va_start_ptr(args, arg) (va_start(*(args), *(arg)))
#define va_copy_ptr(dest, src) (va_copy(*(dest), *(src)))
#define va_end_ptr(args) (va_end(*(args)))

struct Any;
static void va_arg_ptr(va_list *args, struct Any any);


// Foreign preamble
typedef struct tm tm_t;

// Foreign header files
#include <limits.h>
#include <stdint.h>
#include <sdl_bits.h>
#include <xmmintrin.h>
#include <ctype.h>
#include <errno.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <SDL.h>

// Forward declarations
typedef struct starfield_RGB8 starfield_RGB8;
typedef struct TypeInfo TypeInfo;
typedef struct noir_KeyEvent noir_KeyEvent;
typedef struct noir_int2 noir_int2;
typedef struct noir_MouseButtonEvent noir_MouseButtonEvent;
typedef struct noir_MouseMoveEvent noir_MouseMoveEvent;
typedef union noir_EventData noir_EventData;
typedef struct noir_Event noir_Event;
typedef struct noir_Display noir_Display;
typedef struct noir_Window noir_Window;
typedef struct noir_DigitalButton noir_DigitalButton;
typedef struct noir_Mouse noir_Mouse;
typedef struct noir_Time noir_Time;
typedef struct noir_Audio noir_Audio;
typedef struct noir_App noir_App;
typedef struct starfield_Image starfield_Image;
typedef struct noir_float2 noir_float2;
typedef struct starfield_Rect starfield_Rect;
typedef struct starfield_PixelIter starfield_PixelIter;
typedef struct starfield_Color starfield_Color;
typedef struct starfield_Tex starfield_Tex;
typedef struct starfield_Starfield starfield_Starfield;
typedef struct starfield_DiffractionArguments starfield_DiffractionArguments;
typedef struct starfield_StarType starfield_StarType;
typedef struct TypeFieldInfo TypeFieldInfo;
typedef struct Any Any;
typedef struct starfield_Star starfield_Star;
typedef struct starfield_BufHeader starfield_BufHeader;

// Sorted declarations
#line 174 "C:\\code\\starfield\\starfield\\starfield.ion"
struct starfield_RGB8 {
    uint8_t b;
    #line 175
    uint8_t g;
    #line 175
    uint8_t r;
    uint8_t padding;
};

#line 788
int main(int argc, char (*(*argv)));

#line 1 "C:\\code\\cloned\\bitwise\\ion\\system_packages\\builtin\\config_win32.ion"
extern char const ((*IONOS));

#line 1 "C:\\code\\cloned\\bitwise\\ion\\system_packages\\builtin\\config_x64.ion"
extern char const ((*IONARCH));

#line 1 "C:\\code\\cloned\\bitwise\\ion\\system_packages\\builtin\\typeinfo.ion"
typedef ullong typeid;

typedef int TypeKind;

#line 4
#define TYPE_NONE ((TypeKind)(0))

#line 5
#define TYPE_VOID ((TypeKind)((TYPE_NONE) + (1)))

#line 6
#define TYPE_BOOL ((TypeKind)((TYPE_VOID) + (1)))

#line 7
#define TYPE_CHAR ((TypeKind)((TYPE_BOOL) + (1)))

#line 8
#define TYPE_UCHAR ((TypeKind)((TYPE_CHAR) + (1)))

#line 9
#define TYPE_SCHAR ((TypeKind)((TYPE_UCHAR) + (1)))

#line 10
#define TYPE_SHORT ((TypeKind)((TYPE_SCHAR) + (1)))

#line 11
#define TYPE_USHORT ((TypeKind)((TYPE_SHORT) + (1)))

#line 12
#define TYPE_INT ((TypeKind)((TYPE_USHORT) + (1)))

#line 13
#define TYPE_UINT ((TypeKind)((TYPE_INT) + (1)))

#line 14
#define TYPE_LONG ((TypeKind)((TYPE_UINT) + (1)))

#line 15
#define TYPE_ULONG ((TypeKind)((TYPE_LONG) + (1)))

#line 16
#define TYPE_LLONG ((TypeKind)((TYPE_ULONG) + (1)))

#line 17
#define TYPE_ULLONG ((TypeKind)((TYPE_LLONG) + (1)))

#line 18
#define TYPE_FLOAT ((TypeKind)((TYPE_ULLONG) + (1)))

#line 19
#define TYPE_DOUBLE ((TypeKind)((TYPE_FLOAT) + (1)))

#line 20
#define TYPE_CONST ((TypeKind)((TYPE_DOUBLE) + (1)))

#line 21
#define TYPE_PTR ((TypeKind)((TYPE_CONST) + (1)))

#line 22
#define TYPE_ARRAY ((TypeKind)((TYPE_PTR) + (1)))

#line 23
#define TYPE_STRUCT ((TypeKind)((TYPE_ARRAY) + (1)))

#line 24
#define TYPE_UNION ((TypeKind)((TYPE_STRUCT) + (1)))

#line 25
#define TYPE_FUNC ((TypeKind)((TYPE_UNION) + (1)))

#line 34
struct TypeInfo {
    TypeKind kind;
    int size;
    int align;
    char const ((*name));
    int count;
    typeid base;
    TypeFieldInfo (*fields);
    int num_fields;
};

#line 51
TypeKind typeid_kind(typeid type);

#line 55
int typeid_index(typeid type);

#line 59
size_t typeid_size(typeid type);

#line 63
TypeInfo const ((*get_typeinfo(typeid type)));

#line 65 "C:\\code\\cloned\\bitwise\\ion\\system_packages\\builtin\\types.ion"
#define UCHAR_MIN ((uchar)(0))

#line 88
#define USHORT_MIN ((short)(0))

#line 99
#define UINT_MIN ((uint)(0))

#line 110
#define ULLONG_MIN ((ullong)(0))

#line 115
#define UINT8_MIN (UCHAR_MIN)

#line 126
#define UINT16_MIN (USHORT_MIN)

#line 137
#define UINT32_MIN (UINT_MIN)

#line 148
#define UINT64_MIN (ULLONG_MIN)

#line 19 "C:\\code\\cloned\\bitwise\\ion\\system_packages\\builtin\\types_win32.ion"
#define ULONG_MIN ((ulong)(INT32_MIN))

#line 15 "C:\\code\\cloned\\bitwise\\ion\\system_packages\\builtin\\types_x64.ion"
#define USIZE_MIN (UINT64_MIN)

#line 26
#define UINTPTR_MIN (UINT64_MIN)

#line 142 "C:\\code\\starfield\\starfield\\image.ion"
void starfield_test_iterator(void);

#line 412 "C:\\code\\starfield\\noir\\noir.ion"
#define NOIR_MAX_ERROR (256)

#line 535
#define NOIR_MAX_EVENTS (256)

#line 500
typedef int noir_EventKind;

#line 509
struct noir_KeyEvent {
    int key;
    bool repeat;
};

#line 493
typedef int noir_MouseButton;

#line 4
struct noir_int2 {
    int x;
    #line 5
    int y;
};

#line 514
struct noir_MouseButtonEvent {
    noir_MouseButton button;
    noir_int2 pos;
};

struct noir_MouseMoveEvent {
    noir_int2 pos;
    noir_int2 delta_pos;
};

union noir_EventData {
    noir_KeyEvent key;
    noir_MouseButtonEvent mouse_button;
    noir_MouseMoveEvent mouse_move;
};

struct noir_Event {
    noir_EventKind kind;
    noir_EventData data;
};

#line 487
struct noir_Display {
    noir_int2 size;
    int rate;
    float dpi;
};

#line 413
#define NOIR_MAX_TITLE (256)

#line 466
struct noir_Window {
    bool resizable;
    bool hidden;
    bool fullscreen;
    #line 471
    char const ((*title));
    noir_int2 pos;
    noir_int2 size;
    bool moved;
    bool resized;
    #line 477
    char (synced_title[NOIR_MAX_TITLE]);
    noir_int2 synced_pos;
    noir_int2 synced_size;
    bool synced_resizable;
    bool synced_hidden;
    bool synced_fullscreen;
    #line 484
    SDL_Window (*sdl);
};

#line 388
typedef int noir_Key;

#line 389
#define NOIR_KEY_LSHIFT ((noir_Key)(256))

#line 390
#define NOIR_KEY_RSHIFT ((noir_Key)((NOIR_KEY_LSHIFT) + (1)))

#line 391
#define NOIR_KEY_SHIFT ((noir_Key)((NOIR_KEY_RSHIFT) + (1)))

#line 392
#define NOIR_KEY_LCTRL ((noir_Key)((NOIR_KEY_SHIFT) + (1)))

#line 393
#define NOIR_KEY_RCTRL ((noir_Key)((NOIR_KEY_LCTRL) + (1)))

#line 394
#define NOIR_KEY_CTRL ((noir_Key)((NOIR_KEY_RCTRL) + (1)))

#line 395
#define NOIR_KEY_LALT ((noir_Key)((NOIR_KEY_CTRL) + (1)))

#line 396
#define NOIR_KEY_RALT ((noir_Key)((NOIR_KEY_LALT) + (1)))

#line 397
#define NOIR_KEY_ALT ((noir_Key)((NOIR_KEY_RALT) + (1)))

#line 398
#define NOIR_KEY_CAPS ((noir_Key)((NOIR_KEY_ALT) + (1)))

#line 399
#define NOIR_KEY_RETURN ((noir_Key)((NOIR_KEY_CAPS) + (1)))

#line 400
#define NOIR_KEY_SPACE ((noir_Key)((NOIR_KEY_RETURN) + (1)))

#line 401
#define NOIR_KEY_BACKSPACE ((noir_Key)((NOIR_KEY_SPACE) + (1)))

#line 402
#define NOIR_KEY_ESCAPE ((noir_Key)((NOIR_KEY_BACKSPACE) + (1)))

#line 403
#define NOIR_KEY_TAB ((noir_Key)((NOIR_KEY_ESCAPE) + (1)))

#line 404
#define NOIR_KEY_LEFT ((noir_Key)((NOIR_KEY_TAB) + (1)))

#line 405
#define NOIR_KEY_RIGHT ((noir_Key)((NOIR_KEY_LEFT) + (1)))

#line 406
#define NOIR_KEY_UP ((noir_Key)((NOIR_KEY_RIGHT) + (1)))

#line 407
#define NOIR_KEY_DOWN ((noir_Key)((NOIR_KEY_UP) + (1)))

#line 408
#define NOIR_NUM_KEYS ((noir_Key)((NOIR_KEY_DOWN) + (1)))

#line 370
struct noir_DigitalButton {
    bool down;
    int pressed;
    int released;
};

#line 433
struct noir_Mouse {
    bool moved;
    noir_int2 pos;
    noir_int2 delta_pos;
    #line 438
    bool global_moved;
    noir_int2 global_pos;
    noir_int2 global_delta_pos;
    #line 442
    noir_DigitalButton left_button;
    noir_DigitalButton middle_button;
    noir_DigitalButton right_button;
    bool capture;
    #line 447
    bool synced_capture;
    noir_int2 synced_pos;
    noir_int2 synced_global_pos;
};

#line 411
#define NOIR_MAX_TEXT (1024)

#line 415
struct noir_Time {
    int delta_ticks;
    int delta_nsecs;
    int delta_usecs;
    int delta_msecs;
    float delta_secs;
    #line 422
    uint64_t ticks;
    uint64_t nsecs;
    uint64_t usecs;
    uint64_t msecs;
    double secs;
    #line 428
    uint64_t ticks_per_sec;
    #line 430
    uint64_t sdl_start_ticks;
};

#line 452
struct noir_Audio {
    bool valid;
    int rate;
    int channels;
    #line 457
    bool play;
    void (*callback)(void *, noir_float2 *, int);
    void (*context);
    #line 461
    bool synced_play;
    #line 463
    int sdl_device;
};

#line 537
struct noir_App {
    bool init;
    bool quit;
    int num_updates;
    char const ((*error));
    char (error_buf[NOIR_MAX_ERROR]);
    noir_Event (events[NOIR_MAX_EVENTS]);
    int num_events;
    #line 546
    char const ((*platform));
    char const ((*clipboard));
    noir_Display display;
    noir_Window window;
    noir_DigitalButton (keys[NOIR_NUM_KEYS]);
    noir_Mouse mouse;
    char (text[NOIR_MAX_TEXT]);
    noir_Time time;
    noir_Audio audio;
    #line 556
    char (*synced_clipboard);
};

#line 562
#define NOIR_DEFAULT_WINDOW_POS ((1) << (31))

extern noir_App noir_app;

#line 24 "C:\\code\\starfield\\starfield\\starfield.ion"
extern noir_int2 const (starfield_ImageSize);

#line 329 "C:\\code\\starfield\\noir\\noir.ion"
bool noir_app_init(void);

#line 616
void noir_print_and_clear_error(void);

#line 217 "C:\\code\\starfield\\starfield\\math.ion"
extern uint32_t starfield_random_state;

#line 150 "C:\\code\\starfield\\starfield\\starfield.ion"
size_t starfield_hash(void (*p), ptrdiff_t len);

#line 609
extern size_t starfield_more_entropy;

#line 3 "C:\\code\\starfield\\starfield\\image.ion"
struct starfield_Image {
    starfield_Color (*pixels);
    noir_int2 size;
};

starfield_Image starfield_make_image(noir_int2 size);

#line 14 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_square(float x);

#line 243
float starfield_random01(void);

#line 12 "C:\\code\\starfield\\noir\\noir.ion"
struct noir_float2 {
    float x;
    #line 13
    float y;
};

#line 185 "C:\\code\\starfield\\starfield\\starfield.ion"
struct starfield_Rect {
    noir_float2 pos;
    noir_float2 size;
    noir_float2 rot;
};

#line 49 "C:\\code\\starfield\\starfield\\image.ion"
struct starfield_PixelIter {
    starfield_Image (*image);
    float aspect_ratio;
    noir_int2 start;
    noir_int2 end;
    starfield_Rect rect;
    noir_int2 pixel_pos;
    noir_float2 line_start;
    noir_float2 dx;
    noir_float2 dy;
    #line 60
    noir_float2 pos;
    noir_float2 abs_pos;
    starfield_Color (*pixel);
};

#line 71
starfield_PixelIter starfield_pixel_iter_begin(starfield_Image (*image), starfield_Rect rect);

#line 118
bool starfield_pixel_iter_next(starfield_PixelIter (*it));

#line 170 "C:\\code\\starfield\\starfield\\starfield.ion"
struct starfield_Color {
    float r;
    #line 171
    float g;
    #line 171
    float b;
    #line 171
    float a;
};

#line 271 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_random_normal(void);

#line 1 "C:\\code\\starfield\\starfield\\filter.ion"
void starfield_blur(starfield_Image (*img), float radius);

#line 608 "C:\\code\\starfield\\starfield\\starfield.ion"
extern noir_float2 starfield_diffraction_rotation;

#line 248 "C:\\code\\starfield\\starfield\\math.ion"
noir_float2 starfield_random_unit_vector2(void);

#line 179 "C:\\code\\starfield\\starfield\\starfield.ion"
struct starfield_Tex {
    starfield_Color (*pixels);
    noir_int2 size;
    int lod_levels;
};

#line 31 "C:\\code\\starfield\\starfield\\stars.ion"
struct starfield_Starfield {
    starfield_Star (*stars);
    int32_t star_count;
    starfield_Tex density;
};

#line 166
starfield_Starfield starfield_create_starfield(char const ((*starfield)));

#line 611 "C:\\code\\starfield\\starfield\\starfield.ion"
double starfield_time_now(void);

#line 351 "C:\\code\\starfield\\noir\\noir.ion"
bool noir_app_update(void);

#line 22 "C:\\code\\starfield\\starfield\\image.ion"
void starfield_image_clear(starfield_Image (*img));

#line 584 "C:\\code\\starfield\\starfield\\stars.ion"
void starfield_draw_starfield(starfield_Image (*dest), starfield_Starfield (*starfield));

#line 381 "C:\\code\\starfield\\starfield\\filter.ion"
typedef int starfield_DiffractionType;

#line 390
struct starfield_DiffractionArguments {
    float alpha;
    float radius;
    noir_float2 transform;
    starfield_DiffractionType type;
};

#line 448
void starfield_diffract(starfield_Image (*img), starfield_DiffractionArguments args);

#line 253 "C:\\code\\starfield\\starfield\\math.ion"
int starfield_randomn(int lo, int hi);

#line 382 "C:\\code\\starfield\\starfield\\filter.ion"
#define STARFIELD_Diffraction_None ((starfield_DiffractionType)(0))

#line 383
#define STARFIELD_Diffraction_Cross ((starfield_DiffractionType)((STARFIELD_Diffraction_None) + (1)))

#line 384
#define STARFIELD_Diffraction_CrossOrthoRed ((starfield_DiffractionType)((STARFIELD_Diffraction_Cross) + (1)))

#line 385
#define STARFIELD_Diffraction_Single ((starfield_DiffractionType)((STARFIELD_Diffraction_CrossOrthoRed) + (1)))

#define STARFIELD_DiffractionTypeCount ((starfield_DiffractionType)((STARFIELD_Diffraction_Single) + (1)))

#line 94
void starfield_blur_to(starfield_Image (*dest), starfield_Image (*src), float radius);

#line 257 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_randomr(float lo, float hi);

#line 348 "C:\\code\\starfield\\starfield\\image.ion"
starfield_Color starfield_image_fetch(starfield_Image (*img), noir_int2 pos);

#line 516 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Color starfield_color_mul(starfield_Color a, starfield_Color b);

#line 480
starfield_Color starfield_color_lerp(starfield_Color a, starfield_Color b, float t);

#line 498
starfield_Color starfield_color_add(starfield_Color a, starfield_Color b);

#line 759
void starfield_tonemap(starfield_Image (*img), starfield_Color color_adjustment, float mix);

#line 24 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_clamp_low(float a, float x);

#line 39 "C:\\code\\starfield\\starfield\\image.ion"
void starfield_image_to_rgb8(starfield_RGB8 (*dest), noir_int2 size, starfield_Image (*src));

#line 66 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_min(float a, float b);

#line 62
float starfield_max(float a, float b);

#line 401 "C:\\code\\starfield\\starfield\\stars.ion"
void starfield_init_star_type_really(starfield_StarType (*type), bool redraw);

#line 11
typedef int starfield_StarTypes;

#define STARFIELD_StarType_BigSpace ((starfield_StarTypes)(13))

#line 14
#define STARFIELD_StarTypeCount ((starfield_StarTypes)((STARFIELD_StarType_BigSpace) + (1)))

#line 3
struct starfield_StarType {
    int32_t id;
    noir_float2 size;
    bool nonsquare;
    bool fixed_rotation;
    starfield_Tex tex;
};

#line 17
extern starfield_StarType (starfield_star_types[STARFIELD_StarTypeCount]);

#line 37
void starfield_free_starfield(starfield_Starfield (*starfield));

#line 28 "C:\\code\\cloned\\bitwise\\ion\\system_packages\\builtin\\typeinfo.ion"
struct TypeFieldInfo {
    char const ((*name));
    typeid type;
    int offset;
};

#line 72
struct Any {
    void (*ptr);
    typeid type;
};

#line 422 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Rect starfield_all_rect(void);

#line 201 "C:\\code\\starfield\\starfield\\image.ion"
starfield_Color starfield_image_sample_linear(starfield_Image (*img), noir_float2 pos);

#line 336
starfield_Color starfield_image_sample_nearest(starfield_Image (*img), noir_float2 pos);

#line 140 "C:\\code\\starfield\\noir\\noir.ion"
void noir_sdl_error(char const ((*name)));

#line 103
bool noir_init_display(void);

#line 76
bool noir_init_window(void);

#line 122
void noir_init_keys(void);

#line 44
void noir_init_time(void);

#line 55
bool noir_init_audio(void);

#line 47 "C:\\code\\starfield\\starfield\\starfield.ion"
void (*starfield_xcalloc(size_t count, size_t size));

#line 218 "C:\\code\\starfield\\starfield\\math.ion"
uint32_t starfield_random(void);

#line 241
#define STARFIELD_int_23_mask (0x7fffff)

#line 242
#define STARFIELD_int_23_reciprocal ((1.f) / (STARFIELD_int_23_mask))

#line 50
noir_float2 starfield_clamp2(float a, float b, noir_float2 v);

#line 463 "C:\\code\\starfield\\starfield\\starfield.ion"
noir_float2 starfield_rect_absolute(starfield_Rect rect, float aspect_ratio, noir_float2 rel_pos);

#line 57
bool starfield_is_zero(void const ((*buf)), size_t len);

#line 74 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_min4(float a, float b, float c, float d);

#line 78
float starfield_max4(float a, float b, float c, float d);

#line 454 "C:\\code\\starfield\\starfield\\starfield.ion"
noir_float2 starfield_rect_relative(starfield_Rect rect, float aspect_ratio, noir_float2 abs_pos);

#line 114 "C:\\code\\starfield\\starfield\\math.ion"
noir_float2 starfield_sub2(noir_float2 a, noir_float2 b);

#line 1 "C:\\code\\starfield\\starfield\\image.ion"
#define STARFIELD_PixelEps (1e-7f)

#line 106 "C:\\code\\starfield\\starfield\\math.ion"
noir_float2 starfield_add2(noir_float2 a, noir_float2 b);

#line 449 "C:\\code\\starfield\\starfield\\starfield.ion"
bool starfield_inside_normal_rect(noir_float2 pos);

#line 586 "C:\\code\\starfield\\noir\\noir.ion"
#define NOIR_PI (3.14159265358979323846264338327950288f)

#line 1 "C:\\code\\starfield\\starfield\\math.ion"
#define STARFIELD_Pi (NOIR_PI)

#line 2
#define STARFIELD_Tau ((STARFIELD_Pi) * (2))

#line 25 "C:\\code\\starfield\\starfield\\stars.ion"
struct starfield_Star {
    starfield_Rect rect;
    starfield_StarType (*type);
    starfield_Color color;
};

#line 55
char const ((*starfield_consume_star(char const ((*c)), starfield_Star (*star))));

#line 12
#define STARFIELD_StarType_Space ((starfield_StarTypes)(0))

#line 18 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_clamp(float a, float b, float x);

#line 149 "C:\\code\\starfield\\starfield\\stars.ion"
starfield_Color starfield_random_star_color(starfield_StarType (*type), float alpha);

#line 51
void starfield_push_star(starfield_Starfield (*starfield), starfield_Star (*star));

#line 54 "C:\\code\\starfield\\starfield\\math.ion"
int32_t starfield_maxi(int32_t a, int32_t b);

#line 46 "C:\\code\\starfield\\starfield\\stars.ion"
int64_t starfield_starfield_len(starfield_Starfield (*starfield));

#line 191 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Tex starfield_make_tex(noir_int2 size);

#line 65 "C:\\code\\starfield\\starfield\\image.ion"
starfield_PixelIter starfield_pixel_iter_begin_tex(starfield_Tex (*tex), starfield_Rect rect);

#line 261 "C:\\code\\starfield\\starfield\\math.ion"
int starfield_random_poisson(float L);

#line 348 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Color starfield_tex_lookup(starfield_Tex (*tex), noir_float2 pos);

#line 36 "C:\\code\\starfield\\noir\\noir.ion"
bool noir_check_init(void);

#line 148
void noir_update_events(void);

#line 214
void noir_update_window(void);

#line 288
void noir_update_time(void);

#line 304
void noir_update_mouse(void);

#line 267
void noir_update_clipboard(void);

#line 257
void noir_update_audio(void);

#line 577 "C:\\code\\starfield\\starfield\\stars.ion"
void starfield_draw_stars(starfield_Image (*dest), starfield_Starfield (*starfield));

#line 530
void starfield_draw_nebula(starfield_Image (*img), starfield_Tex (*density));

#line 342 "C:\\code\\starfield\\starfield\\filter.ion"
bool starfield_is_identity_transform(noir_float2 transform);

#line 362
noir_float2 starfield_bounds_after_transform(noir_float2 transform, float aspect_ratio);

#line 187 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_magnitude2(noir_float2 v);

#line 397 "C:\\code\\starfield\\starfield\\filter.ion"
void starfield_apply_diffraction(starfield_Image (*dest), starfield_Color alpha, float radius, noir_float2 transform, noir_float2 transformed_bounds, float (*scratch), float (*transpose_scratch));

#line 434 "C:\\code\\starfield\\starfield\\starfield.ion"
noir_float2 starfield_rotate(noir_float2 v, noir_float2 cos_sin_theta);

#line 94 "C:\\code\\starfield\\starfield\\math.ion"
noir_float2 starfield_mul2s(noir_float2 a, float s);

#line 3
#define STARFIELD_Sqrt2 (1.4142135623730950488f)

#line 4
#define STARFIELD_InvSqrt2 ((1.f) / (STARFIELD_Sqrt2))

#line 17 "C:\\code\\starfield\\starfield\\filter.ion"
void starfield_blur_row(starfield_Color (*dest), starfield_Color (*src), int len, float radius);

#line 46
void starfield_blur_transpose(starfield_Color (*dest), int dest_width, starfield_Color (*src), int src_width);

#line 15 "C:\\code\\starfield\\starfield\\image.ion"
void starfield_free_image(starfield_Image (*img));

#line 283 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_lerp(float a, float b, float t);

#line 26 "C:\\code\\starfield\\starfield\\image.ion"
starfield_Image starfield_image_copy(starfield_Image (*img));

#line 743 "C:\\code\\starfield\\starfield\\starfield.ion"
float starfield_luminance(starfield_Color c);

#line 587
float starfield_srgb(float val);

#line 5 "C:\\code\\starfield\\starfield\\filter.ion"
void starfield_blur_asym(starfield_Image (*img), noir_float2 radius);

#line 86 "C:\\code\\starfield\\starfield\\math.ion"
noir_float2 starfield_int2_to_float2(noir_int2 x);

#line 583 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Color starfield_color_premultiply(starfield_Color c);

#line 287 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_remap(float a, float b, float m, float n, float x);

#line 748 "C:\\code\\starfield\\starfield\\starfield.ion"
float starfield_uncharted2duiker(float x);

#line 598
starfield_RGB8 starfield_color_to_rgb8(starfield_Color color);

#line 410
void starfield_draw_outline(starfield_Color (*buffer), noir_int2 size, starfield_Color color);

#line 266 "C:\\code\\starfield\\starfield\\stars.ion"
void starfield_draw_simple_star(starfield_Color (*buffer), noir_int2 size);

#line 372
void starfield_draw_lensed_quasar(starfield_Tex (*tex));

#line 46 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_clamp01(float x);

#line 272 "C:\\code\\starfield\\starfield\\stars.ion"
void starfield_draw_galaxy(starfield_Tex (*tex), int arms);

#line 289 "C:\\code\\starfield\\starfield\\starfield.ion"
void starfield_tex_preprocess(starfield_Tex (*tex));

#line 88
void starfield_buf_free(void (*buf));

#line 203
void starfield_free_tex(starfield_Tex (*tex));

#line 196 "C:\\code\\starfield\\starfield\\image.ion"
typedef int starfield_EdgeBehavior;

#line 205
starfield_Color starfield_image_sample_linear_edge(starfield_Image (*img), noir_float2 pos, starfield_EdgeBehavior edge_behavior);

#line 197
#define STARFIELD_Edge_Clamp ((starfield_EdgeBehavior)(0))

#line 559 "C:\\code\\starfield\\noir\\noir.ion"
extern char (*noir_default_window_title);

#line 560
extern noir_int2 noir_default_window_size;

#line 16
extern int (noir_noir_key_to_sdl_scancode[NOIR_NUM_KEYS]);

#line 34
extern int (noir_sdl_scancode_to_noir_key[SDL_NUM_SCANCODES]);

#line 49
void noir_sdl_audio_callback(void (*userdata), uint8_t (*buf), int len);

#line 90 "C:\\code\\starfield\\starfield\\math.ion"
noir_float2 starfield_mul2(noir_float2 a, noir_float2 b);

#line 98
noir_float2 starfield_div2(noir_float2 a, noir_float2 b);

#line 397 "C:\\code\\starfield\\starfield\\stars.ion"
void starfield_init_star_type(starfield_StarType (*type));

#line 116
extern starfield_Color (starfield_star_colors[15]);

#line 133
#define STARFIELD_StarColorCount (((sizeof(starfield_star_colors)) / (sizeof(starfield_Color))))

#line 552 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Color starfield_color_mul1(starfield_Color a, float b);

#line 118
void (*starfield_buf_push(void (*(*buf)), void (*data), ptrdiff_t len));

#line 76
starfield_BufHeader (*starfield_buf_header(void (*buf)));

#line 70
struct starfield_BufHeader {
    ptrdiff_t len;
    ptrdiff_t cap;
    uint8_t (data[1]);
};

#line 6 "C:\\code\\starfield\\starfield\\math.ion"
bool starfield_is_power_2(int32_t x);

#line 198 "C:\\code\\starfield\\starfield\\image.ion"
#define STARFIELD_Edge_Wrap ((starfield_EdgeBehavior)((STARFIELD_Edge_Clamp) + (1)))

#line 376 "C:\\code\\starfield\\noir\\noir.ion"
void noir_reset_digital_button_events(noir_DigitalButton (*button));

#line 576
void noir_push_event(noir_EventKind kind, noir_EventData data);

#line 501
#define NOIR_EVENT_NONE ((noir_EventKind)(0))

#line 502
#define NOIR_EVENT_KEY_DOWN ((noir_EventKind)((NOIR_EVENT_NONE) + (1)))

#line 503
#define NOIR_EVENT_KEY_UP ((noir_EventKind)((NOIR_EVENT_KEY_DOWN) + (1)))

#line 504
#define NOIR_EVENT_MOUSE_BUTTON_DOWN ((noir_EventKind)((NOIR_EVENT_KEY_UP) + (1)))

#line 505
#define NOIR_EVENT_MOUSE_BUTTON_UP ((noir_EventKind)((NOIR_EVENT_MOUSE_BUTTON_DOWN) + (1)))

#line 506
#define NOIR_EVENT_MOUSE_MOVE ((noir_EventKind)((NOIR_EVENT_MOUSE_BUTTON_UP) + (1)))

#line 381
void noir_update_digital_button(noir_DigitalButton (*button), bool down);

#line 494
#define NOIR_MOUSE_BUTTON_NONE ((noir_MouseButton)(0))

#line 495
#define NOIR_MOUSE_BUTTON_LEFT ((noir_MouseButton)((NOIR_MOUSE_BUTTON_NONE) + (1)))

#line 496
#define NOIR_MOUSE_BUTTON_MIDDLE ((noir_MouseButton)((NOIR_MOUSE_BUTTON_LEFT) + (1)))

#line 497
#define NOIR_MOUSE_BUTTON_RIGHT ((noir_MouseButton)((NOIR_MOUSE_BUTTON_MIDDLE) + (1)))

#line 570
void noir_update_combination_keys(void);

#line 8
bool noir_int2_eq(noir_int2 a, noir_int2 b);

#line 397 "C:\\code\\starfield\\starfield\\starfield.ion"
void starfield_draw_tex_multiply(starfield_Image (*dest), starfield_Rect target, starfield_Tex (*tex), starfield_Color multiply_color);

#line 134 "C:\\code\\starfield\\starfield\\math.ion"
noir_int2 starfield_div2is(noir_int2 a, int s);

#line 135 "C:\\code\\starfield\\starfield\\stars.ion"
starfield_Color starfield_random_random_star_color(noir_float2 range);

#line 231 "C:\\code\\starfield\\starfield\\math.ion"
bool starfield_with_random_state(size_t old_state, size_t new_state);

#line 672 "C:\\code\\starfield\\starfield\\starfield.ion"
float starfield_perlin_octaves(noir_float2 p, float grid_size);

#line 733
noir_float2 starfield_worley_octaves(noir_float2 p, float grid_size);

#line 516 "C:\\code\\starfield\\starfield\\stars.ion"
noir_float2 starfield_random_warp(noir_float2 p, float freq, float scale);

#line 110 "C:\\code\\starfield\\starfield\\math.ion"
noir_float2 starfield_add2s(noir_float2 a, float s);

#line 489 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Color starfield_color_pow(starfield_Color a, float p);

#line 570
starfield_Color starfield_color_blend(starfield_Color dest, starfield_Color src);

#line 168 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_dot2(noir_float2 a, noir_float2 b);

#line 346 "C:\\code\\starfield\\starfield\\filter.ion"
starfield_Image starfield_transform_image(starfield_Image (*src), noir_float2 rotate, noir_float2 scale);

#line 329
float (*starfield_planarise(starfield_Image (*img)));

#line 297
void starfield_diffract_plane(float (*plane), float (*scratch), float (*transpose_scratch), noir_int2 size, float inner_radius, float outer_radius);

#line 272 "C:\\code\\starfield\\starfield\\image.ion"
float starfield_sample_linear(float (*pixels), noir_int2 size, noir_float2 pos, starfield_EdgeBehavior edge_behavior);

#line 32 "C:\\code\\starfield\\starfield\\math.ion"
int32_t starfield_clampi(int32_t a, int32_t b, int32_t x);

#line 9 "C:\\code\\starfield\\starfield\\filter.ion"
starfield_Color starfield_blur_fetch(starfield_Color (*row), int len, int i);

#line 507 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Color starfield_color_sub(starfield_Color a, starfield_Color b);

#line 120 "C:\\code\\starfield\\starfield\\filter.ion"
void starfield_blur_to_asym(starfield_Image (*dest), starfield_Image (*src), noir_float2 radius);

#line 561 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Color starfield_color_mul1_rgb(starfield_Color a, float b);

#line 146 "C:\\code\\starfield\\starfield\\math.ion"
noir_int2 starfield_sub2i(noir_int2 a, noir_int2 b);

#line 138
noir_int2 starfield_add2i(noir_int2 a, noir_int2 b);

#line 294 "C:\\code\\starfield\\starfield\\starfield.ion"
void starfield_tex_poke(starfield_Tex (*tex), noir_int2 pos, starfield_Color val);

#line 95
void starfield_buf_fit(void (*(*buf)), ptrdiff_t len);

#line 298 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_mod(float x, float m);

#line 212
noir_float2 starfield_normalise2(noir_float2 v);

#line 337
float starfield_smoothedge(float center, float width, float x);

#line 118
noir_float2 starfield_sub2s(noir_float2 a, float s);

#line 283 "C:\\code\\starfield\\starfield\\starfield.ion"
void starfield_tex_premultiply_alpha(starfield_Tex (*tex));

#line 225
void starfield_generate_lods(starfield_Tex (*tex));

#line 308 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_wrap(float x, float m);

#line 82
noir_int2 starfield_float2_to_int2(noir_float2 x);

#line 42
int starfield_clampi_high(int b, int x);

#line 183 "C:\\code\\starfield\\starfield\\image.ion"
void starfield_assert_correct_signs(float a, float b, float c, float d, float ab, float cd, float abcd);

#line 566 "C:\\code\\starfield\\noir\\noir.ion"
void noir_update_combination_key(int dest_key, int src_key1, int src_key2);

#line 217 "C:\\code\\starfield\\starfield\\starfield.ion"
noir_float2 starfield_compute_lod_level(noir_int2 dest_size, noir_float2 target_size, noir_int2 src_size);

#line 354
starfield_Color starfield_tex_lookup_lod(starfield_Tex (*tex), noir_float2 pos, noir_float2 lod);

#line 641
float starfield_perlin(noir_float2 p, float grid_size);

#line 680
noir_float2 starfield_worley(noir_float2 p01, float grid_size);

#line 498 "C:\\code\\starfield\\starfield\\stars.ion"
noir_float2 starfield_random_warp_one(noir_float2 p, float scale);

#line 296 "C:\\code\\starfield\\starfield\\filter.ion"
#define STARFIELD_diffraction_iters (4)

#line 251
void starfield_diffract_row(float (*dest), float (*src), int len, float inner_radius, float outer_radius);

#line 36 "C:\\code\\starfield\\starfield\\starfield.ion"
void (*starfield_xmalloc(size_t size));

#line 26
void (*starfield_xrealloc(void (*mem), size_t size));

#line 316 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_smoothstep(float x);

#line 10
int starfield_log2i(int x);

#line 305 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Image starfield_tex_get_lod(starfield_Tex (*tex), noir_int2 lod);

#line 579
bool starfield_color_nan(starfield_Color c);

#line 54 "C:\\code\\starfield\\starfield\\filter.ion"
void starfield_blur_horizontal(starfield_Image (*dest), starfield_Image (*src), float radius);

#line 70
void starfield_blur_vertical(starfield_Image (*dest), starfield_Image (*src), float radius);

#line 58 "C:\\code\\starfield\\starfield\\math.ion"
int32_t starfield_mini(int32_t a, int32_t b);

#line 142
noir_int2 starfield_add2is(noir_int2 a, int s);

#line 196
noir_float2 starfield_mod2s(noir_float2 v, float m);

#line 618 "C:\\code\\starfield\\starfield\\starfield.ion"
noir_float2 starfield_perlin_gradient(noir_int2 p);

#line 200 "C:\\code\\starfield\\starfield\\math.ion"
noir_float2 starfield_floor2(noir_float2 v);

#line 165 "C:\\code\\starfield\\starfield\\starfield.ion"
uint32_t starfield_hash_int2_u32(noir_int2 p);

#line 172 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_distance_squared2(noir_float2 a, noir_float2 b);

#line 182
float starfield_magnitude_squared2(noir_float2 v);

#line 291
noir_float2 starfield_lerp2(noir_float2 a, noir_float2 b, float t);

#line 243 "C:\\code\\starfield\\starfield\\filter.ion"
float starfield_diffract_fetch(float (*row), int len, int i);

#line 616 "C:\\code\\starfield\\starfield\\starfield.ion"
extern noir_float2 (*starfield_perlin_gradients);

#line 617
#define STARFIELD_PerlinGradientCount (256)

#line 160
size_t starfield_hash_int2(noir_int2 p);

// Typeinfo
#define TYPEID0(index, kind) ((ullong)(index) | ((ullong)(kind) << 24))
#define TYPEID(index, kind, ...) ((ullong)(index) | ((ullong)sizeof(__VA_ARGS__) << 32) | ((ullong)(kind) << 24))

const TypeInfo *typeinfo_table[702] = {
    [0] = NULL, // No associated type
    [1] = &(TypeInfo){TYPE_VOID, .name = "void", .size = 0, .align = 0},
    [2] = &(TypeInfo){TYPE_BOOL, .size = sizeof(bool), .align = sizeof(bool), .name = "bool"},
    [3] = &(TypeInfo){TYPE_CHAR, .size = sizeof(char), .align = sizeof(char), .name = "char"},
    [4] = &(TypeInfo){TYPE_UCHAR, .size = sizeof(uchar), .align = sizeof(uchar), .name = "uchar"},
    [5] = &(TypeInfo){TYPE_SCHAR, .size = sizeof(schar), .align = sizeof(schar), .name = "schar"},
    [6] = &(TypeInfo){TYPE_SHORT, .size = sizeof(short), .align = sizeof(short), .name = "short"},
    [7] = &(TypeInfo){TYPE_USHORT, .size = sizeof(ushort), .align = sizeof(ushort), .name = "ushort"},
    [8] = &(TypeInfo){TYPE_INT, .size = sizeof(int), .align = sizeof(int), .name = "int"},
    [9] = &(TypeInfo){TYPE_UINT, .size = sizeof(uint), .align = sizeof(uint), .name = "uint"},
    [10] = &(TypeInfo){TYPE_LONG, .size = sizeof(long), .align = sizeof(long), .name = "long"},
    [11] = &(TypeInfo){TYPE_ULONG, .size = sizeof(ulong), .align = sizeof(ulong), .name = "ulong"},
    [12] = &(TypeInfo){TYPE_LLONG, .size = sizeof(llong), .align = sizeof(llong), .name = "llong"},
    [13] = &(TypeInfo){TYPE_ULLONG, .size = sizeof(ullong), .align = sizeof(ullong), .name = "ullong"},
    [14] = &(TypeInfo){TYPE_FLOAT, .size = sizeof(float), .align = sizeof(float), .name = "float"},
    [15] = &(TypeInfo){TYPE_DOUBLE, .size = sizeof(double), .align = sizeof(double), .name = "double"},
    [16] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID0(1, TYPE_VOID)},
    [17] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(starfield_RGB8), .align = alignof(starfield_RGB8), .name = "starfield_RGB8", .num_fields = 4, .fields = (TypeFieldInfo[]) {
        {"b", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(starfield_RGB8, b)},
        {"g", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(starfield_RGB8, g)},
        {"r", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(starfield_RGB8, r)},
        {"padding", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(starfield_RGB8, padding)},
    }},
    [18] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(3, TYPE_CHAR, char)},
    [19] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(18, TYPE_PTR, char *)},
    [20] = NULL, // Func
    [21] = &(TypeInfo){TYPE_CONST, .size = sizeof(char const ), .align = alignof(char const ), .base = TYPEID(3, TYPE_CHAR, char)},
    [22] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(21, TYPE_CONST, char const )},
    [23] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [6]), .align = alignof(char [6]), .base = TYPEID(3, TYPE_CHAR, char), .count = 6},
    [24] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [4]), .align = alignof(char [4]), .base = TYPEID(3, TYPE_CHAR, char), .count = 4},
    [25] = NULL, // Enum
    [26] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(TypeFieldInfo), .align = alignof(TypeFieldInfo), .name = "TypeFieldInfo", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"name", .type = TYPEID(22, TYPE_PTR, char const (*)), .offset = offsetof(TypeFieldInfo, name)},
        {"type", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(TypeFieldInfo, type)},
        {"offset", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(TypeFieldInfo, offset)},
    }},
    [27] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(TypeInfo), .align = alignof(TypeInfo), .name = "TypeInfo", .num_fields = 8, .fields = (TypeFieldInfo[]) {
        {"kind", .type = TYPEID(25, TYPE_NONE, TypeKind), .offset = offsetof(TypeInfo, kind)},
        {"size", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(TypeInfo, size)},
        {"align", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(TypeInfo, align)},
        {"name", .type = TYPEID(22, TYPE_PTR, char const (*)), .offset = offsetof(TypeInfo, name)},
        {"count", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(TypeInfo, count)},
        {"base", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(TypeInfo, base)},
        {"fields", .type = TYPEID(28, TYPE_PTR, TypeFieldInfo *), .offset = offsetof(TypeInfo, fields)},
        {"num_fields", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(TypeInfo, num_fields)},
    }},
    [28] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(26, TYPE_STRUCT, TypeFieldInfo)},
    [29] = &(TypeInfo){TYPE_CONST, .size = sizeof(TypeInfo const ), .align = alignof(TypeInfo const ), .base = TYPEID(27, TYPE_STRUCT, TypeInfo)},
    [30] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(29, TYPE_CONST, TypeInfo const )},
    [31] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(30, TYPE_PTR, TypeInfo const (*))},
    [32] = NULL, // Func
    [33] = NULL, // Func
    [34] = NULL, // Func
    [35] = NULL, // Func
    [36] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(Any), .align = alignof(Any), .name = "Any", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"ptr", .type = TYPEID(16, TYPE_PTR, void *), .offset = offsetof(Any, ptr)},
        {"type", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(Any, type)},
    }},
    [37] = NULL, // Func
    [38] = NULL, // Func
    [39] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_App), .align = alignof(noir_App), .name = "noir_App", .num_fields = 17, .fields = (TypeFieldInfo[]) {
        {"init", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_App, init)},
        {"quit", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_App, quit)},
        {"num_updates", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_App, num_updates)},
        {"error", .type = TYPEID(22, TYPE_PTR, char const (*)), .offset = offsetof(noir_App, error)},
        {"error_buf", .type = TYPEID(40, TYPE_ARRAY, char [256]), .offset = offsetof(noir_App, error_buf)},
        {"events", .type = TYPEID(49, TYPE_ARRAY, noir_Event [256]), .offset = offsetof(noir_App, events)},
        {"num_events", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_App, num_events)},
        {"platform", .type = TYPEID(22, TYPE_PTR, char const (*)), .offset = offsetof(noir_App, platform)},
        {"clipboard", .type = TYPEID(22, TYPE_PTR, char const (*)), .offset = offsetof(noir_App, clipboard)},
        {"display", .type = TYPEID(50, TYPE_STRUCT, noir_Display), .offset = offsetof(noir_App, display)},
        {"window", .type = TYPEID(51, TYPE_STRUCT, noir_Window), .offset = offsetof(noir_App, window)},
        {"keys", .type = TYPEID(56, TYPE_ARRAY, noir_DigitalButton [275]), .offset = offsetof(noir_App, keys)},
        {"mouse", .type = TYPEID(57, TYPE_STRUCT, noir_Mouse), .offset = offsetof(noir_App, mouse)},
        {"text", .type = TYPEID(58, TYPE_ARRAY, char [1024]), .offset = offsetof(noir_App, text)},
        {"time", .type = TYPEID(59, TYPE_STRUCT, noir_Time), .offset = offsetof(noir_App, time)},
        {"audio", .type = TYPEID(60, TYPE_STRUCT, noir_Audio), .offset = offsetof(noir_App, audio)},
        {"synced_clipboard", .type = TYPEID(18, TYPE_PTR, char *), .offset = offsetof(noir_App, synced_clipboard)},
    }},
    [40] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [256]), .align = alignof(char [256]), .base = TYPEID(3, TYPE_CHAR, char), .count = 256},
    [41] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_Event), .align = alignof(noir_Event), .name = "noir_Event", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"kind", .type = TYPEID(42, TYPE_NONE, noir_EventKind), .offset = offsetof(noir_Event, kind)},
        {"data", .type = TYPEID(43, TYPE_UNION, noir_EventData), .offset = offsetof(noir_Event, data)},
    }},
    [42] = NULL, // Enum
    [43] = &(TypeInfo){TYPE_UNION, .size = sizeof(noir_EventData), .align = alignof(noir_EventData), .name = "noir_EventData", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"key", .type = TYPEID(44, TYPE_STRUCT, noir_KeyEvent), .offset = offsetof(noir_EventData, key)},
        {"mouse_button", .type = TYPEID(45, TYPE_STRUCT, noir_MouseButtonEvent), .offset = offsetof(noir_EventData, mouse_button)},
        {"mouse_move", .type = TYPEID(48, TYPE_STRUCT, noir_MouseMoveEvent), .offset = offsetof(noir_EventData, mouse_move)},
    }},
    [44] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_KeyEvent), .align = alignof(noir_KeyEvent), .name = "noir_KeyEvent", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"key", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_KeyEvent, key)},
        {"repeat", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_KeyEvent, repeat)},
    }},
    [45] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_MouseButtonEvent), .align = alignof(noir_MouseButtonEvent), .name = "noir_MouseButtonEvent", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"button", .type = TYPEID(46, TYPE_NONE, noir_MouseButton), .offset = offsetof(noir_MouseButtonEvent, button)},
        {"pos", .type = TYPEID(47, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_MouseButtonEvent, pos)},
    }},
    [46] = NULL, // Enum
    [47] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_int2), .align = alignof(noir_int2), .name = "noir_int2", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"x", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_int2, x)},
        {"y", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_int2, y)},
    }},
    [48] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_MouseMoveEvent), .align = alignof(noir_MouseMoveEvent), .name = "noir_MouseMoveEvent", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"pos", .type = TYPEID(47, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_MouseMoveEvent, pos)},
        {"delta_pos", .type = TYPEID(47, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_MouseMoveEvent, delta_pos)},
    }},
    [49] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(noir_Event [256]), .align = alignof(noir_Event [256]), .base = TYPEID(41, TYPE_STRUCT, noir_Event), .count = 256},
    [50] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_Display), .align = alignof(noir_Display), .name = "noir_Display", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"size", .type = TYPEID(47, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Display, size)},
        {"rate", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_Display, rate)},
        {"dpi", .type = TYPEID(14, TYPE_FLOAT, float), .offset = offsetof(noir_Display, dpi)},
    }},
    [51] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_Window), .align = alignof(noir_Window), .name = "noir_Window", .num_fields = 15, .fields = (TypeFieldInfo[]) {
        {"resizable", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Window, resizable)},
        {"hidden", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Window, hidden)},
        {"fullscreen", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Window, fullscreen)},
        {"title", .type = TYPEID(22, TYPE_PTR, char const (*)), .offset = offsetof(noir_Window, title)},
        {"pos", .type = TYPEID(47, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Window, pos)},
        {"size", .type = TYPEID(47, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Window, size)},
        {"moved", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Window, moved)},
        {"resized", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Window, resized)},
        {"synced_title", .type = TYPEID(40, TYPE_ARRAY, char [256]), .offset = offsetof(noir_Window, synced_title)},
        {"synced_pos", .type = TYPEID(47, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Window, synced_pos)},
        {"synced_size", .type = TYPEID(47, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Window, synced_size)},
        {"synced_resizable", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Window, synced_resizable)},
        {"synced_hidden", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Window, synced_hidden)},
        {"synced_fullscreen", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Window, synced_fullscreen)},
        {"sdl", .type = TYPEID(53, TYPE_PTR, SDL_Window *), .offset = offsetof(noir_Window, sdl)},
    }},
    [52] = NULL, // Incomplete: SDL_Window
    [53] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID0(52, TYPE_NONE)},
    [54] = NULL, // Enum
    [55] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_DigitalButton), .align = alignof(noir_DigitalButton), .name = "noir_DigitalButton", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"down", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_DigitalButton, down)},
        {"pressed", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_DigitalButton, pressed)},
        {"released", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_DigitalButton, released)},
    }},
    [56] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(noir_DigitalButton [275]), .align = alignof(noir_DigitalButton [275]), .base = TYPEID(55, TYPE_STRUCT, noir_DigitalButton), .count = 275},
    [57] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_Mouse), .align = alignof(noir_Mouse), .name = "noir_Mouse", .num_fields = 13, .fields = (TypeFieldInfo[]) {
        {"moved", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Mouse, moved)},
        {"pos", .type = TYPEID(47, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Mouse, pos)},
        {"delta_pos", .type = TYPEID(47, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Mouse, delta_pos)},
        {"global_moved", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Mouse, global_moved)},
        {"global_pos", .type = TYPEID(47, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Mouse, global_pos)},
        {"global_delta_pos", .type = TYPEID(47, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Mouse, global_delta_pos)},
        {"left_button", .type = TYPEID(55, TYPE_STRUCT, noir_DigitalButton), .offset = offsetof(noir_Mouse, left_button)},
        {"middle_button", .type = TYPEID(55, TYPE_STRUCT, noir_DigitalButton), .offset = offsetof(noir_Mouse, middle_button)},
        {"right_button", .type = TYPEID(55, TYPE_STRUCT, noir_DigitalButton), .offset = offsetof(noir_Mouse, right_button)},
        {"capture", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Mouse, capture)},
        {"synced_capture", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Mouse, synced_capture)},
        {"synced_pos", .type = TYPEID(47, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Mouse, synced_pos)},
        {"synced_global_pos", .type = TYPEID(47, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Mouse, synced_global_pos)},
    }},
    [58] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [1024]), .align = alignof(char [1024]), .base = TYPEID(3, TYPE_CHAR, char), .count = 1024},
    [59] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_Time), .align = alignof(noir_Time), .name = "noir_Time", .num_fields = 12, .fields = (TypeFieldInfo[]) {
        {"delta_ticks", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_Time, delta_ticks)},
        {"delta_nsecs", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_Time, delta_nsecs)},
        {"delta_usecs", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_Time, delta_usecs)},
        {"delta_msecs", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_Time, delta_msecs)},
        {"delta_secs", .type = TYPEID(14, TYPE_FLOAT, float), .offset = offsetof(noir_Time, delta_secs)},
        {"ticks", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(noir_Time, ticks)},
        {"nsecs", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(noir_Time, nsecs)},
        {"usecs", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(noir_Time, usecs)},
        {"msecs", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(noir_Time, msecs)},
        {"secs", .type = TYPEID(15, TYPE_DOUBLE, double), .offset = offsetof(noir_Time, secs)},
        {"ticks_per_sec", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(noir_Time, ticks_per_sec)},
        {"sdl_start_ticks", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(noir_Time, sdl_start_ticks)},
    }},
    [60] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_Audio), .align = alignof(noir_Audio), .name = "noir_Audio", .num_fields = 8, .fields = (TypeFieldInfo[]) {
        {"valid", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Audio, valid)},
        {"rate", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_Audio, rate)},
        {"channels", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_Audio, channels)},
        {"play", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Audio, play)},
        {"callback", .type = TYPEID(63, TYPE_FUNC, void (*)(void *, noir_float2 *, int)), .offset = offsetof(noir_Audio, callback)},
        {"context", .type = TYPEID(16, TYPE_PTR, void *), .offset = offsetof(noir_Audio, context)},
        {"synced_play", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Audio, synced_play)},
        {"sdl_device", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_Audio, sdl_device)},
    }},
    [61] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_float2), .align = alignof(noir_float2), .name = "noir_float2", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"x", .type = TYPEID(14, TYPE_FLOAT, float), .offset = offsetof(noir_float2, x)},
        {"y", .type = TYPEID(14, TYPE_FLOAT, float), .offset = offsetof(noir_float2, y)},
    }},
    [62] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(61, TYPE_STRUCT, noir_float2)},
    [63] = NULL, // Func
    [64] = &(TypeInfo){TYPE_CONST, .size = sizeof(noir_int2 const ), .align = alignof(noir_int2 const ), .base = TYPEID(47, TYPE_STRUCT, noir_int2)},
    [65] = NULL, // Func
    [66] = NULL, // Func
    [67] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [14]), .align = alignof(char [14]), .base = TYPEID(3, TYPE_CHAR, char), .count = 14},
    [68] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [35]), .align = alignof(char [35]), .base = TYPEID(3, TYPE_CHAR, char), .count = 35},
    [69] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(SDL_Surface), .align = alignof(SDL_Surface), .name = "SDL_Surface", .num_fields = 11, .fields = (TypeFieldInfo[]) {
        {"flags", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_Surface, flags)},
        {"format", .type = TYPEID(76, TYPE_PTR, SDL_PixelFormat *), .offset = offsetof(SDL_Surface, format)},
        {"w", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_Surface, w)},
        {"h", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_Surface, h)},
        {"pitch", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_Surface, pitch)},
        {"pixels", .type = TYPEID(16, TYPE_PTR, void *), .offset = offsetof(SDL_Surface, pixels)},
        {"userdata", .type = TYPEID(16, TYPE_PTR, void *), .offset = offsetof(SDL_Surface, userdata)},
        {"locked", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_Surface, locked)},
        {"lock_data", .type = TYPEID(16, TYPE_PTR, void *), .offset = offsetof(SDL_Surface, lock_data)},
        {"clip_rect", .type = TYPEID(77, TYPE_STRUCT, SDL_Rect), .offset = offsetof(SDL_Surface, clip_rect)},
        {"refcount", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_Surface, refcount)},
    }},
    [70] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(69, TYPE_STRUCT, SDL_Surface)},
    [71] = NULL, // Func
    [72] = NULL, // Incomplete: SDL_Renderer
    [73] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID0(72, TYPE_NONE)},
    [74] = NULL, // Func
    [75] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(SDL_PixelFormat), .align = alignof(SDL_PixelFormat), .name = "SDL_PixelFormat", .num_fields = 19, .fields = (TypeFieldInfo[]) {
        {"format", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_PixelFormat, format)},
        {"palette", .type = TYPEID(79, TYPE_PTR, SDL_Palette *), .offset = offsetof(SDL_PixelFormat, palette)},
        {"BitsPerPixel", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_PixelFormat, BitsPerPixel)},
        {"BytesPerPixel", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_PixelFormat, BytesPerPixel)},
        {"padding", .type = TYPEID(80, TYPE_ARRAY, uchar [2]), .offset = offsetof(SDL_PixelFormat, padding)},
        {"Rmask", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_PixelFormat, Rmask)},
        {"Gmask", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_PixelFormat, Gmask)},
        {"Bmask", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_PixelFormat, Bmask)},
        {"Amask", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_PixelFormat, Amask)},
        {"Rloss", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_PixelFormat, Rloss)},
        {"Gloss", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_PixelFormat, Gloss)},
        {"Bloss", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_PixelFormat, Bloss)},
        {"Aloss", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_PixelFormat, Aloss)},
        {"Rshift", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_PixelFormat, Rshift)},
        {"Gshift", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_PixelFormat, Gshift)},
        {"Bshift", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_PixelFormat, Bshift)},
        {"Ashift", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_PixelFormat, Ashift)},
        {"refcount", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_PixelFormat, refcount)},
        {"next", .type = TYPEID(76, TYPE_PTR, SDL_PixelFormat *), .offset = offsetof(SDL_PixelFormat, next)},
    }},
    [76] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(75, TYPE_STRUCT, SDL_PixelFormat)},
    [77] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(SDL_Rect), .align = alignof(SDL_Rect), .name = "SDL_Rect", .num_fields = 4, .fields = (TypeFieldInfo[]) {
        {"x", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_Rect, x)},
        {"y", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_Rect, y)},
        {"w", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_Rect, w)},
        {"h", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_Rect, h)},
    }},
    [78] = NULL, // Incomplete: SDL_Palette
    [79] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID0(78, TYPE_NONE)},
    [80] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(uchar [2]), .align = alignof(uchar [2]), .base = TYPEID(4, TYPE_UCHAR, uchar), .count = 2},
    [81] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [138]), .align = alignof(char [138]), .base = TYPEID(3, TYPE_CHAR, char), .count = 138},
    [82] = NULL, // Func
    [83] = NULL, // Func
    [84] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(starfield_Image), .align = alignof(starfield_Image), .name = "starfield_Image", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"pixels", .type = TYPEID(86, TYPE_PTR, starfield_Color *), .offset = offsetof(starfield_Image, pixels)},
        {"size", .type = TYPEID(47, TYPE_STRUCT, noir_int2), .offset = offsetof(starfield_Image, size)},
    }},
    [85] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(starfield_Color), .align = alignof(starfield_Color), .name = "starfield_Color", .num_fields = 4, .fields = (TypeFieldInfo[]) {
        {"r", .type = TYPEID(14, TYPE_FLOAT, float), .offset = offsetof(starfield_Color, r)},
        {"g", .type = TYPEID(14, TYPE_FLOAT, float), .offset = offsetof(starfield_Color, g)},
        {"b", .type = TYPEID(14, TYPE_FLOAT, float), .offset = offsetof(starfield_Color, b)},
        {"a", .type = TYPEID(14, TYPE_FLOAT, float), .offset = offsetof(starfield_Color, a)},
    }},
    [86] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(85, TYPE_STRUCT, starfield_Color)},
    [87] = NULL, // Func
    [88] = NULL, // Func
    [89] = NULL, // Func
    [90] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(84, TYPE_STRUCT, starfield_Image)},
    [91] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(starfield_Rect), .align = alignof(starfield_Rect), .name = "starfield_Rect", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"pos", .type = TYPEID(61, TYPE_STRUCT, noir_float2), .offset = offsetof(starfield_Rect, pos)},
        {"size", .type = TYPEID(61, TYPE_STRUCT, noir_float2), .offset = offsetof(starfield_Rect, size)},
        {"rot", .type = TYPEID(61, TYPE_STRUCT, noir_float2), .offset = offsetof(starfield_Rect, rot)},
    }},
    [92] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(starfield_PixelIter), .align = alignof(starfield_PixelIter), .name = "starfield_PixelIter", .num_fields = 12, .fields = (TypeFieldInfo[]) {
        {"image", .type = TYPEID(90, TYPE_PTR, starfield_Image *), .offset = offsetof(starfield_PixelIter, image)},
        {"aspect_ratio", .type = TYPEID(14, TYPE_FLOAT, float), .offset = offsetof(starfield_PixelIter, aspect_ratio)},
        {"start", .type = TYPEID(47, TYPE_STRUCT, noir_int2), .offset = offsetof(starfield_PixelIter, start)},
        {"end", .type = TYPEID(47, TYPE_STRUCT, noir_int2), .offset = offsetof(starfield_PixelIter, end)},
        {"rect", .type = TYPEID(91, TYPE_STRUCT, starfield_Rect), .offset = offsetof(starfield_PixelIter, rect)},
        {"pixel_pos", .type = TYPEID(47, TYPE_STRUCT, noir_int2), .offset = offsetof(starfield_PixelIter, pixel_pos)},
        {"line_start", .type = TYPEID(61, TYPE_STRUCT, noir_float2), .offset = offsetof(starfield_PixelIter, line_start)},
        {"dx", .type = TYPEID(61, TYPE_STRUCT, noir_float2), .offset = offsetof(starfield_PixelIter, dx)},
        {"dy", .type = TYPEID(61, TYPE_STRUCT, noir_float2), .offset = offsetof(starfield_PixelIter, dy)},
        {"pos", .type = TYPEID(61, TYPE_STRUCT, noir_float2), .offset = offsetof(starfield_PixelIter, pos)},
        {"abs_pos", .type = TYPEID(61, TYPE_STRUCT, noir_float2), .offset = offsetof(starfield_PixelIter, abs_pos)},
        {"pixel", .type = TYPEID(86, TYPE_PTR, starfield_Color *), .offset = offsetof(starfield_PixelIter, pixel)},
    }},
    [93] = NULL, // Func
    [94] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(92, TYPE_STRUCT, starfield_PixelIter)},
    [95] = NULL, // Func
    [96] = NULL, // Func
    [97] = NULL, // Func
    [98] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(starfield_Starfield), .align = alignof(starfield_Starfield), .name = "starfield_Starfield", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"stars", .type = TYPEID(100, TYPE_PTR, starfield_Star *), .offset = offsetof(starfield_Starfield, stars)},
        {"star_count", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(starfield_Starfield, star_count)},
        {"density", .type = TYPEID(101, TYPE_STRUCT, starfield_Tex), .offset = offsetof(starfield_Starfield, density)},
    }},
    [99] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(starfield_Star), .align = alignof(starfield_Star), .name = "starfield_Star", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"rect", .type = TYPEID(91, TYPE_STRUCT, starfield_Rect), .offset = offsetof(starfield_Star, rect)},
        {"type", .type = TYPEID(120, TYPE_PTR, starfield_StarType *), .offset = offsetof(starfield_Star, type)},
        {"color", .type = TYPEID(85, TYPE_STRUCT, starfield_Color), .offset = offsetof(starfield_Star, color)},
    }},
    [100] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(99, TYPE_STRUCT, starfield_Star)},
    [101] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(starfield_Tex), .align = alignof(starfield_Tex), .name = "starfield_Tex", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"pixels", .type = TYPEID(86, TYPE_PTR, starfield_Color *), .offset = offsetof(starfield_Tex, pixels)},
        {"size", .type = TYPEID(47, TYPE_STRUCT, noir_int2), .offset = offsetof(starfield_Tex, size)},
        {"lod_levels", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(starfield_Tex, lod_levels)},
    }},
    [102] = NULL, // Func
    [103] = NULL, // Func
    [104] = NULL, // Func
    [105] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(98, TYPE_STRUCT, starfield_Starfield)},
    [106] = NULL, // Func
    [107] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(starfield_DiffractionArguments), .align = alignof(starfield_DiffractionArguments), .name = "starfield_DiffractionArguments", .num_fields = 4, .fields = (TypeFieldInfo[]) {
        {"alpha", .type = TYPEID(14, TYPE_FLOAT, float), .offset = offsetof(starfield_DiffractionArguments, alpha)},
        {"radius", .type = TYPEID(14, TYPE_FLOAT, float), .offset = offsetof(starfield_DiffractionArguments, radius)},
        {"transform", .type = TYPEID(61, TYPE_STRUCT, noir_float2), .offset = offsetof(starfield_DiffractionArguments, transform)},
        {"type", .type = TYPEID(108, TYPE_NONE, starfield_DiffractionType), .offset = offsetof(starfield_DiffractionArguments, type)},
    }},
    [108] = NULL, // Enum
    [109] = NULL, // Func
    [110] = NULL, // Func
    [111] = NULL, // Func
    [112] = NULL, // Func
    [113] = NULL, // Func
    [114] = NULL, // Func
    [115] = NULL, // Func
    [116] = NULL, // Func
    [117] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(17, TYPE_STRUCT, starfield_RGB8)},
    [118] = NULL, // Func
    [119] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(starfield_StarType), .align = alignof(starfield_StarType), .name = "starfield_StarType", .num_fields = 5, .fields = (TypeFieldInfo[]) {
        {"id", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(starfield_StarType, id)},
        {"size", .type = TYPEID(61, TYPE_STRUCT, noir_float2), .offset = offsetof(starfield_StarType, size)},
        {"nonsquare", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(starfield_StarType, nonsquare)},
        {"fixed_rotation", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(starfield_StarType, fixed_rotation)},
        {"tex", .type = TYPEID(101, TYPE_STRUCT, starfield_Tex), .offset = offsetof(starfield_StarType, tex)},
    }},
    [120] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(119, TYPE_STRUCT, starfield_StarType)},
    [121] = NULL, // Func
    [122] = NULL, // Enum
    [123] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(starfield_StarType [14]), .align = alignof(starfield_StarType [14]), .base = TYPEID(119, TYPE_STRUCT, starfield_StarType), .count = 14},
    [124] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [34]), .align = alignof(char [34]), .base = TYPEID(3, TYPE_CHAR, char), .count = 34},
    [125] = NULL, // Func
    [126] = NULL, // Func
    [127] = NULL, // Incomplete: FILE
    [128] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID0(127, TYPE_NONE)},
    [129] = NULL, // Func
    [130] = NULL, // Func
    [131] = NULL, // Func
    [132] = NULL, // Func
    [133] = NULL, // Func
    [134] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [9]), .align = alignof(char [9]), .base = TYPEID(3, TYPE_CHAR, char), .count = 9},
    [135] = NULL, // Func
    [136] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [11]), .align = alignof(char [11]), .base = TYPEID(3, TYPE_CHAR, char), .count = 11},
    [137] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(4, TYPE_UCHAR, uchar)},
    [138] = NULL, // Func
    [139] = NULL, // Func
    [140] = NULL, // Func
    [141] = NULL, // Func
    [142] = &(TypeInfo){TYPE_CONST, .size = 0, .align = 0, .base = TYPEID0(1, TYPE_VOID)},
    [143] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID0(142, TYPE_CONST)},
    [144] = NULL, // Func
    [145] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(91, TYPE_STRUCT, starfield_Rect)},
    [146] = NULL, // Func
    [147] = NULL, // Func
    [148] = NULL, // Func
    [149] = NULL, // Func
    [150] = NULL, // Func
    [151] = NULL, // Func
    [152] = NULL, // Func
    [153] = NULL, // Func
    [154] = NULL, // Func
    [155] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(101, TYPE_STRUCT, starfield_Tex)},
    [156] = NULL, // Func
    [157] = NULL, // Func
    [158] = NULL, // Func
    [159] = NULL, // Func
    [160] = NULL, // Func
    [161] = NULL, // Func
    [162] = NULL, // Func
    [163] = NULL, // Func
    [164] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(14, TYPE_FLOAT, float)},
    [165] = NULL, // Func
    [166] = NULL, // Func
    [167] = NULL, // Func
    [168] = NULL, // Func
    [169] = NULL, // Func
    [170] = NULL, // Func
    [171] = NULL, // Func
    [172] = NULL, // Func
    [173] = NULL, // Func
    [174] = NULL, // Func
    [175] = NULL, // Func
    [176] = NULL, // Func
    [177] = NULL, // Func
    [178] = NULL, // Func
    [179] = NULL, // Func
    [180] = NULL, // Enum
    [181] = NULL, // Func
    [182] = NULL, // Func
    [183] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [7]), .align = alignof(char [7]), .base = TYPEID(3, TYPE_CHAR, char), .count = 7},
    [184] = NULL, // Func
    [185] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [18]), .align = alignof(char [18]), .base = TYPEID(3, TYPE_CHAR, char), .count = 18},
    [186] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(SDL_DisplayMode), .align = alignof(SDL_DisplayMode), .name = "SDL_DisplayMode", .num_fields = 5, .fields = (TypeFieldInfo[]) {
        {"format", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_DisplayMode, format)},
        {"w", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_DisplayMode, w)},
        {"h", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_DisplayMode, h)},
        {"refresh_rate", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_DisplayMode, refresh_rate)},
        {"driverdata", .type = TYPEID(16, TYPE_PTR, void *), .offset = offsetof(SDL_DisplayMode, driverdata)},
    }},
    [187] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(186, TYPE_STRUCT, SDL_DisplayMode)},
    [188] = NULL, // Func
    [189] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [26]), .align = alignof(char [26]), .base = TYPEID(3, TYPE_CHAR, char), .count = 26},
    [190] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [5]), .align = alignof(char [5]), .base = TYPEID(3, TYPE_CHAR, char), .count = 5},
    [191] = NULL, // Enum
    [192] = NULL, // Func
    [193] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [23]), .align = alignof(char [23]), .base = TYPEID(3, TYPE_CHAR, char), .count = 23},
    [194] = NULL, // Func
    [195] = NULL, // Func
    [196] = NULL, // Incomplete array type
    [197] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [2]), .align = alignof(char [2]), .base = TYPEID(3, TYPE_CHAR, char), .count = 2},
    [198] = NULL, // Enum
    [199] = NULL, // Func
    [200] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(int [275]), .align = alignof(int [275]), .base = TYPEID(8, TYPE_INT, int), .count = 275},
    [201] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(8, TYPE_INT, int)},
    [202] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(int [512]), .align = alignof(int [512]), .base = TYPEID(8, TYPE_INT, int), .count = 512},
    [203] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(SDL_AudioSpec), .align = alignof(SDL_AudioSpec), .name = "SDL_AudioSpec", .num_fields = 9, .fields = (TypeFieldInfo[]) {
        {"freq", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_AudioSpec, freq)},
        {"format", .type = TYPEID(7, TYPE_USHORT, ushort), .offset = offsetof(SDL_AudioSpec, format)},
        {"channels", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_AudioSpec, channels)},
        {"silence", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_AudioSpec, silence)},
        {"samples", .type = TYPEID(7, TYPE_USHORT, ushort), .offset = offsetof(SDL_AudioSpec, samples)},
        {"padding", .type = TYPEID(7, TYPE_USHORT, ushort), .offset = offsetof(SDL_AudioSpec, padding)},
        {"size", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_AudioSpec, size)},
        {"callback", .type = TYPEID(204, TYPE_FUNC, void (*)(void *, uchar *, int)), .offset = offsetof(SDL_AudioSpec, callback)},
        {"userdata", .type = TYPEID(16, TYPE_PTR, void *), .offset = offsetof(SDL_AudioSpec, userdata)},
    }},
    [204] = NULL, // Func
    [205] = &(TypeInfo){TYPE_CONST, .size = sizeof(SDL_AudioSpec const ), .align = alignof(SDL_AudioSpec const ), .base = TYPEID(203, TYPE_STRUCT, SDL_AudioSpec)},
    [206] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(205, TYPE_CONST, SDL_AudioSpec const )},
    [207] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(203, TYPE_STRUCT, SDL_AudioSpec)},
    [208] = NULL, // Func
    [209] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [20]), .align = alignof(char [20]), .base = TYPEID(3, TYPE_CHAR, char), .count = 20},
    [210] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [17]), .align = alignof(char [17]), .base = TYPEID(3, TYPE_CHAR, char), .count = 17},
    [211] = NULL, // Func
    [212] = NULL, // Func
    [213] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [3]), .align = alignof(char [3]), .base = TYPEID(3, TYPE_CHAR, char), .count = 3},
    [214] = NULL, // Func
    [215] = NULL, // Incomplete array type
    [216] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(starfield_Color [15]), .align = alignof(starfield_Color [15]), .base = TYPEID(85, TYPE_STRUCT, starfield_Color), .count = 15},
    [217] = NULL, // Func
    [218] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(16, TYPE_PTR, void *)},
    [219] = NULL, // Func
    [220] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(100, TYPE_PTR, starfield_Star *)},
    [221] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(starfield_BufHeader), .align = alignof(starfield_BufHeader), .name = "starfield_BufHeader", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"len", .type = TYPEID(12, TYPE_LLONG, llong), .offset = offsetof(starfield_BufHeader, len)},
        {"cap", .type = TYPEID(12, TYPE_LLONG, llong), .offset = offsetof(starfield_BufHeader, cap)},
        {"data", .type = TYPEID(224, TYPE_ARRAY, uchar [1]), .offset = offsetof(starfield_BufHeader, data)},
    }},
    [222] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(221, TYPE_STRUCT, starfield_BufHeader)},
    [223] = NULL, // Func
    [224] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(uchar [1]), .align = alignof(uchar [1]), .base = TYPEID(4, TYPE_UCHAR, uchar), .count = 1},
    [225] = NULL, // Func
    [226] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [16]), .align = alignof(char [16]), .base = TYPEID(3, TYPE_CHAR, char), .count = 16},
    [227] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(55, TYPE_STRUCT, noir_DigitalButton)},
    [228] = NULL, // Func
    [229] = &(TypeInfo){TYPE_UNION, .size = sizeof(SDL_Event), .align = alignof(SDL_Event), .name = "SDL_Event", .num_fields = 5, .fields = (TypeFieldInfo[]) {
        {"type", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_Event, type)},
        {"key", .type = TYPEID(230, TYPE_STRUCT, SDL_KeyboardEvent), .offset = offsetof(SDL_Event, key)},
        {"text", .type = TYPEID(232, TYPE_STRUCT, SDL_TextInputEvent), .offset = offsetof(SDL_Event, text)},
        {"motion", .type = TYPEID(234, TYPE_STRUCT, SDL_MouseMotionEvent), .offset = offsetof(SDL_Event, motion)},
        {"button", .type = TYPEID(235, TYPE_STRUCT, SDL_MouseButtonEvent), .offset = offsetof(SDL_Event, button)},
    }},
    [230] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(SDL_KeyboardEvent), .align = alignof(SDL_KeyboardEvent), .name = "SDL_KeyboardEvent", .num_fields = 8, .fields = (TypeFieldInfo[]) {
        {"type", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_KeyboardEvent, type)},
        {"timestamp", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_KeyboardEvent, timestamp)},
        {"windowID", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_KeyboardEvent, windowID)},
        {"state", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_KeyboardEvent, state)},
        {"repeat", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_KeyboardEvent, repeat)},
        {"padding2", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_KeyboardEvent, padding2)},
        {"padding3", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_KeyboardEvent, padding3)},
        {"keysym", .type = TYPEID(231, TYPE_STRUCT, SDL_Keysym), .offset = offsetof(SDL_KeyboardEvent, keysym)},
    }},
    [231] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(SDL_Keysym), .align = alignof(SDL_Keysym), .name = "SDL_Keysym", .num_fields = 4, .fields = (TypeFieldInfo[]) {
        {"scancode", .type = TYPEID(198, TYPE_NONE, SDL_Scancode), .offset = offsetof(SDL_Keysym, scancode)},
        {"sym", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_Keysym, sym)},
        {"mod", .type = TYPEID(7, TYPE_USHORT, ushort), .offset = offsetof(SDL_Keysym, mod)},
        {"unused", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_Keysym, unused)},
    }},
    [232] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(SDL_TextInputEvent), .align = alignof(SDL_TextInputEvent), .name = "SDL_TextInputEvent", .num_fields = 4, .fields = (TypeFieldInfo[]) {
        {"type", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_TextInputEvent, type)},
        {"timestamp", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_TextInputEvent, timestamp)},
        {"windowID", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_TextInputEvent, windowID)},
        {"text", .type = TYPEID(233, TYPE_ARRAY, char [32]), .offset = offsetof(SDL_TextInputEvent, text)},
    }},
    [233] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [32]), .align = alignof(char [32]), .base = TYPEID(3, TYPE_CHAR, char), .count = 32},
    [234] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(SDL_MouseMotionEvent), .align = alignof(SDL_MouseMotionEvent), .name = "SDL_MouseMotionEvent", .num_fields = 9, .fields = (TypeFieldInfo[]) {
        {"type", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_MouseMotionEvent, type)},
        {"timestamp", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_MouseMotionEvent, timestamp)},
        {"windowID", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_MouseMotionEvent, windowID)},
        {"which", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_MouseMotionEvent, which)},
        {"state", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_MouseMotionEvent, state)},
        {"x", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_MouseMotionEvent, x)},
        {"y", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_MouseMotionEvent, y)},
        {"xrel", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_MouseMotionEvent, xrel)},
        {"yrel", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_MouseMotionEvent, yrel)},
    }},
    [235] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(SDL_MouseButtonEvent), .align = alignof(SDL_MouseButtonEvent), .name = "SDL_MouseButtonEvent", .num_fields = 10, .fields = (TypeFieldInfo[]) {
        {"type", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_MouseButtonEvent, type)},
        {"timestamp", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_MouseButtonEvent, timestamp)},
        {"windowID", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_MouseButtonEvent, windowID)},
        {"which", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_MouseButtonEvent, which)},
        {"button", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_MouseButtonEvent, button)},
        {"state", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_MouseButtonEvent, state)},
        {"clicks", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_MouseButtonEvent, clicks)},
        {"padding1", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_MouseButtonEvent, padding1)},
        {"x", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_MouseButtonEvent, x)},
        {"y", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_MouseButtonEvent, y)},
    }},
    [236] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(229, TYPE_UNION, SDL_Event)},
    [237] = NULL, // Func
    [238] = NULL, // Enum
    [239] = NULL, // Func
    [240] = NULL, // Func
    [241] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [21]), .align = alignof(char [21]), .base = TYPEID(3, TYPE_CHAR, char), .count = 21},
    [242] = NULL, // Func
    [243] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [24]), .align = alignof(char [24]), .base = TYPEID(3, TYPE_CHAR, char), .count = 24},
    [244] = NULL, // Func
    [245] = NULL, // Func
    [246] = NULL, // Func
    [247] = NULL, // Func
    [248] = NULL, // Func
    [249] = NULL, // Enum
    [250] = NULL, // Func
    [251] = NULL, // Func
    [252] = NULL, // Func
    [253] = NULL, // Func
    [254] = NULL, // Func
    [255] = NULL, // Func
    [256] = NULL, // Func
    [257] = NULL, // Func
    [258] = NULL, // Func
    [259] = NULL, // Func
    [260] = NULL, // Func
    [261] = NULL, // Func
    [262] = NULL, // Func
    [263] = NULL, // Func
    [264] = NULL, // Func
    [265] = NULL, // Func
    [266] = NULL, // Func
    [267] = NULL, // Func
    [268] = NULL, // Func
    [269] = NULL, // Func
    [270] = NULL, // Func
    [271] = NULL, // Func
    [272] = NULL, // Func
    [273] = NULL, // Func
    [274] = NULL, // Func
    [275] = NULL, // Func
    [276] = NULL, // Func
    [277] = NULL, // Func
    [278] = NULL, // Func
    [279] = NULL, // Func
    [280] = NULL, // Func
    [281] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(41, TYPE_STRUCT, noir_Event)},
    [282] = NULL, // Func
    [283] = NULL, // Func
    [284] = NULL, // Func
    [285] = NULL, // Func
    [286] = NULL, // Func
    [287] = NULL, // Func
    [288] = NULL, // Func
    [289] = NULL, // Func
    [290] = NULL, // Func
    [291] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(47, TYPE_STRUCT, noir_int2)},
    [292] = NULL, // Func
    [293] = NULL, // Func
    [294] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(62, TYPE_PTR, noir_float2 *)},
    [295] = NULL, // Func
    [296] = NULL, // No associated type
    [297] = NULL, // Func
    [298] = NULL, // No associated type
    [299] = NULL, // Func
    [300] = NULL, // Func
    [301] = NULL, // Func
    [302] = NULL, // Func
    [303] = NULL, // Func
    [304] = NULL, // Func
    [305] = NULL, // Func
    [306] = NULL, // Func
    [307] = NULL, // Func
    [308] = NULL, // Func
    [309] = NULL, // Func
    [310] = NULL, // Func
    [311] = NULL, // Func
    [312] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(9, TYPE_UINT, uint)},
    [313] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(312, TYPE_PTR, uint *)},
    [314] = NULL, // Func
    [315] = NULL, // Func
    [316] = NULL, // Func
    [317] = NULL, // Func
    [318] = NULL, // Func
    [319] = NULL, // Func
    [320] = NULL, // Func
    [321] = NULL, // No associated type
    [322] = NULL, // Func
    [323] = NULL, // Func
    [324] = NULL, // Func
    [325] = NULL, // Func
    [326] = NULL, // Func
    [327] = NULL, // Func
    [328] = NULL, // Func
    [329] = NULL, // Func
    [330] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(15, TYPE_DOUBLE, double)},
    [331] = NULL, // Func
    [332] = NULL, // Func
    [333] = NULL, // Func
    [334] = NULL, // Func
    [335] = NULL, // Func
    [336] = NULL, // Func
    [337] = NULL, // Func
    [338] = NULL, // Func
    [339] = NULL, // Func
    [340] = NULL, // Func
    [341] = NULL, // Func
    [342] = NULL, // Func
    [343] = NULL, // Func
    [344] = NULL, // Func
    [345] = NULL, // Func
    [346] = &(TypeInfo){TYPE_CONST, .size = sizeof(char (*const )), .align = alignof(char (*const )), .base = TYPEID(18, TYPE_PTR, char *)},
    [347] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(346, TYPE_CONST, char (*const ))},
    [348] = NULL, // Func
    [349] = NULL, // No associated type
    [350] = NULL, // Func
    [351] = NULL, // Func
    [352] = NULL, // Func
    [353] = NULL, // Func
    [354] = NULL, // Func
    [355] = NULL, // Func
    [356] = NULL, // Func
    [357] = NULL, // Func
    [358] = NULL, // Func
    [359] = NULL, // Func
    [360] = NULL, // Func
    [361] = NULL, // Func
    [362] = NULL, // Func
    [363] = NULL, // Func
    [364] = NULL, // Func
    [365] = NULL, // Func
    [366] = NULL, // Func
    [367] = NULL, // Func
    [368] = NULL, // Func
    [369] = NULL, // Func
    [370] = NULL, // No associated type
    [371] = NULL, // Func
    [372] = NULL, // Func
    [373] = NULL, // Func
    [374] = NULL, // Func
    [375] = NULL, // No associated type
    [376] = NULL, // No associated type
    [377] = NULL, // No associated type
    [378] = NULL, // Func
    [379] = NULL, // Func
    [380] = NULL, // Func
    [381] = NULL, // Func
    [382] = NULL, // Func
    [383] = NULL, // Func
    [384] = NULL, // Func
    [385] = NULL, // Func
    [386] = NULL, // Func
    [387] = NULL, // Func
    [388] = NULL, // Func
    [389] = NULL, // Func
    [390] = NULL, // Func
    [391] = NULL, // Func
    [392] = NULL, // Func
    [393] = NULL, // Func
    [394] = NULL, // Func
    [395] = NULL, // Func
    [396] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(6, TYPE_SHORT, short)},
    [397] = NULL, // Func
    [398] = NULL, // Func
    [399] = NULL, // Func
    [400] = &(TypeInfo){TYPE_CONST, .size = sizeof(short const ), .align = alignof(short const ), .base = TYPEID(6, TYPE_SHORT, short)},
    [401] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(400, TYPE_CONST, short const )},
    [402] = NULL, // Func
    [403] = NULL, // Func
    [404] = NULL, // Func
    [405] = NULL, // Func
    [406] = NULL, // Func
    [407] = NULL, // Func
    [408] = NULL, // Func
    [409] = NULL, // Func
    [410] = NULL, // Func
    [411] = NULL, // No associated type
    [412] = NULL, // Func
    [413] = NULL, // Func
    [414] = NULL, // No associated type
    [415] = NULL, // Func
    [416] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(12, TYPE_LLONG, llong)},
    [417] = NULL, // Func
    [418] = NULL, // No associated type
    [419] = NULL, // No associated type
    [420] = NULL, // Func
    [421] = &(TypeInfo){TYPE_CONST, .size = sizeof(llong const ), .align = alignof(llong const ), .base = TYPEID(12, TYPE_LLONG, llong)},
    [422] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(421, TYPE_CONST, llong const )},
    [423] = NULL, // Func
    [424] = NULL, // Func
    [425] = NULL, // Func
    [426] = NULL, // No associated type
    [427] = NULL, // No associated type
    [428] = NULL, // No associated type
    [429] = NULL, // Func
    [430] = NULL, // Func
    [431] = NULL, // Func
    [432] = NULL, // Func
    [433] = NULL, // Func
    [434] = NULL, // Func
    [435] = NULL, // Func
    [436] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(137, TYPE_PTR, uchar *)},
    [437] = NULL, // Func
    [438] = NULL, // No associated type
    [439] = NULL, // No associated type
    [440] = NULL, // Func
    [441] = &(TypeInfo){TYPE_CONST, .size = sizeof(uchar const ), .align = alignof(uchar const ), .base = TYPEID(4, TYPE_UCHAR, uchar)},
    [442] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(441, TYPE_CONST, uchar const )},
    [443] = NULL, // Func
    [444] = NULL, // Func
    [445] = NULL, // Func
    [446] = NULL, // Func
    [447] = NULL, // Func
    [448] = NULL, // Func
    [449] = NULL, // Func
    [450] = NULL, // Func
    [451] = NULL, // Func
    [452] = NULL, // Func
    [453] = NULL, // Func
    [454] = NULL, // Func
    [455] = NULL, // Func
    [456] = NULL, // Func
    [457] = NULL, // Func
    [458] = NULL, // Func
    [459] = NULL, // Func
    [460] = NULL, // Func
    [461] = NULL, // Func
    [462] = NULL, // Func
    [463] = NULL, // Func
    [464] = NULL, // Func
    [465] = NULL, // Func
    [466] = NULL, // No associated type
    [467] = NULL, // Func
    [468] = NULL, // Func
    [469] = NULL, // Func
    [470] = NULL, // Func
    [471] = NULL, // Func
    [472] = NULL, // Func
    [473] = NULL, // Func
    [474] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(472, TYPE_FUNC, int (*)(void *, SDL_Event *))},
    [475] = NULL, // Func
    [476] = NULL, // Func
    [477] = NULL, // Func
    [478] = NULL, // No associated type
    [479] = NULL, // Func
    [480] = NULL, // Func
    [481] = NULL, // Func
    [482] = NULL, // Func
    [483] = NULL, // Func
    [484] = NULL, // Func
    [485] = NULL, // Func
    [486] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(77, TYPE_STRUCT, SDL_Rect)},
    [487] = NULL, // Func
    [488] = NULL, // Func
    [489] = NULL, // No associated type
    [490] = NULL, // Func
    [491] = NULL, // Func
    [492] = NULL, // Func
    [493] = NULL, // Func
    [494] = NULL, // Func
    [495] = NULL, // Func
    [496] = NULL, // Func
    [497] = NULL, // Func
    [498] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(497, TYPE_FUNC, void (*)(void *, int, SDL_LogPriority, char const (*)))},
    [499] = NULL, // Func
    [500] = NULL, // Func
    [501] = NULL, // No associated type
    [502] = NULL, // Func
    [503] = NULL, // Func
    [504] = NULL, // Func
    [505] = NULL, // Func
    [506] = NULL, // Func
    [507] = NULL, // Func
    [508] = NULL, // Func
    [509] = NULL, // No associated type
    [510] = NULL, // Func
    [511] = NULL, // Func
    [512] = NULL, // Func
    [513] = NULL, // Func
    [514] = NULL, // Func
    [515] = NULL, // Func
    [516] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(7, TYPE_USHORT, ushort)},
    [517] = NULL, // Func
    [518] = NULL, // Func
    [519] = NULL, // No associated type
    [520] = NULL, // Func
    [521] = NULL, // Func
    [522] = NULL, // Func
    [523] = NULL, // No associated type
    [524] = NULL, // Func
    [525] = NULL, // Func
    [526] = NULL, // No associated type
    [527] = NULL, // No associated type
    [528] = NULL, // No associated type
    [529] = NULL, // No associated type
    [530] = NULL, // No associated type
    [531] = NULL, // No associated type
    [532] = NULL, // No associated type
    [533] = NULL, // No associated type
    [534] = NULL, // Func
    [535] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(53, TYPE_PTR, SDL_Window *)},
    [536] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(73, TYPE_PTR, SDL_Renderer *)},
    [537] = NULL, // Func
    [538] = NULL, // Func
    [539] = NULL, // Func
    [540] = NULL, // Func
    [541] = NULL, // Func
    [542] = NULL, // No associated type
    [543] = NULL, // Func
    [544] = NULL, // Func
    [545] = NULL, // Func
    [546] = NULL, // Func
    [547] = NULL, // Func
    [548] = NULL, // Func
    [549] = NULL, // Func
    [550] = NULL, // Func
    [551] = NULL, // No associated type
    [552] = NULL, // Func
    [553] = NULL, // Func
    [554] = NULL, // Func
    [555] = NULL, // Func
    [556] = NULL, // Func
    [557] = NULL, // Func
    [558] = NULL, // Func
    [559] = NULL, // Func
    [560] = NULL, // Func
    [561] = NULL, // Func
    [562] = NULL, // Func
    [563] = NULL, // Func
    [564] = NULL, // Func
    [565] = NULL, // Func
    [566] = NULL, // Func
    [567] = NULL, // Func
    [568] = NULL, // Func
    [569] = NULL, // Func
    [570] = NULL, // Func
    [571] = NULL, // Func
    [572] = NULL, // Func
    [573] = NULL, // Func
    [574] = NULL, // Func
    [575] = NULL, // Func
    [576] = &(TypeInfo){TYPE_CONST, .size = sizeof(double const ), .align = alignof(double const ), .base = TYPEID(15, TYPE_DOUBLE, double)},
    [577] = NULL, // Func
    [578] = NULL, // Func
    [579] = NULL, // Func
    [580] = NULL, // Func
    [581] = NULL, // Func
    [582] = NULL, // Func
    [583] = NULL, // Func
    [584] = NULL, // Func
    [585] = NULL, // Func
    [586] = NULL, // Func
    [587] = NULL, // Func
    [588] = NULL, // Func
    [589] = NULL, // Func
    [590] = NULL, // Func
    [591] = NULL, // Func
    [592] = NULL, // Func
    [593] = NULL, // Func
    [594] = NULL, // Func
    [595] = NULL, // Func
    [596] = NULL, // Func
    [597] = NULL, // Func
    [598] = NULL, // Func
    [599] = NULL, // Func
    [600] = NULL, // Func
    [601] = NULL, // Func
    [602] = NULL, // Func
    [603] = NULL, // Func
    [604] = NULL, // Func
    [605] = NULL, // Func
    [606] = NULL, // Func
    [607] = NULL, // Func
    [608] = NULL, // No associated type
    [609] = NULL, // No associated type
    [610] = NULL, // No associated type
    [611] = NULL, // No associated type
    [612] = NULL, // No associated type
    [613] = NULL, // No associated type
    [614] = NULL, // Func
    [615] = NULL, // No associated type
    [616] = NULL, // Func
    [617] = NULL, // Func
    [618] = NULL, // Func
    [619] = NULL, // Func
    [620] = NULL, // Func
    [621] = NULL, // Func
    [622] = NULL, // Func
    [623] = NULL, // Func
    [624] = NULL, // Func
    [625] = NULL, // No associated type
    [626] = NULL, // Func
    [627] = NULL, // No associated type
    [628] = NULL, // Func
    [629] = NULL, // Func
    [630] = NULL, // Func
    [631] = NULL, // Func
    [632] = NULL, // No associated type
    [633] = NULL, // Func
    [634] = NULL, // Func
    [635] = NULL, // Func
    [636] = NULL, // Func
    [637] = NULL, // Func
    [638] = NULL, // Func
    [639] = NULL, // Func
    [640] = NULL, // Func
    [641] = NULL, // Func
    [642] = NULL, // No associated type
    [643] = NULL, // Func
    [644] = NULL, // Func
    [645] = NULL, // Func
    [646] = NULL, // Func
    [647] = NULL, // Func
    [648] = NULL, // Func
    [649] = NULL, // Func
    [650] = NULL, // Func
    [651] = NULL, // Func
    [652] = NULL, // Func
    [653] = NULL, // Func
    [654] = NULL, // Func
    [655] = NULL, // No associated type
    [656] = NULL, // No associated type
    [657] = NULL, // Func
    [658] = NULL, // No associated type
    [659] = NULL, // No associated type
    [660] = NULL, // No associated type
    [661] = NULL, // No associated type
    [662] = NULL, // No associated type
    [663] = NULL, // No associated type
    [664] = NULL, // No associated type
    [665] = NULL, // Func
    [666] = NULL, // Func
    [667] = NULL, // Func
    [668] = NULL, // Func
    [669] = NULL, // Func
    [670] = NULL, // Func
    [671] = NULL, // Func
    [672] = NULL, // Func
    [673] = NULL, // Func
    [674] = NULL, // Func
    [675] = NULL, // Func
    [676] = NULL, // Func
    [677] = NULL, // Func
    [678] = NULL, // Func
    [679] = NULL, // Func
    [680] = NULL, // Func
    [681] = NULL, // Func
    [682] = NULL, // Func
    [683] = NULL, // Func
    [684] = NULL, // Func
    [685] = NULL, // Func
    [686] = NULL, // Func
    [687] = NULL, // Func
    [688] = NULL, // Func
    [689] = NULL, // Func
    [690] = NULL, // Func
    [691] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(starfield_Star [1]), .align = alignof(starfield_Star [1]), .base = TYPEID(99, TYPE_STRUCT, starfield_Star), .count = 1},
    [692] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [39]), .align = alignof(char [39]), .base = TYPEID(3, TYPE_CHAR, char), .count = 39},
    [693] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [37]), .align = alignof(char [37]), .base = TYPEID(3, TYPE_CHAR, char), .count = 37},
    [694] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [38]), .align = alignof(char [38]), .base = TYPEID(3, TYPE_CHAR, char), .count = 38},
    [695] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [22]), .align = alignof(char [22]), .base = TYPEID(3, TYPE_CHAR, char), .count = 22},
    [696] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [29]), .align = alignof(char [29]), .base = TYPEID(3, TYPE_CHAR, char), .count = 29},
    [697] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [10]), .align = alignof(char [10]), .base = TYPEID(3, TYPE_CHAR, char), .count = 10},
    [698] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [27]), .align = alignof(char [27]), .base = TYPEID(3, TYPE_CHAR, char), .count = 27},
    [699] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [28]), .align = alignof(char [28]), .base = TYPEID(3, TYPE_CHAR, char), .count = 28},
    [700] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [15]), .align = alignof(char [15]), .base = TYPEID(3, TYPE_CHAR, char), .count = 15},
    [701] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [8]), .align = alignof(char [8]), .base = TYPEID(3, TYPE_CHAR, char), .count = 8},
};

int num_typeinfos = 702;
const TypeInfo **typeinfos = (const TypeInfo **)typeinfo_table;

// Definitions
#line 788
int main(int argc, char (*(*argv))) {
    if (true) {
        starfield_test_iterator();
    }
    _MM_SET_FLUSH_ZERO_MODE(_MM_FLUSH_ZERO_ON);
    #line 794
    noir_app.window.size = starfield_ImageSize;
    if (!(noir_app_init())) {
        noir_print_and_clear_error();
        return 1;
    }
    #line 800
    printf("Platform: %s\n", noir_app.platform);
    printf("Display: %d x %d, %d Hz, %.2f DPI\n", noir_app.display.size.x, noir_app.display.size.y, noir_app.display.rate, noir_app.display.dpi);
    #line 803
    SDL_Surface (*surface) = SDL_GetWindowSurface(noir_app.window.sdl);
    SDL_Renderer (*renderer) = SDL_CreateSoftwareRenderer(surface);
    assert((surface->format->format) == (SDL_PIXELFORMAT_RGB888));
    assert((surface->format->BitsPerPixel) == (32));
    assert((surface->w) == (starfield_ImageSize.x));
    assert((surface->h) == (starfield_ImageSize.y));
    #line 810
    char (*starfield_text) = 
        "\n"
        "\xE2\x9C\xBA   \xE3\x80\x80\xE3\x80\x80 \xE3\x80\x80\xE3\x80\x80 \xC2\xB7   \xE2\x8A\xB9\n"
        " *  \xE2\x8B\x86 \xE3\x80\x80\xE3\x80\x80\xE3\x80\x80  \xE2\x9C\xA7  *\n"
        "  \xE3\x80\x80\xE3\x80\x80\xE3\x80\x80\xE3\x80\x80\xE3\x80\x80\xE3\x80\x80\xE3\x80\x80.  \xE3\x80\x80\n"
        " +  *\xE3\x80\x80  \xE3\x80\x80* \xE3\x80\x80\xE3\x80\x80. \xE3\x80\x80 \xE2\x8B\x86\n"
        "    \xE3\x80\x80\xE3\x80\x80  +   \xE2\x9C\xAB\n";
    #line 819
    ullong text_len = strlen(starfield_text);
    #line 821
    starfield_random_state = (uint32_t)(starfield_hash(starfield_text, text_len));
    starfield_more_entropy = starfield_hash((starfield_text) + ((text_len) / (2)), (text_len) / (2));
    #line 824
    starfield_Image noise = starfield_make_image(starfield_ImageSize);
    float noise_level = (1) - (starfield_square(starfield_random01()));
    for (starfield_PixelIter it = starfield_pixel_iter_begin(&(noise), (starfield_Rect){0}); starfield_pixel_iter_next(&(it));) {
        starfield_Color c = {(starfield_square(starfield_random_normal())) * (((noise_level) / (4096.f))), (starfield_square(starfield_random_normal())) * (((noise_level) / (4096.f))), (starfield_square(starfield_random_normal())) * (((noise_level) / (4096.f))), 1};
        #line 833
        *(it.pixel) = c;
    }
    starfield_blur(&(noise), 0.1f);
    #line 837
    starfield_diffraction_rotation = starfield_random_unit_vector2();
    #line 839
    starfield_Starfield starfield = starfield_create_starfield(starfield_text);
    #line 841
    float min_t = 100000.f;
    float max_t = 0.f;
    float sum_t = 0.f;
    int n_t = 0;
    double t_reset = starfield_time_now();
    #line 847
    starfield_Image image = starfield_make_image(starfield_ImageSize);
    starfield_Image blurred = starfield_make_image(starfield_ImageSize);
    starfield_Image blurred2 = starfield_make_image(starfield_ImageSize);
    while (noir_app_update()) {
        if (noir_app.error) {
            noir_print_and_clear_error();
        }
        #line 855
        if ((!(n_t)) || (noir_app.mouse.left_button.pressed)) {
            double t0 = starfield_time_now();
            float t0f = (float)(t0);
            #line 859
            starfield_image_clear(&(image));
            #line 861
            starfield_draw_starfield(&(image), &(starfield));
            #line 863
            starfield_diffract(&(image), (starfield_DiffractionArguments){.alpha = 0.1f, .radius = 4, .transform = starfield_diffraction_rotation, .type = starfield_randomn(1, STARFIELD_DiffractionTypeCount)});
            #line 870
            starfield_blur_to(&(blurred), &(image), starfield_randomr(0, 1));
            starfield_blur_to(&(blurred2), &(image), starfield_randomr(0.5f, 2));
            for (starfield_PixelIter it = starfield_pixel_iter_begin(&(image), (starfield_Rect){0}); starfield_pixel_iter_next(&(it));) {
                starfield_Color bp = starfield_image_fetch(&(blurred), it.pixel_pos);
                starfield_Color mbp = starfield_color_mul(*(it.pixel), bp);
                starfield_Color xbp = starfield_color_lerp(bp, mbp, 0.1f);
                #line 877
                starfield_Color bp2 = starfield_image_fetch(&(blurred2), it.pixel_pos);
                starfield_Color mbp2 = starfield_color_mul(*(it.pixel), bp2);
                starfield_Color xbp2 = starfield_color_lerp(bp2, mbp2, .9f);
                *(it.pixel) = starfield_color_add(*(it.pixel), starfield_color_add(xbp, xbp2));
            }
            #line 883
            starfield_tonemap(&(image), (starfield_Color){.r = starfield_clamp_low(.1f, (2.3f) + ((starfield_random_normal()) * (0.5f))), .g = starfield_clamp_low(.1f, (2) + ((starfield_random_normal()) * (0.5f))), .b = starfield_clamp_low(.1f, (1.9f) + ((starfield_random_normal()) * (0.5f)))}, starfield_square(starfield_random01()));
            #line 889
            starfield_image_to_rgb8((starfield_RGB8 *)(surface->pixels), (noir_int2){surface->w, surface->h}, &(image));
            #line 891
            double t1 = starfield_time_now();
            #line 893
            float t = (float)((((t1) - (t0))) * (1000));
            min_t = starfield_min(t, min_t);
            max_t = starfield_max(t, max_t);
            sum_t += t;
            (n_t)++;
            #line 899
            if (noir_app.mouse.left_button.pressed) {
                #line 901
                starfield_init_star_type_really((starfield_star_types) + (12), true);
                #line 903
                printf("min %.2fms max %.2fms avg %.2fms\n", min_t, max_t, (sum_t) / (n_t));
                #line 905
                starfield_free_starfield(&(starfield));
                starfield = starfield_create_starfield(starfield_text);
                t_reset = t0;
            }
        }
        #line 911
        if (noir_app.mouse.right_button.pressed) {
            starfield_tonemap(&(image), (starfield_Color){.r = starfield_clamp_low(.1f, (1) + ((starfield_random_normal()) * (0.1f))), .g = starfield_clamp_low(.1f, (1) + ((starfield_random_normal()) * (0.1f))), .b = starfield_clamp_low(.1f, (1) + ((starfield_random_normal()) * (0.1f)))}, (1) - (starfield_square(starfield_random01())));
            #line 917
            starfield_image_to_rgb8((starfield_RGB8 *)(surface->pixels), (noir_int2){surface->w, surface->h}, &(image));
        }
        #line 920
        SDL_UpdateWindowSurface(noir_app.window.sdl);
        #line 922
        fflush(stdout);
        SDL_Delay(10);
    }
    #line 926
    return 0;
}

char const ((*IONOS)) = "win32";
char const ((*IONARCH)) = "x64";
#line 51 "C:\\code\\cloned\\bitwise\\ion\\system_packages\\builtin\\typeinfo.ion"
TypeKind typeid_kind(typeid type) {
    return (TypeKind)((((type) >> (24))) & (0xff));
}

int typeid_index(typeid type) {
    return (int)((type) & (0xffffff));
}

size_t typeid_size(typeid type) {
    return (size_t)((type) >> (32));
}

TypeInfo const ((*get_typeinfo(typeid type))) {
    int index = typeid_index(type);
    if ((typeinfos) && ((index) < (num_typeinfos))) {
        return typeinfos[index];
    } else {
        return NULL;
    }
}

#line 142 "C:\\code\\starfield\\starfield\\image.ion"
void starfield_test_iterator(void) {
    noir_int2 dim = {32, 32};
    starfield_Image img = starfield_make_image(dim);
    #line 146
    for (int i = 0; (i) < (dim.x); (i)++) {
        for (int j = 0; (j) < (dim.y); (j)++) {
            starfield_Color r = {starfield_random01(), starfield_random01(), starfield_random01(), starfield_random01()};
            #line 155
            img.pixels[(i) + ((j) * (dim.x))] = r;
        }
    }
    #line 159
    int i = 0;
    int j = 0;
    for (starfield_PixelIter it = starfield_pixel_iter_begin(&(img), starfield_all_rect()); starfield_pixel_iter_next(&(it));) {
        starfield_Color p = img.pixels[(i) + ((j) * (dim.x))];
        starfield_Color c = starfield_image_sample_linear(&(img), it.pos);
        starfield_Color d = starfield_image_sample_nearest(&(img), it.pos);
        assert(((p.r) - (c.r)) < (1e-5f));
        assert(((p.g) - (c.g)) < (1e-5f));
        assert(((p.b) - (c.b)) < (1e-5f));
        assert(((p.a) - (c.a)) < (1e-5f));
        assert((p.r) == (d.r));
        assert((p.g) == (d.g));
        assert((p.b) == (d.b));
        assert((p.a) == (d.a));
        #line 174
        (i)++;
        if ((i) == (dim.x)) {
            i = 0;
            (j)++;
        }
    }
    assert(((i) + ((j) * (dim.x))) == ((dim.x) * (dim.y)));
}

noir_App noir_app = {.window = {.pos = {NOIR_DEFAULT_WINDOW_POS, NOIR_DEFAULT_WINDOW_POS}}};
noir_int2 const (starfield_ImageSize) = {500, 500};
#line 329 "C:\\code\\starfield\\noir\\noir.ion"
bool noir_app_init(void) {
    if (noir_app.init) {
        return true;
    }
    if ((SDL_Init(SDL_INIT_EVERYTHING)) < (0)) {
        noir_sdl_error("SDL_Init");
        return false;
    }
    if (!(noir_init_display())) {
        return false;
    }
    if (!(noir_init_window())) {
        return false;
    }
    noir_init_keys();
    noir_init_time();
    noir_init_audio();
    noir_app.platform = SDL_GetPlatform();
    noir_app.init = true;
    return true;
}

#line 616
void noir_print_and_clear_error(void) {
    if (noir_app.error) {
        printf("Error: %s\n", noir_app.error);
        noir_app.error = NULL;
    }
}

uint32_t starfield_random_state = 1;
#line 150 "C:\\code\\starfield\\starfield\\starfield.ion"
size_t starfield_hash(void (*p), ptrdiff_t len) {
    ullong h = 1099511628211u;
    uchar (*b) = (uint8_t *)(p);
    for (int i = 0; (i) < (len); (i)++) {
        h ^= b[i];
        h *= 0xcbf29ce484222325u;
    }
    return h;
}

size_t starfield_more_entropy = 1;
#line 8 "C:\\code\\starfield\\starfield\\image.ion"
starfield_Image starfield_make_image(noir_int2 size) {
    return (starfield_Image){.pixels = starfield_xcalloc((size.x) * (size.y), sizeof(starfield_Color)), .size = size};
}

#line 14 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_square(float x) {
    return (x) * (x);
}

#line 243
float starfield_random01(void) {
    uint r = (starfield_random()) & (STARFIELD_int_23_mask);
    return (r) * (STARFIELD_int_23_reciprocal);
}

#line 71 "C:\\code\\starfield\\starfield\\image.ion"
starfield_PixelIter starfield_pixel_iter_begin(starfield_Image (*image), starfield_Rect rect) {
    starfield_PixelIter iter = {0};
    #line 74
    float aspect_ratio = ((float)(image->size.x)) / ((float)(image->size.y));
    #line 76
    float x_min = 0.f;
    float x_max = 1.f;
    float y_min = 0.f;
    float y_max = 1.f;
    noir_float2 start_pos = starfield_clamp2(0, 1, starfield_rect_absolute(rect, aspect_ratio, (noir_float2){0, 0}));
    #line 82
    if (!(starfield_is_zero(&(rect), sizeof(rect)))) {
        noir_float2 a = start_pos;
        noir_float2 b = starfield_clamp2(0, 1, starfield_rect_absolute(rect, aspect_ratio, (noir_float2){1, 0}));
        noir_float2 c = starfield_clamp2(0, 1, starfield_rect_absolute(rect, aspect_ratio, (noir_float2){0, 1}));
        noir_float2 d = starfield_clamp2(0, 1, starfield_rect_absolute(rect, aspect_ratio, (noir_float2){1, 1}));
        #line 88
        x_min = starfield_min4(a.x, b.x, c.x, d.x);
        x_max = starfield_max4(a.x, b.x, c.x, d.x);
        y_min = starfield_min4(a.y, b.y, c.y, d.y);
        y_max = starfield_max4(a.y, b.y, c.y, d.y);
        #line 93
        noir_float2 origin = starfield_rect_relative(rect, aspect_ratio, (noir_float2){0, 0});
        iter.dx = starfield_sub2(starfield_rect_relative(rect, aspect_ratio, (noir_float2){(1.f) / (image->size.x), 0}), origin);
        iter.dy = starfield_sub2(starfield_rect_relative(rect, aspect_ratio, (noir_float2){0, (1.f) / (image->size.y)}), origin);
    } else {
        rect = starfield_all_rect();
        iter.dx = (noir_float2){(1.f) / (image->size.x), 0.f};
        iter.dy = (noir_float2){0.f, (1.f) / (image->size.y)};
    }
    #line 102
    iter.start.x = (int)(ceilf((((x_min) * (image->size.x)) - (0.5f)) + (STARFIELD_PixelEps)));
    iter.end.x = ((int)((((x_max) * (image->size.x)) - (0.5f)) + (STARFIELD_PixelEps))) + (1);
    iter.start.y = (int)(ceilf((((y_min) * (image->size.y)) - (0.5f)) + (STARFIELD_PixelEps)));
    iter.end.y = ((int)((((y_max) * (image->size.y)) - (0.5f)) + (STARFIELD_PixelEps))) + (1);
    #line 107
    iter.pixel_pos = (noir_int2){(iter.start.x) - (1), iter.start.y};
    iter.pos = starfield_rect_relative(rect, aspect_ratio, (noir_float2){((float)((0.5f) + (iter.pixel_pos.x))) / (image->size.x), ((float)((0.5f) + (iter.pixel_pos.y))) / (image->size.y)});
    iter.abs_pos = starfield_rect_relative(rect, aspect_ratio, iter.pos);
    iter.line_start = iter.pos;
    iter.aspect_ratio = aspect_ratio;
    iter.rect = rect;
    iter.image = image;
    #line 115
    return iter;
}

bool starfield_pixel_iter_next(starfield_PixelIter (*it)) {
    (it->pixel_pos.x)++;
    #line 121
    for (; (it->pixel_pos.y) < (it->end.y); (it->pixel_pos.y)++) {
        for (; (it->pixel_pos.x) < (it->end.x); (it->pixel_pos.x)++) {
            #line 125
            it->pos = starfield_add2(it->pos, it->dx);
            #line 127
            if (starfield_inside_normal_rect(it->pos)) {
                it->pixel = (it->image->pixels) + (((it->pixel_pos.x) + ((it->pixel_pos.y) * (it->image->size.x))));
                it->abs_pos = starfield_rect_relative(it->rect, it->aspect_ratio, it->pos);
                return true;
            }
        }
        #line 134
        it->line_start = starfield_add2(it->line_start, it->dy);
        it->pos = it->line_start;
        it->pixel_pos.x = it->start.x;
    }
    #line 139
    return false;
}

#line 271 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_random_normal(void) {
    float u = 0.f;
    float v = 0.f;
    float s = 0.f;
    do {
        u = ((starfield_random01()) * (2.f)) - (1.f);
        v = ((starfield_random01()) * (2.f)) - (1.f);
        s = ((u) * (u)) + ((v) * (v));
    } while ((s) >= (1));
    return (u) * (sqrtf((((-(2)) * (logf(s)))) / (s)));
}

#line 1 "C:\\code\\starfield\\starfield\\filter.ion"
void starfield_blur(starfield_Image (*img), float radius) {
    starfield_blur_to(img, img, radius);
}

noir_float2 starfield_diffraction_rotation = {0};
#line 248 "C:\\code\\starfield\\starfield\\math.ion"
noir_float2 starfield_random_unit_vector2(void) {
    float theta = (starfield_random01()) * (STARFIELD_Tau);
    return (noir_float2){cosf(theta), sinf(theta)};
}

#line 166 "C:\\code\\starfield\\starfield\\stars.ion"
starfield_Starfield starfield_create_starfield(char const ((*starfield))) {
    #line 168
    starfield_Starfield result = {0};
    #line 170
    int width = 0;
    int height = 0;
    int line_width = 0;
    int star_count = 0;
    #line 175
    char const ((*c)) = starfield;
    while (*(c)) {
        starfield_Star star = {0};
        c = starfield_consume_star(c, &(star));
        #line 180
        if (star.type) {
            if ((star.type->id) == (STARFIELD_StarType_BigSpace)) {
                line_width += 1;
            } else if ((star.type->id) != (STARFIELD_StarType_Space)) {
                (star_count)++;
                #line 186
                star.rect.pos = (noir_float2){(((float)(line_width)) + ((starfield_random01()) * (0.5f))) - (.25f), (((float)(height)) + ((starfield_random01()) * (0.5f))) - (.25f)};
                float x = starfield_clamp(0.66f, 1.33f, starfield_square(starfield_random_normal()));
                float y = x;
                if (star.type->nonsquare) {
                    y = starfield_clamp(0.66f, 1.33f, starfield_square(starfield_random_normal()));
                }
                star.rect.size = (noir_float2){x, y};
                star.rect.rot = (star.type->fixed_rotation ? (noir_float2){0} : starfield_random_unit_vector2());
                star.color = starfield_random_star_color(star.type, (1) + ((x) * (x)));
                #line 196
                starfield_push_star(&(result), &(star));
            }
        }
        #line 200
        if ((*(c)) == ('\n')) {
            height += 6;
            width = starfield_maxi(width, line_width);
            line_width = 0;
            (c)++;
        } else {
            line_width += 2;
        }
    }
    #line 210
    width += 8;
    height += 4;
    #line 213
    int R = starfield_maxi(width, height);
    int x_pad = (4) + ((((R) - (width))) / (2));
    int y_pad = (4) + ((((R) - (height))) / (2));
    #line 217
    for (int i = 0; (i) < (starfield_starfield_len(&(result))); (i)++) {
        starfield_Star (*s) = (result.stars) + (i);
        s->rect.pos.x = (((s->rect.pos.x) + (x_pad))) / (R);
        s->rect.pos.y = (((s->rect.pos.y) + (y_pad))) / (R);
        s->rect.size.x = (((s->type->size.x) * (s->type->tex.size.x)) * (s->rect.size.x)) / (starfield_ImageSize.x);
        s->rect.size.y = (((s->type->size.y) * (s->type->tex.size.y)) * (s->rect.size.y)) / (starfield_ImageSize.y);
    }
    #line 225
    starfield_Tex star_count_noise = starfield_make_tex((noir_int2){8, 8});
    float density = starfield_square((starfield_random_normal()) + (2));
    for (starfield_PixelIter it = starfield_pixel_iter_begin_tex(&(star_count_noise), (starfield_Rect){0}); starfield_pixel_iter_next(&(it));) {
        #line 229
        it.pixel->r = (float)(starfield_random_poisson(expf(-(starfield_clamp_low(0, (density) + (starfield_random_normal()))))));
    }
    #line 232
    int tiles = 25;
    float w = (1.f) / (tiles);
    float background_star_size = 0.005f;
    noir_float2 xy = {((((w) * (starfield_ImageSize.x)) / (starfield_ImageSize.y))) / (2.f), (w) / (2.f)};
    for (int i = 0; (i) < (((tiles) * (starfield_ImageSize.x)) / (starfield_ImageSize.y)); (i)++) {
        for (int j = 0; (j) < (tiles); (j)++) {
            float count = starfield_max(1.f, starfield_tex_lookup(&(star_count_noise), xy).r);
            for (int k = 0; (k) < (count); (k)++) {
                float size = starfield_max((1.f) / (starfield_ImageSize.x), ((starfield_random_normal()) * (background_star_size)) * ((((1) + (count)) - ((int)(count)))));
                #line 242
                starfield_push_star(&(result), &((starfield_Star){.rect = {.pos = starfield_add2(xy, (noir_float2){(((starfield_random01()) - (0.5f))) * (w), (((starfield_random01()) - (0.5f))) * (w)}), .size = {size, size}, .rot = starfield_random_unit_vector2()}, .type = (starfield_star_types) + (1), .color = starfield_random_star_color((starfield_star_types) + (1), ((3) * (size)) * (((16) + ((4) * (count)))))}));
            }
            #line 253
            xy.x += w;
        }
        #line 256
        xy.x = (w) / (2);
        xy.y += w;
    }
    #line 260
    result.density = star_count_noise;
    result.star_count = (int)(starfield_starfield_len(&(result)));
    return result;
}

#line 611 "C:\\code\\starfield\\starfield\\starfield.ion"
double starfield_time_now(void) {
    ullong ticks = (SDL_GetPerformanceCounter()) - (noir_app.time.sdl_start_ticks);
    return ((double)(ticks)) / ((double)(noir_app.time.ticks_per_sec));
}

#line 351 "C:\\code\\starfield\\noir\\noir.ion"
bool noir_app_update(void) {
    if (!(noir_check_init())) {
        return false;
    }
    if (!(noir_app.error)) {
        SDL_ClearError();
    }
    SDL_PumpEvents();
    noir_update_events();
    noir_update_window();
    noir_update_time();
    noir_update_mouse();
    noir_update_clipboard();
    noir_update_audio();
    (noir_app.num_updates)++;
    return !(noir_app.quit);
}

#line 22 "C:\\code\\starfield\\starfield\\image.ion"
void starfield_image_clear(starfield_Image (*img)) {
    memset(img->pixels, 0, ((img->size.x) * (img->size.y)) * (sizeof(starfield_Color)));
}

#line 584 "C:\\code\\starfield\\starfield\\stars.ion"
void starfield_draw_starfield(starfield_Image (*dest), starfield_Starfield (*starfield)) {
    starfield_draw_stars(dest, starfield);
    starfield_draw_nebula(dest, &(starfield->density));
}

#line 448 "C:\\code\\starfield\\starfield\\filter.ion"
void starfield_diffract(starfield_Image (*img), starfield_DiffractionArguments args) {
    if ((args.type) == (STARFIELD_Diffraction_None)) {
        return;
    }
    #line 453
    float alpha = ((args.alpha) == (0) ? 1 : args.alpha);
    float radius = ((args.radius) == (0) ? 1 : args.radius);
    noir_float2 transform = (starfield_is_identity_transform(args.transform) ? (noir_float2){1, 0} : args.transform);
    float aspect_ratio = ((float)(img->size.x)) / ((float)(img->size.y));
    #line 458
    noir_float2 bounds = starfield_bounds_after_transform(transform, aspect_ratio);
    float m = starfield_magnitude2(transform);
    noir_int2 working_size = {(int)((((img->size.x) * (m)) * (3)) / (2)), (int)((((img->size.y) * (m)) * (3)) / (2))};
    #line 462
    int scratch_buf_size = starfield_maxi(working_size.x, working_size.y);
    int transpose_scratch_size = 0;
    #line 465
    if ((args.type) != (STARFIELD_Diffraction_Single)) {
        transpose_scratch_size = (working_size.x) * (working_size.y);
    }
    #line 469
    float (*scratch_buf) = starfield_xcalloc((scratch_buf_size) + (transpose_scratch_size), sizeof(float));
    float (*tranpose_scratch) = (transpose_scratch_size ? (scratch_buf) + (scratch_buf_size) : 0);
    #line 472
    starfield_apply_diffraction(img, (starfield_Color){alpha, alpha, alpha}, radius, transform, bounds, scratch_buf, tranpose_scratch);
    #line 474
    if ((args.type) == (STARFIELD_Diffraction_CrossOrthoRed)) {
        noir_float2 ortho = starfield_rotate(args.transform, starfield_mul2s((noir_float2){STARFIELD_InvSqrt2, STARFIELD_InvSqrt2}, 0.7f));
        noir_float2 ortho_bounds = starfield_bounds_after_transform(ortho, aspect_ratio);
        noir_int2 ortho_working_size = {(int)((img->size.x) * (ortho_bounds.x)), (int)((img->size.y) * (ortho_bounds.y))};
        assert((starfield_maxi(ortho_working_size.x, ortho_working_size.y)) < (scratch_buf_size));
        assert((((ortho_working_size.x) * (ortho_working_size.y))) < (transpose_scratch_size));
        starfield_apply_diffraction(img, (starfield_Color){alpha, (alpha) * (.6f), (alpha) * (.2f)}, radius, ortho, ortho_bounds, scratch_buf, tranpose_scratch);
    }
    #line 483
    free(scratch_buf);
}

#line 253 "C:\\code\\starfield\\starfield\\math.ion"
int starfield_randomn(int lo, int hi) {
    return ((starfield_random()) % (((hi) - (lo)))) + (lo);
}

#line 94 "C:\\code\\starfield\\starfield\\filter.ion"
void starfield_blur_to(starfield_Image (*dest), starfield_Image (*src), float radius) {
    assert((dest->size.x) == (src->size.x));
    assert((dest->size.y) == (src->size.y));
    #line 98
    starfield_Image temp = starfield_make_image((noir_int2){src->size.y, src->size.x});
    starfield_Color (*scratch) = starfield_xcalloc(starfield_maxi(src->size.x, src->size.y), sizeof(starfield_Color));
    #line 101
    for (int i = 0; (i) < (3); (i)++) {
        for (int y = 0; (y) < (src->size.y); (y)++) {
            starfield_Color (*row_src) = (src->pixels) + ((y) * (src->size.x));
            starfield_Color (*row_dest) = (dest->pixels) + ((y) * (dest->size.x));
            starfield_blur_row(scratch, row_src, src->size.x, radius);
            starfield_blur_transpose((temp.pixels) + (y), temp.size.x, scratch, src->size.x);
        }
        #line 109
        for (int y = 0; (y) < (temp.size.y); (y)++) {
            starfield_Color (*row) = (temp.pixels) + ((y) * (temp.size.x));
            starfield_blur_row(scratch, row, temp.size.x, radius);
            starfield_blur_transpose((dest->pixels) + (y), dest->size.x, scratch, temp.size.x);
        }
    }
    #line 116
    starfield_free_image(&(temp));
    free(scratch);
}

#line 257 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_randomr(float lo, float hi) {
    return ((starfield_random01()) * (((hi) - (lo)))) + (lo);
}

#line 348 "C:\\code\\starfield\\starfield\\image.ion"
starfield_Color starfield_image_fetch(starfield_Image (*img), noir_int2 pos) {
    if ((((((img->pixels) == (0)) || ((pos.x) < (0))) || ((pos.x) >= (img->size.x))) || ((pos.y) < (0))) || ((pos.y) >= (img->size.y))) {
        assert(0);
        return (starfield_Color){0};
    }
    #line 354
    assert(((pos.x) + ((pos.y) * (img->size.x))) < ((img->size.x) * (img->size.y)));
    return img->pixels[(pos.x) + ((pos.y) * (img->size.x))];
}

#line 516 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Color starfield_color_mul(starfield_Color a, starfield_Color b) {
    return (starfield_Color){(a.r) * (b.r), (a.g) * (b.g), (a.b) * (b.b), (a.a) * (b.a)};
}

#line 480
starfield_Color starfield_color_lerp(starfield_Color a, starfield_Color b, float t) {
    return (starfield_Color){starfield_lerp(a.r, b.r, t), starfield_lerp(a.g, b.g, t), starfield_lerp(a.b, b.b, t), starfield_lerp(a.a, b.a, t)};
}

#line 498
starfield_Color starfield_color_add(starfield_Color a, starfield_Color b) {
    return (starfield_Color){(a.r) + (b.r), (a.g) + (b.g), (a.b) + (b.b), (a.a) + (b.a)};
}

#line 759
void starfield_tonemap(starfield_Image (*img), starfield_Color color_adjustment, float mix) {
    starfield_Image b = starfield_image_copy(img);
    #line 762
    float Lmax = 0.f;
    for (starfield_PixelIter it = starfield_pixel_iter_begin(&(b), (starfield_Rect){0}); starfield_pixel_iter_next(&(it));) {
        *(it.pixel) = (*(it.pixel));
        float lum = starfield_luminance(*(it.pixel));
        if ((lum) > (starfield_srgb((1.f) / (255)))) {
            it.pixel->a = logf((1e-5f) + (starfield_luminance(*(it.pixel))));
        }
        Lmax = starfield_max(Lmax, lum);
    }
    starfield_blur_asym(&(b), starfield_mul2s(starfield_int2_to_float2(starfield_ImageSize), 0.5f));
    #line 773
    starfield_Color adjust = color_adjustment;
    adjust.a = (1.f) / (starfield_luminance(color_adjustment));
    adjust = starfield_color_premultiply(adjust);
    #line 778
    float Lw = expf(starfield_image_sample_linear(&(b), (noir_float2){.5f, .5f}).a);
    float a = starfield_remap(0, 10000, 6, 1, starfield_clamp(0, 10000, Lmax));
    for (starfield_PixelIter it = starfield_pixel_iter_begin(img, (starfield_Rect){0}); starfield_pixel_iter_next(&(it));) {
        *(it.pixel) = (*(it.pixel));
        it.pixel->r = (a) * ((((adjust.r) * (starfield_uncharted2duiker(it.pixel->r))) / (starfield_uncharted2duiker(Lw))));
        it.pixel->g = (a) * ((((adjust.g) * (starfield_uncharted2duiker(it.pixel->g))) / (starfield_uncharted2duiker(Lw))));
        it.pixel->b = (a) * ((((adjust.b) * (starfield_uncharted2duiker(it.pixel->b))) / (starfield_uncharted2duiker(Lw))));
    }
}

#line 24 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_clamp_low(float a, float x) {
    return starfield_max(a, x);
}

#line 39 "C:\\code\\starfield\\starfield\\image.ion"
void starfield_image_to_rgb8(starfield_RGB8 (*dest), noir_int2 size, starfield_Image (*src)) {
    assert((src->size.x) == (size.x));
    assert((src->size.y) == (size.y));
    starfield_Color (*src_end) = (src->pixels) + ((src->size.x) * (src->size.y));
    for (starfield_Color (*src_it) = src->pixels; (src_it) != (src_end); (src_it)++) {
        *(dest) = starfield_color_to_rgb8(*(src_it));
        (dest)++;
    }
}

#line 66 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_min(float a, float b) {
    return (((a) < (b)) ? a : b);
}

#line 62
float starfield_max(float a, float b) {
    return (((a) > (b)) ? a : b);
}

#line 401 "C:\\code\\starfield\\starfield\\stars.ion"
void starfield_init_star_type_really(starfield_StarType (*type), bool redraw) {
    int idx = (int32_t)(((type) - (starfield_star_types)));
    assert((idx) >= (0));
    assert((idx) < (STARFIELD_StarTypeCount));
    #line 406
    if ((type->tex.pixels) && ((redraw) == (false))) {
        assert((type->tex.size.x) != (0));
        assert((type->tex.size.y) != (0));
        return;
    }
    #line 412
    type->id = idx;
    #line 414
    switch (idx) {
    case 0: {
        type->tex = starfield_make_tex((noir_int2){8, 8});
        type->size = (noir_float2){1, 1};
        starfield_draw_outline(type->tex.pixels, type->tex.size, (starfield_Color){0, 1, 0, 0.5f});
        break;
    }
    case 1: {
        #line 420
        type->tex = starfield_make_tex((noir_int2){32, 32});
        type->size = (noir_float2){1, 1};
        starfield_draw_simple_star(type->tex.pixels, type->tex.size);
        break;
    }
    case 2: {
        #line 424
        type->tex = starfield_make_tex((noir_int2){32, 32});
        type->size = (noir_float2){1, 1};
        starfield_draw_simple_star(type->tex.pixels, type->tex.size);
        break;
    }
    case 3: {
        #line 428
        type->tex = starfield_make_tex((noir_int2){32, 32});
        type->size = (noir_float2){1, 1};
        starfield_draw_simple_star(type->tex.pixels, type->tex.size);
        break;
    }
    case 4: {
        #line 432
        type->tex = starfield_make_tex((noir_int2){32, 32});
        type->size = (noir_float2){1, 1};
        starfield_draw_simple_star(type->tex.pixels, type->tex.size);
        break;
    }
    case 5: {
        #line 436
        type->tex = starfield_make_tex((noir_int2){64, 64});
        type->size = (noir_float2){1, 1};
        starfield_draw_simple_star(type->tex.pixels, type->tex.size);
        break;
    }
    case 6: {
        #line 440
        type->tex = starfield_make_tex((noir_int2){64, 64});
        type->size = (noir_float2){.5f, .5f};
        starfield_draw_lensed_quasar(&(type->tex));
        break;
    }
    case 7: {
        #line 444
        type->tex = starfield_make_tex((noir_int2){64, 64});
        type->size = (noir_float2){1, 1};
        type->fixed_rotation = true;
        starfield_draw_simple_star(type->tex.pixels, type->tex.size);
        starfield_diffract(&((starfield_Image){type->tex.pixels, type->tex.size}), (starfield_DiffractionArguments){.alpha = 0.2f, .radius = .5f, .transform = starfield_rotate(starfield_diffraction_rotation, (noir_float2){STARFIELD_InvSqrt2, STARFIELD_InvSqrt2})});
        starfield_diffract(&((starfield_Image){type->tex.pixels, type->tex.size}), (starfield_DiffractionArguments){.alpha = 0.1f, .radius = .5f, .transform = starfield_rotate(starfield_diffraction_rotation, (noir_float2){cosf((STARFIELD_Pi) / (8)), sinf((STARFIELD_Pi) / (8))})});
        break;
    }
    case 8: {
        #line 451
        type->tex = starfield_make_tex((noir_int2){64, 64});
        type->size = (noir_float2){1, 1};
        starfield_draw_simple_star(type->tex.pixels, type->tex.size);
        break;
    }
    case 9: {
        #line 455
        type->tex = starfield_make_tex((noir_int2){64, 64});
        type->size = (noir_float2){1, 1};
        type->fixed_rotation = true;
        starfield_draw_simple_star(type->tex.pixels, type->tex.size);
        starfield_diffract(&((starfield_Image){type->tex.pixels, type->tex.size}), (starfield_DiffractionArguments){2, 2, starfield_diffraction_rotation});
        break;
    }
    case 10: {
        #line 461
        type->tex = starfield_make_tex((noir_int2){128, 128});
        type->size = (noir_float2){1, 1};
        type->fixed_rotation = true;
        #line 465
        type->tex.pixels[(((((type->tex.size.x)) / (2)) - (1))) + ((((((type->tex.size.y)) / (2)) - (1))) * ((type->tex.size.x)))] = (starfield_Color){64, 16, 1, 1};
        starfield_Image img = starfield_image_copy(&((starfield_Image){type->tex.pixels, type->tex.size}));
        starfield_diffract(&(img), (starfield_DiffractionArguments){1, 2, starfield_rotate(starfield_diffraction_rotation, (noir_float2){STARFIELD_InvSqrt2, STARFIELD_InvSqrt2})});
        starfield_blur(&(img), 0.1f);
        for (starfield_PixelIter it = starfield_pixel_iter_begin_tex(&(type->tex), (starfield_Rect){0}); starfield_pixel_iter_next(&(it));) {
            starfield_Color c = starfield_image_sample_nearest(&(img), it.pos);
            float str = starfield_clamp01((1) - ((starfield_magnitude2(starfield_sub2(it.pos, (noir_float2){0.5f, 0.5f}))) * (12)));
            str = ((((str) * (str)) * (str)) * (str)) * (str);
            starfield_Color to_white = starfield_color_lerp((starfield_Color){1, 1, 1, 1}, (starfield_Color){1, 4, 64, 1}, str);
            *(it.pixel) = starfield_color_add(*(it.pixel), starfield_color_mul(c, to_white));
        }
        break;
    }
    case 11: {
        #line 477
        type->tex = starfield_make_tex((noir_int2){64, 64});
        type->size = (noir_float2){1, 1};
        break;
    }
    case 12: {
        #line 480
        type->tex = starfield_make_tex((noir_int2){256, 256});
        type->size = (noir_float2){(1.f) / (3.f), (1.f) / (3.f)};
        type->nonsquare = true;
        starfield_draw_galaxy(&(type->tex), starfield_randomn(1, 8));
        break;
    }
    case 13: {
        #line 485
        type->tex = starfield_make_tex((noir_int2){8, 8});
        type->size = (noir_float2){1, 1};
        starfield_draw_outline(type->tex.pixels, type->tex.size, (starfield_Color){1, 0, 0, 0.5f});
        break;
    }
    default: {
        #line 488
        {
            type->tex = starfield_make_tex((noir_int2){32, 32});
            type->size = (noir_float2){1, 1};
            starfield_draw_simple_star(type->tex.pixels, type->tex.size);
        }
        break;
    }
    }
    #line 495
    starfield_tex_preprocess(&(type->tex));
}

starfield_StarType (starfield_star_types[STARFIELD_StarTypeCount]) = {0};
#line 37
void starfield_free_starfield(starfield_Starfield (*starfield)) {
    starfield_buf_free(starfield->stars);
    if (starfield->density.pixels) {
        starfield_free_tex(&(starfield->density));
    }
    starfield->stars = 0;
    starfield->star_count = 0;
}

#line 422 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Rect starfield_all_rect(void) {
    return (starfield_Rect){.pos = {0.5f, 0.5f}, .size = {1, 1}, .rot = {1, 0}};
}

#line 201 "C:\\code\\starfield\\starfield\\image.ion"
starfield_Color starfield_image_sample_linear(starfield_Image (*img), noir_float2 pos) {
    return starfield_image_sample_linear_edge(img, pos, STARFIELD_Edge_Clamp);
}

#line 336
starfield_Color starfield_image_sample_nearest(starfield_Image (*img), noir_float2 pos) {
    if ((img->pixels) == (0)) {
        return (starfield_Color){0};
    }
    #line 341
    assert(img->size.x);
    assert(img->size.y);
    #line 344
    noir_int2 p = {(int)(roundf((((pos.x) * (img->size.x)) - (0.5f)) + (STARFIELD_PixelEps))), (int)(roundf((((pos.y) * (img->size.y)) - (0.5f)) + (STARFIELD_PixelEps)))};
    return starfield_image_fetch(img, p);
}

#line 140 "C:\\code\\starfield\\noir\\noir.ion"
void noir_sdl_error(char const ((*name))) {
    char const ((*error)) = SDL_GetError();
    if (*(error)) {
        snprintf(noir_app.error_buf, sizeof(noir_app.error_buf), "%s: %s", name, error);
        noir_app.error = noir_app.error_buf;
    }
}

#line 103
bool noir_init_display(void) {
    float dpi = {0};
    if ((SDL_GetDisplayDPI(0, &(dpi), NULL, NULL)) != (0)) {
        noir_sdl_error("SDL_GetDisplayDPI");
        return false;
    }
    noir_app.display.dpi = dpi;
    #line 111
    SDL_DisplayMode mode = {0};
    if ((SDL_GetCurrentDisplayMode(0, &(mode))) != (0)) {
        noir_sdl_error("SDL_GetCurrentDisplayMode");
        return false;
    }
    noir_app.display.size.x = mode.w;
    noir_app.display.size.y = mode.h;
    noir_app.display.rate = mode.refresh_rate;
    return true;
}

#line 76
bool noir_init_window(void) {
    if (!(noir_app.window.title)) {
        noir_app.window.title = noir_default_window_title;
    }
    uint x = ((noir_app.window.pos.x) == (NOIR_DEFAULT_WINDOW_POS) ? SDL_WINDOWPOS_CENTERED : noir_app.window.pos.x);
    uint y = ((noir_app.window.pos.y) == (NOIR_DEFAULT_WINDOW_POS) ? SDL_WINDOWPOS_CENTERED : noir_app.window.pos.y);
    int width = ((noir_app.window.size.x) == (0) ? noir_default_window_size.x : noir_app.window.size.x);
    int height = ((noir_app.window.size.y) == (0) ? noir_default_window_size.y : noir_app.window.size.y);
    SDL_WindowFlags flags = {0};
    if (noir_app.window.resizable) {
        flags |= SDL_WINDOW_RESIZABLE;
    }
    if (noir_app.window.hidden) {
        flags |= SDL_WINDOW_HIDDEN;
    }
    SDL_Window (*sdl_window) = SDL_CreateWindow(noir_app.window.title, x, y, width, height, flags);
    if (!(sdl_window)) {
        noir_app.error = "Window creation failed";
        return false;
    }
    noir_app.window.sdl = sdl_window;
    noir_app.window.synced_pos = noir_app.window.pos;
    strncpy(noir_app.window.synced_title, noir_app.window.title, (sizeof(noir_app.window.synced_title)) - (1));
    noir_update_window();
    return true;
}

#line 122
void noir_init_keys(void) {
    for (int c = 0; (c) < (256); (c)++) {
        if (isprint(c)) {
            char (str[]) = {c, 0};
            SDL_Scancode scancode = SDL_GetScancodeFromName(str);
            if ((scancode) != (SDL_SCANCODE_UNKNOWN)) {
                noir_noir_key_to_sdl_scancode[(uchar)(c)] = scancode;
            }
        }
    }
    for (int key = 0; (key) < (NOIR_NUM_KEYS); (key)++) {
        int scancode = noir_noir_key_to_sdl_scancode[key];
        if (scancode) {
            noir_sdl_scancode_to_noir_key[scancode] = key;
        }
    }
}

#line 44
void noir_init_time(void) {
    noir_app.time.ticks_per_sec = SDL_GetPerformanceFrequency();
    noir_app.time.sdl_start_ticks = SDL_GetPerformanceCounter();
}

#line 55
bool noir_init_audio(void) {
    noir_app.audio.rate = 44100;
    noir_app.audio.channels = 2;
    SDL_AudioSpec desired_spec = {.freq = noir_app.audio.rate, .channels = noir_app.audio.channels, .format = AUDIO_F32, .samples = 4096, .callback = noir_sdl_audio_callback};
    #line 65
    SDL_AudioSpec obtained_spec = {0};
    uint sdl_device = SDL_OpenAudioDevice(NULL, 0, &(desired_spec), &(obtained_spec), 0);
    if ((sdl_device) < (0)) {
        noir_sdl_error("SDL_OpenAudioDevice");
        return false;
    }
    noir_app.audio.valid = true;
    noir_app.audio.sdl_device = sdl_device;
    return true;
}

#line 47 "C:\\code\\starfield\\starfield\\starfield.ion"
void (*starfield_xcalloc(size_t count, size_t size)) {
    void (*result) = calloc(count, size);
    if (!(result)) {
        printf("Failed to calloc");
        assert(0);
        exit(1);
    }
    return result;
}

#line 218 "C:\\code\\starfield\\starfield\\math.ion"
uint32_t starfield_random(void) {
    starfield_random_state ^= (starfield_random_state) << (13);
    starfield_random_state ^= (starfield_random_state) >> (17);
    starfield_random_state ^= (starfield_random_state) << (5);
    return starfield_random_state;
}

#line 50
noir_float2 starfield_clamp2(float a, float b, noir_float2 v) {
    return (noir_float2){starfield_clamp(a, b, v.x), starfield_clamp(a, b, v.y)};
}

#line 463 "C:\\code\\starfield\\starfield\\starfield.ion"
noir_float2 starfield_rect_absolute(starfield_Rect rect, float aspect_ratio, noir_float2 rel_pos) {
    noir_float2 centered_pos = starfield_sub2(rel_pos, (noir_float2){(0.5f) / (aspect_ratio), 0.5f});
    noir_float2 scaled_pos = starfield_mul2(centered_pos, rect.size);
    noir_float2 rot_pos = starfield_rotate(scaled_pos, (noir_float2){rect.rot.x, -(rect.rot.y)});
    noir_float2 shift_pos = starfield_add2(rot_pos, rect.pos);
    shift_pos.x /= aspect_ratio;
    return shift_pos;
}

#line 57
bool starfield_is_zero(void const ((*buf)), size_t len) {
    char const ((*p)) = (char const (*))(buf);
    if (*(p)) {
        return false;
    }
    #line 63
    return (memcmp((p) + (1), buf, (len) - (1))) == (0);
}

#line 74 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_min4(float a, float b, float c, float d) {
    return starfield_min(starfield_min(a, b), starfield_min(c, d));
}

float starfield_max4(float a, float b, float c, float d) {
    return starfield_max(starfield_max(a, b), starfield_max(c, d));
}

#line 454 "C:\\code\\starfield\\starfield\\starfield.ion"
noir_float2 starfield_rect_relative(starfield_Rect rect, float aspect_ratio, noir_float2 abs_pos) {
    abs_pos.x *= aspect_ratio;
    noir_float2 shift_pos = starfield_sub2(abs_pos, rect.pos);
    noir_float2 rot_pos = starfield_rotate(shift_pos, rect.rot);
    noir_float2 scaled_pos = starfield_div2(rot_pos, rect.size);
    noir_float2 result = starfield_add2(scaled_pos, (noir_float2){0.5f, 0.5f});
    return result;
}

#line 114 "C:\\code\\starfield\\starfield\\math.ion"
noir_float2 starfield_sub2(noir_float2 a, noir_float2 b) {
    return (noir_float2){(a.x) - (b.x), (a.y) - (b.y)};
}

#line 106
noir_float2 starfield_add2(noir_float2 a, noir_float2 b) {
    return (noir_float2){(a.x) + (b.x), (a.y) + (b.y)};
}

#line 449 "C:\\code\\starfield\\starfield\\starfield.ion"
bool starfield_inside_normal_rect(noir_float2 pos) {
    return ((((pos.x) >= (0)) && ((pos.x) < (1))) && ((pos.y) >= (0))) && ((pos.y) < (1));
}

#line 55 "C:\\code\\starfield\\starfield\\stars.ion"
char const ((*starfield_consume_star(char const ((*c)), starfield_Star (*star)))) {
    int next = 0;
    if ((*(c)) == ('\n')) {
        (c)++;
    }
    #line 61
    if ((*(c)) == (' ')) {
        #line 63
        star->type = (starfield_star_types) + (STARFIELD_StarType_Space);
        next = 1;
    } else if ((*(c)) == ('*')) {
        star->type = (starfield_star_types) + (1);
        next = 1;
    } else if ((*(c)) == ('+')) {
        star->type = (starfield_star_types) + (2);
        next = 1;
    } else if ((*(c)) == ('.')) {
        star->type = (starfield_star_types) + (3);
        next = 1;
    } else if ((memcmp(c, "\xC2\xB7", (sizeof("\xC2\xB7")) - (1))) == (0)) {
        star->type = (starfield_star_types) + (4);
        next = (sizeof("\xC2\xB7")) - (1);
    } else if ((memcmp(c, "\xCB\x9A", (sizeof("\xCB\x9A")) - (1))) == (0)) {
        star->type = (starfield_star_types) + (5);
        next = (sizeof("\xCB\x9A")) - (1);
    } else if ((memcmp(c, "\xE2\x8A\xB9", (sizeof("\xE2\x8A\xB9")) - (1))) == (0)) {
        star->type = (starfield_star_types) + (6);
        next = (sizeof("\xE2\x8A\xB9")) - (1);
    } else if ((memcmp(c, "\xE2\x8B\x86", (sizeof("\xE2\x8B\x86")) - (1))) == (0)) {
        star->type = (starfield_star_types) + (7);
        next = (sizeof("\xE2\x8B\x86")) - (1);
    } else if ((memcmp(c, "\xE2\x9C\xA6", (sizeof("\xE2\x9C\xA6")) - (1))) == (0)) {
        star->type = (starfield_star_types) + (8);
        next = (sizeof("\xE2\x9C\xA6")) - (1);
    } else if ((memcmp(c, "\xE2\x9C\xA7", (sizeof("\xE2\x9C\xA7")) - (1))) == (0)) {
        star->type = (starfield_star_types) + (9);
        next = (sizeof("\xE2\x9C\xA7")) - (1);
    } else if ((memcmp(c, "\xE2\x9C\xAB", (sizeof("\xE2\x9C\xAB")) - (1))) == (0)) {
        star->type = (starfield_star_types) + (10);
        next = (sizeof("\xE2\x9C\xAB")) - (1);
    } else if ((memcmp(c, "\xE2\x9C\xB9", (sizeof("\xE2\x9C\xB9")) - (1))) == (0)) {
        star->type = (starfield_star_types) + (11);
        next = (sizeof("\xE2\x9C\xB9")) - (1);
    } else if ((memcmp(c, "\xE2\x9C\xBA", (sizeof("\xE2\x9C\xBA")) - (1))) == (0)) {
        star->type = (starfield_star_types) + (12);
        next = (sizeof("\xE2\x9C\xBA")) - (1);
    } else if ((memcmp(c, "\xE3\x80\x80", (sizeof("\xE3\x80\x80")) - (1))) == (0)) {
        #line 103
        star->type = (starfield_star_types) + (STARFIELD_StarType_BigSpace);
        next = (sizeof("\xE3\x80\x80")) - (1);
    } else {
        assert(0);
        star->type = 0;
        next = 1;
    }
    #line 111
    starfield_init_star_type(star->type);
    return (c) + (next);
}

#line 18 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_clamp(float a, float b, float x) {
    return (((x) < (a)) ? a : (((x) > (b)) ? b : x));
}

#line 149 "C:\\code\\starfield\\starfield\\stars.ion"
starfield_Color starfield_random_star_color(starfield_StarType (*type), float alpha) {
    int offset = 8;
    float r = (offset) + ((starfield_random_normal()) * (((STARFIELD_StarColorCount) / (7))));
    float x = starfield_clamp(0, (STARFIELD_StarColorCount) - (1), r);
    #line 154
    if ((type->id) == (12)) {
        x = starfield_clamp(8, 11, x);
    }
    #line 158
    int xi = (int)(x);
    float xf = (x) - (xi);
    starfield_Color color = starfield_color_lerp((starfield_star_colors[xi]), (starfield_star_colors[(xi) + (1)]), xf);
    color = starfield_color_mul1(color, ((starfield_random01()) * ((((float)(xi)) / (STARFIELD_StarColorCount)))) * (alpha));
    #line 163
    return color;
}

#line 51
void starfield_push_star(starfield_Starfield (*starfield), starfield_Star (*star)) {
    starfield_buf_push((void (**))(&(starfield->stars)), (char *)(star), sizeof(starfield_Star));
}

#line 54 "C:\\code\\starfield\\starfield\\math.ion"
int32_t starfield_maxi(int32_t a, int32_t b) {
    return (((a) > (b)) ? a : b);
}

#line 46 "C:\\code\\starfield\\starfield\\stars.ion"
int64_t starfield_starfield_len(starfield_Starfield (*starfield)) {
    starfield_BufHeader (*h) = starfield_buf_header(starfield->stars);
    return (h ? (h->len) / (sizeof(starfield_Star)) : 0);
}

#line 191 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Tex starfield_make_tex(noir_int2 size) {
    assert(starfield_is_power_2(size.x));
    assert((size.x) == (size.y));
    #line 195
    void (*pixels) = starfield_xcalloc(((size.x) * (size.y)) * (4), sizeof(starfield_Color));
    return (starfield_Tex){.size = size, .lod_levels = 1, .pixels = pixels};
}

#line 65 "C:\\code\\starfield\\starfield\\image.ion"
starfield_PixelIter starfield_pixel_iter_begin_tex(starfield_Tex (*tex), starfield_Rect rect) {
    #line 67
    #line 68
    return starfield_pixel_iter_begin((starfield_Image *)(tex), rect);
}

#line 261 "C:\\code\\starfield\\starfield\\math.ion"
int starfield_random_poisson(float L) {
    int result = -(1);
    float p = 1.f;
    do {
        p *= starfield_random01();
        (result)++;
    } while ((p) > (L));
    return result;
}

#line 348 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Color starfield_tex_lookup(starfield_Tex (*tex), noir_float2 pos) {
    #line 351
    return starfield_image_sample_linear_edge(&((starfield_Image){tex->pixels, tex->size}), pos, STARFIELD_Edge_Wrap);
}

#line 36 "C:\\code\\starfield\\noir\\noir.ion"
bool noir_check_init(void) {
    if (!(noir_app.init)) {
        noir_app.error = "Not initialized";
        return false;
    }
    return true;
}

#line 148
void noir_update_events(void) {
    for (int key = 0; (key) < (NOIR_NUM_KEYS); (key)++) {
        noir_reset_digital_button_events(&(noir_app.keys[key]));
    }
    #line 153
    noir_reset_digital_button_events(&(noir_app.mouse.left_button));
    noir_reset_digital_button_events(&(noir_app.mouse.middle_button));
    noir_reset_digital_button_events(&(noir_app.mouse.right_button));
    #line 157
    char (*text_ptr) = noir_app.text;
    char (*text_end) = ((noir_app.text) + (sizeof(noir_app.text))) - (1);
    #line 160
    noir_app.num_events = 0;
    #line 162
    SDL_Event event = {0};
    while (SDL_PollEvent(&(event))) {
        switch (event.type) {
        case SDL_MOUSEMOTION: {
            noir_int2 pos = {event.motion.x, event.motion.y};
            noir_int2 delta_pos = {event.motion.xrel, event.motion.yrel};
            noir_push_event(NOIR_EVENT_MOUSE_MOVE, (noir_EventData){.mouse_move = {.pos = pos, .delta_pos = delta_pos}});
            break;
        }
        case SDL_MOUSEBUTTONDOWN:
        case SDL_MOUSEBUTTONUP: {
            #line 171
            noir_MouseButton button = {0};
            if ((event.button.button) == (SDL_BUTTON_LEFT)) {
                noir_update_digital_button(&(noir_app.mouse.left_button), (event.button.state) == (SDL_PRESSED));
                button = NOIR_MOUSE_BUTTON_LEFT;
            } else if ((event.button.button) == (SDL_BUTTON_MIDDLE)) {
                noir_update_digital_button(&(noir_app.mouse.middle_button), (event.button.state) == (SDL_PRESSED));
                button = NOIR_MOUSE_BUTTON_MIDDLE;
            } else if ((event.button.button) == (SDL_BUTTON_RIGHT)) {
                noir_update_digital_button(&(noir_app.mouse.right_button), (event.button.state) == (SDL_PRESSED));
                button = NOIR_MOUSE_BUTTON_RIGHT;
            }
            if (button) {
                noir_EventKind kind = ((event.type) == (SDL_MOUSEBUTTONDOWN) ? NOIR_EVENT_MOUSE_BUTTON_DOWN : NOIR_EVENT_MOUSE_BUTTON_UP);
                noir_push_event(kind, (noir_EventData){.mouse_button = {.button = button, .pos = {event.button.x, event.button.y}}});
            }
            break;
        }
        case SDL_KEYDOWN:
        case SDL_KEYUP: {
            #line 188
            int key = noir_sdl_scancode_to_noir_key[event.key.keysym.scancode];
            if (key) {
                if (!(event.key.repeat)) {
                    noir_update_digital_button(&(noir_app.keys[key]), (event.key.state) == (SDL_PRESSED));
                    noir_update_combination_keys();
                }
                noir_EventKind kind = ((event.type) == (SDL_KEYDOWN) ? NOIR_EVENT_KEY_DOWN : NOIR_EVENT_KEY_UP);
                noir_push_event(kind, (noir_EventData){.key = {.key = key, .repeat = event.key.repeat}});
            }
            break;
        }
        case SDL_TEXTINPUT: {
            #line 198
            char (*str) = event.text.text;
            while (*(str)) {
                if ((text_ptr) == (text_end)) {
                    noir_app.error = "Text buffer overflow";
                    break;
                }
                *((text_ptr)++) = *((str)++);
            }
            break;
        }
        case SDL_QUIT: {
            #line 207
            noir_app.quit = true;
            break;
        }
        }
    }
    #line 211
    *(text_ptr) = 0;
}

void noir_update_window(void) {
    if ((noir_app.window.fullscreen) != (noir_app.window.synced_fullscreen)) {
        if ((SDL_SetWindowFullscreen(noir_app.window.sdl, (noir_app.window.fullscreen ? SDL_WINDOW_FULLSCREEN_DESKTOP : 0))) < (0)) {
            noir_sdl_error("SDL_SetWindowFullscreen");
        }
        noir_app.window.synced_fullscreen = noir_app.window.fullscreen;
    }
    #line 222
    if (((noir_app.window.title) != (noir_app.window.synced_title)) && ((strcmp(noir_app.window.title, noir_app.window.synced_title)) != (0))) {
        SDL_SetWindowTitle(noir_app.window.sdl, noir_app.window.title);
        strncpy(noir_app.window.synced_title, noir_app.window.title, sizeof(noir_app.window.synced_title));
        noir_app.window.title = noir_app.window.synced_title;
    }
    #line 228
    if (!(noir_int2_eq(noir_app.window.pos, noir_app.window.synced_pos))) {
        SDL_SetWindowPosition(noir_app.window.sdl, noir_app.window.pos.x, noir_app.window.pos.y);
    }
    SDL_GetWindowPosition(noir_app.window.sdl, &(noir_app.window.pos.x), &(noir_app.window.pos.y));
    noir_app.window.moved = ((noir_app.num_updates) == (0)) || (!(noir_int2_eq(noir_app.window.pos, noir_app.window.synced_pos)));
    noir_app.window.synced_pos = noir_app.window.pos;
    #line 235
    if (!(noir_int2_eq(noir_app.window.size, noir_app.window.synced_size))) {
        SDL_SetWindowSize(noir_app.window.sdl, noir_app.window.size.x, noir_app.window.size.y);
    }
    SDL_GetWindowSize(noir_app.window.sdl, &(noir_app.window.size.x), &(noir_app.window.size.y));
    noir_app.window.resized = ((noir_app.num_updates) == (0)) || (!(noir_int2_eq(noir_app.window.size, noir_app.window.synced_size)));
    noir_app.window.synced_size = noir_app.window.size;
    #line 242
    if ((noir_app.window.resizable) != (noir_app.window.synced_resizable)) {
        SDL_SetWindowResizable(noir_app.window.sdl, noir_app.window.resizable);
    }
    noir_app.window.synced_resizable = noir_app.window.resizable;
    #line 247
    if ((noir_app.window.hidden) != (noir_app.window.synced_hidden)) {
        if (noir_app.window.hidden) {
            SDL_HideWindow(noir_app.window.sdl);
        } else {
            SDL_ShowWindow(noir_app.window.sdl);
        }
    }
    noir_app.window.synced_hidden = noir_app.window.hidden;
}

#line 288
void noir_update_time(void) {
    ullong ticks = (SDL_GetPerformanceCounter()) - (noir_app.time.sdl_start_ticks);
    noir_app.time.delta_ticks = (int)((ticks) - (noir_app.time.ticks));
    noir_app.time.ticks = ticks;
    #line 293
    noir_app.time.nsecs = (((((noir_app.time.ticks) * (1000)) * (1000)) * (1000))) / (noir_app.time.ticks_per_sec);
    noir_app.time.usecs = ((((noir_app.time.ticks) * (1000)) * (1000))) / (noir_app.time.ticks_per_sec);
    noir_app.time.msecs = (((noir_app.time.ticks) * (1000))) / (noir_app.time.ticks_per_sec);
    noir_app.time.secs = ((double)(noir_app.time.ticks)) / ((double)(noir_app.time.ticks_per_sec));
    #line 298
    noir_app.time.delta_nsecs = (int)((((((noir_app.time.delta_ticks) * (1000)) * (1000)) * (1000))) / (noir_app.time.ticks_per_sec));
    noir_app.time.delta_usecs = (int)(((((noir_app.time.delta_ticks) * (1000)) * (1000))) / (noir_app.time.ticks_per_sec));
    noir_app.time.delta_msecs = (int)((((noir_app.time.delta_ticks) * (1000))) / (noir_app.time.ticks_per_sec));
    noir_app.time.delta_secs = ((float)(noir_app.time.delta_ticks)) / ((float)(noir_app.time.ticks_per_sec));
}

void noir_update_mouse(void) {
    if ((noir_app.mouse.capture) != (noir_app.mouse.synced_capture)) {
        if ((SDL_CaptureMouse(noir_app.mouse.capture)) < (0)) {
            noir_sdl_error("SDL_CaptureMouse");
        }
    }
    noir_app.mouse.synced_capture = noir_app.mouse.capture;
    #line 312
    if (((noir_app.mouse.pos.x) != (noir_app.mouse.synced_pos.x)) || ((noir_app.mouse.pos.y) != (noir_app.mouse.synced_pos.y))) {
        SDL_WarpMouseInWindow(NULL, noir_app.mouse.pos.x, noir_app.mouse.pos.y);
    }
    uint state = SDL_GetMouseState(&(noir_app.mouse.pos.x), &(noir_app.mouse.pos.y));
    noir_app.mouse.delta_pos = (noir_int2){(noir_app.mouse.pos.x) - (noir_app.mouse.synced_pos.x), (noir_app.mouse.pos.y) - (noir_app.mouse.synced_pos.y)};
    noir_app.mouse.moved = (noir_app.mouse.delta_pos.x) || (noir_app.mouse.delta_pos.y);
    noir_app.mouse.synced_pos = noir_app.mouse.pos;
    #line 320
    if (((noir_app.mouse.global_pos.x) != (noir_app.mouse.synced_global_pos.x)) || ((noir_app.mouse.global_pos.y) != (noir_app.mouse.synced_global_pos.y))) {
        SDL_WarpMouseGlobal(noir_app.mouse.global_pos.x, noir_app.mouse.global_pos.y);
    }
    SDL_GetGlobalMouseState(&(noir_app.mouse.global_pos.x), &(noir_app.mouse.global_pos.y));
    noir_app.mouse.global_delta_pos = (noir_int2){(noir_app.mouse.global_pos.x) - (noir_app.mouse.synced_global_pos.x), (noir_app.mouse.global_pos.y) - (noir_app.mouse.synced_global_pos.y)};
    noir_app.mouse.global_moved = (noir_app.mouse.global_delta_pos.x) || (noir_app.mouse.global_delta_pos.y);
    noir_app.mouse.synced_global_pos = noir_app.mouse.global_pos;
}

#line 267
void noir_update_clipboard(void) {
    #line 269
    if ((noir_app.clipboard) != (noir_app.synced_clipboard)) {
        SDL_free(noir_app.synced_clipboard);
        noir_app.synced_clipboard = SDL_strdup(noir_app.clipboard);
        noir_app.clipboard = noir_app.synced_clipboard;
        SDL_SetClipboardText(noir_app.clipboard);
    } else {
        if (SDL_HasClipboardText()) {
            char (*new_clipboard) = SDL_GetClipboardText();
            if ((!(noir_app.synced_clipboard)) || ((strcmp(new_clipboard, noir_app.synced_clipboard)) != (0))) {
                SDL_free(noir_app.synced_clipboard);
                noir_app.synced_clipboard = new_clipboard;
                noir_app.clipboard = noir_app.synced_clipboard;
            } else {
                SDL_free(new_clipboard);
            }
        }
    }
}

#line 257
void noir_update_audio(void) {
    if (!(noir_app.audio.valid)) {
        return;
    }
    if ((noir_app.audio.synced_play) != (noir_app.audio.play)) {
        SDL_PauseAudioDevice(noir_app.audio.sdl_device, !(noir_app.audio.play));
    }
    noir_app.audio.synced_play = noir_app.audio.play;
}

#line 577 "C:\\code\\starfield\\starfield\\stars.ion"
void starfield_draw_stars(starfield_Image (*dest), starfield_Starfield (*starfield)) {
    for (llong i = (starfield_starfield_len(starfield)) - (1); (i) >= (0); (i)--) {
        starfield_Star (*star) = (starfield->stars) + (i);
        starfield_draw_tex_multiply(dest, star->rect, &(star->type->tex), star->color);
    }
}

#line 530
void starfield_draw_nebula(starfield_Image (*img), starfield_Tex (*density)) {
    starfield_Image nebula = starfield_make_image(starfield_div2is(img->size, 2));
    #line 533
    starfield_Color c = starfield_random_random_star_color((noir_float2){0});
    #line 535
    for (uint s = starfield_random_state; starfield_with_random_state(s, starfield_more_entropy);) {
        starfield_more_entropy = starfield_random();
    }
    #line 539
    float turbulence = starfield_randomr(0.f, 0.2f);
    float turbulence2 = starfield_randomr(turbulence, 0.4f);
    float detail = (starfield_random_normal()) * (2);
    float negative_space = (((starfield_random()) & (1)) ? 1.f : -(1.f));
    float sparsity = starfield_randomr(0.4f, 1);
    float fade = starfield_random01();
    #line 546
    for (starfield_PixelIter it = starfield_pixel_iter_begin(&(nebula), (starfield_Rect){0}); starfield_pixel_iter_next(&(it));) {
        float d = (starfield_tex_lookup(density, it.pos).r) * (.1f);
        float p = ((starfield_perlin_octaves(it.abs_pos, 5)) * (.5f)) + (.5f);
        float warp_scale = ((d) * (turbulence)) * (((1) - (p)));
        float w1 = starfield_worley_octaves(starfield_random_warp(starfield_add2s(it.abs_pos, 1.6939f), 4, warp_scale), (5) + ((p) * (0.2f))).x;
        float w2 = (2) * (starfield_worley_octaves(starfield_random_warp(starfield_add2s(it.abs_pos, 3.32849f), (6) + ((5) * (turbulence2)), warp_scale), (7) + ((p) * (0.2f))).x);
        float w3 = (4) * (starfield_worley_octaves(starfield_random_warp(starfield_add2s(it.abs_pos, 8.22643f), (10) + ((10) * (turbulence2)), warp_scale), ((10) + (detail)) + ((p) * (0.2f))).y);
        float w = (((w1) * (w1)) * (w2)) * (w3);
        *(it.pixel) = starfield_color_mul1(c, starfield_clamp_low(0, starfield_remap(0, 1, 0, w, p)));
    }
    #line 557
    starfield_Image blur_nebula = starfield_image_copy(&(nebula));
    starfield_blur(&(blur_nebula), 16);
    #line 560
    for (starfield_PixelIter it = starfield_pixel_iter_begin(img, (starfield_Rect){0}); starfield_pixel_iter_next(&(it));) {
        float d = (starfield_tex_lookup(density, it.pos).r) * (0.05f);
        starfield_Color n = starfield_image_sample_linear(&(nebula), it.pos);
        starfield_Color nb = starfield_image_sample_linear(&(blur_nebula), it.pos);
        starfield_Color nnb = starfield_color_mul(n, nb);
        starfield_Color x = starfield_color_lerp(nb, nnb, sparsity);
        starfield_Color y = starfield_color_add(n, x);
        starfield_Color z = starfield_color_pow(y, (2) + ((d) * (negative_space)));
        z.a *= .333f;
        #line 570
        *(it.pixel) = starfield_color_blend(*(it.pixel), starfield_color_premultiply(z));
    }
    #line 573
    starfield_free_image(&(nebula));
    starfield_free_image(&(blur_nebula));
}

#line 342 "C:\\code\\starfield\\starfield\\filter.ion"
bool starfield_is_identity_transform(noir_float2 transform) {
    return ((((transform.x) == (0)) || ((transform.x) == (1)))) && (((transform.y) == (0)));
}

#line 362
noir_float2 starfield_bounds_after_transform(noir_float2 transform, float aspect_ratio) {
    starfield_Rect r = starfield_all_rect();
    r.rot = transform;
    noir_float2 a = starfield_rect_absolute(r, aspect_ratio, (noir_float2){0, 0});
    noir_float2 b = starfield_rect_absolute(r, aspect_ratio, (noir_float2){1, 0});
    noir_float2 c = starfield_rect_absolute(r, aspect_ratio, (noir_float2){0, 1});
    noir_float2 d = starfield_rect_absolute(r, aspect_ratio, (noir_float2){1, 1});
    #line 370
    float x_min = starfield_min4(a.x, b.x, c.x, d.x);
    float x_max = starfield_max4(a.x, b.x, c.x, d.x);
    float y_min = starfield_min4(a.y, b.y, c.y, d.y);
    float y_max = starfield_max4(a.y, b.y, c.y, d.y);
    #line 375
    float x = (x_max) - (x_min);
    float y = (y_max) - (y_min);
    #line 378
    return (noir_float2){x, y};
}

#line 187 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_magnitude2(noir_float2 v) {
    float vv = starfield_dot2(v, v);
    return (vv ? sqrtf(vv) : 0);
}

#line 397 "C:\\code\\starfield\\starfield\\filter.ion"
void starfield_apply_diffraction(starfield_Image (*dest), starfield_Color alpha, float radius, noir_float2 transform, noir_float2 transformed_bounds, float (*scratch), float (*transpose_scratch)) {
    noir_float2 rotation = {1, 0};
    #line 400
    starfield_Image (*img) = dest;
    if ((starfield_is_identity_transform(transform)) == (false)) {
        float m = starfield_magnitude2(transform);
        rotation = (noir_float2){(transform.x) / (m), (transform.y) / (m)};
        starfield_Image transformed_img = starfield_transform_image(dest, rotation, transformed_bounds);
        img = &(transformed_img);
    }
    #line 408
    float inner_radius = (radius) * (0.25f);
    float outer_radius = (radius) / (1.4f);
    float inner_radius_transpose = (inner_radius) * ((((float)(img->size.y)) / (img->size.x)));
    float outer_radius_transpose = (outer_radius) * ((((float)(img->size.y)) / (img->size.x)));
    #line 413
    int pixel_count = (img->size.x) * (img->size.y);
    float (*planes) = starfield_planarise(img);
    #line 416
    float (*red) = planes;
    float (*green) = (planes) + (pixel_count);
    float (*blue) = (planes) + ((2) * (pixel_count));
    starfield_diffract_plane(red, scratch, transpose_scratch, img->size, inner_radius, outer_radius);
    starfield_diffract_plane(green, scratch, transpose_scratch, img->size, (inner_radius) * (1.1f), (outer_radius) * (1.2f));
    starfield_diffract_plane(blue, scratch, transpose_scratch, img->size, (inner_radius) * (1.2f), (outer_radius) * (1.4f));
    #line 423
    if ((img->pixels) == (dest->pixels)) {
        for (int i = 0; (i) < (pixel_count); (i)++) {
            dest->pixels[i].r += (alpha.r) * (red[i]);
            dest->pixels[i].g += (alpha.g) * (green[i]);
            dest->pixels[i].b += (alpha.b) * (blue[i]);
        }
    } else {
        noir_float2 scale = {(1.f) / (transformed_bounds.x), (1.f) / (transformed_bounds.y)};
        scale.x /= (((float)(dest->size.x)) / (dest->size.y));
        noir_float2 offset = {0.5f, 0.5f};
        for (starfield_PixelIter it = starfield_pixel_iter_begin(dest, (starfield_Rect){0}); starfield_pixel_iter_next(&(it));) {
            noir_float2 pos = starfield_add2(starfield_mul2(starfield_rotate(starfield_sub2(it.pos, offset), rotation), scale), (noir_float2){0.5f, 0.5f});
            #line 436
            if (starfield_inside_normal_rect(pos)) {
                it.pixel->r += (alpha.r) * (starfield_sample_linear(red, img->size, pos, STARFIELD_Edge_Wrap));
                it.pixel->g += (alpha.g) * (starfield_sample_linear(green, img->size, pos, STARFIELD_Edge_Wrap));
                it.pixel->b += (alpha.b) * (starfield_sample_linear(blue, img->size, pos, STARFIELD_Edge_Wrap));
            }
        }
        starfield_free_image(img);
    }
    #line 445
    free(planes);
}

#line 434 "C:\\code\\starfield\\starfield\\starfield.ion"
noir_float2 starfield_rotate(noir_float2 v, noir_float2 cos_sin_theta) {
    if ((cos_sin_theta.x) || (cos_sin_theta.y)) {
        return (noir_float2){((v.x) * (cos_sin_theta.x)) - ((v.y) * (cos_sin_theta.y)), ((v.x) * (cos_sin_theta.y)) + ((v.y) * (cos_sin_theta.x))};
    }
    #line 442
    return v;
}

#line 94 "C:\\code\\starfield\\starfield\\math.ion"
noir_float2 starfield_mul2s(noir_float2 a, float s) {
    return (noir_float2){(a.x) * (s), (a.y) * (s)};
}

#line 17 "C:\\code\\starfield\\starfield\\filter.ion"
void starfield_blur_row(starfield_Color (*dest), starfield_Color (*src), int len, float radius) {
    assert((radius) > (0));
    int r = starfield_clampi(0, (len) - (2), (int)(radius));
    float a = (radius) - (r);
    #line 22
    float r_rcp = (1.f) / ((((2.f) * (radius)) + (1.f)));
    starfield_Color c_acc = starfield_color_mul1(starfield_blur_fetch(src, len, (r) + (1)), a);
    #line 25
    for (int i = 0; (i) <= (r); (i)++) {
        c_acc = starfield_color_add(c_acc, starfield_blur_fetch(src, len, i));
    }
    #line 29
    for (int i = 0; (i) < ((r) + (1)); (i)++) {
        dest[i] = starfield_color_mul1(c_acc, r_rcp);
        c_acc = starfield_color_add(c_acc, starfield_color_lerp(starfield_blur_fetch(src, len, ((i) + (r)) + (1)), starfield_blur_fetch(src, len, ((i) + (r)) + (2)), a));
        c_acc = starfield_color_sub(c_acc, starfield_color_lerp(starfield_blur_fetch(src, len, (i) - (r)), starfield_blur_fetch(src, len, ((i) - (r)) - (1)), a));
    }
    for (int i = (r) + (1); (i) < (((len) - (r)) - (2)); (i)++) {
        dest[i] = starfield_color_mul1(c_acc, r_rcp);
        c_acc = starfield_color_add(c_acc, starfield_color_lerp(src[((i) + (r)) + (1)], src[((i) + (r)) + (2)], a));
        c_acc = starfield_color_sub(c_acc, starfield_color_lerp(src[(i) - (r)], src[((i) - (r)) - (1)], a));
    }
    for (int i = ((len) - (r)) - (2); (i) < (len); (i)++) {
        dest[i] = starfield_color_mul1(c_acc, r_rcp);
        c_acc = starfield_color_add(c_acc, starfield_color_lerp(starfield_blur_fetch(src, len, ((i) + (r)) + (1)), starfield_blur_fetch(src, len, ((i) + (r)) + (2)), a));
        c_acc = starfield_color_sub(c_acc, starfield_color_lerp(starfield_blur_fetch(src, len, (i) - (r)), starfield_blur_fetch(src, len, ((i) - (r)) - (1)), a));
    }
}

void starfield_blur_transpose(starfield_Color (*dest), int dest_width, starfield_Color (*src), int src_width) {
    for (int i = 0; (i) < (src_width); (i)++) {
        *(dest) = *(src);
        dest += dest_width;
        (src)++;
    }
}

#line 15 "C:\\code\\starfield\\starfield\\image.ion"
void starfield_free_image(starfield_Image (*img)) {
    assert(img->pixels);
    free(img->pixels);
    img->pixels = 0;
    img->size = (noir_int2){0, 0};
}

#line 283 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_lerp(float a, float b, float t) {
    return ((((1) - (t))) * (a)) + ((t) * (b));
}

#line 26 "C:\\code\\starfield\\starfield\\image.ion"
starfield_Image starfield_image_copy(starfield_Image (*img)) {
    assert(img->pixels);
    starfield_Image result = starfield_make_image(img->size);
    memcpy(result.pixels, img->pixels, ((img->size.x) * (img->size.y)) * (sizeof(starfield_Color)));
    return result;
}

#line 743 "C:\\code\\starfield\\starfield\\starfield.ion"
float starfield_luminance(starfield_Color c) {
    #line 745
    return (((0.2126f) * (c.r)) + ((0.7152f) * (c.g))) + ((0.0722f) * (c.b));
}

#line 587
float starfield_srgb(float val) {
    assert(!(isnan(val)));
    val = starfield_clamp01(val);
    #line 591
    if ((val) <= (0.0031308f)) {
        return (val) * (12.92f);
    }
    #line 595
    return ((1.055f) * (powf(val, (1.f) / (2.4f)))) - (0.055f);
}

#line 5 "C:\\code\\starfield\\starfield\\filter.ion"
void starfield_blur_asym(starfield_Image (*img), noir_float2 radius) {
    starfield_blur_to_asym(img, img, radius);
}

#line 86 "C:\\code\\starfield\\starfield\\math.ion"
noir_float2 starfield_int2_to_float2(noir_int2 x) {
    return (noir_float2){(float)(x.x), (float)(x.y)};
}

#line 583 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Color starfield_color_premultiply(starfield_Color c) {
    return starfield_color_mul1_rgb(c, c.a);
}

#line 287 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_remap(float a, float b, float m, float n, float x) {
    return starfield_lerp(m, n, (((x) - (a))) / (((b) - (a))));
}

#line 748 "C:\\code\\starfield\\starfield\\starfield.ion"
float starfield_uncharted2duiker(float x) {
    #line 750
    float a = 0.1f;
    float b = 0.15f;
    float c = 0.1f;
    float d = 0.2f;
    float e = 0.02f;
    float f = 0.3f;
    return ((((((x) * ((((a) * (x)) + ((c) * (b))))) + ((d) * (e)))) / ((((x) * ((((a) * (x)) + (b)))) + ((d) * (f)))))) - ((e) / (f));
}

#line 598
starfield_RGB8 starfield_color_to_rgb8(starfield_Color color) {
    starfield_RGB8 result = {.r = (uint8_t)((starfield_srgb(color.r)) * (255.f)), .g = (uint8_t)((starfield_srgb(color.g)) * (255.f)), .b = (uint8_t)((starfield_srgb(color.b)) * (255.f))};
    #line 604
    return result;
}

#line 410
void starfield_draw_outline(starfield_Color (*buffer), noir_int2 size, starfield_Color color) {
    for (int i = 0; (i) < (size.x); (i)++) {
        buffer[i] = color;
        buffer[(i) + ((((size.x) - (1))) * (size.y))] = color;
    }
    #line 416
    for (int i = 0; (i) < (size.y); (i)++) {
        buffer[(i) * (size.x)] = color;
        buffer[((i) * (size.x)) + (((size.x) - (1)))] = color;
    }
}

#line 266 "C:\\code\\starfield\\starfield\\stars.ion"
void starfield_draw_simple_star(starfield_Color (*buffer), noir_int2 size) {
    size.x -= 1;
    size.y -= 1;
    buffer[((size.x) / (2)) + (((size.x) * (size.y)) / (2))] = (starfield_Color){64, 64, 64, 1};
}

#line 372
void starfield_draw_lensed_quasar(starfield_Tex (*tex)) {
    noir_int2 center = starfield_div2is(tex->size, 2);
    #line 375
    int width = (tex->size.x) / ((int)((2) + ((starfield_random01()) * (8))));
    int height = (tex->size.y) / ((int)((2) + ((starfield_random01()) * (8))));
    #line 378
    noir_int2 top = starfield_sub2i(center, (noir_int2){width, 0});
    noir_int2 right = starfield_add2i(center, (noir_int2){0, height});
    noir_int2 bottom = starfield_add2i(center, (noir_int2){width, 0});
    noir_int2 left = starfield_sub2i(center, (noir_int2){0, height});
    #line 383
    starfield_Color lum = {16.f, 16.f, 16.f, 1.f};
    #line 385
    tex->pixels[(center.x) + ((tex->size.x) * (center.y))] = (starfield_Color){lum.r, lum.g, (lum.b) * (1.25f), lum.a};
    starfield_blur(&((starfield_Image){tex->pixels, tex->size}), 2);
    #line 388
    starfield_tex_poke(tex, top, lum);
    starfield_tex_poke(tex, right, lum);
    starfield_tex_poke(tex, bottom, lum);
    starfield_tex_poke(tex, left, lum);
    #line 393
    starfield_blur(&((starfield_Image){tex->pixels, tex->size}), .25f);
    starfield_blur(&((starfield_Image){tex->pixels, tex->size}), .25f);
}

#line 46 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_clamp01(float x) {
    return starfield_clamp(0, 1, x);
}

#line 272 "C:\\code\\starfield\\starfield\\stars.ion"
void starfield_draw_galaxy(starfield_Tex (*tex), int arms) {
    starfield_Image (*tex_img) = &((starfield_Image){tex->pixels, tex->size});
    #line 275
    float arm_width = (0.0125f) + ((starfield_randomr(-(1), 1)) * (0.01f));
    arms = starfield_clampi(2, 6, arms);
    float brightness = starfield_randomr(0.8f, 1.1f);
    float arm_definition = starfield_randomr((1.f) / (arms), 1);
    float bar = (starfield_randomr(.05f, .25f)) / (arms);
    float spiral_expansion = starfield_randomr(1, 1.3f);
    float tilt = starfield_random01();
    #line 283
    starfield_Starfield (*s) = &((starfield_Starfield){0});
    starfield_buf_fit((void (**))(&(s->stars)), (sizeof(starfield_Star)) * (30000));
    for (int i = 0; (i) < (30000); (i)++) {
        float w = arm_width;
        float x = (starfield_random_normal()) / (8);
        float y = (starfield_random_normal()) / (8);
        float rot = 0.f;
        #line 291
        if ((arms) > (0)) {
            x = (starfield_mod((x) + ((w) / (2)), w)) - ((w) / (2));
            #line 294
            if ((arms) & (1)) {
                y = fabsf(y);
            }
            #line 298
            rot = (starfield_randomn(0, arms)) / ((float)(arms));
            rot += ((starfield_random_normal()) * (0.05f)) * (((1) - (arm_definition)));
            #line 301
            x += (((starfield_random_normal()) / (256))) * (((1) - (arm_definition)));
            y += (((starfield_random_normal()) / (256))) * (((1) - (arm_definition)));
        }
        #line 306
        float mag = (starfield_magnitude2((noir_float2){x, y})) + ((0.05f) * (starfield_random_normal()));
        noir_float2 xy = starfield_mul2s(starfield_normalise2((noir_float2){x, y}), mag);
        float expand = expf((spiral_expansion) * (((1) + (mag))));
        float spin = (((((starfield_random_normal()) / (12)) + (1))) * (mag)) * (expand);
        #line 312
        spin *= starfield_smoothedge(bar, starfield_randomr(.1f, .3f), mag);
        #line 315
        spin += rot;
        #line 317
        noir_float2 spiral_str = starfield_mul2s((noir_float2){cosf((spin) * (STARFIELD_Tau)), sinf((spin) * (STARFIELD_Tau))}, (.5f) * (expand));
        noir_float2 pos = starfield_rotate(xy, spiral_str);
        #line 321
        float z = (((starfield_random_normal()) * (0.01f))) * (((1) - (tilt)));
        pos.y *= tilt;
        pos.y += (.25f) * (z);
        #line 326
        float size = (((((((STARFIELD_Sqrt2) - (starfield_magnitude2(pos))) + (z)) + ((y) * (tilt)))) * (starfield_random01())) * (0.016f)) * (brightness);
        #line 328
        starfield_push_star(s, &((starfield_Star){.rect = {.pos = starfield_add2s(starfield_mul2s(pos, .51f), 0.5f), .size = {size, size}, .rot = starfield_random_unit_vector2()}, .type = (starfield_star_types) + (1), .color = starfield_random_star_color((starfield_star_types) + (1), 0.66f)}));
    }
    #line 339
    starfield_draw_stars(tex_img, s);
    #line 341
    starfield_Image bloom_less = starfield_image_copy(tex_img);
    starfield_Image bloom_more = starfield_image_copy(tex_img);
    starfield_blur(&(bloom_less), 3);
    starfield_blur(&(bloom_more), (20) * (tilt));
    float bloom_amount = starfield_randomr(.4f, .8f);
    #line 347
    starfield_Color blue = starfield_star_colors[(STARFIELD_StarColorCount) - (3)];
    starfield_Color yellow = starfield_star_colors[5];
    #line 350
    for (starfield_PixelIter it = starfield_pixel_iter_begin_tex(tex, (starfield_Rect){0}); starfield_pixel_iter_next(&(it));) {
        noir_float2 rel = starfield_sub2s(it.pos, 0.5f);
        float th = starfield_magnitude2(rel);
        starfield_Color bl = starfield_image_sample_linear(&(bloom_less), it.pos);
        starfield_Color bm = starfield_image_sample_linear(&(bloom_more), it.pos);
        #line 356
        float center_yellow_str = powf((1) - (starfield_clamp01((th) / (((STARFIELD_Sqrt2) / (4))))), 6);
        starfield_Color arm_color = starfield_color_lerp(blue, yellow, center_yellow_str);
        starfield_Color inter_color = starfield_color_mul1_rgb(starfield_color_mul(arm_color, bm), ((starfield_perlin_octaves(it.pos, 40)) * (0.5f)) + (1));
        starfield_Color matter = starfield_color_mul(bl, arm_color);
        matter = starfield_color_mul1_rgb(matter, ((starfield_perlin_octaves(it.pos, 32)) * (0.5f)) + (1));
        matter = starfield_color_add(inter_color, matter);
        matter.a = (starfield_clamp01(starfield_max(matter.r, starfield_max(matter.g, matter.b)))) * (bloom_amount);
        #line 364
        *(it.pixel) = starfield_color_blend(*(it.pixel), starfield_color_premultiply(matter));
    }
    #line 367
    starfield_free_starfield(s);
    starfield_free_image(&(bloom_less));
    starfield_free_image(&(bloom_more));
}

#line 289 "C:\\code\\starfield\\starfield\\starfield.ion"
void starfield_tex_preprocess(starfield_Tex (*tex)) {
    starfield_tex_premultiply_alpha(tex);
    starfield_generate_lods(tex);
}

#line 88
void starfield_buf_free(void (*buf)) {
    starfield_BufHeader (*h) = starfield_buf_header(buf);
    if (h) {
        free(h);
    }
}

#line 203
void starfield_free_tex(starfield_Tex (*tex)) {
    assert(tex->pixels);
    free(tex->pixels);
    tex->pixels = 0;
    tex->size = (noir_int2){0, 0};
}

#line 205 "C:\\code\\starfield\\starfield\\image.ion"
starfield_Color starfield_image_sample_linear_edge(starfield_Image (*img), noir_float2 pos, starfield_EdgeBehavior edge_behavior) {
    if ((img->pixels) == (0)) {
        return (starfield_Color){0};
    }
    #line 210
    assert(img->size.x);
    assert(img->size.y);
    #line 213
    noir_float2 scaled = {(((pos.x) * (img->size.x)) - (0.5f)) + (STARFIELD_PixelEps), (((pos.y) * (img->size.y)) - (0.5f)) + (STARFIELD_PixelEps)};
    #line 218
    if ((edge_behavior) == (STARFIELD_Edge_Clamp)) {
        scaled.x = starfield_clamp(0, (float)(img->size.x), scaled.x);
        scaled.y = starfield_clamp(0, (float)(img->size.y), scaled.y);
    } else if ((edge_behavior) == (STARFIELD_Edge_Wrap)) {
        scaled.x = starfield_wrap(scaled.x, (float)(img->size.x));
        scaled.y = starfield_wrap(scaled.y, (float)(img->size.y));
    } else {
        assert(0);
    }
    #line 228
    noir_int2 vi = starfield_float2_to_int2(scaled);
    noir_float2 vf = starfield_sub2(scaled, starfield_int2_to_float2(vi));
    #line 231
    noir_int2 a = vi;
    noir_int2 b = starfield_add2i(a, (noir_int2){1, 0});
    noir_int2 c = starfield_add2i(a, (noir_int2){0, 1});
    noir_int2 d = starfield_add2i(a, (noir_int2){1, 1});
    #line 236
    assert(((a.x) >= (0)) && ((a.x) < (img->size.x)));
    assert(((a.y) >= (0)) && ((a.y) < (img->size.y)));
    #line 239
    if ((edge_behavior) == (STARFIELD_Edge_Clamp)) {
        b.x = starfield_clampi_high((img->size.x) - (1), b.x);
        c.x = starfield_clampi_high((img->size.x) - (1), c.x);
        d.x = starfield_clampi_high((img->size.x) - (1), d.x);
        b.y = starfield_clampi_high((img->size.y) - (1), b.y);
        c.y = starfield_clampi_high((img->size.y) - (1), c.y);
        d.y = starfield_clampi_high((img->size.y) - (1), d.y);
    } else if ((edge_behavior) == (STARFIELD_Edge_Wrap)) {
        b.x = (((b.x) == (img->size.x)) ? 0 : b.x);
        c.x = (((c.x) == (img->size.x)) ? 0 : c.x);
        d.x = (((d.x) == (img->size.x)) ? 0 : d.x);
        b.y = (((b.y) == (img->size.y)) ? 0 : b.y);
        c.y = (((c.y) == (img->size.y)) ? 0 : c.y);
        d.y = (((d.y) == (img->size.y)) ? 0 : d.y);
    }
    #line 255
    starfield_Color A = img->pixels[(a.x) + ((a.y) * (img->size.x))];
    starfield_Color B = img->pixels[(b.x) + ((b.y) * (img->size.x))];
    starfield_Color C = img->pixels[(c.x) + ((c.y) * (img->size.x))];
    starfield_Color D = img->pixels[(d.x) + ((d.y) * (img->size.x))];
    #line 260
    starfield_Color AB = starfield_color_lerp(A, B, vf.x);
    starfield_Color CD = starfield_color_lerp(C, D, vf.x);
    starfield_Color ABCD = starfield_color_lerp(AB, CD, vf.y);
    #line 264
    starfield_assert_correct_signs(A.r, B.r, C.r, D.r, AB.r, CD.r, ABCD.r);
    starfield_assert_correct_signs(A.g, B.g, C.g, D.g, AB.g, CD.g, ABCD.g);
    starfield_assert_correct_signs(A.b, B.b, C.b, D.b, AB.b, CD.b, ABCD.b);
    starfield_assert_correct_signs(A.a, B.a, C.a, D.a, AB.a, CD.a, ABCD.a);
    #line 269
    return ABCD;
}

char (*noir_default_window_title) = "Noir";
noir_int2 noir_default_window_size = {800, 600};
int (noir_noir_key_to_sdl_scancode[NOIR_NUM_KEYS]) = {[NOIR_KEY_RETURN] = SDL_SCANCODE_RETURN, [NOIR_KEY_SPACE] = SDL_SCANCODE_SPACE, [NOIR_KEY_BACKSPACE] = SDL_SCANCODE_BACKSPACE, [NOIR_KEY_TAB] = SDL_SCANCODE_TAB, [NOIR_KEY_ESCAPE] = SDL_SCANCODE_ESCAPE, [NOIR_KEY_LEFT] = SDL_SCANCODE_LEFT, [NOIR_KEY_RIGHT] = SDL_SCANCODE_RIGHT, [NOIR_KEY_UP] = SDL_SCANCODE_UP, [NOIR_KEY_DOWN] = SDL_SCANCODE_DOWN, [NOIR_KEY_LSHIFT] = SDL_SCANCODE_LSHIFT, [NOIR_KEY_RSHIFT] = SDL_SCANCODE_RSHIFT, [NOIR_KEY_LCTRL] = SDL_SCANCODE_LCTRL, [NOIR_KEY_RCTRL] = SDL_SCANCODE_RCTRL, [NOIR_KEY_LALT] = SDL_SCANCODE_LALT, [NOIR_KEY_RALT] = SDL_SCANCODE_RALT};
int (noir_sdl_scancode_to_noir_key[SDL_NUM_SCANCODES]);
#line 49 "C:\\code\\starfield\\noir\\noir.ion"
void noir_sdl_audio_callback(void (*userdata), uint8_t (*buf), int len) {
    if (noir_app.audio.callback) {
        noir_app.audio.callback(noir_app.audio.context, (noir_float2 *)(buf), (len) / (sizeof(noir_float2)));
    }
}

#line 90 "C:\\code\\starfield\\starfield\\math.ion"
noir_float2 starfield_mul2(noir_float2 a, noir_float2 b) {
    return (noir_float2){(a.x) * (b.x), (a.y) * (b.y)};
}

#line 98
noir_float2 starfield_div2(noir_float2 a, noir_float2 b) {
    return (noir_float2){(a.x) / (b.x), (a.y) / (b.y)};
}

#line 397 "C:\\code\\starfield\\starfield\\stars.ion"
void starfield_init_star_type(starfield_StarType (*type)) {
    starfield_init_star_type_really(type, false);
}

starfield_Color (starfield_star_colors[15]) = {{(0xff) / (255.f), (0x1) / (255.f), 0.f, 1.f}, {(0xff) / (255.f), (0xf) / (255.f), 0.f, 1.f}, {(0xff) / (255.f), (0x29) / (255.f), (0x3) / (255.f), 1.f}, {(0xff) / (255.f), (0x49) / (255.f), (0xd) / (255.f), 1.f}, {(0xff) / (255.f), (0x6a) / (255.f), (0x1f) / (255.f), 1.f}, {(0xff) / (255.f), (0xa6) / (255.f), (0x59) / (255.f), 1.f}, {(0xff) / (255.f), (0xc0) / (255.f), (0x7f) / (255.f), 1.f}, {(0xff) / (255.f), (0xd8) / (255.f), (0xa8) / (255.f), 1.f}, {(0xff) / (255.f), (0xed) / (255.f), (0xd3) / (255.f), 1.f}, {1, 1, 1, 1.f}, {(0xdb) / (255.f), (0xe9) / (255.f), (0xff) / (255.f), 1.f}, {(0x8e) / (255.f), (0xb4) / (255.f), (0xff) / (255.f), 1.f}, {(0x6e) / (255.f), (0x9a) / (255.f), (0xff) / (255.f), 1.f}, {(0x45) / (255.f), (0x73) / (255.f), (0xff) / (255.f), 1.f}, {(0x2f) / (255.f), (0x5c) / (255.f), (0xff) / (255.f), 1.f}};
#line 552 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Color starfield_color_mul1(starfield_Color a, float b) {
    return (starfield_Color){(a.r) * (b), (a.g) * (b), (a.b) * (b), (a.a) * (b)};
}

#line 118
void (*starfield_buf_push(void (*(*buf)), void (*data), ptrdiff_t len)) {
    starfield_buf_fit(buf, len);
    assert(*(buf));
    starfield_BufHeader (*header) = starfield_buf_header(*(buf));
    uchar (*slot) = (header->data) + (header->len);
    memcpy(slot, data, len);
    header->len += len;
    assert((header->len) <= (header->cap));
    return slot;
}

#line 76
starfield_BufHeader (*starfield_buf_header(void (*buf))) {
    return (buf ? (starfield_BufHeader *)((((uint8_t *)(buf)) - (offsetof(starfield_BufHeader, data)))) : 0);
}

#line 6 "C:\\code\\starfield\\starfield\\math.ion"
bool starfield_is_power_2(int32_t x) {
    return ((x) != (0)) && (((x) & (((x) - (1)))) == (0));
}

#line 376 "C:\\code\\starfield\\noir\\noir.ion"
void noir_reset_digital_button_events(noir_DigitalButton (*button)) {
    button->pressed = 0;
    button->released = 0;
}

#line 576
void noir_push_event(noir_EventKind kind, noir_EventData data) {
    if ((noir_app.num_events) == (NOIR_MAX_EVENTS)) {
        noir_app.error = "Event queue overflow";
        return;
    }
    noir_app.events[(noir_app.num_events)++] = (noir_Event){.kind = kind, .data = data};
}

#line 381
void noir_update_digital_button(noir_DigitalButton (*button), bool down) {
    bool was_down = button->down;
    button->down = down;
    button->pressed += (down) && (!(was_down));
    button->released += (!(down)) && (was_down);
}

#line 570
void noir_update_combination_keys(void) {
    noir_update_combination_key(NOIR_KEY_SHIFT, NOIR_KEY_LSHIFT, NOIR_KEY_RSHIFT);
    noir_update_combination_key(NOIR_KEY_CTRL, NOIR_KEY_LCTRL, NOIR_KEY_RCTRL);
    noir_update_combination_key(NOIR_KEY_ALT, NOIR_KEY_LALT, NOIR_KEY_RALT);
}

#line 8
bool noir_int2_eq(noir_int2 a, noir_int2 b) {
    return ((a.x) == (b.x)) && ((a.y) == (b.y));
}

#line 397 "C:\\code\\starfield\\starfield\\starfield.ion"
void starfield_draw_tex_multiply(starfield_Image (*dest), starfield_Rect target, starfield_Tex (*tex), starfield_Color multiply_color) {
    noir_float2 lod = starfield_compute_lod_level(dest->size, target.size, tex->size);
    for (starfield_PixelIter it = starfield_pixel_iter_begin(dest, target); starfield_pixel_iter_next(&(it));) {
        starfield_Color rgba = starfield_tex_lookup_lod(tex, it.pos, lod);
        if (rgba.a) {
            rgba = starfield_color_mul1_rgb(rgba, (1.f) / (rgba.a));
            rgba = starfield_color_mul(rgba, multiply_color);
            rgba = starfield_color_premultiply(rgba);
        }
        *(it.pixel) = starfield_color_blend(*(it.pixel), rgba);
    }
}

#line 134 "C:\\code\\starfield\\starfield\\math.ion"
noir_int2 starfield_div2is(noir_int2 a, int s) {
    return (noir_int2){(a.x) / (s), (a.y) / (s)};
}

#line 135 "C:\\code\\starfield\\starfield\\stars.ion"
starfield_Color starfield_random_random_star_color(noir_float2 range) {
    float min = range.x;
    float max = (range.y ? range.y : (STARFIELD_StarColorCount) - (1));
    #line 139
    int offset = 8;
    float r = (offset) + ((starfield_random_normal()) * (((STARFIELD_StarColorCount) / (7))));
    float x = starfield_clamp(min, max, r);
    #line 143
    int xi = (int)(x);
    float xf = (x) - (xi);
    starfield_Color color = starfield_color_lerp((starfield_star_colors[xi]), (starfield_star_colors[(xi) + (1)]), xf);
    return color;
}

#line 231 "C:\\code\\starfield\\starfield\\math.ion"
bool starfield_with_random_state(size_t old_state, size_t new_state) {
    if ((old_state) == (starfield_random_state)) {
        starfield_random_state = (uint32_t)(new_state);
        return true;
    }
    #line 237
    starfield_random_state = (uint32_t)(old_state);
    return false;
}

#line 672 "C:\\code\\starfield\\starfield\\starfield.ion"
float starfield_perlin_octaves(noir_float2 p, float grid_size) {
    return (((((((1) / (((((.5f) + (.25f)) + (.125f)) + (.0625f))))) * (starfield_perlin(p, grid_size))) * (0.5f)) + ((starfield_perlin(starfield_mul2s(p, 1.5f), grid_size)) * (0.25f))) + ((starfield_perlin(starfield_mul2s(p, 3.f), grid_size)) * (0.125f))) + ((starfield_perlin(starfield_mul2s(p, 4.2f), grid_size)) * (0.0625f));
}

#line 733
noir_float2 starfield_worley_octaves(noir_float2 p, float grid_size) {
    float s = ((1) / (((((.5f) + (.25f)) + (.125f)) + (.0625f))));
    noir_float2 a = starfield_mul2s(starfield_worley(p, grid_size), 0.5f);
    noir_float2 b = starfield_mul2s(starfield_worley(starfield_mul2s(p, 1.5f), grid_size), 0.25f);
    noir_float2 c = starfield_mul2s(starfield_worley(starfield_mul2s(p, 3.f), grid_size), 0.125f);
    noir_float2 d = starfield_mul2s(starfield_worley(starfield_mul2s(p, 4.2f), grid_size), 0.0625f);
    #line 740
    return starfield_mul2s(starfield_add2(a, starfield_add2(b, starfield_add2(c, d))), s);
}

#line 516 "C:\\code\\starfield\\starfield\\stars.ion"
noir_float2 starfield_random_warp(noir_float2 p, float freq, float scale) {
    float a = 1.f;
    float b = (a) * (.5f);
    float c = (b) * (.5f);
    float d = (c) * (.5f);
    #line 522
    noir_float2 q = starfield_mul2s(p, freq);
    return starfield_add2(p, starfield_mul2s(starfield_add2(starfield_random_warp_one(q, a), starfield_add2(starfield_random_warp_one(starfield_mul2s(q, 2), b), starfield_add2(starfield_random_warp_one(starfield_mul2s(q, 4), c), starfield_random_warp_one(starfield_mul2s(q, 8), d)))), (scale) / (((((a) + (b)) + (c)) + (d)))));
}

#line 110 "C:\\code\\starfield\\starfield\\math.ion"
noir_float2 starfield_add2s(noir_float2 a, float s) {
    return (noir_float2){(a.x) + (s), (a.y) + (s)};
}

#line 489 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Color starfield_color_pow(starfield_Color a, float p) {
    return (starfield_Color){powf(a.r, p), powf(a.g, p), powf(a.b, p), powf(a.a, p)};
}

#line 570
starfield_Color starfield_color_blend(starfield_Color dest, starfield_Color src) {
    return (starfield_Color){(src.r) + (((dest.r) * (((1.f) - (src.a))))), (src.g) + (((dest.g) * (((1.f) - (src.a))))), (src.b) + (((dest.b) * (((1.f) - (src.a))))), (src.a) + (((dest.a) * (((1.f) - (src.a)))))};
}

#line 168 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_dot2(noir_float2 a, noir_float2 b) {
    return ((a.x) * (b.x)) + ((a.y) * (b.y));
}

#line 346 "C:\\code\\starfield\\starfield\\filter.ion"
starfield_Image starfield_transform_image(starfield_Image (*src), noir_float2 rotate, noir_float2 scale) {
    noir_int2 size = {(int)((scale.x) * (src->size.x)), (int)((scale.y) * (src->size.y))};
    starfield_Image result = starfield_make_image(size);
    #line 350
    starfield_Rect inverse_rect = starfield_all_rect();
    inverse_rect.size = (noir_float2){(1.f) / (scale.x), (1.f) / (scale.y)};
    inverse_rect.size.x /= (((float)(src->size.x)) / (src->size.y));
    inverse_rect.rot = (noir_float2){rotate.x, -(rotate.y)};
    #line 355
    for (starfield_PixelIter it = starfield_pixel_iter_begin(&(result), inverse_rect); starfield_pixel_iter_next(&(it));) {
        *(it.pixel) = starfield_image_sample_linear(src, it.pos);
    }
    #line 359
    return result;
}

#line 329
float (*starfield_planarise(starfield_Image (*img))) {
    int pixel_count = (img->size.x) * (img->size.y);
    float (*pixels) = starfield_xcalloc(pixel_count, (sizeof(float)) * (3));
    #line 333
    for (int i = 0; (i) < (pixel_count); (i)++) {
        pixels[i] = img->pixels[i].r;
        pixels[(i) + (pixel_count)] = img->pixels[i].g;
        pixels[(i) + ((2) * (pixel_count))] = img->pixels[i].b;
    }
    #line 339
    return pixels;
}

#line 297
void starfield_diffract_plane(float (*plane), float (*scratch), float (*transpose_scratch), noir_int2 size, float inner_radius, float outer_radius) {
    for (int y = 0; (y) < (size.y); (y)++) {
        float (*plane_row) = (plane) + ((y) * (size.x));
        #line 301
        if (transpose_scratch) {
            for (int i = 0; (i) < (size.x); (i)++) {
                transpose_scratch[(y) + ((i) * (size.y))] = plane_row[i];
            }
        }
        #line 307
        for (int i = 0; (i) < (STARFIELD_diffraction_iters); (i)++) {
            starfield_diffract_row(scratch, plane_row, size.x, inner_radius, outer_radius);
            starfield_diffract_row(plane_row, scratch, size.x, inner_radius, outer_radius);
        }
    }
    #line 313
    if (transpose_scratch) {
        for (int x = 0; (x) < (size.x); (x)++) {
            float (*transpose_row) = (transpose_scratch) + ((x) * (size.y));
            #line 317
            for (int i = 0; (i) < (STARFIELD_diffraction_iters); (i)++) {
                starfield_diffract_row(scratch, transpose_row, size.y, inner_radius, outer_radius);
                starfield_diffract_row(transpose_row, scratch, size.y, inner_radius, outer_radius);
            }
            #line 322
            for (int i = 0; (i) < (size.y); (i)++) {
                plane[(x) + ((i) * (size.x))] += transpose_row[i];
            }
        }
    }
}

#line 272 "C:\\code\\starfield\\starfield\\image.ion"
float starfield_sample_linear(float (*pixels), noir_int2 size, noir_float2 pos, starfield_EdgeBehavior edge_behavior) {
    if ((pixels) == (0)) {
        return (float){0};
    }
    #line 277
    assert(size.x);
    assert(size.y);
    #line 280
    noir_float2 scaled = {((pos.x) * (size.x)) - (0.5f), ((pos.y) * (size.y)) - (0.5f)};
    #line 285
    if ((edge_behavior) == (STARFIELD_Edge_Clamp)) {
        scaled.x = starfield_clamp(0, (float)(size.x), scaled.x);
        scaled.y = starfield_clamp(0, (float)(size.y), scaled.y);
    } else if ((edge_behavior) == (STARFIELD_Edge_Wrap)) {
        scaled.x = starfield_wrap(scaled.x, (float)(size.x));
        scaled.y = starfield_wrap(scaled.y, (float)(size.y));
    } else {
        assert(0);
    }
    #line 295
    noir_int2 vi = starfield_float2_to_int2(scaled);
    noir_float2 vf = starfield_sub2(scaled, starfield_int2_to_float2(vi));
    #line 298
    noir_int2 a = vi;
    noir_int2 b = starfield_add2i(a, (noir_int2){1, 0});
    noir_int2 c = starfield_add2i(a, (noir_int2){0, 1});
    noir_int2 d = starfield_add2i(a, (noir_int2){1, 1});
    #line 303
    assert(((a.x) >= (0)) && ((a.x) < (size.x)));
    assert(((a.y) >= (0)) && ((a.y) < (size.y)));
    #line 306
    if ((edge_behavior) == (STARFIELD_Edge_Clamp)) {
        b.x = starfield_clampi_high((size.x) - (1), b.x);
        c.x = starfield_clampi_high((size.x) - (1), c.x);
        d.x = starfield_clampi_high((size.x) - (1), d.x);
        b.y = starfield_clampi_high((size.y) - (1), b.y);
        c.y = starfield_clampi_high((size.y) - (1), c.y);
        d.y = starfield_clampi_high((size.y) - (1), d.y);
    } else if ((edge_behavior) == (STARFIELD_Edge_Wrap)) {
        b.x = (((b.x) == (size.x)) ? 0 : b.x);
        c.x = (((c.x) == (size.x)) ? 0 : c.x);
        d.x = (((d.x) == (size.x)) ? 0 : d.x);
        b.y = (((b.y) == (size.y)) ? 0 : b.y);
        c.y = (((c.y) == (size.y)) ? 0 : c.y);
        d.y = (((d.y) == (size.y)) ? 0 : d.y);
    }
    #line 322
    float A = pixels[(a.x) + ((a.y) * (size.x))];
    float B = pixels[(b.x) + ((b.y) * (size.x))];
    float C = pixels[(c.x) + ((c.y) * (size.x))];
    float D = pixels[(d.x) + ((d.y) * (size.x))];
    #line 327
    float AB = starfield_lerp(A, B, vf.x);
    float CD = starfield_lerp(C, D, vf.x);
    float ABCD = starfield_lerp(AB, CD, vf.y);
    #line 331
    starfield_assert_correct_signs(A, B, C, D, AB, CD, ABCD);
    #line 333
    return ABCD;
}

#line 32 "C:\\code\\starfield\\starfield\\math.ion"
int32_t starfield_clampi(int32_t a, int32_t b, int32_t x) {
    return (((x) < (a)) ? a : (((x) > (b)) ? b : x));
}

#line 9 "C:\\code\\starfield\\starfield\\filter.ion"
starfield_Color starfield_blur_fetch(starfield_Color (*row), int len, int i) {
    if (((i) < (0)) || ((i) >= (len))) {
        return (starfield_Color){0};
    }
    #line 14
    return row[i];
}

#line 507 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Color starfield_color_sub(starfield_Color a, starfield_Color b) {
    return (starfield_Color){(a.r) - (b.r), (a.g) - (b.g), (a.b) - (b.b), (a.a) - (b.a)};
}

#line 120 "C:\\code\\starfield\\starfield\\filter.ion"
void starfield_blur_to_asym(starfield_Image (*dest), starfield_Image (*src), noir_float2 radius) {
    assert((dest->size.x) == (src->size.x));
    assert((dest->size.y) == (src->size.y));
    #line 124
    starfield_Image temp = starfield_make_image((noir_int2){src->size.y, src->size.x});
    starfield_Color (*scratch) = starfield_xcalloc(starfield_maxi(src->size.x, src->size.y), sizeof(starfield_Color));
    #line 127
    for (int i = 0; (i) < (3); (i)++) {
        for (int y = 0; (y) < (src->size.y); (y)++) {
            starfield_Color (*row_src) = (src->pixels) + ((y) * (src->size.x));
            starfield_Color (*row_dest) = (dest->pixels) + ((y) * (dest->size.x));
            starfield_blur_row(scratch, row_src, src->size.x, radius.x);
            starfield_blur_transpose((temp.pixels) + (y), temp.size.x, scratch, src->size.x);
        }
        #line 135
        for (int y = 0; (y) < (temp.size.y); (y)++) {
            starfield_Color (*row) = (temp.pixels) + ((y) * (temp.size.x));
            starfield_blur_row(scratch, row, temp.size.x, radius.y);
            starfield_blur_transpose((dest->pixels) + (y), dest->size.x, scratch, temp.size.x);
        }
    }
    #line 142
    starfield_free_image(&(temp));
    free(scratch);
}

#line 561 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Color starfield_color_mul1_rgb(starfield_Color a, float b) {
    return (starfield_Color){(a.r) * (b), (a.g) * (b), (a.b) * (b), a.a};
}

#line 146 "C:\\code\\starfield\\starfield\\math.ion"
noir_int2 starfield_sub2i(noir_int2 a, noir_int2 b) {
    return (noir_int2){(a.x) - (b.x), (a.y) - (b.y)};
}

#line 138
noir_int2 starfield_add2i(noir_int2 a, noir_int2 b) {
    return (noir_int2){(a.x) + (b.x), (a.y) + (b.y)};
}

#line 294 "C:\\code\\starfield\\starfield\\starfield.ion"
void starfield_tex_poke(starfield_Tex (*tex), noir_int2 pos, starfield_Color val) {
    assert((tex->lod_levels) == (1));
    #line 298
    pos.x = starfield_clampi(0, (tex->size.x) - (1), pos.x);
    pos.y = starfield_clampi(0, (tex->size.y) - (1), pos.y);
    int idx = (pos.x) + ((tex->size.x) * (pos.y));
    #line 302
    tex->pixels[idx] = val;
}

#line 95
void starfield_buf_fit(void (*(*buf)), ptrdiff_t len) {
    assert(buf);
    assert(len);
    #line 99
    if (!(*(buf))) {
        llong initial_cap = ((len) > (1024) ? len : (len) * (32));
        ullong alloc_size = (initial_cap) + (sizeof(starfield_BufHeader));
        starfield_BufHeader (*header) = starfield_xmalloc(alloc_size);
        header->cap = initial_cap;
        header->len = 0;
        *(buf) = header->data;
    }
    #line 108
    starfield_BufHeader (*header) = starfield_buf_header(*(buf));
    #line 110
    if (((header->len) + (len)) > (header->cap)) {
        llong new_cap = (header->cap) * (2);
        header = starfield_xrealloc(header, ((len) * (new_cap)) + (sizeof(starfield_BufHeader)));
        header->cap = new_cap;
        *(buf) = header->data;
    }
}

#line 298 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_mod(float x, float m) {
    if ((x) < (0)) {
        x = (m) - (x);
    }
    float r = (x) / (m);
    float q = (r) - ((int)(r));
    float p = (q) * (m);
    return p;
}

#line 212
noir_float2 starfield_normalise2(noir_float2 v) {
    float m = starfield_magnitude2(v);
    return (noir_float2){(v.x) / (m), (v.y) / (m)};
}

#line 337
float starfield_smoothedge(float center, float width, float x) {
    return starfield_smoothstep(((((1.f) / (width))) * (((x) - (center)))) + (0.5f));
}

#line 118
noir_float2 starfield_sub2s(noir_float2 a, float s) {
    return (noir_float2){(a.x) - (s), (a.y) - (s)};
}

#line 283 "C:\\code\\starfield\\starfield\\starfield.ion"
void starfield_tex_premultiply_alpha(starfield_Tex (*tex)) {
    for (starfield_PixelIter it = starfield_pixel_iter_begin_tex(tex, (starfield_Rect){0}); starfield_pixel_iter_next(&(it));) {
        *(it.pixel) = starfield_color_premultiply(*(it.pixel));
    }
}

#line 225
void starfield_generate_lods(starfield_Tex (*tex)) {
    assert((tex->size.x) == (tex->size.y));
    tex->lod_levels = starfield_maxi(1, (starfield_log2i(tex->size.x)) + (1));
    #line 229
    starfield_Image blurry = starfield_image_copy(&((starfield_Image){tex->pixels, tex->size}));
    #line 231
    noir_int2 size = tex->size;
    for (int i = 0; (i) < (tex->lod_levels); (i)++) {
        assert((size.x) >= (1));
        assert((size.y) >= (1));
        #line 236
        if ((i) > (0)) {
            #line 238
            starfield_Image prev_lod = starfield_tex_get_lod(tex, (noir_int2){(i) - (1), (i) - (1)});
            starfield_Image blurry_subrect = {blurry.pixels, prev_lod.size};
            #line 241
            starfield_blur_to(&(blurry_subrect), &(prev_lod), .707f);
            starfield_Image lod = starfield_tex_get_lod(tex, (noir_int2){i, i});
            #line 244
            for (starfield_PixelIter it = starfield_pixel_iter_begin(&(lod), (starfield_Rect){0}); starfield_pixel_iter_next(&(it));) {
                assert(starfield_is_zero(it.pixel, sizeof(starfield_Color)));
                *(it.pixel) = starfield_image_sample_linear(&(blurry_subrect), it.pos);
                assert(!(starfield_color_nan(*(it.pixel))));
            }
        }
        #line 251
        for (int j = (i) + (1); (j) < (tex->lod_levels); (j)++) {
            starfield_Image prev_lod = starfield_tex_get_lod(tex, (noir_int2){(j) - (1), i});
            starfield_Image blurry_subrect = {blurry.pixels, prev_lod.size};
            #line 255
            starfield_blur_horizontal(&(blurry_subrect), &(prev_lod), 0.5f);
            starfield_Image lod = starfield_tex_get_lod(tex, (noir_int2){j, i});
            #line 258
            for (starfield_PixelIter it = starfield_pixel_iter_begin(&(lod), (starfield_Rect){0}); starfield_pixel_iter_next(&(it));) {
                assert(starfield_is_zero(it.pixel, sizeof(starfield_Color)));
                *(it.pixel) = starfield_image_sample_linear(&(blurry_subrect), it.pos);
                assert(!(starfield_color_nan(*(it.pixel))));
            }
        }
        #line 265
        for (int k = (i) + (1); (k) < (tex->lod_levels); (k)++) {
            starfield_Image prev_lod = starfield_tex_get_lod(tex, (noir_int2){i, (k) - (1)});
            starfield_Image blurry_subrect = {blurry.pixels, prev_lod.size};
            #line 269
            starfield_blur_vertical(&(blurry_subrect), &(prev_lod), 0.5f);
            starfield_Image lod = starfield_tex_get_lod(tex, (noir_int2){i, k});
            #line 272
            for (starfield_PixelIter it = starfield_pixel_iter_begin(&(lod), (starfield_Rect){0}); starfield_pixel_iter_next(&(it));) {
                assert(starfield_is_zero(it.pixel, sizeof(starfield_Color)));
                *(it.pixel) = starfield_image_sample_linear(&(blurry_subrect), it.pos);
                assert(!(starfield_color_nan(*(it.pixel))));
            }
        }
    }
    #line 280
    starfield_free_image(&(blurry));
}

#line 308 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_wrap(float x, float m) {
    float y = starfield_mod(x, (m) * (2));
    if ((y) > (m)) {
        y = (m) - (((y) - (m)));
    }
    return y;
}

#line 82
noir_int2 starfield_float2_to_int2(noir_float2 x) {
    return (noir_int2){(int32_t)(x.x), (int32_t)(x.y)};
}

#line 42
int starfield_clampi_high(int b, int x) {
    return starfield_mini(b, x);
}

#line 183 "C:\\code\\starfield\\starfield\\image.ion"
void starfield_assert_correct_signs(float a, float b, float c, float d, float ab, float cd, float abcd) {
    if (((a) > (0)) && ((b) > (0))) {
        assert((ab) >= (0));
        if (((c) > (0)) && ((d) > (0))) {
            assert((cd) >= (0));
            assert((abcd) >= (0));
        }
    }
    if (((c) > (0)) && ((d) > (0))) {
        assert((cd) >= (0));
    }
}

#line 566 "C:\\code\\starfield\\noir\\noir.ion"
void noir_update_combination_key(int dest_key, int src_key1, int src_key2) {
    noir_update_digital_button(&(noir_app.keys[dest_key]), (noir_app.keys[src_key1].down) || (noir_app.keys[src_key2].down));
}

#line 217 "C:\\code\\starfield\\starfield\\starfield.ion"
noir_float2 starfield_compute_lod_level(noir_int2 dest_size, noir_float2 target_size, noir_int2 src_size) {
    #line 219
    float step_x = fabsf((src_size.x) / (((dest_size.x) * (target_size.x))));
    float step_y = fabsf((src_size.y) / (((dest_size.y) * (target_size.y))));
    return (noir_float2){starfield_max(0, log2f(step_x)), starfield_max(0, log2f(step_y))};
}

#line 354
starfield_Color starfield_tex_lookup_lod(starfield_Tex (*tex), noir_float2 pos, noir_float2 lod) {
    #line 358
    starfield_Color result = {0};
    if ((lod.x) == (lod.y)) {
        noir_int2 lodi = starfield_float2_to_int2(lod);
        noir_float2 lodf = ((noir_float2){(lod.x) - (lodi.x), (lod.x) - (lodi.x)});
        starfield_Image a_lod = starfield_tex_get_lod(tex, lodi);
        starfield_Color a = starfield_image_sample_linear(&(a_lod), pos);
        if ((lodf.x) > (1e-5f)) {
            starfield_Image b_lod = starfield_tex_get_lod(tex, starfield_add2is(lodi, 1));
            starfield_Color b = starfield_image_sample_linear(&(b_lod), pos);
            return starfield_color_lerp(a, b, lodf.x);
        }
        #line 370
        return a;
    }
    #line 373
    noir_int2 lodi = starfield_float2_to_int2(lod);
    noir_float2 lodf = ((noir_float2){(lod.x) - (lodi.x), (lod.y) - (lodi.y)});
    starfield_Image a_lod = starfield_tex_get_lod(tex, lodi);
    starfield_Image b_lod = starfield_tex_get_lod(tex, starfield_add2i(lodi, (noir_int2){1, 0}));
    starfield_Image c_lod = starfield_tex_get_lod(tex, starfield_add2i(lodi, (noir_int2){0, 1}));
    starfield_Image d_lod = starfield_tex_get_lod(tex, starfield_add2i(lodi, (noir_int2){1, 1}));
    starfield_Color a = starfield_image_sample_linear(&(a_lod), pos);
    starfield_Color b = starfield_image_sample_linear(&(b_lod), pos);
    starfield_Color c = starfield_image_sample_linear(&(c_lod), pos);
    starfield_Color d = starfield_image_sample_linear(&(d_lod), pos);
    starfield_Color ab = starfield_color_lerp(a, b, lodf.x);
    starfield_Color cd = starfield_color_lerp(c, d, lodf.x);
    starfield_Color abcd = starfield_color_lerp(ab, cd, lodf.y);
    return abcd;
}

#line 641
float starfield_perlin(noir_float2 p, float grid_size) {
    p.x = starfield_mod((p.x) * (grid_size), grid_size);
    p.y = starfield_mod((p.y) * (grid_size), grid_size);
    #line 645
    noir_int2 a = starfield_float2_to_int2(p);
    noir_int2 b = starfield_float2_to_int2(starfield_mod2s(starfield_add2(p, (noir_float2){1, 0}), grid_size));
    noir_int2 c = starfield_float2_to_int2(starfield_mod2s(starfield_add2(p, (noir_float2){0, 1}), grid_size));
    noir_int2 d = starfield_float2_to_int2(starfield_mod2s(starfield_add2(p, (noir_float2){1, 1}), grid_size));
    #line 650
    noir_float2 A = starfield_perlin_gradient(a);
    noir_float2 B = starfield_perlin_gradient(b);
    noir_float2 C = starfield_perlin_gradient(c);
    noir_float2 D = starfield_perlin_gradient(d);
    #line 655
    noir_float2 pp = {(p.x) - ((int)(p.x)), (p.y) - ((int)(p.y))};
    #line 657
    float u00 = starfield_dot2(A, starfield_sub2(pp, (noir_float2){0, 0}));
    float u10 = starfield_dot2(B, starfield_sub2(pp, (noir_float2){1, 0}));
    float u01 = starfield_dot2(C, starfield_sub2(pp, (noir_float2){0, 1}));
    float u11 = starfield_dot2(D, starfield_sub2(pp, (noir_float2){1, 1}));
    #line 662
    float x = ((pp.x) * (pp.x)) * (((3.f) - ((2.f) * (pp.x))));
    float y = ((pp.y) * (pp.y)) * (((3.f) - ((2.f) * (pp.y))));
    #line 665
    float ab = starfield_lerp(u00, u10, x);
    float cd = starfield_lerp(u01, u11, x);
    float abcd = starfield_lerp(ab, cd, y);
    #line 669
    return abcd;
}

#line 680
noir_float2 starfield_worley(noir_float2 p01, float grid_size) {
    noir_float2 p = starfield_mul2s(p01, grid_size);
    noir_float2 pi = starfield_floor2(p);
    noir_float2 pf = starfield_sub2(p, pi);
    float alpha = 0.13533528323f;
    #line 686
    float f1 = (2) * (STARFIELD_Sqrt2);
    float f2 = f1;
    #line 690
    for (uint s = starfield_random_state; starfield_with_random_state(s, (starfield_more_entropy) + (starfield_hash_int2_u32(*((noir_int2 *)(&(pi))))));) {
        int k = starfield_random_poisson(alpha);
        #line 693
        for (int m = 0; (m) < (k); (m)++) {
            float d = starfield_distance_squared2(p, starfield_add2(pi, (noir_float2){starfield_random01(), starfield_random01()}));
            if ((d) < (f1)) {
                f2 = f1;
                f1 = d;
            } else if ((d) < (f2)) {
                f2 = d;
            }
        }
    }
    #line 704
    for (float i = -(1.f); (i) <= (1.f); i += 1.f) {
        for (float j = -(1.f); (j) <= (1.f); j += 1.f) {
            if ((i) || (j)) {
                float face_dist = starfield_magnitude_squared2((noir_float2){(i) * (((((0.5f) * (i)) + (0.5f)) - (pf.x))), (j) * (((((0.5f) * (j)) + (0.5f)) - (pf.y)))});
                if ((face_dist) < (f2)) {
                    noir_float2 p_ij = starfield_add2(pi, (noir_float2){i, j});
                    for (uint s = starfield_random_state; starfield_with_random_state(s, (starfield_more_entropy) + (starfield_hash_int2_u32(*((noir_int2 *)(&(p_ij))))));) {
                        int k = starfield_random_poisson(alpha);
                        #line 713
                        for (int m = 0; (m) < (k); (m)++) {
                            float d = starfield_distance_squared2(p, starfield_add2(p_ij, (noir_float2){starfield_random01(), starfield_random01()}));
                            if ((d) < (f1)) {
                                f2 = f1;
                                f1 = d;
                            } else if ((d) < (f2)) {
                                f2 = d;
                            }
                        }
                    }
                }
            }
        }
    }
    #line 728
    assert((f1) <= (f2));
    assert((f2) >= (0));
    return (noir_float2){sqrtf(f1), sqrtf(f2)};
}

#line 498 "C:\\code\\starfield\\starfield\\stars.ion"
noir_float2 starfield_random_warp_one(noir_float2 p, float scale) {
    noir_float2 a = starfield_perlin_gradient(starfield_float2_to_int2(starfield_add2(p, (noir_float2){0, 0})));
    noir_float2 b = starfield_perlin_gradient(starfield_float2_to_int2(starfield_add2(p, (noir_float2){1, 0})));
    noir_float2 c = starfield_perlin_gradient(starfield_float2_to_int2(starfield_add2(p, (noir_float2){0, 1})));
    noir_float2 d = starfield_perlin_gradient(starfield_float2_to_int2(starfield_add2(p, (noir_float2){1, 1})));
    #line 504
    noir_float2 r = {(p.x) - ((int)(p.x)), (p.y) - ((int)(p.y))};
    #line 506
    float x = ((r.x) * (r.x)) * (((3.f) - ((2.f) * (r.x))));
    float y = ((r.y) * (r.y)) * (((3.f) - ((2.f) * (r.y))));
    #line 509
    noir_float2 ab = starfield_lerp2(a, b, x);
    noir_float2 cd = starfield_lerp2(c, d, x);
    noir_float2 abcd = starfield_lerp2(ab, cd, y);
    #line 513
    return starfield_mul2s(abcd, scale);
}

#line 251 "C:\\code\\starfield\\starfield\\filter.ion"
void starfield_diffract_row(float (*dest), float (*src), int len, float inner_radius, float outer_radius) {
    assert((inner_radius) > (0));
    assert((outer_radius) > (inner_radius));
    #line 255
    int r = starfield_clampi(0, (len) - (2), (int)(inner_radius));
    int r2 = starfield_clampi(0, (len) - (3), (int)(outer_radius));
    float a = (inner_radius) - (r);
    float a2 = (outer_radius) - (r2);
    #line 260
    float r_rcp = (1.f) / (((2) * (((outer_radius) - (inner_radius)))));
    #line 262
    float c_sub = (starfield_diffract_fetch(src, len, (r) + (1))) * (a);
    float c_acc = (starfield_diffract_fetch(src, len, (r2) + (1))) * (a2);
    #line 265
    for (int i = 0; (i) <= (r2); (i)++) {
        if ((i) <= (r)) {
            c_sub += starfield_diffract_fetch(src, len, i);
        }
        c_acc += starfield_diffract_fetch(src, len, i);
    }
    #line 272
    for (int i = 0; (i) < ((r2) + (1)); (i)++) {
        dest[i] = (((c_acc) - (c_sub))) * (r_rcp);
        c_acc += starfield_lerp(starfield_diffract_fetch(src, len, ((i) + (r2)) + (1)), starfield_diffract_fetch(src, len, ((i) + (r2)) + (2)), a2);
        c_acc -= starfield_lerp(starfield_diffract_fetch(src, len, (i) - (r2)), starfield_diffract_fetch(src, len, ((i) - (r2)) - (1)), a2);
        c_sub += starfield_lerp(starfield_diffract_fetch(src, len, ((i) + (r)) + (1)), starfield_diffract_fetch(src, len, ((i) + (r)) + (2)), a);
        c_sub -= starfield_lerp(starfield_diffract_fetch(src, len, (i) - (r)), starfield_diffract_fetch(src, len, ((i) - (r)) - (1)), a);
    }
    for (int i = (r2) + (1); (i) < (((len) - (r2)) - (2)); (i)++) {
        dest[i] = (((c_acc) - (c_sub))) * (r_rcp);
        c_acc += starfield_lerp(src[((i) + (r2)) + (1)], src[((i) + (r2)) + (2)], a2);
        c_acc -= starfield_lerp(src[(i) - (r2)], src[((i) - (r2)) - (1)], a2);
        c_sub += starfield_lerp(src[((i) + (r)) + (1)], src[((i) + (r)) + (2)], a);
        c_sub -= starfield_lerp(src[(i) - (r)], src[((i) - (r)) - (1)], a);
    }
    for (int i = ((len) - (r2)) - (2); (i) < (len); (i)++) {
        dest[i] = (((c_acc) - (c_sub))) * (r_rcp);
        c_acc += starfield_lerp(starfield_diffract_fetch(src, len, ((i) + (r2)) + (1)), starfield_diffract_fetch(src, len, ((i) + (r2)) + (2)), a2);
        c_acc -= starfield_lerp(starfield_diffract_fetch(src, len, (i) - (r2)), starfield_diffract_fetch(src, len, ((i) - (r2)) - (1)), a2);
        c_sub += starfield_lerp(starfield_diffract_fetch(src, len, ((i) + (r)) + (1)), starfield_diffract_fetch(src, len, ((i) + (r)) + (2)), a);
        c_sub -= starfield_lerp(starfield_diffract_fetch(src, len, (i) - (r)), starfield_diffract_fetch(src, len, ((i) - (r)) - (1)), a);
    }
}

#line 36 "C:\\code\\starfield\\starfield\\starfield.ion"
void (*starfield_xmalloc(size_t size)) {
    void (*result) = malloc(size);
    if (!(result)) {
        printf("Failed to malloc");
        assert(0);
        exit(1);
    }
    memset(result, 0, size);
    return result;
}

#line 26
void (*starfield_xrealloc(void (*mem), size_t size)) {
    void (*result) = realloc(mem, size);
    if (!(result)) {
        printf("Failed to realloc");
        assert(0);
        exit(1);
    }
    return result;
}

#line 316 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_smoothstep(float x) {
    x = starfield_clamp01(x);
    return ((x) * (x)) * (((3) - ((2) * (x))));
}

#line 10
int starfield_log2i(int x) {
    return (int)(SDL_MostSignificantBitIndex32((uint32_t)(x)));
}

#line 305 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Image starfield_tex_get_lod(starfield_Tex (*tex), noir_int2 lod) {
    #line 310
    if ((lod.x) < (0)) {
        lod.x += tex->lod_levels;
    }
    #line 314
    if ((lod.y) < (0)) {
        lod.y += tex->lod_levels;
    }
    #line 318
    if (((((lod.x) < (0)) || ((lod.x) >= (tex->lod_levels))) || ((lod.y) < (0))) || ((lod.y) >= (tex->lod_levels))) {
        return (starfield_Image){0};
    }
    #line 322
    int square_level = starfield_mini(lod.x, lod.y);
    noir_int2 square_size = {(tex->size.x) >> (square_level), (tex->size.y) >> (square_level)};
    int square_area = (square_size.x) * (square_size.y);
    starfield_Image square_lod = {((tex->pixels) + (((tex->size.x) * (tex->size.y)) * (4))) - ((square_area) * (4)), square_size};
    #line 327
    noir_int2 lod_size = {(tex->size.x) >> (lod.x), (tex->size.y) >> (lod.y)};
    assert(((lod_size.x) == (square_lod.size.x)) || ((lod_size.y) == (square_lod.size.y)));
    #line 332
    int denom_bit = (abs((lod.x) - (lod.y))) - (1);
    int numer = (((1) << (denom_bit))) - (1);
    #line 335
    starfield_Color (*pixels) = square_lod.pixels;
    if ((lod.x) > (lod.y)) {
        pixels += (square_area) + (((((numer) * (square_area))) >> (denom_bit)));
        assert((pixels) < ((square_lod.pixels) + ((square_area) * (2))));
    } else if ((lod.y) > (lod.x)) {
        pixels += ((square_area) * (2)) + (((((numer) * (square_area))) >> (denom_bit)));
        assert((pixels) < ((square_lod.pixels) + ((square_area) * (4))));
    }
    #line 344
    assert((pixels) < ((tex->pixels) + (((tex->size.x) * (tex->size.y)) * (4))));
    return (starfield_Image){pixels, lod_size};
}

#line 579
bool starfield_color_nan(starfield_Color c) {
    return (((isnan(c.r)) || (isnan(c.b))) || (isnan(c.g))) || (isnan(c.a));
}

#line 54 "C:\\code\\starfield\\starfield\\filter.ion"
void starfield_blur_horizontal(starfield_Image (*dest), starfield_Image (*src), float radius) {
    assert((src->size.x) == (dest->size.x));
    assert((src->size.y) == (dest->size.y));
    starfield_Color (*scratch) = starfield_xcalloc(src->size.x, sizeof(starfield_Color));
    #line 59
    for (int y = 0; (y) < (src->size.y); (y)++) {
        starfield_Color (*row_src) = (src->pixels) + ((y) * (src->size.x));
        starfield_Color (*row_dest) = (dest->pixels) + ((y) * (dest->size.x));
        starfield_blur_row(row_dest, row_src, src->size.x, radius);
        starfield_blur_row(scratch, row_dest, src->size.x, radius);
        starfield_blur_row(row_dest, scratch, src->size.x, radius);
    }
    #line 67
    free(scratch);
}

void starfield_blur_vertical(starfield_Image (*dest), starfield_Image (*src), float radius) {
    assert((src->size.x) == (dest->size.x));
    assert((src->size.y) == (dest->size.y));
    starfield_Color (*scratch) = starfield_xcalloc((src->size.y) * (2), sizeof(starfield_Color));
    starfield_Color (*scratch_a) = scratch;
    starfield_Color (*scratch_b) = (scratch) + (src->size.y);
    #line 77
    for (int x = 0; (x) < (src->size.x); (x)++) {
        for (int i = 0; (i) < (src->size.y); (i)++) {
            scratch_a[i] = src->pixels[(x) + ((i) * (src->size.x))];
        }
        #line 82
        starfield_blur_row(scratch_b, scratch_a, src->size.y, radius);
        starfield_blur_row(scratch_a, scratch_b, src->size.y, radius);
        starfield_blur_row(scratch_b, scratch_a, src->size.y, radius);
        #line 86
        for (int i = 0; (i) < (dest->size.y); (i)++) {
            dest->pixels[(x) + ((i) * (dest->size.x))] = scratch_b[i];
        }
    }
    #line 91
    free(scratch);
}

#line 58 "C:\\code\\starfield\\starfield\\math.ion"
int32_t starfield_mini(int32_t a, int32_t b) {
    return (((a) < (b)) ? a : b);
}

#line 142
noir_int2 starfield_add2is(noir_int2 a, int s) {
    return (noir_int2){(a.x) + (s), (a.y) + (s)};
}

#line 196
noir_float2 starfield_mod2s(noir_float2 v, float m) {
    return (noir_float2){starfield_mod(v.x, m), starfield_mod(v.y, m)};
}

#line 618 "C:\\code\\starfield\\starfield\\starfield.ion"
noir_float2 starfield_perlin_gradient(noir_int2 p) {
    noir_float2 result = {0};
    #line 621
    if (false) {
        for (uint s = starfield_random_state; starfield_with_random_state(s, ((uint32_t)(starfield_more_entropy)) ^ (starfield_hash_int2_u32(p)));) {
            result = starfield_random_unit_vector2();
        }
    } else {
        if ((starfield_perlin_gradients) == (0)) {
            for (int i = 0; (i) < (STARFIELD_PerlinGradientCount); (i)++) {
                noir_float2 v = starfield_random_unit_vector2();
                starfield_buf_push((void (**))(&(starfield_perlin_gradients)), &(v), sizeof(v));
            }
        }
        #line 633
        for (uint s = starfield_random_state; starfield_with_random_state(s, ((uint32_t)(starfield_more_entropy)) ^ (starfield_hash_int2_u32(p)));) {
            result = starfield_perlin_gradients[(starfield_random()) & (((STARFIELD_PerlinGradientCount) - (1)))];
        }
    }
    #line 638
    return result;
}

#line 200 "C:\\code\\starfield\\starfield\\math.ion"
noir_float2 starfield_floor2(noir_float2 v) {
    return (noir_float2){(float)((int)(v.x)), (float)((int)(v.y))};
}

#line 165 "C:\\code\\starfield\\starfield\\starfield.ion"
uint32_t starfield_hash_int2_u32(noir_int2 p) {
    ullong h = starfield_hash_int2(p);
    return (uint32_t)((((h) >> (32))) ^ (h));
}

#line 172 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_distance_squared2(noir_float2 a, noir_float2 b) {
    noir_float2 d = starfield_sub2(a, b);
    return starfield_dot2(d, d);
}

#line 182
float starfield_magnitude_squared2(noir_float2 v) {
    float vv = starfield_dot2(v, v);
    return vv;
}

#line 291
noir_float2 starfield_lerp2(noir_float2 a, noir_float2 b, float t) {
    return (noir_float2){starfield_lerp(a.x, b.x, t), starfield_lerp(a.y, b.y, t)};
}

#line 243 "C:\\code\\starfield\\starfield\\filter.ion"
float starfield_diffract_fetch(float (*row), int len, int i) {
    if (((i) < (0)) || ((i) >= (len))) {
        return (float){0};
    }
    #line 248
    return row[i];
}

noir_float2 (*starfield_perlin_gradients) = 0;
#line 160 "C:\\code\\starfield\\starfield\\starfield.ion"
size_t starfield_hash_int2(noir_int2 p) {
    #line 162
    return (((p.x) * (1099511628211u))) ^ (((p.y) * (0xcbf29ce484222325u)));
}

// Foreign source files

static void va_arg_ptr(va_list *args, Any any) {
    switch (typeid_kind(any.type)) {
    case TYPE_BOOL:
        *(bool *)any.ptr = (bool)va_arg(*args, int);
        break;
    case TYPE_CHAR:
        *(char *)any.ptr = (char)va_arg(*args, int);
        break;
    case TYPE_UCHAR:
        *(uchar *)any.ptr = (uchar)va_arg(*args, int);
        break;
    case TYPE_SCHAR:
        *(schar *)any.ptr = (schar)va_arg(*args, int);
        break;
    case TYPE_SHORT:
        *(short *)any.ptr = (short)va_arg(*args, int);
        break;
    case TYPE_USHORT:
        *(ushort *)any.ptr = (ushort)va_arg(*args, int);
        break;
    case TYPE_INT:
        *(int *)any.ptr = va_arg(*args, int);
        break;
    case TYPE_UINT:
        *(uint *)any.ptr = va_arg(*args, uint);
        break;
    case TYPE_LONG:
        *(long *)any.ptr = va_arg(*args, long);
        break;
    case TYPE_ULONG:
        *(ulong *)any.ptr = va_arg(*args, ulong);
        break;
    case TYPE_LLONG:
        *(llong *)any.ptr = va_arg(*args, llong);
        break;
    case TYPE_ULLONG:
        *(ullong *)any.ptr = va_arg(*args, ullong);
        break;
    case TYPE_FLOAT:
        *(float *)any.ptr = (float)va_arg(*args, double);
        break;
    case TYPE_DOUBLE:
        *(double *)any.ptr = va_arg(*args, double);
        break;
    case TYPE_FUNC:
    case TYPE_PTR:
        *(void **)any.ptr = va_arg(*args, void *);
        break;
    default:
        assert(0 && "argument type not supported");
        break;
    }
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif
