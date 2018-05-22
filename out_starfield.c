// Preamble
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
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
typedef struct starfield_Starfield starfield_Starfield;
typedef struct TypeFieldInfo TypeFieldInfo;
typedef struct Any Any;
typedef struct starfield_Star starfield_Star;
typedef struct starfield_Tex starfield_Tex;
typedef struct starfield_StarType starfield_StarType;
typedef struct starfield_StarsHeader starfield_StarsHeader;

// Sorted declarations
#line 55 "C:\\code\\starfield\\starfield\\starfield.ion"
struct starfield_RGB8 {
    uint8_t b;
    #line 56
    uint8_t g;
    #line 56
    uint8_t r;
    uint8_t padding;
};

#line 827
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

#line 18 "C:\\code\\starfield\\starfield\\starfield.ion"
extern noir_int2 const (starfield_ImageSize);

#line 329 "C:\\code\\starfield\\noir\\noir.ion"
bool noir_app_init(void);

#line 616
void noir_print_and_clear_error(void);

#line 770 "C:\\code\\starfield\\starfield\\starfield.ion"
void starfield_init_perlin(void);

#line 1 "C:\\code\\starfield\\starfield\\image.ion"
struct starfield_Image {
    starfield_Color (*pixels);
    noir_int2 size;
};

#line 7
starfield_Image starfield_make_image(noir_int2 size);

#line 12 "C:\\code\\starfield\\noir\\noir.ion"
struct noir_float2 {
    float x;
    #line 13
    float y;
};

#line 335 "C:\\code\\starfield\\starfield\\starfield.ion"
struct starfield_Rect {
    noir_float2 pos;
    noir_float2 size;
    noir_float2 rot;
};

#line 48 "C:\\code\\starfield\\starfield\\image.ion"
struct starfield_PixelIter {
    starfield_Image (*image);
    noir_int2 start;
    noir_int2 end;
    starfield_Rect rect;
    noir_int2 pixel_pos;
    noir_float2 line_start;
    noir_float2 dx;
    noir_float2 dy;
    #line 58
    noir_float2 pos;
    starfield_Color (*pixel);
};

#line 68
starfield_PixelIter starfield_pixel_iter_begin(starfield_Image (*image), starfield_Rect rect);

#line 110
bool starfield_pixel_iter_next(starfield_PixelIter (*it));

#line 51 "C:\\code\\starfield\\starfield\\starfield.ion"
struct starfield_Color {
    float r;
    #line 52
    float g;
    #line 52
    float b;
    #line 52
    float a;
};

#line 193 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_random_normal(void);

#line 1 "C:\\code\\starfield\\starfield\\filter.ion"
void starfield_blur(starfield_Image (*img), float radius);

#line 330 "C:\\code\\starfield\\starfield\\starfield.ion"
struct starfield_Starfield {
    starfield_Star (*stars);
    int32_t star_count;
};

#line 504
starfield_Starfield starfield_create_starfield(char const ((*starfield)));

#line 763
double starfield_time_now(void);

#line 351 "C:\\code\\starfield\\noir\\noir.ion"
bool noir_app_update(void);

#line 32 "C:\\code\\starfield\\starfield\\image.ion"
void starfield_image_copy_to(starfield_Image (*dest), starfield_Image (*src));

#line 756 "C:\\code\\starfield\\starfield\\starfield.ion"
void starfield_draw_starfield(starfield_Image (*dest), starfield_Starfield (*starfield));

#line 297 "C:\\code\\starfield\\starfield\\filter.ion"
void starfield_diffraction(starfield_Image (*img_dest), float alpha, float radius, noir_float2 transform);

#line 173 "C:\\code\\starfield\\starfield\\math.ion"
noir_float2 starfield_random_unit_vector2(void);

#line 51 "C:\\code\\starfield\\starfield\\filter.ion"
void starfield_blur_to(starfield_Image (*dest), starfield_Image (*src), float radius);

#line 220 "C:\\code\\starfield\\starfield\\image.ion"
starfield_Color starfield_image_fetch(starfield_Image (*img), noir_int2 pos);

#line 223 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Color starfield_color_mul(starfield_Color a, starfield_Color b);

#line 196
starfield_Color starfield_color_lerp(starfield_Color a, starfield_Color b, float t);

#line 205
starfield_Color starfield_color_add(starfield_Color a, starfield_Color b);

#line 38 "C:\\code\\starfield\\starfield\\image.ion"
void starfield_image_to_rgb8(starfield_RGB8 (*dest), noir_int2 size, starfield_Image (*src));

#line 45 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_min(float a, float b);

#line 41
float starfield_max(float a, float b);

#line 341 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_StarsHeader (*starfield_stars_header(starfield_Star (*stars)));

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

#line 768 "C:\\code\\starfield\\starfield\\starfield.ion"
#define STARFIELD_perlin_gradient_count (128)

#line 769
extern noir_float2 (starfield_perlin_gradients[STARFIELD_perlin_gradient_count]);

#line 41
void (*starfield_xcalloc(size_t count, size_t size));

#line 251
bool starfield_is_zero(void const ((*buf)), size_t len);

#line 184
noir_float2 starfield_rect_absolute(starfield_Rect rect, noir_float2 rel_pos);

#line 49 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_min4(float a, float b, float c, float d);

#line 53
float starfield_max4(float a, float b, float c, float d);

#line 176 "C:\\code\\starfield\\starfield\\starfield.ion"
noir_float2 starfield_rect_relative(starfield_Rect rect, noir_float2 abs_pos);

#line 89 "C:\\code\\starfield\\starfield\\math.ion"
noir_float2 starfield_sub2(noir_float2 a, noir_float2 b);

#line 148 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Rect starfield_all_rect(void);

#line 23 "C:\\code\\starfield\\starfield\\math.ion"
int32_t starfield_clampi(int32_t a, int32_t b, int32_t x);

#line 81
noir_float2 starfield_add2(noir_float2 a, noir_float2 b);

#line 167 "C:\\code\\starfield\\starfield\\starfield.ion"
bool starfield_inside_normal_rect(noir_float2 pos);

#line 168 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_random01(void);

#line 324 "C:\\code\\starfield\\starfield\\starfield.ion"
struct starfield_Star {
    starfield_Rect rect;
    starfield_StarType (*type);
    starfield_Color color;
};

#line 386
char const ((*starfield_consume_star(char const ((*c)), starfield_Star (*star))));

#line 61
struct starfield_Tex {
    starfield_Color (*pixels);
    noir_int2 size;
    int lod_levels;
};

#line 303
struct starfield_StarType {
    int32_t id;
    noir_float2 size;
    bool nonsquare;
    starfield_Tex tex;
};

typedef int starfield_StarTypes;

#define STARFIELD_StarType_BigSpace ((starfield_StarTypes)(13))

#line 311
#define STARFIELD_StarType_Space ((starfield_StarTypes)(0))

#line 17 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_clamp(float a, float b, float x);

#line 13
float starfield_square(float x);

#line 485 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Color starfield_random_star_color(starfield_StarType (*type), float alpha);

#line 358
void starfield_push_star(starfield_Starfield (*starfield), starfield_Star star);

#line 33 "C:\\code\\starfield\\starfield\\math.ion"
int32_t starfield_maxi(int32_t a, int32_t b);

#line 382 "C:\\code\\starfield\\starfield\\starfield.ion"
int starfield_stars_len(starfield_Starfield (*starfield));

#line 67
starfield_Tex starfield_make_tex(noir_int2 size);

#line 62 "C:\\code\\starfield\\starfield\\image.ion"
starfield_PixelIter starfield_pixel_iter_begin_tex(starfield_Tex (*tex), starfield_Rect rect);

#line 182 "C:\\code\\starfield\\starfield\\math.ion"
int starfield_random_poisson(float alpha);

#line 129 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Color starfield_tex_lookup(starfield_Tex (*tex), noir_float2 pos);

#line 313
#define STARFIELD_StarTypeCount ((starfield_StarTypes)((STARFIELD_StarType_BigSpace) + (1)))

#line 316
extern starfield_StarType (starfield_star_types[STARFIELD_StarTypeCount]);

#line 79
void starfield_free_tex(starfield_Tex (*tex));

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

#line 353 "C:\\code\\starfield\\starfield\\starfield.ion"
int64_t starfield_starfield_len(starfield_Starfield (*starfield));

#line 291
void starfield_draw_tex_multiply(starfield_Image (*dest), starfield_Rect target, starfield_Tex (*tex), starfield_Color multiply_color);

#line 156
noir_float2 starfield_rotate(noir_float2 v, noir_float2 cos_sin_theta);

#line 265 "C:\\code\\starfield\\starfield\\filter.ion"
starfield_Image starfield_transform_image(starfield_Image (*src), noir_float2 transform);

#line 248
float (*starfield_planarise(starfield_Image (*img)));

#line 229
void starfield_diffract_plane(float (*plane), float (*scratch), float (*tranposed_src), noir_int2 size, float inner_radius, float outer_radius);

#line 141 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_magnitude2(noir_float2 v);

#line 65
noir_float2 starfield_mul2(noir_float2 a, noir_float2 b);

#line 178 "C:\\code\\starfield\\starfield\\image.ion"
float starfield_sample_linear(float (*pixels), noir_int2 size, noir_float2 pos);

#line 14
void starfield_free_image(starfield_Image (*img));

#line 586 "C:\\code\\starfield\\noir\\noir.ion"
#define NOIR_PI (3.141593f)

#line 1 "C:\\code\\starfield\\starfield\\math.ion"
#define STARFIELD_Pi (NOIR_PI)

#line 2
#define STARFIELD_Tau ((STARFIELD_Pi) * (2))

#line 13 "C:\\code\\starfield\\starfield\\filter.ion"
void starfield_blur_row(starfield_Color (*dest), starfield_Color (*src), int len, float radius);

#line 43
void starfield_blur_transpose(starfield_Color (*dest), int dest_width, starfield_Color (*src), int src_width);

#line 205 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_lerp(float a, float b, float t);

#line 271 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_RGB8 starfield_color_to_rgb8(starfield_Color color);

#line 318
struct starfield_StarsHeader {
    int64_t len;
    int64_t cap;
    starfield_Star (data[1]);
};

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

#line 73 "C:\\code\\starfield\\starfield\\math.ion"
noir_float2 starfield_div2(noir_float2 a, noir_float2 b);

#line 159
uint32_t starfield_random(void);

#line 166
#define STARFIELD_int_23_mask (0x7fffff)

#line 167
#define STARFIELD_int_23_reciprocal ((1.000000f) / (STARFIELD_int_23_mask))

#line 679 "C:\\code\\starfield\\starfield\\starfield.ion"
void starfield_init_star_type(starfield_StarType (*type));

#line 448
extern starfield_Color (starfield_star_colors[15]);

#line 465
#define STARFIELD_star_color_count (((sizeof(starfield_star_colors)) / (sizeof(starfield_Color))))

#line 30
void (*starfield_xmalloc(size_t size));

#line 20
void (*starfield_xrealloc(void (*mem), size_t size));

#line 5 "C:\\code\\starfield\\starfield\\math.ion"
bool starfield_is_power_2(int32_t x);

#line 141 "C:\\code\\starfield\\starfield\\image.ion"
starfield_Color starfield_image_sample_linear(starfield_Image (*img), noir_float2 pos);

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

#line 86 "C:\\code\\starfield\\starfield\\starfield.ion"
float starfield_compute_lod_level(noir_int2 dest_size, noir_float2 target_size, noir_int2 src_size);

#line 133
starfield_Color starfield_tex_lookup_lod(starfield_Tex (*tex), noir_float2 pos, float lod);

#line 241
starfield_Color starfield_blend(starfield_Color dest, starfield_Color src);

#line 261 "C:\\code\\starfield\\starfield\\filter.ion"
bool starfield_is_identity_transform(noir_float2 transform);

#line 228
#define STARFIELD_diffraction_iters (4)

#line 184
void starfield_diffract_row(float (*dest), float (*src), int len, float inner_radius, float outer_radius);

#line 127 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_dot2(noir_float2 a, noir_float2 b);

#line 57
noir_int2 starfield_float2_to_int2(noir_float2 x);

#line 105
noir_int2 starfield_add2i(noir_int2 a, noir_int2 b);

#line 133 "C:\\code\\starfield\\starfield\\image.ion"
int starfield_wrapi(int x, int m);

#line 232 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Color starfield_color_mul1(starfield_Color a, float b);

#line 5 "C:\\code\\starfield\\starfield\\filter.ion"
starfield_Color starfield_blur_fetch(starfield_Color (*row), int len, int i);

#line 214 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Color starfield_color_sub(starfield_Color a, starfield_Color b);

#line 260
float starfield_srgb(float val);

#line 158 "C:\\code\\starfield\\starfield\\math.ion"
extern uint32_t starfield_random_state;

#line 612 "C:\\code\\starfield\\starfield\\starfield.ion"
void starfield_draw_outline(starfield_Color (*buffer), noir_int2 size, starfield_Color color);

#line 606
void starfield_draw_simple_star(starfield_Color (*buffer), noir_int2 size);

#line 624
void starfield_draw_spiral_galaxy(starfield_Tex (*tex));

#line 92
void starfield_generate_lods(starfield_Tex (*tex));

#line 566 "C:\\code\\starfield\\noir\\noir.ion"
void noir_update_combination_key(int dest_key, int src_key1, int src_key2);

#line 117 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Image starfield_tex_get_lod(starfield_Tex (*tex), int lod);

#line 176 "C:\\code\\starfield\\starfield\\filter.ion"
float starfield_diffract_fetch(float (*row), int len, int i);

#line 29 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_clamp01(float x);

#line 477 "C:\\code\\starfield\\starfield\\starfield.ion"
float starfield_wrap(float x, float m);

#line 69 "C:\\code\\starfield\\starfield\\math.ion"
noir_float2 starfield_mul2s(noir_float2 a, float s);

#line 3
#define STARFIELD_Sqrt2 (1.414214f)

#line 85
noir_float2 starfield_add2s(noir_float2 a, float s);

#line 25 "C:\\code\\starfield\\starfield\\image.ion"
starfield_Image starfield_image_copy(starfield_Image (*img));

#line 93 "C:\\code\\starfield\\starfield\\math.ion"
noir_float2 starfield_sub2s(noir_float2 a, float s);

#line 819 "C:\\code\\starfield\\starfield\\starfield.ion"
float starfield_perlin_octaves(noir_float2 p, int grid);

#line 345
void starfield_free_starfield(starfield_Starfield (*starfield));

#line 9 "C:\\code\\starfield\\starfield\\math.ion"
int starfield_log2i(int x);

#line 215 "C:\\code\\starfield\\starfield\\image.ion"
starfield_Color starfield_image_sample_nearest(starfield_Image (*img), noir_float2 pos);

#line 467 "C:\\code\\starfield\\starfield\\starfield.ion"
float starfield_mod(float x, float m);

#line 786
float starfield_perlin(noir_float2 p, int gradients_per_side);

#line 149 "C:\\code\\starfield\\starfield\\math.ion"
noir_float2 starfield_mod2s(noir_float2 v, float m);

#line 776 "C:\\code\\starfield\\starfield\\starfield.ion"
int64_t starfield_hash(noir_int2 p);

// Typeinfo
#define TYPEID0(index, kind) ((ullong)(index) | ((ullong)(kind) << 24))
#define TYPEID(index, kind, ...) ((ullong)(index) | ((ullong)sizeof(__VA_ARGS__) << 32) | ((ullong)(kind) << 24))

const TypeInfo *typeinfo_table[642] = {
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
    [38] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_App), .align = alignof(noir_App), .name = "noir_App", .num_fields = 17, .fields = (TypeFieldInfo[]) {
        {"init", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_App, init)},
        {"quit", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_App, quit)},
        {"num_updates", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_App, num_updates)},
        {"error", .type = TYPEID(22, TYPE_PTR, char const (*)), .offset = offsetof(noir_App, error)},
        {"error_buf", .type = TYPEID(39, TYPE_ARRAY, char [256]), .offset = offsetof(noir_App, error_buf)},
        {"events", .type = TYPEID(48, TYPE_ARRAY, noir_Event [256]), .offset = offsetof(noir_App, events)},
        {"num_events", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_App, num_events)},
        {"platform", .type = TYPEID(22, TYPE_PTR, char const (*)), .offset = offsetof(noir_App, platform)},
        {"clipboard", .type = TYPEID(22, TYPE_PTR, char const (*)), .offset = offsetof(noir_App, clipboard)},
        {"display", .type = TYPEID(49, TYPE_STRUCT, noir_Display), .offset = offsetof(noir_App, display)},
        {"window", .type = TYPEID(50, TYPE_STRUCT, noir_Window), .offset = offsetof(noir_App, window)},
        {"keys", .type = TYPEID(55, TYPE_ARRAY, noir_DigitalButton [275]), .offset = offsetof(noir_App, keys)},
        {"mouse", .type = TYPEID(56, TYPE_STRUCT, noir_Mouse), .offset = offsetof(noir_App, mouse)},
        {"text", .type = TYPEID(57, TYPE_ARRAY, char [1024]), .offset = offsetof(noir_App, text)},
        {"time", .type = TYPEID(58, TYPE_STRUCT, noir_Time), .offset = offsetof(noir_App, time)},
        {"audio", .type = TYPEID(59, TYPE_STRUCT, noir_Audio), .offset = offsetof(noir_App, audio)},
        {"synced_clipboard", .type = TYPEID(18, TYPE_PTR, char *), .offset = offsetof(noir_App, synced_clipboard)},
    }},
    [39] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [256]), .align = alignof(char [256]), .base = TYPEID(3, TYPE_CHAR, char), .count = 256},
    [40] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_Event), .align = alignof(noir_Event), .name = "noir_Event", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"kind", .type = TYPEID(41, TYPE_NONE, noir_EventKind), .offset = offsetof(noir_Event, kind)},
        {"data", .type = TYPEID(42, TYPE_UNION, noir_EventData), .offset = offsetof(noir_Event, data)},
    }},
    [41] = NULL, // Enum
    [42] = &(TypeInfo){TYPE_UNION, .size = sizeof(noir_EventData), .align = alignof(noir_EventData), .name = "noir_EventData", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"key", .type = TYPEID(43, TYPE_STRUCT, noir_KeyEvent), .offset = offsetof(noir_EventData, key)},
        {"mouse_button", .type = TYPEID(44, TYPE_STRUCT, noir_MouseButtonEvent), .offset = offsetof(noir_EventData, mouse_button)},
        {"mouse_move", .type = TYPEID(47, TYPE_STRUCT, noir_MouseMoveEvent), .offset = offsetof(noir_EventData, mouse_move)},
    }},
    [43] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_KeyEvent), .align = alignof(noir_KeyEvent), .name = "noir_KeyEvent", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"key", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_KeyEvent, key)},
        {"repeat", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_KeyEvent, repeat)},
    }},
    [44] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_MouseButtonEvent), .align = alignof(noir_MouseButtonEvent), .name = "noir_MouseButtonEvent", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"button", .type = TYPEID(45, TYPE_NONE, noir_MouseButton), .offset = offsetof(noir_MouseButtonEvent, button)},
        {"pos", .type = TYPEID(46, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_MouseButtonEvent, pos)},
    }},
    [45] = NULL, // Enum
    [46] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_int2), .align = alignof(noir_int2), .name = "noir_int2", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"x", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_int2, x)},
        {"y", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_int2, y)},
    }},
    [47] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_MouseMoveEvent), .align = alignof(noir_MouseMoveEvent), .name = "noir_MouseMoveEvent", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"pos", .type = TYPEID(46, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_MouseMoveEvent, pos)},
        {"delta_pos", .type = TYPEID(46, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_MouseMoveEvent, delta_pos)},
    }},
    [48] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(noir_Event [256]), .align = alignof(noir_Event [256]), .base = TYPEID(40, TYPE_STRUCT, noir_Event), .count = 256},
    [49] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_Display), .align = alignof(noir_Display), .name = "noir_Display", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"size", .type = TYPEID(46, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Display, size)},
        {"rate", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_Display, rate)},
        {"dpi", .type = TYPEID(14, TYPE_FLOAT, float), .offset = offsetof(noir_Display, dpi)},
    }},
    [50] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_Window), .align = alignof(noir_Window), .name = "noir_Window", .num_fields = 15, .fields = (TypeFieldInfo[]) {
        {"resizable", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Window, resizable)},
        {"hidden", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Window, hidden)},
        {"fullscreen", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Window, fullscreen)},
        {"title", .type = TYPEID(22, TYPE_PTR, char const (*)), .offset = offsetof(noir_Window, title)},
        {"pos", .type = TYPEID(46, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Window, pos)},
        {"size", .type = TYPEID(46, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Window, size)},
        {"moved", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Window, moved)},
        {"resized", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Window, resized)},
        {"synced_title", .type = TYPEID(39, TYPE_ARRAY, char [256]), .offset = offsetof(noir_Window, synced_title)},
        {"synced_pos", .type = TYPEID(46, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Window, synced_pos)},
        {"synced_size", .type = TYPEID(46, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Window, synced_size)},
        {"synced_resizable", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Window, synced_resizable)},
        {"synced_hidden", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Window, synced_hidden)},
        {"synced_fullscreen", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Window, synced_fullscreen)},
        {"sdl", .type = TYPEID(52, TYPE_PTR, SDL_Window *), .offset = offsetof(noir_Window, sdl)},
    }},
    [51] = NULL, // Incomplete: SDL_Window
    [52] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID0(51, TYPE_NONE)},
    [53] = NULL, // Enum
    [54] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_DigitalButton), .align = alignof(noir_DigitalButton), .name = "noir_DigitalButton", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"down", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_DigitalButton, down)},
        {"pressed", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_DigitalButton, pressed)},
        {"released", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_DigitalButton, released)},
    }},
    [55] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(noir_DigitalButton [275]), .align = alignof(noir_DigitalButton [275]), .base = TYPEID(54, TYPE_STRUCT, noir_DigitalButton), .count = 275},
    [56] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_Mouse), .align = alignof(noir_Mouse), .name = "noir_Mouse", .num_fields = 13, .fields = (TypeFieldInfo[]) {
        {"moved", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Mouse, moved)},
        {"pos", .type = TYPEID(46, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Mouse, pos)},
        {"delta_pos", .type = TYPEID(46, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Mouse, delta_pos)},
        {"global_moved", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Mouse, global_moved)},
        {"global_pos", .type = TYPEID(46, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Mouse, global_pos)},
        {"global_delta_pos", .type = TYPEID(46, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Mouse, global_delta_pos)},
        {"left_button", .type = TYPEID(54, TYPE_STRUCT, noir_DigitalButton), .offset = offsetof(noir_Mouse, left_button)},
        {"middle_button", .type = TYPEID(54, TYPE_STRUCT, noir_DigitalButton), .offset = offsetof(noir_Mouse, middle_button)},
        {"right_button", .type = TYPEID(54, TYPE_STRUCT, noir_DigitalButton), .offset = offsetof(noir_Mouse, right_button)},
        {"capture", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Mouse, capture)},
        {"synced_capture", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Mouse, synced_capture)},
        {"synced_pos", .type = TYPEID(46, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Mouse, synced_pos)},
        {"synced_global_pos", .type = TYPEID(46, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Mouse, synced_global_pos)},
    }},
    [57] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [1024]), .align = alignof(char [1024]), .base = TYPEID(3, TYPE_CHAR, char), .count = 1024},
    [58] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_Time), .align = alignof(noir_Time), .name = "noir_Time", .num_fields = 12, .fields = (TypeFieldInfo[]) {
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
    [59] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_Audio), .align = alignof(noir_Audio), .name = "noir_Audio", .num_fields = 8, .fields = (TypeFieldInfo[]) {
        {"valid", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Audio, valid)},
        {"rate", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_Audio, rate)},
        {"channels", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_Audio, channels)},
        {"play", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Audio, play)},
        {"callback", .type = TYPEID(62, TYPE_FUNC, void (*)(void *, noir_float2 *, int)), .offset = offsetof(noir_Audio, callback)},
        {"context", .type = TYPEID(16, TYPE_PTR, void *), .offset = offsetof(noir_Audio, context)},
        {"synced_play", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Audio, synced_play)},
        {"sdl_device", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_Audio, sdl_device)},
    }},
    [60] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_float2), .align = alignof(noir_float2), .name = "noir_float2", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"x", .type = TYPEID(14, TYPE_FLOAT, float), .offset = offsetof(noir_float2, x)},
        {"y", .type = TYPEID(14, TYPE_FLOAT, float), .offset = offsetof(noir_float2, y)},
    }},
    [61] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(60, TYPE_STRUCT, noir_float2)},
    [62] = NULL, // Func
    [63] = &(TypeInfo){TYPE_CONST, .size = sizeof(noir_int2 const ), .align = alignof(noir_int2 const ), .base = TYPEID(46, TYPE_STRUCT, noir_int2)},
    [64] = NULL, // Func
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
    [81] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [134]), .align = alignof(char [134]), .base = TYPEID(3, TYPE_CHAR, char), .count = 134},
    [82] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(starfield_Image), .align = alignof(starfield_Image), .name = "starfield_Image", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"pixels", .type = TYPEID(84, TYPE_PTR, starfield_Color *), .offset = offsetof(starfield_Image, pixels)},
        {"size", .type = TYPEID(46, TYPE_STRUCT, noir_int2), .offset = offsetof(starfield_Image, size)},
    }},
    [83] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(starfield_Color), .align = alignof(starfield_Color), .name = "starfield_Color", .num_fields = 4, .fields = (TypeFieldInfo[]) {
        {"r", .type = TYPEID(14, TYPE_FLOAT, float), .offset = offsetof(starfield_Color, r)},
        {"g", .type = TYPEID(14, TYPE_FLOAT, float), .offset = offsetof(starfield_Color, g)},
        {"b", .type = TYPEID(14, TYPE_FLOAT, float), .offset = offsetof(starfield_Color, b)},
        {"a", .type = TYPEID(14, TYPE_FLOAT, float), .offset = offsetof(starfield_Color, a)},
    }},
    [84] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(83, TYPE_STRUCT, starfield_Color)},
    [85] = NULL, // Func
    [86] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(82, TYPE_STRUCT, starfield_Image)},
    [87] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(starfield_Rect), .align = alignof(starfield_Rect), .name = "starfield_Rect", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"pos", .type = TYPEID(60, TYPE_STRUCT, noir_float2), .offset = offsetof(starfield_Rect, pos)},
        {"size", .type = TYPEID(60, TYPE_STRUCT, noir_float2), .offset = offsetof(starfield_Rect, size)},
        {"rot", .type = TYPEID(60, TYPE_STRUCT, noir_float2), .offset = offsetof(starfield_Rect, rot)},
    }},
    [88] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(starfield_PixelIter), .align = alignof(starfield_PixelIter), .name = "starfield_PixelIter", .num_fields = 10, .fields = (TypeFieldInfo[]) {
        {"image", .type = TYPEID(86, TYPE_PTR, starfield_Image *), .offset = offsetof(starfield_PixelIter, image)},
        {"start", .type = TYPEID(46, TYPE_STRUCT, noir_int2), .offset = offsetof(starfield_PixelIter, start)},
        {"end", .type = TYPEID(46, TYPE_STRUCT, noir_int2), .offset = offsetof(starfield_PixelIter, end)},
        {"rect", .type = TYPEID(87, TYPE_STRUCT, starfield_Rect), .offset = offsetof(starfield_PixelIter, rect)},
        {"pixel_pos", .type = TYPEID(46, TYPE_STRUCT, noir_int2), .offset = offsetof(starfield_PixelIter, pixel_pos)},
        {"line_start", .type = TYPEID(60, TYPE_STRUCT, noir_float2), .offset = offsetof(starfield_PixelIter, line_start)},
        {"dx", .type = TYPEID(60, TYPE_STRUCT, noir_float2), .offset = offsetof(starfield_PixelIter, dx)},
        {"dy", .type = TYPEID(60, TYPE_STRUCT, noir_float2), .offset = offsetof(starfield_PixelIter, dy)},
        {"pos", .type = TYPEID(60, TYPE_STRUCT, noir_float2), .offset = offsetof(starfield_PixelIter, pos)},
        {"pixel", .type = TYPEID(84, TYPE_PTR, starfield_Color *), .offset = offsetof(starfield_PixelIter, pixel)},
    }},
    [89] = NULL, // Func
    [90] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(88, TYPE_STRUCT, starfield_PixelIter)},
    [91] = NULL, // Func
    [92] = NULL, // Func
    [93] = NULL, // Func
    [94] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(starfield_Starfield), .align = alignof(starfield_Starfield), .name = "starfield_Starfield", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"stars", .type = TYPEID(96, TYPE_PTR, starfield_Star *), .offset = offsetof(starfield_Starfield, stars)},
        {"star_count", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(starfield_Starfield, star_count)},
    }},
    [95] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(starfield_Star), .align = alignof(starfield_Star), .name = "starfield_Star", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"rect", .type = TYPEID(87, TYPE_STRUCT, starfield_Rect), .offset = offsetof(starfield_Star, rect)},
        {"type", .type = TYPEID(139, TYPE_PTR, starfield_StarType *), .offset = offsetof(starfield_Star, type)},
        {"color", .type = TYPEID(83, TYPE_STRUCT, starfield_Color), .offset = offsetof(starfield_Star, color)},
    }},
    [96] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(95, TYPE_STRUCT, starfield_Star)},
    [97] = NULL, // Func
    [98] = NULL, // Func
    [99] = NULL, // Func
    [100] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(94, TYPE_STRUCT, starfield_Starfield)},
    [101] = NULL, // Func
    [102] = NULL, // Func
    [103] = NULL, // Func
    [104] = NULL, // Func
    [105] = NULL, // Func
    [106] = NULL, // Func
    [107] = NULL, // Func
    [108] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(17, TYPE_STRUCT, starfield_RGB8)},
    [109] = NULL, // Func
    [110] = NULL, // Func
    [111] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [34]), .align = alignof(char [34]), .base = TYPEID(3, TYPE_CHAR, char), .count = 34},
    [112] = NULL, // Func
    [113] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(starfield_StarsHeader), .align = alignof(starfield_StarsHeader), .name = "starfield_StarsHeader", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"len", .type = TYPEID(12, TYPE_LLONG, llong), .offset = offsetof(starfield_StarsHeader, len)},
        {"cap", .type = TYPEID(12, TYPE_LLONG, llong), .offset = offsetof(starfield_StarsHeader, cap)},
        {"data", .type = TYPEID(169, TYPE_ARRAY, starfield_Star [1]), .offset = offsetof(starfield_StarsHeader, data)},
    }},
    [114] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(113, TYPE_STRUCT, starfield_StarsHeader)},
    [115] = NULL, // Func
    [116] = NULL, // Func
    [117] = NULL, // Incomplete: FILE
    [118] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID0(117, TYPE_NONE)},
    [119] = NULL, // Func
    [120] = NULL, // Func
    [121] = NULL, // Func
    [122] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [9]), .align = alignof(char [9]), .base = TYPEID(3, TYPE_CHAR, char), .count = 9},
    [123] = NULL, // Func
    [124] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [11]), .align = alignof(char [11]), .base = TYPEID(3, TYPE_CHAR, char), .count = 11},
    [125] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(noir_float2 [128]), .align = alignof(noir_float2 [128]), .base = TYPEID(60, TYPE_STRUCT, noir_float2), .count = 128},
    [126] = NULL, // Func
    [127] = &(TypeInfo){TYPE_CONST, .size = 0, .align = 0, .base = TYPEID0(1, TYPE_VOID)},
    [128] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID0(127, TYPE_CONST)},
    [129] = NULL, // Func
    [130] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(87, TYPE_STRUCT, starfield_Rect)},
    [131] = NULL, // Func
    [132] = NULL, // Func
    [133] = NULL, // Func
    [134] = NULL, // Func
    [135] = NULL, // Func
    [136] = NULL, // Func
    [137] = NULL, // Func
    [138] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(starfield_StarType), .align = alignof(starfield_StarType), .name = "starfield_StarType", .num_fields = 4, .fields = (TypeFieldInfo[]) {
        {"id", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(starfield_StarType, id)},
        {"size", .type = TYPEID(60, TYPE_STRUCT, noir_float2), .offset = offsetof(starfield_StarType, size)},
        {"nonsquare", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(starfield_StarType, nonsquare)},
        {"tex", .type = TYPEID(141, TYPE_STRUCT, starfield_Tex), .offset = offsetof(starfield_StarType, tex)},
    }},
    [139] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(138, TYPE_STRUCT, starfield_StarType)},
    [140] = NULL, // Func
    [141] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(starfield_Tex), .align = alignof(starfield_Tex), .name = "starfield_Tex", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"pixels", .type = TYPEID(84, TYPE_PTR, starfield_Color *), .offset = offsetof(starfield_Tex, pixels)},
        {"size", .type = TYPEID(46, TYPE_STRUCT, noir_int2), .offset = offsetof(starfield_Tex, size)},
        {"lod_levels", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(starfield_Tex, lod_levels)},
    }},
    [142] = NULL, // Enum
    [143] = NULL, // Func
    [144] = NULL, // Func
    [145] = NULL, // Func
    [146] = NULL, // Func
    [147] = NULL, // Func
    [148] = NULL, // Func
    [149] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(141, TYPE_STRUCT, starfield_Tex)},
    [150] = NULL, // Func
    [151] = NULL, // Func
    [152] = NULL, // Func
    [153] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(starfield_StarType [14]), .align = alignof(starfield_StarType [14]), .base = TYPEID(138, TYPE_STRUCT, starfield_StarType), .count = 14},
    [154] = NULL, // Func
    [155] = NULL, // Func
    [156] = NULL, // Func
    [157] = NULL, // Func
    [158] = NULL, // Func
    [159] = NULL, // Func
    [160] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(14, TYPE_FLOAT, float)},
    [161] = NULL, // Func
    [162] = NULL, // Func
    [163] = NULL, // Func
    [164] = NULL, // Func
    [165] = NULL, // Func
    [166] = NULL, // Func
    [167] = NULL, // Func
    [168] = NULL, // Func
    [169] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(starfield_Star [1]), .align = alignof(starfield_Star [1]), .base = TYPEID(95, TYPE_STRUCT, starfield_Star), .count = 1},
    [170] = NULL, // Func
    [171] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [7]), .align = alignof(char [7]), .base = TYPEID(3, TYPE_CHAR, char), .count = 7},
    [172] = NULL, // Func
    [173] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [18]), .align = alignof(char [18]), .base = TYPEID(3, TYPE_CHAR, char), .count = 18},
    [174] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(SDL_DisplayMode), .align = alignof(SDL_DisplayMode), .name = "SDL_DisplayMode", .num_fields = 5, .fields = (TypeFieldInfo[]) {
        {"format", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_DisplayMode, format)},
        {"w", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_DisplayMode, w)},
        {"h", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_DisplayMode, h)},
        {"refresh_rate", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_DisplayMode, refresh_rate)},
        {"driverdata", .type = TYPEID(16, TYPE_PTR, void *), .offset = offsetof(SDL_DisplayMode, driverdata)},
    }},
    [175] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(174, TYPE_STRUCT, SDL_DisplayMode)},
    [176] = NULL, // Func
    [177] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [26]), .align = alignof(char [26]), .base = TYPEID(3, TYPE_CHAR, char), .count = 26},
    [178] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [5]), .align = alignof(char [5]), .base = TYPEID(3, TYPE_CHAR, char), .count = 5},
    [179] = NULL, // Enum
    [180] = NULL, // Func
    [181] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [23]), .align = alignof(char [23]), .base = TYPEID(3, TYPE_CHAR, char), .count = 23},
    [182] = NULL, // Func
    [183] = NULL, // Func
    [184] = NULL, // Incomplete array type
    [185] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [2]), .align = alignof(char [2]), .base = TYPEID(3, TYPE_CHAR, char), .count = 2},
    [186] = NULL, // Enum
    [187] = NULL, // Func
    [188] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(int [275]), .align = alignof(int [275]), .base = TYPEID(8, TYPE_INT, int), .count = 275},
    [189] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(8, TYPE_INT, int)},
    [190] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(int [512]), .align = alignof(int [512]), .base = TYPEID(8, TYPE_INT, int), .count = 512},
    [191] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(SDL_AudioSpec), .align = alignof(SDL_AudioSpec), .name = "SDL_AudioSpec", .num_fields = 9, .fields = (TypeFieldInfo[]) {
        {"freq", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_AudioSpec, freq)},
        {"format", .type = TYPEID(7, TYPE_USHORT, ushort), .offset = offsetof(SDL_AudioSpec, format)},
        {"channels", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_AudioSpec, channels)},
        {"silence", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_AudioSpec, silence)},
        {"samples", .type = TYPEID(7, TYPE_USHORT, ushort), .offset = offsetof(SDL_AudioSpec, samples)},
        {"padding", .type = TYPEID(7, TYPE_USHORT, ushort), .offset = offsetof(SDL_AudioSpec, padding)},
        {"size", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_AudioSpec, size)},
        {"callback", .type = TYPEID(193, TYPE_FUNC, void (*)(void *, uchar *, int)), .offset = offsetof(SDL_AudioSpec, callback)},
        {"userdata", .type = TYPEID(16, TYPE_PTR, void *), .offset = offsetof(SDL_AudioSpec, userdata)},
    }},
    [192] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(4, TYPE_UCHAR, uchar)},
    [193] = NULL, // Func
    [194] = &(TypeInfo){TYPE_CONST, .size = sizeof(SDL_AudioSpec const ), .align = alignof(SDL_AudioSpec const ), .base = TYPEID(191, TYPE_STRUCT, SDL_AudioSpec)},
    [195] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(194, TYPE_CONST, SDL_AudioSpec const )},
    [196] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(191, TYPE_STRUCT, SDL_AudioSpec)},
    [197] = NULL, // Func
    [198] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [20]), .align = alignof(char [20]), .base = TYPEID(3, TYPE_CHAR, char), .count = 20},
    [199] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [17]), .align = alignof(char [17]), .base = TYPEID(3, TYPE_CHAR, char), .count = 17},
    [200] = NULL, // Func
    [201] = NULL, // Func
    [202] = NULL, // Func
    [203] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [3]), .align = alignof(char [3]), .base = TYPEID(3, TYPE_CHAR, char), .count = 3},
    [204] = NULL, // Func
    [205] = NULL, // Incomplete array type
    [206] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(starfield_Color [15]), .align = alignof(starfield_Color [15]), .base = TYPEID(83, TYPE_STRUCT, starfield_Color), .count = 15},
    [207] = NULL, // Func
    [208] = NULL, // Func
    [209] = NULL, // Func
    [210] = NULL, // Func
    [211] = NULL, // Func
    [212] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [16]), .align = alignof(char [16]), .base = TYPEID(3, TYPE_CHAR, char), .count = 16},
    [213] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(54, TYPE_STRUCT, noir_DigitalButton)},
    [214] = NULL, // Func
    [215] = &(TypeInfo){TYPE_UNION, .size = sizeof(SDL_Event), .align = alignof(SDL_Event), .name = "SDL_Event", .num_fields = 5, .fields = (TypeFieldInfo[]) {
        {"type", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_Event, type)},
        {"key", .type = TYPEID(216, TYPE_STRUCT, SDL_KeyboardEvent), .offset = offsetof(SDL_Event, key)},
        {"text", .type = TYPEID(218, TYPE_STRUCT, SDL_TextInputEvent), .offset = offsetof(SDL_Event, text)},
        {"motion", .type = TYPEID(220, TYPE_STRUCT, SDL_MouseMotionEvent), .offset = offsetof(SDL_Event, motion)},
        {"button", .type = TYPEID(221, TYPE_STRUCT, SDL_MouseButtonEvent), .offset = offsetof(SDL_Event, button)},
    }},
    [216] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(SDL_KeyboardEvent), .align = alignof(SDL_KeyboardEvent), .name = "SDL_KeyboardEvent", .num_fields = 8, .fields = (TypeFieldInfo[]) {
        {"type", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_KeyboardEvent, type)},
        {"timestamp", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_KeyboardEvent, timestamp)},
        {"windowID", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_KeyboardEvent, windowID)},
        {"state", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_KeyboardEvent, state)},
        {"repeat", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_KeyboardEvent, repeat)},
        {"padding2", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_KeyboardEvent, padding2)},
        {"padding3", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_KeyboardEvent, padding3)},
        {"keysym", .type = TYPEID(217, TYPE_STRUCT, SDL_Keysym), .offset = offsetof(SDL_KeyboardEvent, keysym)},
    }},
    [217] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(SDL_Keysym), .align = alignof(SDL_Keysym), .name = "SDL_Keysym", .num_fields = 4, .fields = (TypeFieldInfo[]) {
        {"scancode", .type = TYPEID(186, TYPE_NONE, SDL_Scancode), .offset = offsetof(SDL_Keysym, scancode)},
        {"sym", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_Keysym, sym)},
        {"mod", .type = TYPEID(7, TYPE_USHORT, ushort), .offset = offsetof(SDL_Keysym, mod)},
        {"unused", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_Keysym, unused)},
    }},
    [218] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(SDL_TextInputEvent), .align = alignof(SDL_TextInputEvent), .name = "SDL_TextInputEvent", .num_fields = 4, .fields = (TypeFieldInfo[]) {
        {"type", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_TextInputEvent, type)},
        {"timestamp", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_TextInputEvent, timestamp)},
        {"windowID", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_TextInputEvent, windowID)},
        {"text", .type = TYPEID(219, TYPE_ARRAY, char [32]), .offset = offsetof(SDL_TextInputEvent, text)},
    }},
    [219] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [32]), .align = alignof(char [32]), .base = TYPEID(3, TYPE_CHAR, char), .count = 32},
    [220] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(SDL_MouseMotionEvent), .align = alignof(SDL_MouseMotionEvent), .name = "SDL_MouseMotionEvent", .num_fields = 9, .fields = (TypeFieldInfo[]) {
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
    [221] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(SDL_MouseButtonEvent), .align = alignof(SDL_MouseButtonEvent), .name = "SDL_MouseButtonEvent", .num_fields = 10, .fields = (TypeFieldInfo[]) {
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
    [222] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(215, TYPE_UNION, SDL_Event)},
    [223] = NULL, // Func
    [224] = NULL, // Enum
    [225] = NULL, // Func
    [226] = NULL, // Func
    [227] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [21]), .align = alignof(char [21]), .base = TYPEID(3, TYPE_CHAR, char), .count = 21},
    [228] = NULL, // Func
    [229] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [24]), .align = alignof(char [24]), .base = TYPEID(3, TYPE_CHAR, char), .count = 24},
    [230] = NULL, // Func
    [231] = NULL, // Func
    [232] = NULL, // Func
    [233] = NULL, // Func
    [234] = NULL, // Func
    [235] = NULL, // Enum
    [236] = NULL, // Func
    [237] = NULL, // Func
    [238] = NULL, // Func
    [239] = NULL, // Func
    [240] = NULL, // Func
    [241] = NULL, // Func
    [242] = NULL, // Func
    [243] = NULL, // Func
    [244] = NULL, // Func
    [245] = NULL, // Func
    [246] = NULL, // Func
    [247] = NULL, // Func
    [248] = NULL, // Func
    [249] = NULL, // Func
    [250] = NULL, // Func
    [251] = NULL, // Func
    [252] = NULL, // Func
    [253] = NULL, // Func
    [254] = NULL, // Func
    [255] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(40, TYPE_STRUCT, noir_Event)},
    [256] = NULL, // Func
    [257] = NULL, // Func
    [258] = NULL, // Func
    [259] = NULL, // Func
    [260] = NULL, // Func
    [261] = NULL, // Func
    [262] = NULL, // Func
    [263] = NULL, // Func
    [264] = NULL, // Func
    [265] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(46, TYPE_STRUCT, noir_int2)},
    [266] = NULL, // No associated type
    [267] = NULL, // Func
    [268] = NULL, // No associated type
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
    [281] = NULL, // Func
    [282] = NULL, // Func
    [283] = NULL, // Func
    [284] = NULL, // Func
    [285] = NULL, // Func
    [286] = NULL, // Func
    [287] = NULL, // Func
    [288] = NULL, // Func
    [289] = NULL, // Func
    [290] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(15, TYPE_DOUBLE, double)},
    [291] = NULL, // Func
    [292] = NULL, // Func
    [293] = NULL, // Func
    [294] = NULL, // Func
    [295] = NULL, // Func
    [296] = NULL, // Func
    [297] = NULL, // Func
    [298] = NULL, // Func
    [299] = NULL, // Func
    [300] = NULL, // Func
    [301] = NULL, // Func
    [302] = NULL, // Func
    [303] = NULL, // Func
    [304] = NULL, // Func
    [305] = NULL, // Func
    [306] = &(TypeInfo){TYPE_CONST, .size = sizeof(char (*const )), .align = alignof(char (*const )), .base = TYPEID(18, TYPE_PTR, char *)},
    [307] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(306, TYPE_CONST, char (*const ))},
    [308] = NULL, // Func
    [309] = NULL, // No associated type
    [310] = NULL, // Func
    [311] = NULL, // Func
    [312] = NULL, // Func
    [313] = NULL, // Func
    [314] = NULL, // Func
    [315] = NULL, // Func
    [316] = NULL, // Func
    [317] = NULL, // Func
    [318] = NULL, // Func
    [319] = NULL, // Func
    [320] = NULL, // Func
    [321] = NULL, // Func
    [322] = NULL, // Func
    [323] = NULL, // Func
    [324] = NULL, // Func
    [325] = NULL, // Func
    [326] = NULL, // Func
    [327] = NULL, // Func
    [328] = NULL, // Func
    [329] = NULL, // Func
    [330] = NULL, // No associated type
    [331] = NULL, // Func
    [332] = NULL, // Func
    [333] = NULL, // Func
    [334] = NULL, // Func
    [335] = NULL, // No associated type
    [336] = NULL, // No associated type
    [337] = NULL, // No associated type
    [338] = NULL, // Func
    [339] = NULL, // Func
    [340] = NULL, // Func
    [341] = NULL, // Func
    [342] = NULL, // Func
    [343] = NULL, // Func
    [344] = NULL, // Func
    [345] = NULL, // Func
    [346] = NULL, // Func
    [347] = NULL, // Func
    [348] = NULL, // Func
    [349] = NULL, // Func
    [350] = NULL, // Func
    [351] = NULL, // Func
    [352] = NULL, // Func
    [353] = NULL, // Func
    [354] = NULL, // Func
    [355] = NULL, // Func
    [356] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(6, TYPE_SHORT, short)},
    [357] = NULL, // Func
    [358] = NULL, // Func
    [359] = NULL, // Func
    [360] = &(TypeInfo){TYPE_CONST, .size = sizeof(short const ), .align = alignof(short const ), .base = TYPEID(6, TYPE_SHORT, short)},
    [361] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(360, TYPE_CONST, short const )},
    [362] = NULL, // Func
    [363] = NULL, // Func
    [364] = NULL, // Func
    [365] = NULL, // Func
    [366] = NULL, // Func
    [367] = NULL, // Func
    [368] = NULL, // Func
    [369] = NULL, // Func
    [370] = NULL, // Func
    [371] = NULL, // Func
    [372] = NULL, // No associated type
    [373] = NULL, // Func
    [374] = NULL, // Func
    [375] = NULL, // No associated type
    [376] = NULL, // Func
    [377] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(12, TYPE_LLONG, llong)},
    [378] = NULL, // Func
    [379] = NULL, // No associated type
    [380] = NULL, // No associated type
    [381] = NULL, // Func
    [382] = &(TypeInfo){TYPE_CONST, .size = sizeof(llong const ), .align = alignof(llong const ), .base = TYPEID(12, TYPE_LLONG, llong)},
    [383] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(382, TYPE_CONST, llong const )},
    [384] = NULL, // Func
    [385] = NULL, // Func
    [386] = NULL, // Func
    [387] = NULL, // No associated type
    [388] = NULL, // No associated type
    [389] = NULL, // No associated type
    [390] = NULL, // Func
    [391] = NULL, // Func
    [392] = NULL, // Func
    [393] = NULL, // Func
    [394] = NULL, // Func
    [395] = NULL, // Func
    [396] = NULL, // Func
    [397] = NULL, // Func
    [398] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(192, TYPE_PTR, uchar *)},
    [399] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(9, TYPE_UINT, uint)},
    [400] = NULL, // Func
    [401] = NULL, // No associated type
    [402] = NULL, // No associated type
    [403] = NULL, // Func
    [404] = &(TypeInfo){TYPE_CONST, .size = sizeof(uchar const ), .align = alignof(uchar const ), .base = TYPEID(4, TYPE_UCHAR, uchar)},
    [405] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(404, TYPE_CONST, uchar const )},
    [406] = NULL, // Func
    [407] = NULL, // Func
    [408] = NULL, // Func
    [409] = NULL, // Func
    [410] = NULL, // Func
    [411] = NULL, // Func
    [412] = NULL, // Func
    [413] = NULL, // Func
    [414] = NULL, // Func
    [415] = NULL, // Func
    [416] = NULL, // Func
    [417] = NULL, // Func
    [418] = NULL, // Func
    [419] = NULL, // Func
    [420] = NULL, // Func
    [421] = NULL, // Func
    [422] = NULL, // Func
    [423] = NULL, // Func
    [424] = NULL, // Func
    [425] = NULL, // Func
    [426] = NULL, // Func
    [427] = NULL, // Func
    [428] = NULL, // Func
    [429] = NULL, // No associated type
    [430] = NULL, // Func
    [431] = NULL, // Func
    [432] = NULL, // Func
    [433] = NULL, // Func
    [434] = NULL, // Func
    [435] = NULL, // Func
    [436] = NULL, // Func
    [437] = NULL, // Func
    [438] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(437, TYPE_FUNC, void (*)(void *, int, SDL_LogPriority, char const (*)))},
    [439] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(16, TYPE_PTR, void *)},
    [440] = NULL, // Func
    [441] = NULL, // Func
    [442] = NULL, // No associated type
    [443] = NULL, // Func
    [444] = NULL, // Func
    [445] = NULL, // Func
    [446] = NULL, // Func
    [447] = NULL, // Func
    [448] = NULL, // Func
    [449] = NULL, // Func
    [450] = NULL, // No associated type
    [451] = NULL, // Func
    [452] = NULL, // Func
    [453] = NULL, // Func
    [454] = NULL, // Func
    [455] = NULL, // Func
    [456] = NULL, // Func
    [457] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(7, TYPE_USHORT, ushort)},
    [458] = NULL, // Func
    [459] = NULL, // Func
    [460] = NULL, // No associated type
    [461] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(77, TYPE_STRUCT, SDL_Rect)},
    [462] = NULL, // Func
    [463] = NULL, // Func
    [464] = NULL, // Func
    [465] = NULL, // No associated type
    [466] = NULL, // Func
    [467] = NULL, // Func
    [468] = NULL, // No associated type
    [469] = NULL, // No associated type
    [470] = NULL, // No associated type
    [471] = NULL, // No associated type
    [472] = NULL, // No associated type
    [473] = NULL, // No associated type
    [474] = NULL, // No associated type
    [475] = NULL, // No associated type
    [476] = NULL, // Func
    [477] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(52, TYPE_PTR, SDL_Window *)},
    [478] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(73, TYPE_PTR, SDL_Renderer *)},
    [479] = NULL, // Func
    [480] = NULL, // Func
    [481] = NULL, // Func
    [482] = NULL, // Func
    [483] = NULL, // Func
    [484] = NULL, // No associated type
    [485] = NULL, // Func
    [486] = NULL, // Func
    [487] = NULL, // Func
    [488] = NULL, // Func
    [489] = NULL, // Func
    [490] = NULL, // Func
    [491] = NULL, // Func
    [492] = NULL, // Func
    [493] = NULL, // No associated type
    [494] = NULL, // Func
    [495] = NULL, // Func
    [496] = NULL, // Func
    [497] = NULL, // Func
    [498] = NULL, // Func
    [499] = NULL, // Func
    [500] = NULL, // Func
    [501] = NULL, // Func
    [502] = NULL, // Func
    [503] = NULL, // Func
    [504] = NULL, // Func
    [505] = NULL, // Func
    [506] = NULL, // Func
    [507] = NULL, // Func
    [508] = NULL, // Func
    [509] = NULL, // Func
    [510] = NULL, // Func
    [511] = NULL, // Func
    [512] = NULL, // Func
    [513] = NULL, // Func
    [514] = NULL, // Func
    [515] = NULL, // Func
    [516] = NULL, // Func
    [517] = NULL, // Func
    [518] = &(TypeInfo){TYPE_CONST, .size = sizeof(double const ), .align = alignof(double const ), .base = TYPEID(15, TYPE_DOUBLE, double)},
    [519] = NULL, // Func
    [520] = NULL, // Func
    [521] = NULL, // Func
    [522] = NULL, // Func
    [523] = NULL, // Func
    [524] = NULL, // Func
    [525] = NULL, // Func
    [526] = NULL, // Func
    [527] = NULL, // Func
    [528] = NULL, // Func
    [529] = NULL, // Func
    [530] = NULL, // Func
    [531] = NULL, // Func
    [532] = NULL, // Func
    [533] = NULL, // Func
    [534] = NULL, // Func
    [535] = NULL, // Func
    [536] = NULL, // Func
    [537] = NULL, // Func
    [538] = NULL, // Func
    [539] = NULL, // Func
    [540] = NULL, // Func
    [541] = NULL, // Func
    [542] = NULL, // Func
    [543] = NULL, // Func
    [544] = NULL, // Func
    [545] = NULL, // Func
    [546] = NULL, // Func
    [547] = NULL, // Func
    [548] = NULL, // Func
    [549] = NULL, // Func
    [550] = NULL, // No associated type
    [551] = NULL, // No associated type
    [552] = NULL, // No associated type
    [553] = NULL, // No associated type
    [554] = NULL, // No associated type
    [555] = NULL, // No associated type
    [556] = NULL, // Func
    [557] = NULL, // No associated type
    [558] = NULL, // Func
    [559] = NULL, // Func
    [560] = NULL, // Func
    [561] = NULL, // Func
    [562] = NULL, // Func
    [563] = NULL, // Func
    [564] = NULL, // Func
    [565] = NULL, // Func
    [566] = NULL, // Func
    [567] = NULL, // No associated type
    [568] = NULL, // Func
    [569] = NULL, // No associated type
    [570] = NULL, // Func
    [571] = NULL, // Func
    [572] = NULL, // Func
    [573] = NULL, // Func
    [574] = NULL, // No associated type
    [575] = NULL, // Func
    [576] = NULL, // Func
    [577] = NULL, // Func
    [578] = NULL, // Func
    [579] = NULL, // Func
    [580] = NULL, // Func
    [581] = NULL, // Func
    [582] = NULL, // Func
    [583] = NULL, // Func
    [584] = NULL, // No associated type
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
    [597] = NULL, // No associated type
    [598] = NULL, // No associated type
    [599] = NULL, // No associated type
    [600] = NULL, // No associated type
    [601] = NULL, // No associated type
    [602] = NULL, // No associated type
    [603] = NULL, // No associated type
    [604] = NULL, // Func
    [605] = NULL, // Func
    [606] = NULL, // Func
    [607] = NULL, // Func
    [608] = NULL, // Func
    [609] = NULL, // Func
    [610] = NULL, // Func
    [611] = NULL, // Func
    [612] = NULL, // Func
    [613] = NULL, // Func
    [614] = NULL, // Func
    [615] = NULL, // Func
    [616] = NULL, // Func
    [617] = NULL, // Func
    [618] = NULL, // Func
    [619] = NULL, // Func
    [620] = NULL, // Func
    [621] = NULL, // Func
    [622] = NULL, // Func
    [623] = NULL, // Func
    [624] = NULL, // Func
    [625] = NULL, // Func
    [626] = NULL, // Func
    [627] = NULL, // Func
    [628] = NULL, // Func
    [629] = NULL, // Func
    [630] = NULL, // Func
    [631] = NULL, // Func
    [632] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [39]), .align = alignof(char [39]), .base = TYPEID(3, TYPE_CHAR, char), .count = 39},
    [633] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [37]), .align = alignof(char [37]), .base = TYPEID(3, TYPE_CHAR, char), .count = 37},
    [634] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [38]), .align = alignof(char [38]), .base = TYPEID(3, TYPE_CHAR, char), .count = 38},
    [635] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [22]), .align = alignof(char [22]), .base = TYPEID(3, TYPE_CHAR, char), .count = 22},
    [636] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [29]), .align = alignof(char [29]), .base = TYPEID(3, TYPE_CHAR, char), .count = 29},
    [637] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [10]), .align = alignof(char [10]), .base = TYPEID(3, TYPE_CHAR, char), .count = 10},
    [638] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [27]), .align = alignof(char [27]), .base = TYPEID(3, TYPE_CHAR, char), .count = 27},
    [639] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [28]), .align = alignof(char [28]), .base = TYPEID(3, TYPE_CHAR, char), .count = 28},
    [640] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [15]), .align = alignof(char [15]), .base = TYPEID(3, TYPE_CHAR, char), .count = 15},
    [641] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [8]), .align = alignof(char [8]), .base = TYPEID(3, TYPE_CHAR, char), .count = 8},
};

int num_typeinfos = 642;
const TypeInfo **typeinfos = (const TypeInfo **)typeinfo_table;

// Definitions
#line 827
int main(int argc, char (*(*argv))) {
    _MM_SET_FLUSH_ZERO_MODE(_MM_FLUSH_ZERO_ON);
    #line 830
    noir_app.window.size = starfield_ImageSize;
    if (!(noir_app_init())) {
        noir_print_and_clear_error();
        return 1;
    }
    #line 836
    printf("Platform: %s\n", noir_app.platform);
    printf("Display: %d x %d, %d Hz, %.2f DPI\n", noir_app.display.size.x, noir_app.display.size.y, noir_app.display.rate, noir_app.display.dpi);
    #line 839
    SDL_Surface (*surface) = SDL_GetWindowSurface(noir_app.window.sdl);
    SDL_Renderer (*renderer) = SDL_CreateSoftwareRenderer(surface);
    assert((surface->format->format) == (SDL_PIXELFORMAT_RGB888));
    assert((surface->format->BitsPerPixel) == (32));
    #line 844
    char (*starfield_text) = 
        "\n"
        "\xE2\x9C\xBA   \xE3\x80\x80\xE3\x80\x80 \xE3\x80\x80\xE3\x80\x80 \xC2\xB7   \xE2\x8A\xB9\n"
        " *  \xE2\x8B\x86 \xE3\x80\x80\xE3\x80\x80\xE3\x80\x80  \xE2\x9C\xA7  *\n"
        "  \xE3\x80\x80\xE3\x80\x80\xE3\x80\x80\xE3\x80\x80\xE3\x80\x80\xE3\x80\x80\xE3\x80\x80.  \xE3\x80\x80\n"
        " +  *\xE3\x80\x80  \xE3\x80\x80* \xE3\x80\x80\xE3\x80\x80. \xE3\x80\x80 \xE2\x8B\x86\n"
        "  \xE2\x9C\xAB \xE3\x80\x80\xE3\x80\x80  +\n";
    #line 853
    starfield_init_perlin();
    starfield_Image noise = starfield_make_image((noir_int2){surface->w, surface->h});
    for (starfield_PixelIter it = starfield_pixel_iter_begin(&(noise), (starfield_Rect){0}); starfield_pixel_iter_next(&(it));) {
        starfield_Color c = {(starfield_random_normal()) * (((1) / (1024.000000f))), (starfield_random_normal()) * (((1) / (1024.000000f))), (starfield_random_normal()) * (((1) / (1024.000000f))), 1};
        #line 862
        *(it.pixel) = c;
    }
    starfield_blur(&(noise), 0.060000f);
    #line 866
    starfield_Starfield starfield = starfield_create_starfield(starfield_text);
    #line 868
    float min_t = 1000.000000f;
    float max_t = 0.000000f;
    float sum_t = 0.000000f;
    int n_t = 0;
    double t_reset = starfield_time_now();
    #line 874
    starfield_Image image = starfield_make_image((noir_int2){surface->w, surface->h});
    starfield_Image blurred = starfield_make_image((noir_int2){surface->w, surface->h});
    starfield_Image blurred2 = starfield_make_image((noir_int2){surface->w, surface->h});
    while (noir_app_update()) {
        if (noir_app.error) {
            noir_print_and_clear_error();
        }
        #line 882
        if ((!(n_t)) || (noir_app.mouse.left_button.pressed)) {
            starfield_image_copy_to(&(image), &(noise));
            #line 885
            double t0 = starfield_time_now();
            float t0f = (float)(t0);
            #line 890
            starfield_draw_starfield(&(image), &(starfield));
            starfield_diffraction(&(image), 0.100000f, 4.000000f, starfield_random_unit_vector2());
            #line 893
            starfield_blur_to(&(blurred), &(image), 1.330000f);
            starfield_blur_to(&(blurred2), &(image), 2);
            for (starfield_PixelIter it = starfield_pixel_iter_begin(&(image), (starfield_Rect){0}); starfield_pixel_iter_next(&(it));) {
                starfield_Color bp = starfield_image_fetch(&(blurred), it.pixel_pos);
                starfield_Color mbp = starfield_color_mul(*(it.pixel), bp);
                starfield_Color xbp = starfield_color_lerp(bp, mbp, 0.100000f);
                #line 900
                starfield_Color bp2 = starfield_image_fetch(&(blurred2), it.pixel_pos);
                starfield_Color mbp2 = starfield_color_mul(*(it.pixel), bp2);
                starfield_Color xbp2 = starfield_color_lerp(bp2, mbp2, 0.900000f);
                *(it.pixel) = starfield_color_add(*(it.pixel), starfield_color_add(xbp, xbp2));
            }
            starfield_image_to_rgb8((starfield_RGB8 *)(surface->pixels), (noir_int2){surface->w, surface->h}, &(image));
            double t1 = starfield_time_now();
            #line 908
            float t = (float)((((t1) - (t0))) * (1000));
            min_t = starfield_min(t, min_t);
            max_t = starfield_max(t, max_t);
            sum_t += t;
            (n_t)++;
            #line 914
            if (noir_app.mouse.left_button.pressed) {
                printf("min %.2fms max %.2fms avg %.2fms\n", min_t, max_t, (sum_t) / (n_t));
                #line 917
                free(starfield_stars_header(starfield.stars));
                starfield = starfield_create_starfield(starfield_text);
                t_reset = t0;
            }
        }
        #line 923
        SDL_UpdateWindowSurface(noir_app.window.sdl);
        #line 925
        fflush(stdout);
        SDL_Delay(10);
    }
    #line 929
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

noir_App noir_app = {.window = {.pos = {NOIR_DEFAULT_WINDOW_POS, NOIR_DEFAULT_WINDOW_POS}}};
noir_int2 const (starfield_ImageSize) = {512, 512};
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

#line 770 "C:\\code\\starfield\\starfield\\starfield.ion"
void starfield_init_perlin(void) {
    for (int i = 0; (i) < (STARFIELD_perlin_gradient_count); (i)++) {
        starfield_perlin_gradients[i] = starfield_random_unit_vector2();
    }
}

#line 7 "C:\\code\\starfield\\starfield\\image.ion"
starfield_Image starfield_make_image(noir_int2 size) {
    return (starfield_Image){.pixels = starfield_xcalloc((size.x) * (size.y), sizeof(starfield_Color)), .size = size};
}

#line 68
starfield_PixelIter starfield_pixel_iter_begin(starfield_Image (*image), starfield_Rect rect) {
    starfield_PixelIter iter = {0};
    #line 71
    float x_min = 0.000000f;
    float x_max = 1.000000f;
    float y_min = 0.000000f;
    float y_max = 1.000000f;
    #line 76
    if (!(starfield_is_zero(&(rect), sizeof(rect)))) {
        noir_float2 a = starfield_rect_absolute(rect, (noir_float2){0, 0});
        noir_float2 b = starfield_rect_absolute(rect, (noir_float2){1, 0});
        noir_float2 c = starfield_rect_absolute(rect, (noir_float2){0, 1});
        noir_float2 d = starfield_rect_absolute(rect, (noir_float2){1, 1});
        #line 82
        x_min = starfield_min4(a.x, b.x, c.x, d.x);
        x_max = starfield_max4(a.x, b.x, c.x, d.x);
        y_min = starfield_min4(a.y, b.y, c.y, d.y);
        y_max = starfield_max4(a.y, b.y, c.y, d.y);
        #line 87
        noir_float2 origin = starfield_rect_relative(rect, (noir_float2){0, 0});
        iter.dx = starfield_sub2(starfield_rect_relative(rect, (noir_float2){(1.000000f) / ((image->size.x)), 0}), origin);
        iter.dy = starfield_sub2(starfield_rect_relative(rect, (noir_float2){0, (1.000000f) / ((image->size.y))}), origin);
    } else {
        rect = starfield_all_rect();
        iter.dx = (noir_float2){(1.000000f) / (image->size.x), 0.000000f};
        iter.dy = (noir_float2){0.000000f, (1.000000f) / (image->size.y)};
    }
    #line 96
    iter.start.x = starfield_clampi(0, image->size.x, (int)(roundf(((x_min) * (image->size.x)) - (0.500000f))));
    iter.end.x = starfield_clampi(0, image->size.x, (int)(roundf(((x_max) * (image->size.x)) - (0.500000f))));
    iter.start.y = starfield_clampi(0, image->size.y, (int)(roundf(((y_min) * (image->size.y)) - (0.500000f))));
    iter.end.y = starfield_clampi(0, image->size.y, (int)(roundf(((y_max) * (image->size.y)) - (0.500000f))));
    #line 101
    iter.pixel_pos = (noir_int2){(iter.start.x) - (1), iter.start.y};
    iter.pos = starfield_rect_relative(rect, (noir_float2){((float)((0.500000f) + (iter.pixel_pos.x))) / (image->size.x), ((float)((0.500000f) + (iter.pixel_pos.y))) / (image->size.y)});
    iter.line_start = iter.pos;
    iter.rect = rect;
    iter.image = image;
    #line 107
    return iter;
}

bool starfield_pixel_iter_next(starfield_PixelIter (*it)) {
    (it->pixel_pos.x)++;
    #line 113
    for (; (it->pixel_pos.y) < (it->end.y); (it->pixel_pos.y)++) {
        for (; (it->pixel_pos.x) < (it->end.x); (it->pixel_pos.x)++) {
            #line 117
            it->pos = starfield_add2(it->pos, it->dx);
            #line 119
            if (starfield_inside_normal_rect(it->pos)) {
                it->pixel = (it->image->pixels) + (((it->pixel_pos.x) + ((it->pixel_pos.y) * (it->image->size.x))));
                return true;
            }
        }
        #line 125
        it->line_start = starfield_add2(it->line_start, it->dy);
        it->pos = it->line_start;
        it->pixel_pos.x = it->start.x;
    }
    #line 130
    return false;
}

#line 193 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_random_normal(void) {
    float u = 0.000000f;
    float v = 0.000000f;
    float s = 0.000000f;
    do {
        u = ((starfield_random01()) * (2.000000f)) - (1.000000f);
        v = ((starfield_random01()) * (2.000000f)) - (1.000000f);
        s = ((u) * (u)) + ((v) * (v));
    } while ((s) >= (1));
    return (u) * (sqrtf((((-(2)) * (logf(s)))) / (s)));
}

#line 1 "C:\\code\\starfield\\starfield\\filter.ion"
void starfield_blur(starfield_Image (*img), float radius) {
    starfield_blur_to(img, img, radius);
}

#line 504 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Starfield starfield_create_starfield(char const ((*starfield))) {
    #line 506
    starfield_Starfield result = {0};
    #line 508
    int width = 0;
    int height = 0;
    int line_width = 0;
    int star_count = 0;
    #line 513
    char const ((*c)) = starfield;
    while (*(c)) {
        starfield_Star star = {0};
        c = starfield_consume_star(c, &(star));
        #line 518
        if (star.type) {
            if ((star.type->id) == (STARFIELD_StarType_BigSpace)) {
                line_width += 1;
            } else if ((star.type->id) != (STARFIELD_StarType_Space)) {
                (star_count)++;
                #line 524
                star.rect.pos = (noir_float2){(((float)(line_width)) + ((starfield_random01()) * (0.500000f))) - (0.250000f), (((float)(height)) + ((starfield_random01()) * (0.500000f))) - (0.250000f)};
                float x = starfield_clamp(0.200000f, 1.200000f, starfield_square(starfield_random_normal()));
                float y = x;
                if (star.type->nonsquare) {
                    y = starfield_clamp(0.200000f, 1.200000f, starfield_square(starfield_random_normal()));
                }
                star.rect.size = (noir_float2){x, y};
                star.rect.rot = starfield_random_unit_vector2();
                star.color = starfield_random_star_color(star.type, (1) + ((x) * (x)));
                #line 534
                starfield_push_star(&(result), star);
            }
        }
        #line 538
        if ((*(c)) == ('\n')) {
            height += 6;
            width = starfield_maxi(width, line_width);
            line_width = 0;
            (c)++;
        } else {
            line_width += 2;
        }
    }
    #line 548
    width += 8;
    height += 4;
    #line 551
    int R = starfield_maxi(width, height);
    int x_pad = (4) + ((((R) - (width))) / (2));
    int y_pad = (4) + ((((R) - (height))) / (2));
    #line 555
    for (int i = 0; (i) < (starfield_stars_len(&(result))); (i)++) {
        starfield_Star (*s) = (result.stars) + (i);
        s->rect.pos.x = (((s->rect.pos.x) + (x_pad))) / (R);
        s->rect.pos.y = (((s->rect.pos.y) + (y_pad))) / (R);
        s->rect.size.x = (((s->type->size.x) * (s->type->tex.size.x)) * (s->rect.size.x)) / (starfield_ImageSize.x);
        s->rect.size.y = (((s->type->size.y) * (s->type->tex.size.y)) * (s->rect.size.y)) / (starfield_ImageSize.y);
    }
    #line 563
    starfield_Tex star_count_noise = starfield_make_tex((noir_int2){8, 8});
    float density = starfield_square((starfield_random_normal()) + (2));
    for (starfield_PixelIter it = starfield_pixel_iter_begin_tex(&(star_count_noise), (starfield_Rect){0}); starfield_pixel_iter_next(&(it));) {
        #line 567
        it.pixel->r = (float)(starfield_random_poisson(fabsf((density) + (starfield_random_normal()))));
    }
    #line 571
    int tiles = 25;
    float w = (1.000000f) / (tiles);
    float background_star_size = 0.005000f;
    noir_float2 xy = {(w) / (2.000000f), (w) / (2.000000f)};
    for (int i = 0; (i) < (tiles); (i)++) {
        for (int j = 0; (j) < (tiles); (j)++) {
            float count = starfield_max(1.000000f, starfield_tex_lookup(&(star_count_noise), xy).r);
            for (int k = 0; (k) < (count); (k)++) {
                float size = starfield_max((1.000000f) / (starfield_ImageSize.x), ((starfield_random_normal()) * (background_star_size)) * ((((1) + (count)) - ((int)(count)))));
                #line 581
                starfield_push_star(&(result), (starfield_Star){.rect = {.pos = starfield_add2(xy, (noir_float2){(((starfield_random01()) - (0.500000f))) * (w), (((starfield_random01()) - (0.500000f))) * (w)}), .size = {size, size}, .rot = starfield_random_unit_vector2()}, .type = (starfield_star_types) + (1), .color = starfield_random_star_color((starfield_star_types) + (1), (size) * (((16) + ((4) * (count)))))});
            }
            #line 592
            xy.x += w;
        }
        #line 595
        xy.x = (w) / (2);
        xy.y += w;
    }
    #line 599
    starfield_free_tex(&(star_count_noise));
    #line 601
    result.star_count = starfield_stars_len(&(result));
    return result;
}

#line 763
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

#line 32 "C:\\code\\starfield\\starfield\\image.ion"
void starfield_image_copy_to(starfield_Image (*dest), starfield_Image (*src)) {
    assert((src->size.x) == (dest->size.x));
    assert((src->size.y) == (dest->size.y));
    memcpy(dest->pixels, src->pixels, ((src->size.x) * (src->size.y)) * (sizeof(starfield_Color)));
}

#line 756 "C:\\code\\starfield\\starfield\\starfield.ion"
void starfield_draw_starfield(starfield_Image (*dest), starfield_Starfield (*starfield)) {
    for (llong i = (starfield_starfield_len(starfield)) - (1); (i) >= (0); (i)--) {
        starfield_Star (*star) = (starfield->stars) + (i);
        starfield_draw_tex_multiply(dest, star->rect, &(star->type->tex), star->color);
    }
}

#line 297 "C:\\code\\starfield\\starfield\\filter.ion"
void starfield_diffraction(starfield_Image (*img_dest), float alpha, float radius, noir_float2 transform) {
    #line 300
    noir_float2 a = starfield_rotate((noir_float2){-(0.500000f), -(0.500000f)}, transform);
    noir_float2 b = starfield_rotate((noir_float2){0.500000f, -(0.500000f)}, transform);
    noir_float2 c = starfield_rotate((noir_float2){-(0.500000f), 0.500000f}, transform);
    noir_float2 d = starfield_rotate((noir_float2){0.500000f, 0.500000f}, transform);
    #line 305
    float x_min = starfield_min4(a.x, b.x, c.x, d.x);
    float x_max = starfield_max4(a.x, b.x, c.x, d.x);
    float y_min = starfield_min4(a.y, b.y, c.y, d.y);
    float y_max = starfield_max4(a.y, b.y, c.y, d.y);
    float x = (x_max) - (x_min);
    float y = (y_max) - (y_min);
    #line 312
    starfield_Image transformed_img = starfield_transform_image(img_dest, transform);
    starfield_Image (*img) = &(transformed_img);
    #line 315
    float inner_radius = (radius) * (0.250000f);
    float outer_radius = (radius) / (1.400000f);
    #line 318
    int pixel_count = (img->size.x) * (img->size.y);
    #line 320
    float (*scratch) = starfield_xcalloc(starfield_maxi(img->size.x, img->size.y), sizeof(float));
    float (*planes) = starfield_planarise(img);
    float (*transpose) = starfield_xcalloc(pixel_count, sizeof(float));
    #line 324
    float (*red) = planes;
    starfield_diffract_plane(red, scratch, transpose, img->size, inner_radius, outer_radius);
    starfield_diffract_plane(transpose, scratch, 0, img->size, inner_radius, outer_radius);
    #line 329
    for (int i = 0; (i) < (img->size.x); (i)++) {
        for (int j = 0; (j) < (img->size.y); (j)++) {
            red[(i) + ((j) * (img->size.x))] += transpose[(j) + ((i) * (img->size.y))];
        }
    }
    #line 336
    float (*green) = (planes) + (pixel_count);
    starfield_diffract_plane(green, scratch, transpose, img->size, (inner_radius) * (1.100000f), (outer_radius) * (1.200000f));
    starfield_diffract_plane(transpose, scratch, 0, img->size, (inner_radius) * (1.100000f), (outer_radius) * (1.200000f));
    #line 340
    for (int i = 0; (i) < (img->size.x); (i)++) {
        for (int j = 0; (j) < (img->size.y); (j)++) {
            green[(i) + ((j) * (img->size.x))] += transpose[(j) + ((i) * (img->size.y))];
        }
    }
    #line 347
    float (*blue) = (planes) + ((2) * (pixel_count));
    starfield_diffract_plane(blue, scratch, transpose, img->size, (inner_radius) * (1.200000f), (outer_radius) * (1.400000f));
    starfield_diffract_plane(transpose, scratch, 0, img->size, (inner_radius) * (1.200000f), (outer_radius) * (1.400000f));
    #line 351
    for (int i = 0; (i) < (img->size.x); (i)++) {
        for (int j = 0; (j) < (img->size.y); (j)++) {
            blue[(i) + ((j) * (img->size.x))] += transpose[(j) + ((i) * (img->size.y))];
        }
    }
    #line 357
    if ((img->pixels) == (img_dest->pixels)) {
        for (int i = 0; (i) < (pixel_count); (i)++) {
            img_dest->pixels[i].r += (alpha) * (red[i]);
            img_dest->pixels[i].g += (alpha) * (green[i]);
            img_dest->pixels[i].b += (alpha) * (blue[i]);
        }
    } else {
        noir_float2 scale = {(1.000000f) / (x), (1.000000f) / (y)};
        transform = (noir_float2){(transform.x) / (starfield_magnitude2(transform)), (transform.y) / (starfield_magnitude2(transform))};
        noir_float2 offset = {0.500000f, 0.500000f};
        for (starfield_PixelIter it = starfield_pixel_iter_begin(img_dest, (starfield_Rect){0}); starfield_pixel_iter_next(&(it));) {
            noir_float2 pos = starfield_add2(starfield_mul2(starfield_rotate(starfield_sub2(it.pos, offset), transform), scale), offset);
            #line 370
            it.pixel->r += (alpha) * (starfield_sample_linear(red, img->size, pos));
            it.pixel->g += (alpha) * (starfield_sample_linear(green, img->size, pos));
            it.pixel->b += (alpha) * (starfield_sample_linear(blue, img->size, pos));
        }
        #line 375
        starfield_free_image(img);
    }
    #line 378
    free(scratch);
    free(planes);
}

#line 173 "C:\\code\\starfield\\starfield\\math.ion"
noir_float2 starfield_random_unit_vector2(void) {
    float theta = (starfield_random01()) * (STARFIELD_Tau);
    return (noir_float2){cosf(theta), sinf(theta)};
}

#line 51 "C:\\code\\starfield\\starfield\\filter.ion"
void starfield_blur_to(starfield_Image (*dest), starfield_Image (*src), float radius) {
    assert((dest->size.x) == (src->size.x));
    assert((dest->size.y) == (src->size.y));
    #line 55
    starfield_Image temp = starfield_make_image((noir_int2){src->size.y, src->size.x});
    starfield_Color (*scratch) = starfield_xcalloc(starfield_maxi(src->size.x, src->size.y), sizeof(starfield_Color));
    #line 58
    for (int y = 0; (y) < (src->size.y); (y)++) {
        starfield_Color (*row_src) = (src->pixels) + ((y) * (src->size.x));
        starfield_Color (*row_dest) = (dest->pixels) + ((y) * (dest->size.x));
        starfield_blur_row(scratch, row_src, src->size.x, radius);
        starfield_blur_row(row_dest, scratch, src->size.x, radius);
        starfield_blur_row(scratch, row_dest, src->size.x, radius);
        starfield_blur_transpose((temp.pixels) + (y), temp.size.x, scratch, src->size.x);
    }
    #line 67
    for (int y = 0; (y) < (temp.size.y); (y)++) {
        starfield_Color (*row) = (temp.pixels) + ((y) * (temp.size.x));
        starfield_blur_row(scratch, row, temp.size.x, radius);
        starfield_blur_row(row, scratch, temp.size.x, radius);
        starfield_blur_row(scratch, row, temp.size.x, radius);
        starfield_blur_transpose((dest->pixels) + (y), dest->size.x, scratch, temp.size.x);
    }
    #line 75
    starfield_free_image(&(temp));
    free(scratch);
}

#line 220 "C:\\code\\starfield\\starfield\\image.ion"
starfield_Color starfield_image_fetch(starfield_Image (*img), noir_int2 pos) {
    if ((((((img->pixels) == (0)) || ((pos.x) < (0))) || ((pos.x) >= (img->size.x))) || ((pos.y) < (0))) || ((pos.y) >= (img->size.y))) {
        assert(0);
        return (starfield_Color){0};
    }
    #line 226
    assert(((pos.x) + ((pos.y) * (img->size.x))) < ((img->size.x) * (img->size.y)));
    return img->pixels[(pos.x) + ((pos.y) * (img->size.x))];
}

#line 223 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Color starfield_color_mul(starfield_Color a, starfield_Color b) {
    return (starfield_Color){(a.r) * (b.r), (a.g) * (b.g), (a.b) * (b.b), (a.a) * (b.a)};
}

#line 196
starfield_Color starfield_color_lerp(starfield_Color a, starfield_Color b, float t) {
    return (starfield_Color){starfield_lerp(a.r, b.r, t), starfield_lerp(a.g, b.g, t), starfield_lerp(a.b, b.b, t), starfield_lerp(a.a, b.a, t)};
}

#line 205
starfield_Color starfield_color_add(starfield_Color a, starfield_Color b) {
    return (starfield_Color){(a.r) + (b.r), (a.g) + (b.g), (a.b) + (b.b), (a.a) + (b.a)};
}

#line 38 "C:\\code\\starfield\\starfield\\image.ion"
void starfield_image_to_rgb8(starfield_RGB8 (*dest), noir_int2 size, starfield_Image (*src)) {
    assert((src->size.x) == (size.x));
    assert((src->size.y) == (size.y));
    starfield_Color (*src_end) = (src->pixels) + ((src->size.x) * (src->size.y));
    for (starfield_Color (*src_it) = src->pixels; (src_it) != (src_end); (src_it)++) {
        *(dest) = starfield_color_to_rgb8(*(src_it));
        (dest)++;
    }
}

#line 45 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_min(float a, float b) {
    return (((a) < (b)) ? a : b);
}

#line 41
float starfield_max(float a, float b) {
    return (((a) > (b)) ? a : b);
}

#line 341 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_StarsHeader (*starfield_stars_header(starfield_Star (*stars))) {
    return (stars ? (starfield_StarsHeader *)(((((char *)(stars))) - (offsetof(starfield_StarsHeader, data)))) : 0);
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

noir_float2 (starfield_perlin_gradients[STARFIELD_perlin_gradient_count]);
#line 41 "C:\\code\\starfield\\starfield\\starfield.ion"
void (*starfield_xcalloc(size_t count, size_t size)) {
    void (*result) = calloc(count, size);
    if (!(result)) {
        printf("Failed to calloc");
        assert(0);
        exit(1);
    }
    return result;
}

#line 251
bool starfield_is_zero(void const ((*buf)), size_t len) {
    char const ((*p)) = (char const (*))(buf);
    if (*(p)) {
        return false;
    }
    #line 257
    return (memcmp((p) + (1), buf, (len) - (1))) == (0);
}

#line 184
noir_float2 starfield_rect_absolute(starfield_Rect rect, noir_float2 rel_pos) {
    noir_float2 centered_pos = starfield_sub2(rel_pos, (noir_float2){0.500000f, 0.500000f});
    noir_float2 scaled_pos = starfield_mul2(centered_pos, rect.size);
    noir_float2 rot_pos = starfield_rotate(scaled_pos, (noir_float2){rect.rot.x, -(rect.rot.y)});
    noir_float2 shift_pos = starfield_add2(rot_pos, rect.pos);
    return shift_pos;
}

#line 49 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_min4(float a, float b, float c, float d) {
    return starfield_min(starfield_min(a, b), starfield_min(c, d));
}

float starfield_max4(float a, float b, float c, float d) {
    return starfield_max(starfield_max(a, b), starfield_max(c, d));
}

#line 176 "C:\\code\\starfield\\starfield\\starfield.ion"
noir_float2 starfield_rect_relative(starfield_Rect rect, noir_float2 abs_pos) {
    noir_float2 shift_pos = starfield_sub2(abs_pos, rect.pos);
    noir_float2 rot_pos = starfield_rotate(shift_pos, rect.rot);
    noir_float2 scaled_pos = starfield_div2(rot_pos, rect.size);
    noir_float2 result = starfield_add2(scaled_pos, (noir_float2){0.500000f, 0.500000f});
    return result;
}

#line 89 "C:\\code\\starfield\\starfield\\math.ion"
noir_float2 starfield_sub2(noir_float2 a, noir_float2 b) {
    return (noir_float2){(a.x) - (b.x), (a.y) - (b.y)};
}

#line 148 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Rect starfield_all_rect(void) {
    return (starfield_Rect){.pos = {0.500000f, 0.500000f}, .size = {1, 1}, .rot = {1, 0}};
}

#line 23 "C:\\code\\starfield\\starfield\\math.ion"
int32_t starfield_clampi(int32_t a, int32_t b, int32_t x) {
    return (((x) < (a)) ? a : (((x) > (b)) ? b : x));
}

#line 81
noir_float2 starfield_add2(noir_float2 a, noir_float2 b) {
    return (noir_float2){(a.x) + (b.x), (a.y) + (b.y)};
}

#line 167 "C:\\code\\starfield\\starfield\\starfield.ion"
bool starfield_inside_normal_rect(noir_float2 pos) {
    return ((((pos.x) >= (0)) && ((pos.x) < (1))) && ((pos.y) >= (0))) && ((pos.y) < (1));
}

#line 168 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_random01(void) {
    uint r = (starfield_random()) & (STARFIELD_int_23_mask);
    return (r) * (STARFIELD_int_23_reciprocal);
}

#line 386 "C:\\code\\starfield\\starfield\\starfield.ion"
char const ((*starfield_consume_star(char const ((*c)), starfield_Star (*star)))) {
    int next = 0;
    if ((*(c)) == ('\n')) {
        (c)++;
    }
    #line 392
    if ((*(c)) == (' ')) {
        #line 394
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
        #line 434
        star->type = (starfield_star_types) + (STARFIELD_StarType_BigSpace);
        next = (sizeof("\xE3\x80\x80")) - (1);
    } else {
        assert(0);
        star->type = 0;
        next = 1;
    }
    #line 442
    starfield_init_star_type(star->type);
    return (c) + (next);
}

#line 17 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_clamp(float a, float b, float x) {
    return (((x) < (a)) ? a : (((x) > (b)) ? b : x));
}

#line 13
float starfield_square(float x) {
    return (x) * (x);
}

#line 485 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Color starfield_random_star_color(starfield_StarType (*type), float alpha) {
    int offset = 8;
    float r = (offset) + ((starfield_random_normal()) * (((STARFIELD_star_color_count) / (7))));
    float x = starfield_clamp(0, (STARFIELD_star_color_count) - (1), r);
    #line 490
    if ((type->id) == (12)) {
        x = starfield_clamp(8, 11, x);
    }
    #line 494
    int xi = (int)(x);
    float xf = (x) - (xi);
    starfield_Color color = starfield_color_lerp((starfield_star_colors[xi]), (starfield_star_colors[(xi) + (1)]), xf);
    color.a = ((starfield_random01()) * ((((float)(xi)) / (STARFIELD_star_color_count)))) * (alpha);
    color.r *= color.a;
    color.g *= color.a;
    color.b *= color.a;
    return color;
}

#line 358
void starfield_push_star(starfield_Starfield (*starfield), starfield_Star star) {
    if (!(starfield->stars)) {
        int initial_cap = 32;
        ullong alloc_size = ((sizeof(starfield_Star)) * (initial_cap)) + (sizeof(starfield_StarsHeader));
        starfield_StarsHeader (*header) = starfield_xmalloc(alloc_size);
        memset(header, 0, alloc_size);
        header->cap = initial_cap;
        header->len = 0;
        starfield->stars = header->data;
    }
    #line 369
    starfield_StarsHeader (*header) = starfield_stars_header(starfield->stars);
    #line 371
    if ((header->len) == (header->cap)) {
        llong new_cap = (header->cap) * (2);
        header = starfield_xrealloc(header, ((sizeof(starfield_Star)) * (new_cap)) + (sizeof(starfield_StarsHeader)));
        starfield->stars = header->data;
        header->cap = new_cap;
    }
    #line 378
    starfield_init_star_type(star.type);
    starfield->stars[(header->len)++] = star;
}

#line 33 "C:\\code\\starfield\\starfield\\math.ion"
int32_t starfield_maxi(int32_t a, int32_t b) {
    return (((a) > (b)) ? a : b);
}

#line 382 "C:\\code\\starfield\\starfield\\starfield.ion"
int starfield_stars_len(starfield_Starfield (*starfield)) {
    return (int)(starfield_stars_header(starfield->stars)->len);
}

#line 67
starfield_Tex starfield_make_tex(noir_int2 size) {
    assert(starfield_is_power_2(size.x));
    assert((size.x) == (size.y));
    #line 71
    void (*pixels) = starfield_xcalloc((((size.x) * (size.y)) * (4)) / (3), sizeof(starfield_Color));
    return (starfield_Tex){.size = size, .lod_levels = 1, .pixels = pixels};
}

#line 62 "C:\\code\\starfield\\starfield\\image.ion"
starfield_PixelIter starfield_pixel_iter_begin_tex(starfield_Tex (*tex), starfield_Rect rect) {
    #line 64
    #line 65
    return starfield_pixel_iter_begin((starfield_Image *)(tex), rect);
}

#line 182 "C:\\code\\starfield\\starfield\\math.ion"
int starfield_random_poisson(float alpha) {
    int result = -(1);
    float L = expf(-(alpha));
    float p = 1.000000f;
    do {
        p *= starfield_random01();
        (result)++;
    } while ((p) > (L));
    return result;
}

#line 129 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Color starfield_tex_lookup(starfield_Tex (*tex), noir_float2 pos) {
    return starfield_image_sample_linear(&((starfield_Image){tex->pixels, tex->size}), pos);
}

starfield_StarType (starfield_star_types[STARFIELD_StarTypeCount]) = {0};
#line 79
void starfield_free_tex(starfield_Tex (*tex)) {
    assert(tex->pixels);
    free(tex->pixels);
    tex->pixels = 0;
    tex->size = (noir_int2){0, 0};
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

#line 353 "C:\\code\\starfield\\starfield\\starfield.ion"
int64_t starfield_starfield_len(starfield_Starfield (*starfield)) {
    starfield_StarsHeader (*h) = starfield_stars_header(starfield->stars);
    return (h ? h->len : 0);
}

#line 291
void starfield_draw_tex_multiply(starfield_Image (*dest), starfield_Rect target, starfield_Tex (*tex), starfield_Color multiply_color) {
    float lod = starfield_compute_lod_level(dest->size, target.size, tex->size);
    for (starfield_PixelIter it = starfield_pixel_iter_begin(dest, target); starfield_pixel_iter_next(&(it));) {
        starfield_Color rgba = starfield_tex_lookup_lod(tex, it.pos, lod);
        rgba = starfield_color_mul(rgba, multiply_color);
        *(it.pixel) = starfield_blend(*(it.pixel), rgba);
    }
}

#line 156
noir_float2 starfield_rotate(noir_float2 v, noir_float2 cos_sin_theta) {
    if ((cos_sin_theta.x) && (cos_sin_theta.y)) {
        return (noir_float2){((v.x) * (cos_sin_theta.x)) - ((v.y) * (cos_sin_theta.y)), ((v.x) * (cos_sin_theta.y)) + ((v.y) * (cos_sin_theta.x))};
    }
    #line 164
    return v;
}

#line 265 "C:\\code\\starfield\\starfield\\filter.ion"
starfield_Image starfield_transform_image(starfield_Image (*src), noir_float2 transform) {
    if (starfield_is_identity_transform(transform)) {
        return *(src);
    }
    #line 270
    noir_float2 a = starfield_rotate((noir_float2){-(0.500000f), -(0.500000f)}, transform);
    noir_float2 b = starfield_rotate((noir_float2){0.500000f, -(0.500000f)}, transform);
    noir_float2 c = starfield_rotate((noir_float2){-(0.500000f), 0.500000f}, transform);
    noir_float2 d = starfield_rotate((noir_float2){0.500000f, 0.500000f}, transform);
    #line 275
    float x_min = starfield_min4(a.x, b.x, c.x, d.x);
    float x_max = starfield_max4(a.x, b.x, c.x, d.x);
    float y_min = starfield_min4(a.y, b.y, c.y, d.y);
    float y_max = starfield_max4(a.y, b.y, c.y, d.y);
    float x = (x_max) - (x_min);
    float y = (y_max) - (y_min);
    #line 282
    noir_int2 size = {(int)((x) * (src->size.x)), (int)((y) * (src->size.y))};
    starfield_Image result = starfield_make_image(size);
    #line 285
    starfield_Rect inverse_rect = starfield_all_rect();
    inverse_rect.size = (noir_float2){(1.000000f) / (x), (1.000000f) / (y)};
    float m = starfield_magnitude2(transform);
    inverse_rect.rot = (noir_float2){(transform.x) / (m), (-(transform.y)) / (m)};
    #line 290
    for (starfield_PixelIter it = starfield_pixel_iter_begin(&(result), inverse_rect); starfield_pixel_iter_next(&(it));) {
        *(it.pixel) = starfield_image_sample_linear(src, it.pos);
    }
    #line 294
    return result;
}

#line 248
float (*starfield_planarise(starfield_Image (*img))) {
    int pixel_count = (img->size.x) * (img->size.y);
    float (*pixels) = starfield_xcalloc(pixel_count, (sizeof(float)) * (3));
    #line 252
    for (int i = 0; (i) < (pixel_count); (i)++) {
        pixels[i] = img->pixels[i].r;
        pixels[(i) + (pixel_count)] = img->pixels[i].g;
        pixels[(i) + ((2) * (pixel_count))] = img->pixels[i].b;
    }
    #line 258
    return pixels;
}

#line 229
void starfield_diffract_plane(float (*plane), float (*scratch), float (*tranposed_src), noir_int2 size, float inner_radius, float outer_radius) {
    for (int y = 0; (y) < (size.y); (y)++) {
        float (*plane_row) = (plane) + ((y) * (size.x));
        #line 233
        if (tranposed_src) {
            float (*tranpose_cursor) = (tranposed_src) + (y);
            for (int i = 0; (i) < (size.x); (i)++) {
                *(tranpose_cursor) = plane_row[i];
                tranpose_cursor += size.x;
            }
        }
        #line 241
        for (int i = 0; (i) < (STARFIELD_diffraction_iters); (i)++) {
            starfield_diffract_row(scratch, plane_row, size.x, inner_radius, outer_radius);
            starfield_diffract_row(plane_row, scratch, size.x, inner_radius, outer_radius);
        }
    }
}

#line 141 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_magnitude2(noir_float2 v) {
    return sqrtf(starfield_dot2(v, v));
}

#line 65
noir_float2 starfield_mul2(noir_float2 a, noir_float2 b) {
    return (noir_float2){(a.x) * (b.x), (a.y) * (b.y)};
}

#line 178 "C:\\code\\starfield\\starfield\\image.ion"
float starfield_sample_linear(float (*pixels), noir_int2 size, noir_float2 pos) {
    if ((pixels) == (0)) {
        return (float){0};
    }
    #line 183
    pos.x = (((pos.x) * (size.x))) - (0.500000f);
    pos.y = (((pos.y) * (size.y))) - (0.500000f);
    #line 186
    noir_int2 vi = starfield_float2_to_int2(pos);
    noir_float2 vf = {(pos.x) - (vi.x), (pos.y) - (vi.y)};
    #line 189
    noir_int2 a = vi;
    noir_int2 b = starfield_add2i(a, (noir_int2){1, 0});
    noir_int2 c = starfield_add2i(a, (noir_int2){0, 1});
    noir_int2 d = starfield_add2i(a, (noir_int2){1, 1});
    #line 194
    a.x = starfield_wrapi(a.x, size.x);
    b.x = starfield_wrapi(b.x, size.x);
    c.x = starfield_wrapi(c.x, size.x);
    d.x = starfield_wrapi(d.x, size.x);
    a.y = starfield_wrapi(a.y, size.y);
    b.y = starfield_wrapi(b.y, size.y);
    c.y = starfield_wrapi(c.y, size.y);
    d.y = starfield_wrapi(d.y, size.y);
    #line 203
    float A = pixels[(a.x) + ((a.y) * (size.x))];
    float B = pixels[(b.x) + ((b.y) * (size.x))];
    float C = pixels[(c.x) + ((c.y) * (size.x))];
    float D = pixels[(d.x) + ((d.y) * (size.x))];
    #line 208
    float AB = starfield_lerp(A, B, vf.x);
    float CD = starfield_lerp(C, D, vf.x);
    float ABCD = starfield_lerp(AB, CD, vf.y);
    #line 212
    return ABCD;
}

#line 14
void starfield_free_image(starfield_Image (*img)) {
    assert(img->pixels);
    free(img->pixels);
    img->pixels = 0;
    img->size = (noir_int2){0, 0};
}

#line 13 "C:\\code\\starfield\\starfield\\filter.ion"
void starfield_blur_row(starfield_Color (*dest), starfield_Color (*src), int len, float radius) {
    assert((radius) > (0));
    assert((((len) - (2)) - (radius)) > (0));
    int r = (int)(radius);
    float a = (radius) - (r);
    #line 19
    float r_rcp = (1.000000f) / ((((2.000000f) * (radius)) + (1.000000f)));
    starfield_Color c_acc = starfield_color_mul1(starfield_blur_fetch(src, len, (r) + (1)), a);
    #line 22
    for (int i = 0; (i) <= (r); (i)++) {
        c_acc = starfield_color_add(c_acc, starfield_blur_fetch(src, len, i));
    }
    #line 26
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

#line 205 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_lerp(float a, float b, float t) {
    return ((((1) - (t))) * (a)) + ((t) * (b));
}

#line 271 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_RGB8 starfield_color_to_rgb8(starfield_Color color) {
    starfield_RGB8 result = {.r = (uint8_t)((starfield_srgb(color.r)) * (255.000000f)), .g = (uint8_t)((starfield_srgb(color.g)) * (255.000000f)), .b = (uint8_t)((starfield_srgb(color.b)) * (255.000000f))};
    #line 277
    return result;
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

#line 73 "C:\\code\\starfield\\starfield\\math.ion"
noir_float2 starfield_div2(noir_float2 a, noir_float2 b) {
    return (noir_float2){(a.x) / (b.x), (a.y) / (b.y)};
}

#line 159
uint32_t starfield_random(void) {
    starfield_random_state ^= (starfield_random_state) << (13);
    starfield_random_state ^= (starfield_random_state) >> (17);
    starfield_random_state ^= (starfield_random_state) << (5);
    return starfield_random_state;
}

#line 679 "C:\\code\\starfield\\starfield\\starfield.ion"
void starfield_init_star_type(starfield_StarType (*type)) {
    int idx = (int32_t)(((type) - (starfield_star_types)));
    assert((idx) >= (0));
    assert((idx) < (STARFIELD_StarTypeCount));
    #line 684
    if (type->tex.pixels) {
        assert((type->tex.size.x) != (0));
        assert((type->tex.size.y) != (0));
        return;
    }
    #line 690
    type->id = idx;
    #line 692
    switch (idx) {
    case 0: {
        type->tex = starfield_make_tex((noir_int2){8, 8});
        type->size = (noir_float2){1, 1};
        starfield_draw_outline(type->tex.pixels, type->tex.size, (starfield_Color){0, 1, 0, 0.500000f});
        break;
    }
    case 1: {
        #line 698
        type->tex = starfield_make_tex((noir_int2){32, 32});
        type->size = (noir_float2){1, 1};
        starfield_draw_simple_star(type->tex.pixels, type->tex.size);
        break;
    }
    case 2: {
        #line 702
        type->tex = starfield_make_tex((noir_int2){32, 32});
        type->size = (noir_float2){1, 1};
        starfield_draw_simple_star(type->tex.pixels, type->tex.size);
        break;
    }
    case 3: {
        #line 706
        type->tex = starfield_make_tex((noir_int2){32, 32});
        type->size = (noir_float2){1, 1};
        starfield_draw_simple_star(type->tex.pixels, type->tex.size);
        break;
    }
    case 4: {
        #line 710
        type->tex = starfield_make_tex((noir_int2){32, 32});
        type->size = (noir_float2){1, 1};
        starfield_draw_simple_star(type->tex.pixels, type->tex.size);
        break;
    }
    case 5: {
        #line 714
        type->tex = starfield_make_tex((noir_int2){64, 64});
        type->size = (noir_float2){1, 1};
        starfield_draw_simple_star(type->tex.pixels, type->tex.size);
        break;
    }
    case 6: {
        #line 718
        type->tex = starfield_make_tex((noir_int2){64, 64});
        type->size = (noir_float2){1, 1};
        starfield_draw_simple_star(type->tex.pixels, type->tex.size);
        break;
    }
    case 7: {
        #line 722
        type->tex = starfield_make_tex((noir_int2){64, 64});
        type->size = (noir_float2){1, 1};
        starfield_draw_simple_star(type->tex.pixels, type->tex.size);
        break;
    }
    case 8: {
        #line 726
        type->tex = starfield_make_tex((noir_int2){64, 64});
        type->size = (noir_float2){1, 1};
        starfield_draw_simple_star(type->tex.pixels, type->tex.size);
        break;
    }
    case 9: {
        #line 730
        type->tex = starfield_make_tex((noir_int2){64, 64});
        type->size = (noir_float2){1, 1};
        starfield_draw_simple_star(type->tex.pixels, type->tex.size);
        break;
    }
    case 10: {
        #line 734
        type->tex = starfield_make_tex((noir_int2){64, 64});
        type->size = (noir_float2){1, 1};
        break;
    }
    case 11: {
        #line 737
        type->tex = starfield_make_tex((noir_int2){64, 64});
        type->size = (noir_float2){1, 1};
        break;
    }
    case 12: {
        #line 740
        type->tex = starfield_make_tex((noir_int2){256, 256});
        type->size = (noir_float2){0.333300f, 0.333300f};
        type->nonsquare = true;
        starfield_draw_spiral_galaxy(&(type->tex));
        break;
    }
    case 13: {
        #line 745
        type->tex = starfield_make_tex((noir_int2){8, 8});
        type->size = (noir_float2){1, 1};
        starfield_draw_outline(type->tex.pixels, type->tex.size, (starfield_Color){1, 0, 0, 0.500000f});
        break;
    }
    default: {
        #line 748
        {
            assert(0);
        }
        break;
    }
    }
    #line 753
    starfield_generate_lods(&(type->tex));
}

starfield_Color (starfield_star_colors[15]) = {{(0xff) / (255.000000f), (0x1) / (255.000000f), 0.000000f, 1.000000f}, {(0xff) / (255.000000f), (0xf) / (255.000000f), 0.000000f, 1.000000f}, {(0xff) / (255.000000f), (0x29) / (255.000000f), (0x3) / (255.000000f), 1.000000f}, {(0xff) / (255.000000f), (0x49) / (255.000000f), (0xd) / (255.000000f), 1.000000f}, {(0xff) / (255.000000f), (0x6a) / (255.000000f), (0x1f) / (255.000000f), 1.000000f}, {(0xff) / (255.000000f), (0xa6) / (255.000000f), (0x59) / (255.000000f), 1.000000f}, {(0xff) / (255.000000f), (0xc0) / (255.000000f), (0x7f) / (255.000000f), 1.000000f}, {(0xff) / (255.000000f), (0xd8) / (255.000000f), (0xa8) / (255.000000f), 1.000000f}, {(0xff) / (255.000000f), (0xed) / (255.000000f), (0xd3) / (255.000000f), 1.000000f}, {1, 1, 1, 1.000000f}, {(0xdb) / (255.000000f), (0xe9) / (255.000000f), (0xff) / (255.000000f), 1.000000f}, {(0x8e) / (255.000000f), (0xb4) / (255.000000f), (0xff) / (255.000000f), 1.000000f}, {(0x6e) / (255.000000f), (0x9a) / (255.000000f), (0xff) / (255.000000f), 1.000000f}, {(0x45) / (255.000000f), (0x73) / (255.000000f), (0xff) / (255.000000f), 1.000000f}, {(0x2f) / (255.000000f), (0x5c) / (255.000000f), (0xff) / (255.000000f), 1.000000f}};
#line 30
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

#line 20
void (*starfield_xrealloc(void (*mem), size_t size)) {
    void (*result) = realloc(mem, size);
    if (!(result)) {
        printf("Failed to realloc");
        assert(0);
        exit(1);
    }
    return result;
}

#line 5 "C:\\code\\starfield\\starfield\\math.ion"
bool starfield_is_power_2(int32_t x) {
    return ((x) != (0)) && (((x) & (((x) - (1)))) == (0));
}

#line 141 "C:\\code\\starfield\\starfield\\image.ion"
starfield_Color starfield_image_sample_linear(starfield_Image (*img), noir_float2 pos) {
    if ((img->pixels) == (0)) {
        return (starfield_Color){0};
    }
    #line 146
    pos.x = (((pos.x) * (img->size.x))) - (0.500000f);
    pos.y = (((pos.y) * (img->size.y))) - (0.500000f);
    #line 149
    noir_int2 vi = starfield_float2_to_int2(pos);
    noir_float2 vf = {(pos.x) - (vi.x), (pos.y) - (vi.y)};
    #line 152
    noir_int2 a = vi;
    noir_int2 b = starfield_add2i(a, (noir_int2){1, 0});
    noir_int2 c = starfield_add2i(a, (noir_int2){0, 1});
    noir_int2 d = starfield_add2i(a, (noir_int2){1, 1});
    #line 157
    a.x = starfield_wrapi(a.x, img->size.x);
    b.x = starfield_wrapi(b.x, img->size.x);
    c.x = starfield_wrapi(c.x, img->size.x);
    d.x = starfield_wrapi(d.x, img->size.x);
    a.y = starfield_wrapi(a.y, img->size.y);
    b.y = starfield_wrapi(b.y, img->size.y);
    c.y = starfield_wrapi(c.y, img->size.y);
    d.y = starfield_wrapi(d.y, img->size.y);
    #line 166
    starfield_Color A = img->pixels[(a.x) + ((a.y) * (img->size.x))];
    starfield_Color B = img->pixels[(b.x) + ((b.y) * (img->size.x))];
    starfield_Color C = img->pixels[(c.x) + ((c.y) * (img->size.x))];
    starfield_Color D = img->pixels[(d.x) + ((d.y) * (img->size.x))];
    #line 171
    starfield_Color AB = starfield_color_lerp(A, B, vf.x);
    starfield_Color CD = starfield_color_lerp(C, D, vf.x);
    starfield_Color ABCD = starfield_color_lerp(AB, CD, vf.y);
    #line 175
    return ABCD;
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

#line 86 "C:\\code\\starfield\\starfield\\starfield.ion"
float starfield_compute_lod_level(noir_int2 dest_size, noir_float2 target_size, noir_int2 src_size) {
    float step_x = fabsf((src_size.x) / (((dest_size.x) * (target_size.x))));
    float step_y = fabsf((src_size.y) / (((dest_size.y) * (target_size.y))));
    return starfield_max(0, log2f(starfield_max(step_x, step_y)));
}

#line 133
starfield_Color starfield_tex_lookup_lod(starfield_Tex (*tex), noir_float2 pos, float lod) {
    int lodi = (int)(lod);
    float lodf = (lod) - (lodi);
    starfield_Image a_lod = starfield_tex_get_lod(tex, lodi);
    starfield_Image b_lod = starfield_tex_get_lod(tex, (lodi) + (1));
    starfield_Color a = starfield_image_sample_linear(&(a_lod), pos);
    if ((lodf) > (0.000150f)) {
        starfield_Color b = starfield_image_sample_linear(&(b_lod), pos);
        return starfield_color_lerp(a, b, lodf);
    }
    #line 144
    return a;
}

#line 241
starfield_Color starfield_blend(starfield_Color dest, starfield_Color src) {
    starfield_Color result = {(src.r) + (((dest.r) * (((1.000000f) - (src.a))))), (src.g) + (((dest.g) * (((1.000000f) - (src.a))))), (src.b) + (((dest.b) * (((1.000000f) - (src.a))))), (src.a) + (((dest.a) * (((1.000000f) - (src.a)))))};
    #line 248
    return result;
}

#line 261 "C:\\code\\starfield\\starfield\\filter.ion"
bool starfield_is_identity_transform(noir_float2 transform) {
    return ((((transform.x) == (0)) || ((transform.x) == (1)))) && (((transform.y) == (0)));
}

#line 184
void starfield_diffract_row(float (*dest), float (*src), int len, float inner_radius, float outer_radius) {
    assert((inner_radius) > (0));
    assert((outer_radius) > (inner_radius));
    #line 188
    int r = (int)(inner_radius);
    int r2 = (int)(outer_radius);
    float a = (inner_radius) - (r);
    float a2 = (outer_radius) - (r2);
    #line 193
    float r_rcp = (1.000000f) / (((2) * (((outer_radius) - (inner_radius)))));
    #line 195
    float c_sub = (starfield_diffract_fetch(src, len, (r) + (1))) * (a);
    float c_acc = (starfield_diffract_fetch(src, len, (r2) + (1))) * (a2);
    #line 198
    for (int i = 0; (i) <= (r2); (i)++) {
        if ((i) <= (r)) {
            c_sub += starfield_diffract_fetch(src, len, i);
        }
        c_acc += starfield_diffract_fetch(src, len, i);
    }
    #line 205
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

#line 127 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_dot2(noir_float2 a, noir_float2 b) {
    return ((a.x) * (b.x)) + ((a.y) * (b.y));
}

#line 57
noir_int2 starfield_float2_to_int2(noir_float2 x) {
    return (noir_int2){(int32_t)(x.x), (int32_t)(x.y)};
}

#line 105
noir_int2 starfield_add2i(noir_int2 a, noir_int2 b) {
    return (noir_int2){(a.x) + (b.x), (a.y) + (b.y)};
}

#line 133 "C:\\code\\starfield\\starfield\\image.ion"
int starfield_wrapi(int x, int m) {
    int result = (x) % (m);
    if ((result) < (0)) {
        result += m;
    }
    return result;
}

#line 232 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Color starfield_color_mul1(starfield_Color a, float b) {
    return (starfield_Color){(a.r) * (b), (a.g) * (b), (a.b) * (b), (a.a) * (b)};
}

#line 5 "C:\\code\\starfield\\starfield\\filter.ion"
starfield_Color starfield_blur_fetch(starfield_Color (*row), int len, int i) {
    if (((i) < (0)) || ((i) >= (len))) {
        return (starfield_Color){0};
    }
    #line 10
    return row[i];
}

#line 214 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Color starfield_color_sub(starfield_Color a, starfield_Color b) {
    return (starfield_Color){(a.r) - (b.r), (a.g) - (b.g), (a.b) - (b.b), (a.a) - (b.a)};
}

#line 260
float starfield_srgb(float val) {
    assert(!(isnan(val)));
    val = starfield_clamp01(val);
    #line 264
    if ((val) <= (0.003131f)) {
        return (val) * (12.920000f);
    }
    #line 268
    return ((1.055000f) * (powf(val, (1.000000f) / (2.400000f)))) - (0.055000f);
}

uint32_t starfield_random_state = 1;
#line 612
void starfield_draw_outline(starfield_Color (*buffer), noir_int2 size, starfield_Color color) {
    for (int i = 0; (i) < (size.x); (i)++) {
        buffer[i] = color;
        buffer[(i) + ((((size.x) - (1))) * (size.y))] = color;
    }
    #line 618
    for (int i = 0; (i) < (size.y); (i)++) {
        buffer[(i) * (size.x)] = color;
        buffer[((i) * (size.x)) + (((size.x) - (1)))] = color;
    }
}

#line 606
void starfield_draw_simple_star(starfield_Color (*buffer), noir_int2 size) {
    size.x -= 1;
    size.y -= 1;
    buffer[((size.x) / (2)) + (((size.x) * (size.y)) / (2))] = (starfield_Color){64, 64, 64, 1};
}

#line 624
void starfield_draw_spiral_galaxy(starfield_Tex (*tex)) {
    starfield_Image (*tex_img) = &((starfield_Image){tex->pixels, tex->size});
    #line 627
    starfield_Starfield (*s) = &((starfield_Starfield){0});
    for (int i = 0; (i) < (20000); (i)++) {
        float w = 0.025000f;
        float x = (starfield_random_normal()) / (16);
        float y = (starfield_random_normal()) / (16);
        #line 634
        if ((starfield_random()) & (1)) {
            x = starfield_lerp(x, (starfield_wrap((x) + ((w) / (2)), w)) - ((w) / (2)), (0.250000f) + ((0.750000f) * (starfield_random01())));
        } else {
            y = starfield_lerp(y, (starfield_wrap((y) + ((w) / (2)), w)) - ((w) / (2)), (0.250000f) + ((0.750000f) * (starfield_random01())));
        }
        #line 641
        float th = starfield_magnitude2((noir_float2){x, y});
        noir_float2 spiral = starfield_mul2s((noir_float2){cosf(((th) * (STARFIELD_Tau)) * (4)), sinf(((th) * (STARFIELD_Tau)) * (4))}, 2);
        #line 645
        float size = ((((STARFIELD_Sqrt2) - (th))) * (starfield_random01())) * (0.020000f);
        #line 647
        starfield_push_star(s, (starfield_Star){.rect = {.pos = starfield_add2s(starfield_rotate((noir_float2){x, y}, spiral), 0.500000f), .size = {size, size}, .rot = starfield_random_unit_vector2()}, .type = (starfield_star_types) + (1), .color = starfield_random_star_color((starfield_star_types) + (1), 0.450000f)});
    }
    #line 658
    starfield_draw_starfield(tex_img, s);
    #line 660
    starfield_Image bloom = starfield_image_copy(tex_img);
    starfield_blur(&(bloom), 8);
    #line 663
    for (starfield_PixelIter it = starfield_pixel_iter_begin_tex(tex, (starfield_Rect){0}); starfield_pixel_iter_next(&(it));) {
        noir_float2 rel = starfield_sub2s(it.pos, 0.500000f);
        float th = starfield_magnitude2(rel);
        noir_float2 spiral = starfield_mul2s((noir_float2){cosf((-(th)) * (STARFIELD_Tau)), sinf((-(th)) * (STARFIELD_Tau))}, 2);
        noir_float2 rel_s = starfield_rotate(rel, spiral);
        float p = (0.500000f) + ((0.500000f) * (starfield_perlin_octaves(rel_s, 12)));
        starfield_Color a = starfield_color_lerp(starfield_star_colors[(STARFIELD_star_color_count) - (2)], (starfield_Color){1, 1, 1, 1}, 0.707000f);
        starfield_Color b = starfield_image_sample_linear(&(bloom), it.pos);
        starfield_Color c = starfield_color_add(a, b);
        starfield_Color d = starfield_color_mul(b, c);
        *(it.pixel) = starfield_color_lerp(*(it.pixel), d, 0.400000f);
    }
    #line 676
    starfield_free_starfield(s);
}

#line 92
void starfield_generate_lods(starfield_Tex (*tex)) {
    assert((tex->size.x) == (tex->size.y));
    tex->lod_levels = starfield_maxi(1, starfield_log2i(tex->size.x));
    #line 96
    starfield_Image blurry = starfield_image_copy(&((starfield_Image){tex->pixels, tex->size}));
    #line 98
    int size = tex->size.x;
    for (int i = 1; (i) < (tex->lod_levels); (i)++) {
        assert((size) >= (1));
        starfield_Image blurry_subrect = {blurry.pixels, {size, size}};
        starfield_Image prev_lod = starfield_tex_get_lod(tex, (i) - (1));
        starfield_blur_to(&(blurry_subrect), &(prev_lod), 0.707000f);
        starfield_Image lod = starfield_tex_get_lod(tex, i);
        #line 106
        for (starfield_PixelIter it = starfield_pixel_iter_begin(&(lod), (starfield_Rect){0}); starfield_pixel_iter_next(&(it));) {
            assert((starfield_image_sample_nearest(&(lod), it.pos).r) == (it.pixel->r));
            *(it.pixel) = starfield_image_sample_nearest(&(blurry_subrect), it.pos);
        }
        #line 111
        size /= 2;
    }
    #line 114
    starfield_free_image(&(blurry));
}

#line 566 "C:\\code\\starfield\\noir\\noir.ion"
void noir_update_combination_key(int dest_key, int src_key1, int src_key2) {
    noir_update_digital_button(&(noir_app.keys[dest_key]), (noir_app.keys[src_key1].down) || (noir_app.keys[src_key2].down));
}

#line 117 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Image starfield_tex_get_lod(starfield_Tex (*tex), int lod) {
    assert((lod) >= (0));
    if ((lod) >= (tex->lod_levels)) {
        return (starfield_Image){0};
    }
    #line 123
    int lod_size = (tex->size.x) >> (lod);
    starfield_Color (*pixels) = (tex->pixels) + ((((((tex->size.x) * (tex->size.x)) - ((lod_size) * (lod_size)))) * (4)) / (3));
    #line 126
    return (starfield_Image){.pixels = pixels, .size = {lod_size, lod_size}};
}

#line 176 "C:\\code\\starfield\\starfield\\filter.ion"
float starfield_diffract_fetch(float (*row), int len, int i) {
    if (((i) < (0)) || ((i) >= (len))) {
        return (float){0};
    }
    #line 181
    return row[i];
}

#line 29 "C:\\code\\starfield\\starfield\\math.ion"
float starfield_clamp01(float x) {
    return starfield_clamp(0, 1, x);
}

#line 477 "C:\\code\\starfield\\starfield\\starfield.ion"
float starfield_wrap(float x, float m) {
    float y = starfield_mod(x, (m) * (2));
    if ((y) > (m)) {
        y -= ((y) - (m));
    }
    return y;
}

#line 69 "C:\\code\\starfield\\starfield\\math.ion"
noir_float2 starfield_mul2s(noir_float2 a, float s) {
    return (noir_float2){(a.x) * (s), (a.y) * (s)};
}

#line 85
noir_float2 starfield_add2s(noir_float2 a, float s) {
    return (noir_float2){(a.x) + (s), (a.y) + (s)};
}

#line 25 "C:\\code\\starfield\\starfield\\image.ion"
starfield_Image starfield_image_copy(starfield_Image (*img)) {
    assert(img->pixels);
    starfield_Image result = starfield_make_image(img->size);
    memcpy(result.pixels, img->pixels, ((img->size.x) * (img->size.y)) * (sizeof(starfield_Color)));
    return result;
}

#line 93 "C:\\code\\starfield\\starfield\\math.ion"
noir_float2 starfield_sub2s(noir_float2 a, float s) {
    return (noir_float2){(a.x) - (s), (a.y) - (s)};
}

#line 819 "C:\\code\\starfield\\starfield\\starfield.ion"
float starfield_perlin_octaves(noir_float2 p, int grid) {
    return (((((((1) / (((((0.500000f) + (0.250000f)) + (0.125000f)) + (0.062500f))))) * (starfield_perlin(p, grid))) * (0.500000f)) + ((starfield_perlin(starfield_mul2s(p, 1.500000f), grid)) * (0.250000f))) + ((starfield_perlin(starfield_mul2s(p, 3.000000f), grid)) * (0.125000f))) + ((starfield_perlin(starfield_mul2s(p, 4.200000f), grid)) * (0.062500f));
}

#line 345
void starfield_free_starfield(starfield_Starfield (*starfield)) {
    starfield_StarsHeader (*h) = starfield_stars_header(starfield->stars);
    if (h) {
        free(h);
        starfield->star_count = 0;
    }
}

#line 9 "C:\\code\\starfield\\starfield\\math.ion"
int starfield_log2i(int x) {
    return (int)(SDL_MostSignificantBitIndex32((uint32_t)(x)));
}

#line 215 "C:\\code\\starfield\\starfield\\image.ion"
starfield_Color starfield_image_sample_nearest(starfield_Image (*img), noir_float2 pos) {
    noir_int2 p = {(int)(roundf(((pos.x) * (img->size.x)) - (0.500000f))), (int)(roundf(((pos.y) * (img->size.y)) - (0.500000f)))};
    return starfield_image_fetch(img, p);
}

#line 467 "C:\\code\\starfield\\starfield\\starfield.ion"
float starfield_mod(float x, float m) {
    if ((x) < (0)) {
        x = (m) - (x);
    }
    float r = (x) / (m);
    float q = (r) - ((int)(r));
    float p = (q) * (m);
    return p;
}

#line 786
float starfield_perlin(noir_float2 p, int gradients_per_side) {
    float grid = (float)(gradients_per_side);
    #line 789
    p.x = starfield_mod((p.x) * (grid), grid);
    p.y = starfield_mod((p.y) * (grid), grid);
    #line 792
    noir_int2 a = starfield_float2_to_int2(p);
    noir_int2 b = starfield_float2_to_int2(starfield_mod2s(starfield_add2(p, (noir_float2){1, 0}), grid));
    noir_int2 c = starfield_float2_to_int2(starfield_mod2s(starfield_add2(p, (noir_float2){0, 1}), grid));
    noir_int2 d = starfield_float2_to_int2(starfield_mod2s(starfield_add2(p, (noir_float2){1, 1}), grid));
    #line 797
    noir_float2 A = starfield_perlin_gradients[(starfield_hash(a)) & (((STARFIELD_perlin_gradient_count) - (1)))];
    noir_float2 B = starfield_perlin_gradients[(starfield_hash(b)) & (((STARFIELD_perlin_gradient_count) - (1)))];
    noir_float2 C = starfield_perlin_gradients[(starfield_hash(c)) & (((STARFIELD_perlin_gradient_count) - (1)))];
    noir_float2 D = starfield_perlin_gradients[(starfield_hash(d)) & (((STARFIELD_perlin_gradient_count) - (1)))];
    #line 802
    noir_float2 pp = {(p.x) - ((int)(p.x)), (p.y) - ((int)(p.y))};
    #line 804
    float u00 = starfield_dot2(A, starfield_sub2(pp, (noir_float2){0, 0}));
    float u10 = starfield_dot2(B, starfield_sub2(pp, (noir_float2){1, 0}));
    float u01 = starfield_dot2(C, starfield_sub2(pp, (noir_float2){0, 1}));
    float u11 = starfield_dot2(D, starfield_sub2(pp, (noir_float2){1, 1}));
    #line 809
    float x = ((((-(2)) * (pp.x)) * (pp.x)) * (pp.x)) + (((3) * (pp.x)) * (pp.x));
    float y = ((((-(2)) * (pp.y)) * (pp.y)) * (pp.y)) + (((3) * (pp.y)) * (pp.y));
    #line 812
    float ab = starfield_lerp(u00, u10, x);
    float cd = starfield_lerp(u01, u11, x);
    float abcd = starfield_lerp(ab, cd, y);
    #line 816
    return abcd;
}

#line 149 "C:\\code\\starfield\\starfield\\math.ion"
noir_float2 starfield_mod2s(noir_float2 v, float m) {
    return (noir_float2){starfield_mod(v.x, m), starfield_mod(v.y, m)};
}

#line 776 "C:\\code\\starfield\\starfield\\starfield.ion"
int64_t starfield_hash(noir_int2 p) {
    llong h = 1099511628211;
    uchar (*b) = (uint8_t *)(&(p));
    for (int i = 0; (i) < (sizeof(p)); (i)++) {
        h ^= b[i];
        h *= 0xcbf29ce484222325;
    }
    return h;
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
