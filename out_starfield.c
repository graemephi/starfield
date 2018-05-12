// Preamble
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#if _MSC_VER >= 1900 || __STDC_VERSION__ >= 201112L
// Visual Studio 2015 supports enough C99/C11 features for us.
#else
#error "C11 support required or Visual Studio 2015 or later"
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
void va_arg_ptr(va_list *args, struct Any any);


// Foreign preamble
typedef struct tm tm_t;

// Foreign header files
#include <limits.h>
#include <stdint.h>
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
typedef struct starfield_Starfield starfield_Starfield;
typedef struct starfield_Image starfield_Image;
typedef struct noir_float2 noir_float2;
typedef struct starfield_Rect starfield_Rect;
typedef struct starfield_PixelIter starfield_PixelIter;
typedef struct starfield_Color starfield_Color;
typedef struct TypeFieldInfo TypeFieldInfo;
typedef struct Any Any;
typedef struct starfield_Star starfield_Star;
typedef struct starfield_Tex starfield_Tex;
typedef struct starfield_StarType starfield_StarType;
typedef struct starfield_StarsHeader starfield_StarsHeader;

// Sorted declarations
#line 114 "C:\\code\\starfield\\starfield\\starfield.ion"
struct starfield_RGB8 {
    uint8_t r;
    #line 115
    uint8_t g;
    #line 115
    uint8_t b;
    uint8_t padding;
};

#line 898
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

#line 329 "C:\\code\\starfield\\noir\\noir.ion"
bool noir_app_init(void);

#line 616
void noir_print_and_clear_error(void);

#line 412
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

#line 7 "C:\\code\\starfield\\starfield\\starfield.ion"
extern noir_int2 const (starfield_ImageSize);

#line 351 "C:\\code\\starfield\\noir\\noir.ion"
bool noir_app_update(void);

#line 154 "C:\\code\\starfield\\starfield\\starfield.ion"
struct starfield_Starfield {
    starfield_Star (*stars);
    int32_t star_count;
};

#line 272
starfield_Starfield starfield_create_starfield(char const ((*starfield)));

#line 581
struct starfield_Image {
    starfield_Color (*pixels);
    noir_int2 size;
};

#line 727
starfield_Image starfield_make_image(noir_int2 size);

#line 741
void starfield_image_clear(starfield_Image (*img));

#line 867
double starfield_time_now(void);

#line 859
void starfield_draw_starfield(starfield_Image (*image), starfield_Starfield (*starfield));

#line 811
void starfield_blur_to(starfield_Image (*dest), starfield_Image (*src), float radius);

#line 12 "C:\\code\\starfield\\noir\\noir.ion"
struct noir_float2 {
    float x;
    #line 13
    float y;
};

#line 159 "C:\\code\\starfield\\starfield\\starfield.ion"
struct starfield_Rect {
    noir_float2 pos;
    noir_float2 size;
    noir_float2 rot;
};

#line 586
struct starfield_PixelIter {
    starfield_Image (*image);
    noir_int2 start;
    noir_int2 end;
    starfield_Rect rect;
    noir_int2 pixel_pos;
    #line 593
    noir_float2 pos;
    starfield_Color (*pixel);
};

#line 614
starfield_PixelIter starfield_pixel_iter_begin(starfield_Image (*image), starfield_Rect rect);

#line 648
bool starfield_pixel_iter_next(starfield_PixelIter (*it));

#line 110
struct starfield_Color {
    float r;
    #line 111
    float g;
    #line 111
    float b;
    #line 111
    float a;
};

#line 719
starfield_Color starfield_image_fetch(starfield_Image (*img), noir_int2 pos);

#line 526
starfield_Color starfield_color_lerp(starfield_Color a, starfield_Color b, float t);

#line 553
starfield_Color starfield_color_mul(starfield_Color a, starfield_Color b);

#line 562
starfield_Color starfield_color_mul1(starfield_Color a, float b);

#line 839
void starfield_image_to_rgb8(starfield_RGB8 (*dest), noir_int2 size, starfield_Image (*src));

#line 74
float starfield_min(float a, float b);

#line 70
float starfield_max(float a, float b);

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

#line 36
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

#line 148 "C:\\code\\starfield\\starfield\\starfield.ion"
struct starfield_Star {
    starfield_Rect rect;
    starfield_StarType (*type);
    starfield_Color (*color);
};

#line 193
char const ((*starfield_consume_star(char const ((*c)), starfield_Star (*star))));

#line 411
void starfield_init_star_type(starfield_StarType (*type));

#line 120
struct starfield_Tex {
    noir_int2 size;
    starfield_Color (*pixels);
};

#line 128
struct starfield_StarType {
    int32_t id;
    noir_float2 size;
    starfield_Tex tex;
};

typedef int starfield_StarTypes;

#define STARFIELD_StarType_BigSpace ((starfield_StarTypes)(13))

#line 135
#define STARFIELD_StarType_Space ((starfield_StarTypes)(0))

#line 262
float starfield_random01(void);

#line 267
noir_float2 starfield_random_unit_vector2(void);

#line 169
void starfield_push_star(starfield_Starfield (*starfield), starfield_Star star);

#line 62
int32_t starfield_maxi(int32_t a, int32_t b);

#line 32
void (*starfield_xcalloc(size_t count, size_t size));

#line 486
noir_float2 starfield_rotate(noir_float2 v, noir_float2 cos_sin_theta);

#line 669
void starfield_draw_tex(starfield_Image (*dest), starfield_Rect target, starfield_Tex tex);

#line 758
void starfield_blur_row(starfield_Color (*dest), starfield_Color (*src), int len, float radius);

#line 799
void starfield_blur_transpose(starfield_Color (*dest), starfield_Color (*src), int w);

#line 734
void starfield_free_image(starfield_Image (*img));

#line 597
bool starfield_is_zero(void const ((*buf)), size_t len);

#line 514
noir_float2 starfield_rect_absolute(starfield_Rect rect, noir_float2 rel_pos);

#line 78
float starfield_min4(float a, float b, float c, float d);

#line 82
float starfield_max4(float a, float b, float c, float d);

#line 606
starfield_Rect starfield_all_rect(void);

#line 52
int32_t starfield_clampi(int32_t a, int32_t b, int32_t x);

#line 506
noir_float2 starfield_rect_relative(starfield_Rect rect, noir_float2 abs_pos);

#line 497
bool starfield_inside_normal_rect(noir_float2 pos);

#line 522
float starfield_lerp(float a, float b, float t);

#line 849
starfield_RGB8 starfield_color_to_rgb8(starfield_Color color);

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

#line 376
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

#line 137 "C:\\code\\starfield\\starfield\\starfield.ion"
#define STARFIELD_StarTypeCount ((starfield_StarTypes)((STARFIELD_StarType_BigSpace) + (1)))

#line 140
extern starfield_StarType (starfield_star_types[STARFIELD_StarTypeCount]);

#line 398
starfield_Tex starfield_make_tex(noir_int2 size);

#line 98
noir_float2 starfield_div2(noir_float2 a, noir_float2 b);

#line 90
noir_float2 starfield_int2_to_float2(noir_int2 x);

#line 386
void starfield_draw_outline(starfield_Color (*buffer), noir_int2 size, starfield_Color color);

#line 359
void starfield_draw_simple_star(starfield_Color (*buffer), noir_int2 size);

#line 253
uint32_t starfield_random(void);

#line 260
#define STARFIELD_int_23_mask (0x7fffff)

#line 261
#define STARFIELD_int_23_reciprocal ((1.000000f) / (STARFIELD_int_23_mask))

#line 586 "C:\\code\\starfield\\noir\\noir.ion"
#define NOIR_PI (3.141593f)

#line 9 "C:\\code\\starfield\\starfield\\starfield.ion"
#define STARFIELD_Pi (NOIR_PI)

#line 10
#define STARFIELD_Tau ((STARFIELD_Pi) * (2))

#line 142
struct starfield_StarsHeader {
    int64_t len;
    int64_t cap;
    starfield_Star (data[1]);
};

#line 22
void (*starfield_xmalloc(size_t size));

#line 165
starfield_StarsHeader (*starfield_stars_header(starfield_Star (*stars)));

#line 12
void (*starfield_xrealloc(void (*mem), size_t size));

#line 676
starfield_Color starfield_tex_lookup(starfield_Tex tex, noir_float2 pos);

#line 571
starfield_Color starfield_blend(starfield_Color dest, starfield_Color src);

#line 535
starfield_Color starfield_color_add(starfield_Color a, starfield_Color b);

#line 544
starfield_Color starfield_color_sub(starfield_Color a, starfield_Color b);

#line 106
noir_float2 starfield_sub2(noir_float2 a, noir_float2 b);

#line 94
noir_float2 starfield_mul2(noir_float2 a, noir_float2 b);

#line 102
noir_float2 starfield_add2(noir_float2 a, noir_float2 b);

#line 58
float starfield_clamp01(float x);

#line 566 "C:\\code\\starfield\\noir\\noir.ion"
void noir_update_combination_key(int dest_key, int src_key1, int src_key2);

#line 42 "C:\\code\\starfield\\starfield\\starfield.ion"
bool starfield_is_power_2(int32_t x);

#line 354
float starfield_distance2(noir_float2 a, noir_float2 b);

#line 252
extern uint32_t starfield_random_state;

#line 86
noir_int2 starfield_float2_to_int2(noir_float2 x);

#line 46
float starfield_clamp(float a, float b, float x);

#line 349
float starfield_distance_squared2(noir_float2 a, noir_float2 b);

#line 345
float starfield_dot2(noir_float2 a, noir_float2 b);

// Typeinfo
#define TYPEID0(index, kind) ((ullong)(index) | ((ullong)(kind) << 24))
#define TYPEID(index, kind, ...) ((ullong)(index) | ((ullong)sizeof(__VA_ARGS__) << 32) | ((ullong)(kind) << 24))

const TypeInfo *typeinfo_table[424] = {
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
        {"r", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(starfield_RGB8, r)},
        {"g", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(starfield_RGB8, g)},
        {"b", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(starfield_RGB8, b)},
        {"padding", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(starfield_RGB8, padding)},
    }},
    [18] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(3, TYPE_CHAR, char)},
    [19] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(18, TYPE_PTR, char *)},
    [20] = NULL, // Func
    [21] = &(TypeInfo){TYPE_CONST, .size = sizeof(char const ), .align = alignof(char const ), .base = TYPEID(3, TYPE_CHAR, char)},
    [22] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(21, TYPE_CONST, char const )},
    [23] = NULL, // Enum
    [24] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(TypeFieldInfo), .align = alignof(TypeFieldInfo), .name = "TypeFieldInfo", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"name", .type = TYPEID(22, TYPE_PTR, char const (*)), .offset = offsetof(TypeFieldInfo, name)},
        {"type", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(TypeFieldInfo, type)},
        {"offset", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(TypeFieldInfo, offset)},
    }},
    [25] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(TypeInfo), .align = alignof(TypeInfo), .name = "TypeInfo", .num_fields = 8, .fields = (TypeFieldInfo[]) {
        {"kind", .type = TYPEID(23, TYPE_NONE, TypeKind), .offset = offsetof(TypeInfo, kind)},
        {"size", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(TypeInfo, size)},
        {"align", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(TypeInfo, align)},
        {"name", .type = TYPEID(22, TYPE_PTR, char const (*)), .offset = offsetof(TypeInfo, name)},
        {"count", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(TypeInfo, count)},
        {"base", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(TypeInfo, base)},
        {"fields", .type = TYPEID(26, TYPE_PTR, TypeFieldInfo *), .offset = offsetof(TypeInfo, fields)},
        {"num_fields", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(TypeInfo, num_fields)},
    }},
    [26] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(24, TYPE_STRUCT, TypeFieldInfo)},
    [27] = &(TypeInfo){TYPE_CONST, .size = sizeof(TypeInfo const ), .align = alignof(TypeInfo const ), .base = TYPEID(25, TYPE_STRUCT, TypeInfo)},
    [28] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(27, TYPE_CONST, TypeInfo const )},
    [29] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(28, TYPE_PTR, TypeInfo const (*))},
    [30] = NULL, // Func
    [31] = NULL, // Func
    [32] = NULL, // Func
    [33] = NULL, // Func
    [34] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(Any), .align = alignof(Any), .name = "Any", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"ptr", .type = TYPEID(16, TYPE_PTR, void *), .offset = offsetof(Any, ptr)},
        {"type", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(Any, type)},
    }},
    [35] = NULL, // Func
    [36] = NULL, // Func
    [37] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_App), .align = alignof(noir_App), .name = "noir_App", .num_fields = 17, .fields = (TypeFieldInfo[]) {
        {"init", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_App, init)},
        {"quit", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_App, quit)},
        {"num_updates", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_App, num_updates)},
        {"error", .type = TYPEID(22, TYPE_PTR, char const (*)), .offset = offsetof(noir_App, error)},
        {"error_buf", .type = TYPEID(38, TYPE_ARRAY, char [256]), .offset = offsetof(noir_App, error_buf)},
        {"events", .type = TYPEID(47, TYPE_ARRAY, noir_Event [256]), .offset = offsetof(noir_App, events)},
        {"num_events", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_App, num_events)},
        {"platform", .type = TYPEID(22, TYPE_PTR, char const (*)), .offset = offsetof(noir_App, platform)},
        {"clipboard", .type = TYPEID(22, TYPE_PTR, char const (*)), .offset = offsetof(noir_App, clipboard)},
        {"display", .type = TYPEID(48, TYPE_STRUCT, noir_Display), .offset = offsetof(noir_App, display)},
        {"window", .type = TYPEID(49, TYPE_STRUCT, noir_Window), .offset = offsetof(noir_App, window)},
        {"keys", .type = TYPEID(54, TYPE_ARRAY, noir_DigitalButton [275]), .offset = offsetof(noir_App, keys)},
        {"mouse", .type = TYPEID(55, TYPE_STRUCT, noir_Mouse), .offset = offsetof(noir_App, mouse)},
        {"text", .type = TYPEID(56, TYPE_ARRAY, char [1024]), .offset = offsetof(noir_App, text)},
        {"time", .type = TYPEID(57, TYPE_STRUCT, noir_Time), .offset = offsetof(noir_App, time)},
        {"audio", .type = TYPEID(58, TYPE_STRUCT, noir_Audio), .offset = offsetof(noir_App, audio)},
        {"synced_clipboard", .type = TYPEID(18, TYPE_PTR, char *), .offset = offsetof(noir_App, synced_clipboard)},
    }},
    [38] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [256]), .align = alignof(char [256]), .base = TYPEID(3, TYPE_CHAR, char), .count = 256},
    [39] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_Event), .align = alignof(noir_Event), .name = "noir_Event", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"kind", .type = TYPEID(40, TYPE_NONE, noir_EventKind), .offset = offsetof(noir_Event, kind)},
        {"data", .type = TYPEID(41, TYPE_UNION, noir_EventData), .offset = offsetof(noir_Event, data)},
    }},
    [40] = NULL, // Enum
    [41] = &(TypeInfo){TYPE_UNION, .size = sizeof(noir_EventData), .align = alignof(noir_EventData), .name = "noir_EventData", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"key", .type = TYPEID(42, TYPE_STRUCT, noir_KeyEvent), .offset = offsetof(noir_EventData, key)},
        {"mouse_button", .type = TYPEID(43, TYPE_STRUCT, noir_MouseButtonEvent), .offset = offsetof(noir_EventData, mouse_button)},
        {"mouse_move", .type = TYPEID(46, TYPE_STRUCT, noir_MouseMoveEvent), .offset = offsetof(noir_EventData, mouse_move)},
    }},
    [42] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_KeyEvent), .align = alignof(noir_KeyEvent), .name = "noir_KeyEvent", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"key", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_KeyEvent, key)},
        {"repeat", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_KeyEvent, repeat)},
    }},
    [43] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_MouseButtonEvent), .align = alignof(noir_MouseButtonEvent), .name = "noir_MouseButtonEvent", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"button", .type = TYPEID(44, TYPE_NONE, noir_MouseButton), .offset = offsetof(noir_MouseButtonEvent, button)},
        {"pos", .type = TYPEID(45, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_MouseButtonEvent, pos)},
    }},
    [44] = NULL, // Enum
    [45] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_int2), .align = alignof(noir_int2), .name = "noir_int2", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"x", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_int2, x)},
        {"y", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_int2, y)},
    }},
    [46] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_MouseMoveEvent), .align = alignof(noir_MouseMoveEvent), .name = "noir_MouseMoveEvent", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"pos", .type = TYPEID(45, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_MouseMoveEvent, pos)},
        {"delta_pos", .type = TYPEID(45, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_MouseMoveEvent, delta_pos)},
    }},
    [47] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(noir_Event [256]), .align = alignof(noir_Event [256]), .base = TYPEID(39, TYPE_STRUCT, noir_Event), .count = 256},
    [48] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_Display), .align = alignof(noir_Display), .name = "noir_Display", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"size", .type = TYPEID(45, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Display, size)},
        {"rate", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_Display, rate)},
        {"dpi", .type = TYPEID(14, TYPE_FLOAT, float), .offset = offsetof(noir_Display, dpi)},
    }},
    [49] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_Window), .align = alignof(noir_Window), .name = "noir_Window", .num_fields = 15, .fields = (TypeFieldInfo[]) {
        {"resizable", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Window, resizable)},
        {"hidden", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Window, hidden)},
        {"fullscreen", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Window, fullscreen)},
        {"title", .type = TYPEID(22, TYPE_PTR, char const (*)), .offset = offsetof(noir_Window, title)},
        {"pos", .type = TYPEID(45, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Window, pos)},
        {"size", .type = TYPEID(45, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Window, size)},
        {"moved", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Window, moved)},
        {"resized", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Window, resized)},
        {"synced_title", .type = TYPEID(38, TYPE_ARRAY, char [256]), .offset = offsetof(noir_Window, synced_title)},
        {"synced_pos", .type = TYPEID(45, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Window, synced_pos)},
        {"synced_size", .type = TYPEID(45, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Window, synced_size)},
        {"synced_resizable", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Window, synced_resizable)},
        {"synced_hidden", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Window, synced_hidden)},
        {"synced_fullscreen", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Window, synced_fullscreen)},
        {"sdl", .type = TYPEID(51, TYPE_PTR, SDL_Window *), .offset = offsetof(noir_Window, sdl)},
    }},
    [50] = NULL, // Incomplete: SDL_Window
    [51] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID0(50, TYPE_NONE)},
    [52] = NULL, // Enum
    [53] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_DigitalButton), .align = alignof(noir_DigitalButton), .name = "noir_DigitalButton", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"down", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_DigitalButton, down)},
        {"pressed", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_DigitalButton, pressed)},
        {"released", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_DigitalButton, released)},
    }},
    [54] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(noir_DigitalButton [275]), .align = alignof(noir_DigitalButton [275]), .base = TYPEID(53, TYPE_STRUCT, noir_DigitalButton), .count = 275},
    [55] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_Mouse), .align = alignof(noir_Mouse), .name = "noir_Mouse", .num_fields = 13, .fields = (TypeFieldInfo[]) {
        {"moved", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Mouse, moved)},
        {"pos", .type = TYPEID(45, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Mouse, pos)},
        {"delta_pos", .type = TYPEID(45, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Mouse, delta_pos)},
        {"global_moved", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Mouse, global_moved)},
        {"global_pos", .type = TYPEID(45, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Mouse, global_pos)},
        {"global_delta_pos", .type = TYPEID(45, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Mouse, global_delta_pos)},
        {"left_button", .type = TYPEID(53, TYPE_STRUCT, noir_DigitalButton), .offset = offsetof(noir_Mouse, left_button)},
        {"middle_button", .type = TYPEID(53, TYPE_STRUCT, noir_DigitalButton), .offset = offsetof(noir_Mouse, middle_button)},
        {"right_button", .type = TYPEID(53, TYPE_STRUCT, noir_DigitalButton), .offset = offsetof(noir_Mouse, right_button)},
        {"capture", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Mouse, capture)},
        {"synced_capture", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Mouse, synced_capture)},
        {"synced_pos", .type = TYPEID(45, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Mouse, synced_pos)},
        {"synced_global_pos", .type = TYPEID(45, TYPE_STRUCT, noir_int2), .offset = offsetof(noir_Mouse, synced_global_pos)},
    }},
    [56] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [1024]), .align = alignof(char [1024]), .base = TYPEID(3, TYPE_CHAR, char), .count = 1024},
    [57] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_Time), .align = alignof(noir_Time), .name = "noir_Time", .num_fields = 12, .fields = (TypeFieldInfo[]) {
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
    [58] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_Audio), .align = alignof(noir_Audio), .name = "noir_Audio", .num_fields = 8, .fields = (TypeFieldInfo[]) {
        {"valid", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Audio, valid)},
        {"rate", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_Audio, rate)},
        {"channels", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_Audio, channels)},
        {"play", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Audio, play)},
        {"callback", .type = TYPEID(61, TYPE_FUNC, void (*)(void *, noir_float2 *, int)), .offset = offsetof(noir_Audio, callback)},
        {"context", .type = TYPEID(16, TYPE_PTR, void *), .offset = offsetof(noir_Audio, context)},
        {"synced_play", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(noir_Audio, synced_play)},
        {"sdl_device", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(noir_Audio, sdl_device)},
    }},
    [59] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(noir_float2), .align = alignof(noir_float2), .name = "noir_float2", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"x", .type = TYPEID(14, TYPE_FLOAT, float), .offset = offsetof(noir_float2, x)},
        {"y", .type = TYPEID(14, TYPE_FLOAT, float), .offset = offsetof(noir_float2, y)},
    }},
    [60] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(59, TYPE_STRUCT, noir_float2)},
    [61] = NULL, // Func
    [62] = &(TypeInfo){TYPE_CONST, .size = sizeof(noir_int2 const ), .align = alignof(noir_int2 const ), .base = TYPEID(45, TYPE_STRUCT, noir_int2)},
    [63] = NULL, // Func
    [64] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(SDL_Surface), .align = alignof(SDL_Surface), .name = "SDL_Surface", .num_fields = 12, .fields = (TypeFieldInfo[]) {
        {"flags", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_Surface, flags)},
        {"format", .type = TYPEID(71, TYPE_PTR, SDL_PixelFormat *), .offset = offsetof(SDL_Surface, format)},
        {"w", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_Surface, w)},
        {"h", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_Surface, h)},
        {"pitch", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_Surface, pitch)},
        {"pixels", .type = TYPEID(16, TYPE_PTR, void *), .offset = offsetof(SDL_Surface, pixels)},
        {"userdata", .type = TYPEID(16, TYPE_PTR, void *), .offset = offsetof(SDL_Surface, userdata)},
        {"locked", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_Surface, locked)},
        {"lock_data", .type = TYPEID(16, TYPE_PTR, void *), .offset = offsetof(SDL_Surface, lock_data)},
        {"clip_rect", .type = TYPEID(72, TYPE_STRUCT, SDL_Rect), .offset = offsetof(SDL_Surface, clip_rect)},
        {"map", .type = TYPEID(16, TYPE_PTR, void *), .offset = offsetof(SDL_Surface, map)},
        {"refcount", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_Surface, refcount)},
    }},
    [65] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(64, TYPE_STRUCT, SDL_Surface)},
    [66] = NULL, // Func
    [67] = NULL, // Incomplete: SDL_Renderer
    [68] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID0(67, TYPE_NONE)},
    [69] = NULL, // Func
    [70] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(SDL_PixelFormat), .align = alignof(SDL_PixelFormat), .name = "SDL_PixelFormat", .num_fields = 19, .fields = (TypeFieldInfo[]) {
        {"format", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_PixelFormat, format)},
        {"palette", .type = TYPEID(16, TYPE_PTR, void *), .offset = offsetof(SDL_PixelFormat, palette)},
        {"BitsPerPixel", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_PixelFormat, BitsPerPixel)},
        {"BytesPerPixel", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_PixelFormat, BytesPerPixel)},
        {"padding", .type = TYPEID(73, TYPE_ARRAY, uchar [2]), .offset = offsetof(SDL_PixelFormat, padding)},
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
        {"next", .type = TYPEID(71, TYPE_PTR, SDL_PixelFormat *), .offset = offsetof(SDL_PixelFormat, next)},
    }},
    [71] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(70, TYPE_STRUCT, SDL_PixelFormat)},
    [72] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(SDL_Rect), .align = alignof(SDL_Rect), .name = "SDL_Rect", .num_fields = 4, .fields = (TypeFieldInfo[]) {
        {"x", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_Rect, x)},
        {"y", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_Rect, y)},
        {"w", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_Rect, w)},
        {"h", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_Rect, h)},
    }},
    [73] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(uchar [2]), .align = alignof(uchar [2]), .base = TYPEID(4, TYPE_UCHAR, uchar), .count = 2},
    [74] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(starfield_Starfield), .align = alignof(starfield_Starfield), .name = "starfield_Starfield", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"stars", .type = TYPEID(76, TYPE_PTR, starfield_Star *), .offset = offsetof(starfield_Starfield, stars)},
        {"star_count", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(starfield_Starfield, star_count)},
    }},
    [75] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(starfield_Star), .align = alignof(starfield_Star), .name = "starfield_Star", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"rect", .type = TYPEID(89, TYPE_STRUCT, starfield_Rect), .offset = offsetof(starfield_Star, rect)},
        {"type", .type = TYPEID(110, TYPE_PTR, starfield_StarType *), .offset = offsetof(starfield_Star, type)},
        {"color", .type = TYPEID(80, TYPE_PTR, starfield_Color *), .offset = offsetof(starfield_Star, color)},
    }},
    [76] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(75, TYPE_STRUCT, starfield_Star)},
    [77] = NULL, // Func
    [78] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(starfield_Image), .align = alignof(starfield_Image), .name = "starfield_Image", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"pixels", .type = TYPEID(80, TYPE_PTR, starfield_Color *), .offset = offsetof(starfield_Image, pixels)},
        {"size", .type = TYPEID(45, TYPE_STRUCT, noir_int2), .offset = offsetof(starfield_Image, size)},
    }},
    [79] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(starfield_Color), .align = alignof(starfield_Color), .name = "starfield_Color", .num_fields = 4, .fields = (TypeFieldInfo[]) {
        {"r", .type = TYPEID(14, TYPE_FLOAT, float), .offset = offsetof(starfield_Color, r)},
        {"g", .type = TYPEID(14, TYPE_FLOAT, float), .offset = offsetof(starfield_Color, g)},
        {"b", .type = TYPEID(14, TYPE_FLOAT, float), .offset = offsetof(starfield_Color, b)},
        {"a", .type = TYPEID(14, TYPE_FLOAT, float), .offset = offsetof(starfield_Color, a)},
    }},
    [80] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(79, TYPE_STRUCT, starfield_Color)},
    [81] = NULL, // Func
    [82] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(78, TYPE_STRUCT, starfield_Image)},
    [83] = NULL, // Func
    [84] = NULL, // Func
    [85] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(74, TYPE_STRUCT, starfield_Starfield)},
    [86] = NULL, // Func
    [87] = NULL, // Func
    [88] = NULL, // Func
    [89] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(starfield_Rect), .align = alignof(starfield_Rect), .name = "starfield_Rect", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"pos", .type = TYPEID(59, TYPE_STRUCT, noir_float2), .offset = offsetof(starfield_Rect, pos)},
        {"size", .type = TYPEID(59, TYPE_STRUCT, noir_float2), .offset = offsetof(starfield_Rect, size)},
        {"rot", .type = TYPEID(59, TYPE_STRUCT, noir_float2), .offset = offsetof(starfield_Rect, rot)},
    }},
    [90] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(starfield_PixelIter), .align = alignof(starfield_PixelIter), .name = "starfield_PixelIter", .num_fields = 7, .fields = (TypeFieldInfo[]) {
        {"image", .type = TYPEID(82, TYPE_PTR, starfield_Image *), .offset = offsetof(starfield_PixelIter, image)},
        {"start", .type = TYPEID(45, TYPE_STRUCT, noir_int2), .offset = offsetof(starfield_PixelIter, start)},
        {"end", .type = TYPEID(45, TYPE_STRUCT, noir_int2), .offset = offsetof(starfield_PixelIter, end)},
        {"rect", .type = TYPEID(89, TYPE_STRUCT, starfield_Rect), .offset = offsetof(starfield_PixelIter, rect)},
        {"pixel_pos", .type = TYPEID(45, TYPE_STRUCT, noir_int2), .offset = offsetof(starfield_PixelIter, pixel_pos)},
        {"pos", .type = TYPEID(59, TYPE_STRUCT, noir_float2), .offset = offsetof(starfield_PixelIter, pos)},
        {"pixel", .type = TYPEID(80, TYPE_PTR, starfield_Color *), .offset = offsetof(starfield_PixelIter, pixel)},
    }},
    [91] = NULL, // Func
    [92] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(90, TYPE_STRUCT, starfield_PixelIter)},
    [93] = NULL, // Func
    [94] = NULL, // Func
    [95] = NULL, // Func
    [96] = NULL, // Func
    [97] = NULL, // Func
    [98] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(17, TYPE_STRUCT, starfield_RGB8)},
    [99] = NULL, // Func
    [100] = NULL, // Func
    [101] = NULL, // Func
    [102] = NULL, // Incomplete: FILE
    [103] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID0(102, TYPE_NONE)},
    [104] = NULL, // Func
    [105] = NULL, // Func
    [106] = NULL, // Func
    [107] = NULL, // Func
    [108] = NULL, // Func
    [109] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(starfield_StarType), .align = alignof(starfield_StarType), .name = "starfield_StarType", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"id", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(starfield_StarType, id)},
        {"size", .type = TYPEID(59, TYPE_STRUCT, noir_float2), .offset = offsetof(starfield_StarType, size)},
        {"tex", .type = TYPEID(113, TYPE_STRUCT, starfield_Tex), .offset = offsetof(starfield_StarType, tex)},
    }},
    [110] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(109, TYPE_STRUCT, starfield_StarType)},
    [111] = NULL, // Func
    [112] = NULL, // Func
    [113] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(starfield_Tex), .align = alignof(starfield_Tex), .name = "starfield_Tex", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"size", .type = TYPEID(45, TYPE_STRUCT, noir_int2), .offset = offsetof(starfield_Tex, size)},
        {"pixels", .type = TYPEID(80, TYPE_PTR, starfield_Color *), .offset = offsetof(starfield_Tex, pixels)},
    }},
    [114] = NULL, // Enum
    [115] = NULL, // Func
    [116] = NULL, // Func
    [117] = NULL, // Func
    [118] = NULL, // Func
    [119] = NULL, // Func
    [120] = NULL, // Func
    [121] = NULL, // Func
    [122] = NULL, // Func
    [123] = NULL, // Func
    [124] = NULL, // Func
    [125] = NULL, // Func
    [126] = &(TypeInfo){TYPE_CONST, .size = 0, .align = 0, .base = TYPEID0(1, TYPE_VOID)},
    [127] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID0(126, TYPE_CONST)},
    [128] = NULL, // Func
    [129] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(89, TYPE_STRUCT, starfield_Rect)},
    [130] = NULL, // Func
    [131] = NULL, // Func
    [132] = NULL, // Func
    [133] = NULL, // Func
    [134] = NULL, // Func
    [135] = NULL, // Func
    [136] = NULL, // Func
    [137] = NULL, // Func
    [138] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(14, TYPE_FLOAT, float)},
    [139] = NULL, // Func
    [140] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(SDL_DisplayMode), .align = alignof(SDL_DisplayMode), .name = "SDL_DisplayMode", .num_fields = 5, .fields = (TypeFieldInfo[]) {
        {"format", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_DisplayMode, format)},
        {"w", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_DisplayMode, w)},
        {"h", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_DisplayMode, h)},
        {"refresh_rate", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_DisplayMode, refresh_rate)},
        {"driverdata", .type = TYPEID(16, TYPE_PTR, void *), .offset = offsetof(SDL_DisplayMode, driverdata)},
    }},
    [141] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(140, TYPE_STRUCT, SDL_DisplayMode)},
    [142] = NULL, // Func
    [143] = NULL, // Enum
    [144] = NULL, // Func
    [145] = NULL, // Func
    [146] = NULL, // Func
    [147] = NULL, // Incomplete array type
    [148] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [2]), .align = alignof(char [2]), .base = TYPEID(3, TYPE_CHAR, char), .count = 2},
    [149] = NULL, // Enum
    [150] = NULL, // Func
    [151] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(int [275]), .align = alignof(int [275]), .base = TYPEID(8, TYPE_INT, int), .count = 275},
    [152] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(8, TYPE_INT, int)},
    [153] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(int [512]), .align = alignof(int [512]), .base = TYPEID(8, TYPE_INT, int), .count = 512},
    [154] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(SDL_AudioSpec), .align = alignof(SDL_AudioSpec), .name = "SDL_AudioSpec", .num_fields = 9, .fields = (TypeFieldInfo[]) {
        {"freq", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_AudioSpec, freq)},
        {"format", .type = TYPEID(7, TYPE_USHORT, ushort), .offset = offsetof(SDL_AudioSpec, format)},
        {"channels", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_AudioSpec, channels)},
        {"silence", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_AudioSpec, silence)},
        {"samples", .type = TYPEID(7, TYPE_USHORT, ushort), .offset = offsetof(SDL_AudioSpec, samples)},
        {"padding", .type = TYPEID(7, TYPE_USHORT, ushort), .offset = offsetof(SDL_AudioSpec, padding)},
        {"size", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_AudioSpec, size)},
        {"callback", .type = TYPEID(156, TYPE_FUNC, void (*)(void *, uchar *, int)), .offset = offsetof(SDL_AudioSpec, callback)},
        {"userdata", .type = TYPEID(16, TYPE_PTR, void *), .offset = offsetof(SDL_AudioSpec, userdata)},
    }},
    [155] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(4, TYPE_UCHAR, uchar)},
    [156] = NULL, // Func
    [157] = &(TypeInfo){TYPE_CONST, .size = sizeof(SDL_AudioSpec const ), .align = alignof(SDL_AudioSpec const ), .base = TYPEID(154, TYPE_STRUCT, SDL_AudioSpec)},
    [158] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(157, TYPE_CONST, SDL_AudioSpec const )},
    [159] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(154, TYPE_STRUCT, SDL_AudioSpec)},
    [160] = NULL, // Func
    [161] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(53, TYPE_STRUCT, noir_DigitalButton)},
    [162] = NULL, // Func
    [163] = &(TypeInfo){TYPE_UNION, .size = sizeof(SDL_Event), .align = alignof(SDL_Event), .name = "SDL_Event", .num_fields = 5, .fields = (TypeFieldInfo[]) {
        {"type", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_Event, type)},
        {"key", .type = TYPEID(164, TYPE_STRUCT, SDL_KeyboardEvent), .offset = offsetof(SDL_Event, key)},
        {"text", .type = TYPEID(166, TYPE_STRUCT, SDL_TextInputEvent), .offset = offsetof(SDL_Event, text)},
        {"motion", .type = TYPEID(168, TYPE_STRUCT, SDL_MouseMotionEvent), .offset = offsetof(SDL_Event, motion)},
        {"button", .type = TYPEID(169, TYPE_STRUCT, SDL_MouseButtonEvent), .offset = offsetof(SDL_Event, button)},
    }},
    [164] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(SDL_KeyboardEvent), .align = alignof(SDL_KeyboardEvent), .name = "SDL_KeyboardEvent", .num_fields = 8, .fields = (TypeFieldInfo[]) {
        {"type", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_KeyboardEvent, type)},
        {"timestamp", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_KeyboardEvent, timestamp)},
        {"windowID", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_KeyboardEvent, windowID)},
        {"state", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_KeyboardEvent, state)},
        {"repeat", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_KeyboardEvent, repeat)},
        {"padding2", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_KeyboardEvent, padding2)},
        {"padding3", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(SDL_KeyboardEvent, padding3)},
        {"keysym", .type = TYPEID(165, TYPE_STRUCT, SDL_Keysym), .offset = offsetof(SDL_KeyboardEvent, keysym)},
    }},
    [165] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(SDL_Keysym), .align = alignof(SDL_Keysym), .name = "SDL_Keysym", .num_fields = 4, .fields = (TypeFieldInfo[]) {
        {"scancode", .type = TYPEID(149, TYPE_NONE, SDL_Scancode), .offset = offsetof(SDL_Keysym, scancode)},
        {"sym", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(SDL_Keysym, sym)},
        {"mod", .type = TYPEID(7, TYPE_USHORT, ushort), .offset = offsetof(SDL_Keysym, mod)},
        {"unused", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_Keysym, unused)},
    }},
    [166] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(SDL_TextInputEvent), .align = alignof(SDL_TextInputEvent), .name = "SDL_TextInputEvent", .num_fields = 4, .fields = (TypeFieldInfo[]) {
        {"type", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_TextInputEvent, type)},
        {"timestamp", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_TextInputEvent, timestamp)},
        {"windowID", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(SDL_TextInputEvent, windowID)},
        {"text", .type = TYPEID(167, TYPE_ARRAY, char [32]), .offset = offsetof(SDL_TextInputEvent, text)},
    }},
    [167] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [32]), .align = alignof(char [32]), .base = TYPEID(3, TYPE_CHAR, char), .count = 32},
    [168] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(SDL_MouseMotionEvent), .align = alignof(SDL_MouseMotionEvent), .name = "SDL_MouseMotionEvent", .num_fields = 9, .fields = (TypeFieldInfo[]) {
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
    [169] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(SDL_MouseButtonEvent), .align = alignof(SDL_MouseButtonEvent), .name = "SDL_MouseButtonEvent", .num_fields = 10, .fields = (TypeFieldInfo[]) {
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
    [170] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(163, TYPE_UNION, SDL_Event)},
    [171] = NULL, // Func
    [172] = NULL, // Enum
    [173] = NULL, // Func
    [174] = NULL, // Func
    [175] = NULL, // Func
    [176] = NULL, // Func
    [177] = NULL, // Func
    [178] = NULL, // Func
    [179] = NULL, // Func
    [180] = NULL, // Func
    [181] = NULL, // Func
    [182] = NULL, // Func
    [183] = NULL, // Func
    [184] = NULL, // Func
    [185] = NULL, // Func
    [186] = NULL, // Func
    [187] = NULL, // Func
    [188] = NULL, // Func
    [189] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(starfield_StarType [14]), .align = alignof(starfield_StarType [14]), .base = TYPEID(109, TYPE_STRUCT, starfield_StarType), .count = 14},
    [190] = NULL, // Func
    [191] = NULL, // Func
    [192] = NULL, // Func
    [193] = NULL, // Func
    [194] = NULL, // Func
    [195] = NULL, // Func
    [196] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(starfield_StarsHeader), .align = alignof(starfield_StarsHeader), .name = "starfield_StarsHeader", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"len", .type = TYPEID(12, TYPE_LLONG, llong), .offset = offsetof(starfield_StarsHeader, len)},
        {"cap", .type = TYPEID(12, TYPE_LLONG, llong), .offset = offsetof(starfield_StarsHeader, cap)},
        {"data", .type = TYPEID(197, TYPE_ARRAY, starfield_Star [1]), .offset = offsetof(starfield_StarsHeader, data)},
    }},
    [197] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(starfield_Star [1]), .align = alignof(starfield_Star [1]), .base = TYPEID(75, TYPE_STRUCT, starfield_Star), .count = 1},
    [198] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(196, TYPE_STRUCT, starfield_StarsHeader)},
    [199] = NULL, // Func
    [200] = NULL, // Func
    [201] = NULL, // Func
    [202] = NULL, // Func
    [203] = NULL, // Func
    [204] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(39, TYPE_STRUCT, noir_Event)},
    [205] = NULL, // Func
    [206] = NULL, // Func
    [207] = NULL, // Func
    [208] = NULL, // Func
    [209] = NULL, // Func
    [210] = NULL, // Func
    [211] = NULL, // Func
    [212] = NULL, // Func
    [213] = NULL, // Func
    [214] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(113, TYPE_STRUCT, starfield_Tex)},
    [215] = NULL, // Func
    [216] = NULL, // Func
    [217] = NULL, // Func
    [218] = NULL, // Func
    [219] = NULL, // Func
    [220] = NULL, // Func
    [221] = NULL, // Func
    [222] = NULL, // Func
    [223] = NULL, // Func
    [224] = NULL, // Func
    [225] = NULL, // Func
    [226] = NULL, // Func
    [227] = NULL, // Func
    [228] = NULL, // Func
    [229] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(15, TYPE_DOUBLE, double)},
    [230] = NULL, // Func
    [231] = NULL, // Func
    [232] = NULL, // Func
    [233] = NULL, // Func
    [234] = NULL, // Func
    [235] = NULL, // Func
    [236] = NULL, // Func
    [237] = NULL, // Func
    [238] = NULL, // Func
    [239] = NULL, // Func
    [240] = NULL, // Func
    [241] = NULL, // Func
    [242] = NULL, // Func
    [243] = NULL, // Func
    [244] = NULL, // Func
    [245] = &(TypeInfo){TYPE_CONST, .size = sizeof(char (*const )), .align = alignof(char (*const )), .base = TYPEID(18, TYPE_PTR, char *)},
    [246] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(245, TYPE_CONST, char (*const ))},
    [247] = NULL, // Func
    [248] = NULL, // No associated type
    [249] = NULL, // Func
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
    [269] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID0(248, TYPE_NONE)},
    [270] = NULL, // Func
    [271] = NULL, // Func
    [272] = NULL, // Func
    [273] = NULL, // Func
    [274] = NULL, // No associated type
    [275] = NULL, // No associated type
    [276] = NULL, // No associated type
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
    [290] = NULL, // Func
    [291] = NULL, // Func
    [292] = NULL, // Func
    [293] = NULL, // Func
    [294] = NULL, // Func
    [295] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(6, TYPE_SHORT, short)},
    [296] = NULL, // Func
    [297] = NULL, // Func
    [298] = NULL, // Func
    [299] = &(TypeInfo){TYPE_CONST, .size = sizeof(short const ), .align = alignof(short const ), .base = TYPEID(6, TYPE_SHORT, short)},
    [300] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(299, TYPE_CONST, short const )},
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
    [312] = NULL, // No associated type
    [313] = NULL, // Func
    [314] = NULL, // Func
    [315] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID0(312, TYPE_STRUCT)},
    [316] = NULL, // Func
    [317] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(12, TYPE_LLONG, llong)},
    [318] = NULL, // Func
    [319] = NULL, // No associated type
    [320] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID0(319, TYPE_CONST)},
    [321] = NULL, // Func
    [322] = &(TypeInfo){TYPE_CONST, .size = sizeof(llong const ), .align = alignof(llong const ), .base = TYPEID(12, TYPE_LLONG, llong)},
    [323] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(322, TYPE_CONST, llong const )},
    [324] = NULL, // Func
    [325] = NULL, // Func
    [326] = NULL, // Func
    [327] = NULL, // No associated type
    [328] = NULL, // No associated type
    [329] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID0(327, TYPE_NONE)},
    [330] = NULL, // Func
    [331] = NULL, // Func
    [332] = NULL, // Func
    [333] = NULL, // Func
    [334] = NULL, // Func
    [335] = NULL, // Func
    [336] = NULL, // Func
    [337] = NULL, // Func
    [338] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(155, TYPE_PTR, uchar *)},
    [339] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(9, TYPE_UINT, uint)},
    [340] = NULL, // Func
    [341] = NULL, // No associated type
    [342] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID0(341, TYPE_NONE)},
    [343] = NULL, // Func
    [344] = &(TypeInfo){TYPE_CONST, .size = sizeof(uchar const ), .align = alignof(uchar const ), .base = TYPEID(4, TYPE_UCHAR, uchar)},
    [345] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(344, TYPE_CONST, uchar const )},
    [346] = NULL, // Func
    [347] = NULL, // Func
    [348] = NULL, // Func
    [349] = NULL, // Func
    [350] = NULL, // Func
    [351] = NULL, // Func
    [352] = NULL, // Func
    [353] = NULL, // No associated type
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
    [370] = NULL, // Func
    [371] = NULL, // Func
    [372] = NULL, // Func
    [373] = NULL, // Func
    [374] = NULL, // No associated type
    [375] = NULL, // No associated type
    [376] = NULL, // No associated type
    [377] = NULL, // No associated type
    [378] = NULL, // No associated type
    [379] = NULL, // No associated type
    [380] = NULL, // Func
    [381] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID0(375, TYPE_NONE)},
    [382] = NULL, // Func
    [383] = NULL, // Func
    [384] = NULL, // Func
    [385] = NULL, // Func
    [386] = NULL, // Func
    [387] = NULL, // Func
    [388] = NULL, // Func
    [389] = NULL, // Func
    [390] = NULL, // Func
    [391] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID0(377, TYPE_NONE)},
    [392] = NULL, // Func
    [393] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID0(378, TYPE_NONE)},
    [394] = NULL, // Func
    [395] = NULL, // Func
    [396] = NULL, // Func
    [397] = NULL, // Func
    [398] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID0(379, TYPE_NONE)},
    [399] = NULL, // Func
    [400] = NULL, // Func
    [401] = NULL, // Func
    [402] = NULL, // Func
    [403] = NULL, // Func
    [404] = NULL, // Func
    [405] = NULL, // Func
    [406] = NULL, // Func
    [407] = NULL, // Func
    [408] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID0(376, TYPE_NONE)},
    [409] = NULL, // Func
    [410] = NULL, // Func
    [411] = NULL, // Func
    [412] = NULL, // Func
    [413] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(16, TYPE_PTR, void *)},
    [414] = NULL, // Func
    [415] = NULL, // Func
    [416] = NULL, // Func
    [417] = NULL, // Func
    [418] = NULL, // Func
    [419] = NULL, // Func
    [420] = NULL, // Func
    [421] = NULL, // Func
    [422] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [16]), .align = alignof(char [16]), .base = TYPEID(3, TYPE_CHAR, char), .count = 16},
    [423] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(45, TYPE_STRUCT, noir_int2)},
};

int num_typeinfos = 424;
const TypeInfo **typeinfos = (const TypeInfo **)typeinfo_table;

// Definitions
#line 898
int main(int argc, char (*(*argv))) {
    if (!(noir_app_init())) {
        noir_print_and_clear_error();
        return 1;
    }
    #line 904
    noir_app.window.size = starfield_ImageSize;
    noir_app_update();
    #line 907
    printf("Platform: %s\n", noir_app.platform);
    printf("Display: %d x %d, %d Hz, %.2f DPI\n", noir_app.display.size.x, noir_app.display.size.y, noir_app.display.rate, noir_app.display.dpi);
    #line 910
    SDL_Surface (*surface) = SDL_GetWindowSurface(noir_app.window.sdl);
    SDL_Renderer (*renderer) = SDL_CreateSoftwareRenderer(surface);
    assert((surface->format->format) == (SDL_PIXELFORMAT_RGB888));
    assert((surface->format->BitsPerPixel) == (32));
    #line 915
    char (*starfield_text) = 
        "\n"
        "\xE2\x9C\xBA   \xE3\x80\x80\xE3\x80\x80 \xE3\x80\x80\xE3\x80\x80 \xC2\xB7   \xE2\x8A\xB9\n"
        " *  \xE2\x8B\x86 \xE3\x80\x80\xE3\x80\x80\xE3\x80\x80  \xE2\x9C\xA7  *\n"
        "  \xE3\x80\x80\xE3\x80\x80\xE3\x80\x80\xE3\x80\x80\xE3\x80\x80\xE3\x80\x80\xE3\x80\x80.  \xE3\x80\x80\n"
        " +  *\xE3\x80\x80  \xE3\x80\x80* \xE3\x80\x80\xE3\x80\x80. \xE3\x80\x80 \xE2\x8B\x86\n"
        "  \xE2\x9C\xAB \xE3\x80\x80\xE3\x80\x80  +\n";
    #line 923
    starfield_Starfield starfield = starfield_create_starfield(starfield_text);
    #line 925
    float min_t = 1000.000000f;
    float max_t = 0.000000f;
    float sum_t = 0.000000f;
    int n_t = 0;
    #line 930
    starfield_Image image = starfield_make_image((noir_int2){surface->w, surface->h});
    starfield_Image blurred = starfield_make_image((noir_int2){surface->w, surface->h});
    while (noir_app_update()) {
        if (noir_app.error) {
            noir_print_and_clear_error();
        }
        #line 937
        starfield_image_clear(&(image));
        #line 939
        double t0 = starfield_time_now();
        float t0f = (float)(t0);
        starfield_draw_starfield(&(image), &(starfield));
        starfield_blur_to(&(blurred), &(image), ((40) * (sinf(t0f))) + (41));
        for (starfield_PixelIter it = starfield_pixel_iter_begin(&(image), (starfield_Rect){0}); starfield_pixel_iter_next(&(it));) {
            starfield_Color bp = starfield_image_fetch(&(blurred), it.pixel_pos);
            *(it.pixel) = starfield_color_lerp(*(it.pixel), bp, (0.500000f) + ((sinf((t0f) * (sqrtf(2)))) * (0.500000f)));
            *(it.pixel) = starfield_color_mul(*(it.pixel), starfield_color_mul1(bp, ((40) * (sinf(t0f))) + (49)));
        }
        starfield_image_to_rgb8((starfield_RGB8 *)(surface->pixels), (noir_int2){surface->w, surface->h}, &(image));
        double t1 = starfield_time_now();
        #line 951
        float t = (float)((((t1) - (t0))) * (1000));
        min_t = starfield_min(t, min_t);
        max_t = starfield_max(t, max_t);
        sum_t += t;
        (n_t)++;
        if (((n_t) & (31)) == (0)) {
            printf("min %.2fms max %.2fms avg %.2fms\n", min_t, max_t, (sum_t) / (n_t));
            sum_t = 0;
            n_t = 0;
        }
        #line 962
        SDL_UpdateWindowSurface(noir_app.window.sdl);
        #line 964
        fflush(stdout);
        SDL_Delay(10);
    }
    #line 968
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

noir_App noir_app = {.window = {.pos = {NOIR_DEFAULT_WINDOW_POS, NOIR_DEFAULT_WINDOW_POS}}};
noir_int2 const (starfield_ImageSize) = {500, 500};
#line 351
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

#line 272 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Starfield starfield_create_starfield(char const ((*starfield))) {
    #line 274
    starfield_Starfield result = {0};
    #line 276
    int width = 0;
    int height = 0;
    int line_width = 0;
    int star_count = 0;
    #line 281
    char const ((*c)) = starfield;
    while (*(c)) {
        starfield_Star star = {0};
        c = starfield_consume_star(c, &(star));
        #line 286
        if (star.type) {
            starfield_init_star_type(star.type);
            #line 289
            if ((star.type->id) == (STARFIELD_StarType_BigSpace)) {
                line_width += 1;
            } else if ((star.type->id) != (STARFIELD_StarType_Space)) {
                (star_count)++;
                #line 294
                star.rect.pos = (noir_float2){(float)(line_width), (float)(height)};
                star.rect.size = (noir_float2){(1) + (starfield_random01()), (1) + (starfield_random01())};
                star.rect.rot = starfield_random_unit_vector2();
                #line 298
                starfield_push_star(&(result), star);
            }
        }
        #line 302
        if ((*(c)) == ('\n')) {
            height += 6;
            width = starfield_maxi(width, line_width);
            line_width = 0;
            (c)++;
        } else {
            line_width += 2;
        }
    }
    #line 312
    width += 8;
    height += 4;
    #line 315
    int R = starfield_maxi(width, height);
    int x_pad = (4) + ((((R) - (width))) / (2));
    int y_pad = (4) + ((((R) - (height))) / (2));
    #line 319
    result.star_count = star_count;
    for (int i = 0; (i) < (star_count); (i)++) {
        starfield_Star (*s) = (result.stars) + (i);
        s->rect.pos.x = (((s->rect.pos.x) + (x_pad))) / (R);
        s->rect.pos.y = (((s->rect.pos.y) + (y_pad))) / (R);
        s->rect.size.x = ((s->type->tex.size.x) * (s->rect.size.x)) / (starfield_ImageSize.x);
        s->rect.size.y = ((s->type->tex.size.y) * (s->rect.size.y)) / (starfield_ImageSize.y);
    }
    #line 328
    return result;
}

#line 727
starfield_Image starfield_make_image(noir_int2 size) {
    return (starfield_Image){.pixels = starfield_xcalloc((size.x) * (size.y), sizeof(starfield_Color)), .size = size};
}

#line 741
void starfield_image_clear(starfield_Image (*img)) {
    memset(img->pixels, 0, ((img->size.x) * (img->size.y)) * (sizeof(starfield_Color)));
}

#line 867
double starfield_time_now(void) {
    ullong ticks = (SDL_GetPerformanceCounter()) - (noir_app.time.sdl_start_ticks);
    return ((double)(ticks)) / ((double)(noir_app.time.ticks_per_sec));
}

#line 859
void starfield_draw_starfield(starfield_Image (*image), starfield_Starfield (*starfield)) {
    for (int i = 0; (i) < (starfield->star_count); (i)++) {
        starfield_Star (*star) = (starfield->stars) + (i);
        star->rect.rot = starfield_rotate(star->rect.rot, (noir_float2){cosf(0.050000f), sinf(0.050000f)});
        starfield_draw_tex(image, star->rect, star->type->tex);
    }
}

#line 811
void starfield_blur_to(starfield_Image (*dest), starfield_Image (*src), float radius) {
    assert((dest->size.x) == (src->size.x));
    assert((dest->size.y) == (src->size.y));
    #line 815
    starfield_Image temp = starfield_make_image((noir_int2){src->size.y, src->size.x});
    starfield_Color (*scratch) = starfield_xcalloc(src->size.x, sizeof(starfield_Color));
    #line 818
    for (int y = 0; (y) < (src->size.y); (y)++) {
        starfield_Color (*row_src) = (src->pixels) + ((y) * (src->size.x));
        starfield_Color (*row_dest) = (dest->pixels) + ((y) * (dest->size.x));
        starfield_blur_row(scratch, row_src, src->size.x, radius);
        starfield_blur_row(row_dest, scratch, src->size.x, radius);
        starfield_blur_row(scratch, row_dest, src->size.x, radius);
        starfield_blur_transpose((temp.pixels) + (y), scratch, src->size.x);
    }
    #line 827
    for (int y = 0; (y) < (temp.size.y); (y)++) {
        starfield_Color (*row) = (temp.pixels) + ((y) * (temp.size.x));
        starfield_blur_row(scratch, row, temp.size.x, radius);
        starfield_blur_row(row, scratch, temp.size.x, radius);
        starfield_blur_row(scratch, row, temp.size.x, radius);
        starfield_blur_transpose((dest->pixels) + (y), scratch, temp.size.y);
    }
    #line 835
    starfield_free_image(&(temp));
}

#line 614
starfield_PixelIter starfield_pixel_iter_begin(starfield_Image (*image), starfield_Rect rect) {
    float x_min = 0.000000f;
    float x_max = 1.000000f;
    float y_min = 0.000000f;
    float y_max = 1.000000f;
    #line 620
    if (!(starfield_is_zero(&(rect), sizeof(rect)))) {
        noir_float2 a = starfield_rect_absolute(rect, (noir_float2){0, 0});
        noir_float2 b = starfield_rect_absolute(rect, (noir_float2){1, 0});
        noir_float2 c = starfield_rect_absolute(rect, (noir_float2){0, 1});
        noir_float2 d = starfield_rect_absolute(rect, (noir_float2){1, 1});
        #line 626
        x_min = starfield_min4(a.x, b.x, c.x, d.x);
        x_max = starfield_max4(a.x, b.x, c.x, d.x);
        y_min = starfield_min4(a.y, b.y, c.y, d.y);
        y_max = starfield_max4(a.y, b.y, c.y, d.y);
    } else {
        rect = starfield_all_rect();
    }
    #line 634
    starfield_PixelIter iter = {0};
    #line 636
    iter.start.x = starfield_clampi(0, image->size.x, (int)((x_min) * (image->size.x)));
    iter.end.x = starfield_clampi(0, image->size.x, (int)((x_max) * (image->size.x)));
    iter.start.y = starfield_clampi(0, image->size.y, (int)((y_min) * (image->size.y)));
    iter.end.y = starfield_clampi(0, image->size.y, (int)((y_max) * (image->size.y)));
    #line 641
    iter.pixel_pos = (noir_int2){(iter.start.x) - (1), iter.start.y};
    iter.rect = rect;
    iter.image = image;
    #line 645
    return iter;
}

bool starfield_pixel_iter_next(starfield_PixelIter (*it)) {
    (it->pixel_pos.x)++;
    #line 651
    for (; (it->pixel_pos.y) < (it->end.y); (it->pixel_pos.y)++) {
        for (; (it->pixel_pos.x) < (it->end.x); (it->pixel_pos.x)++) {
            noir_float2 xy = {((float)((it->pixel_pos.x) + (0.500000f))) / (it->image->size.x), ((float)((it->pixel_pos.y) + (0.500000f))) / (it->image->size.y)};
            noir_float2 rel = starfield_rect_relative(it->rect, xy);
            #line 656
            if (starfield_inside_normal_rect(rel)) {
                it->pos = rel;
                it->pixel = (it->image->pixels) + (((it->pixel_pos.x) + ((it->pixel_pos.y) * (it->image->size.x))));
                return true;
            }
        }
        #line 663
        it->pixel_pos.x = it->start.x;
    }
    #line 666
    return false;
}

#line 719
starfield_Color starfield_image_fetch(starfield_Image (*img), noir_int2 pos) {
    if (((((pos.x) < (0)) || ((pos.x) >= (img->size.x))) || ((pos.y) < (0))) || ((pos.y) >= (img->size.y))) {
        return (starfield_Color){0};
    }
    #line 724
    return img->pixels[(pos.x) + ((pos.y) * (img->size.x))];
}

#line 526
starfield_Color starfield_color_lerp(starfield_Color a, starfield_Color b, float t) {
    return (starfield_Color){starfield_lerp(a.r, b.r, t), starfield_lerp(a.g, b.g, t), starfield_lerp(a.b, b.b, t), starfield_lerp(a.a, b.a, t)};
}

#line 553
starfield_Color starfield_color_mul(starfield_Color a, starfield_Color b) {
    return (starfield_Color){(a.r) * (b.r), (a.g) * (b.g), (a.b) * (b.b), (a.a) * (b.a)};
}

#line 562
starfield_Color starfield_color_mul1(starfield_Color a, float b) {
    return (starfield_Color){(a.r) * (b), (a.g) * (b), (a.b) * (b), (a.a) * (b)};
}

#line 839
void starfield_image_to_rgb8(starfield_RGB8 (*dest), noir_int2 size, starfield_Image (*src)) {
    assert((src->size.x) == (size.x));
    assert((src->size.y) == (size.y));
    starfield_Color (*src_end) = (src->pixels) + ((src->size.x) * (src->size.y));
    for (starfield_Color (*src_it) = src->pixels; (src_it) != (src_end); (src_it)++) {
        *(dest) = starfield_color_to_rgb8(*(src_it));
        (dest)++;
    }
}

#line 74
float starfield_min(float a, float b) {
    return (((a) < (b)) ? a : b);
}

#line 70
float starfield_max(float a, float b) {
    return (((a) > (b)) ? a : b);
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

#line 36
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
                int kind = ((event.type) == (SDL_MOUSEBUTTONDOWN) ? NOIR_EVENT_MOUSE_BUTTON_DOWN : NOIR_EVENT_MOUSE_BUTTON_UP);
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
                int kind = ((event.type) == (SDL_KEYDOWN) ? NOIR_EVENT_KEY_DOWN : NOIR_EVENT_KEY_UP);
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

#line 193 "C:\\code\\starfield\\starfield\\starfield.ion"
char const ((*starfield_consume_star(char const ((*c)), starfield_Star (*star)))) {
    int next = 0;
    if ((*(c)) == ('\n')) {
        (c)++;
    }
    #line 199
    if ((*(c)) == (' ')) {
        #line 201
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
        #line 241
        star->type = (starfield_star_types) + (STARFIELD_StarType_BigSpace);
        next = (sizeof("\xE3\x80\x80")) - (1);
    } else {
        assert(0);
        star->type = 0;
        next = 1;
    }
    #line 249
    return (c) + (next);
}

#line 411
void starfield_init_star_type(starfield_StarType (*type)) {
    int idx = (int32_t)(((type) - (starfield_star_types)));
    assert((idx) >= (0));
    assert((idx) < (STARFIELD_StarTypeCount));
    #line 416
    if (type->tex.pixels) {
        assert((type->size.x) != (0.000000f));
        assert((type->size.y) != (0.000000f));
        assert((type->tex.size.x) != (0));
        assert((type->tex.size.y) != (0));
        return;
    }
    #line 424
    type->id = idx;
    #line 426
    switch (idx) {
    case 0: {
        type->tex = starfield_make_tex((noir_int2){8, 8});
        type->size = starfield_div2(starfield_int2_to_float2(type->tex.size), starfield_int2_to_float2(starfield_ImageSize));
        starfield_draw_outline(type->tex.pixels, type->tex.size, (starfield_Color){0, 1, 0, 0.500000f});
        break;
    }
    case 1: {
        #line 432
        type->tex = starfield_make_tex((noir_int2){32, 32});
        type->size = starfield_div2(starfield_int2_to_float2(type->tex.size), starfield_int2_to_float2(starfield_ImageSize));
        starfield_draw_simple_star(type->tex.pixels, type->tex.size);
        break;
    }
    case 2: {
        #line 436
        type->tex = starfield_make_tex((noir_int2){32, 32});
        type->size = starfield_div2(starfield_int2_to_float2(type->tex.size), starfield_int2_to_float2(starfield_ImageSize));
        starfield_draw_simple_star(type->tex.pixels, type->tex.size);
        break;
    }
    case 3: {
        #line 440
        type->tex = starfield_make_tex((noir_int2){32, 32});
        type->size = starfield_div2(starfield_int2_to_float2(type->tex.size), starfield_int2_to_float2(starfield_ImageSize));
        starfield_draw_simple_star(type->tex.pixels, type->tex.size);
        break;
    }
    case 4: {
        #line 444
        type->tex = starfield_make_tex((noir_int2){32, 32});
        type->size = starfield_div2(starfield_int2_to_float2(type->tex.size), starfield_int2_to_float2(starfield_ImageSize));
        starfield_draw_simple_star(type->tex.pixels, type->tex.size);
        break;
    }
    case 5: {
        #line 448
        type->tex = starfield_make_tex((noir_int2){32, 32});
        type->size = starfield_div2(starfield_int2_to_float2(type->tex.size), starfield_int2_to_float2(starfield_ImageSize));
        starfield_draw_simple_star(type->tex.pixels, type->tex.size);
        break;
    }
    case 6: {
        #line 452
        type->tex = starfield_make_tex((noir_int2){32, 32});
        type->size = starfield_div2(starfield_int2_to_float2(type->tex.size), starfield_int2_to_float2(starfield_ImageSize));
        starfield_draw_simple_star(type->tex.pixels, type->tex.size);
        break;
    }
    case 7: {
        #line 456
        type->tex = starfield_make_tex((noir_int2){32, 32});
        type->size = starfield_div2(starfield_int2_to_float2(type->tex.size), starfield_int2_to_float2(starfield_ImageSize));
        starfield_draw_simple_star(type->tex.pixels, type->tex.size);
        break;
    }
    case 8: {
        #line 460
        type->tex = starfield_make_tex((noir_int2){32, 32});
        type->size = starfield_div2(starfield_int2_to_float2(type->tex.size), starfield_int2_to_float2(starfield_ImageSize));
        starfield_draw_simple_star(type->tex.pixels, type->tex.size);
        break;
    }
    case 9: {
        #line 464
        type->tex = starfield_make_tex((noir_int2){32, 32});
        type->size = starfield_div2(starfield_int2_to_float2(type->tex.size), starfield_int2_to_float2(starfield_ImageSize));
        starfield_draw_simple_star(type->tex.pixels, type->tex.size);
        break;
    }
    case 10: {
        #line 468
        type->tex = starfield_make_tex((noir_int2){32, 32});
        type->size = starfield_div2(starfield_int2_to_float2(type->tex.size), starfield_int2_to_float2(starfield_ImageSize));
        starfield_draw_simple_star(type->tex.pixels, type->tex.size);
        break;
    }
    case 11: {
        #line 472
        type->tex = starfield_make_tex((noir_int2){32, 32});
        type->size = starfield_div2(starfield_int2_to_float2(type->tex.size), starfield_int2_to_float2(starfield_ImageSize));
        starfield_draw_simple_star(type->tex.pixels, type->tex.size);
        break;
    }
    case 12: {
        #line 476
        type->tex = starfield_make_tex((noir_int2){32, 32});
        type->size = starfield_div2(starfield_int2_to_float2(type->tex.size), starfield_int2_to_float2(starfield_ImageSize));
        starfield_draw_simple_star(type->tex.pixels, type->tex.size);
        break;
    }
    case 13: {
        #line 480
        type->tex = starfield_make_tex((noir_int2){8, 8});
        type->size = starfield_div2(starfield_int2_to_float2(type->tex.size), starfield_int2_to_float2(starfield_ImageSize));
        starfield_draw_outline(type->tex.pixels, type->tex.size, (starfield_Color){1, 0, 0, 0.500000f});
        break;
    }
    }
}

#line 262
float starfield_random01(void) {
    uint r = (starfield_random()) & (STARFIELD_int_23_mask);
    return (r) * (STARFIELD_int_23_reciprocal);
}

noir_float2 starfield_random_unit_vector2(void) {
    float theta = (starfield_random01()) * (STARFIELD_Tau);
    return (noir_float2){cosf(theta), sinf(theta)};
}

#line 169
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
    #line 180
    starfield_StarsHeader (*header) = starfield_stars_header(starfield->stars);
    #line 182
    if ((header->len) == (header->cap)) {
        llong new_cap = (header->cap) * (2);
        header = starfield_xrealloc(header, ((sizeof(starfield_Star)) * (new_cap)) + (sizeof(starfield_StarsHeader)));
        starfield->stars = header->data;
        header->cap = new_cap;
    }
    #line 190
    starfield->stars[(header->len)++] = star;
}

#line 62
int32_t starfield_maxi(int32_t a, int32_t b) {
    return (((a) > (b)) ? a : b);
}

#line 32
void (*starfield_xcalloc(size_t count, size_t size)) {
    void (*result) = calloc(count, size);
    if (!(result)) {
        printf("Failed to calloc");
        assert(0);
        exit(1);
    }
    return result;
}

#line 486
noir_float2 starfield_rotate(noir_float2 v, noir_float2 cos_sin_theta) {
    if ((cos_sin_theta.x) && (cos_sin_theta.y)) {
        return (noir_float2){((v.x) * (cos_sin_theta.x)) - ((v.y) * (cos_sin_theta.y)), ((v.x) * (cos_sin_theta.y)) + ((v.y) * (cos_sin_theta.x))};
    }
    #line 494
    return v;
}

#line 669
void starfield_draw_tex(starfield_Image (*dest), starfield_Rect target, starfield_Tex tex) {
    for (starfield_PixelIter it = starfield_pixel_iter_begin(dest, target); starfield_pixel_iter_next(&(it));) {
        starfield_Color rgba = starfield_tex_lookup(tex, it.pos);
        *(it.pixel) = starfield_blend(*(it.pixel), rgba);
    }
}

#line 758
void starfield_blur_row(starfield_Color (*dest), starfield_Color (*src), int len, float radius) {
    starfield_Color (*dest_end) = (dest) + (len);
    assert((radius) > (0));
    int r = (int)(radius);
    float a = (radius) - (r);
    #line 764
    float r_rcp = (1.000000f) / (((((2) * (radius))) + (1)));
    starfield_Color c_acc = starfield_color_mul1(src[r], a);
    #line 767
    for (int i = 0; (i) < (r); (i)++) {
        c_acc = starfield_color_add(c_acc, src[i]);
    }
    #line 771
    for (int i = 0; (i) < ((r) + (1)); (i)++) {
        if ((i) == (r)) {
            c_acc = starfield_color_sub(c_acc, starfield_color_mul1(src[0], (1) - (a)));
        }
        #line 776
        c_acc = starfield_color_add(c_acc, starfield_color_lerp(src[(i) + (r)], src[((i) + (r)) + (1)], a));
        *(dest) = starfield_color_mul1(c_acc, r_rcp);
        (dest)++;
    }
    #line 781
    for (int i = (r) + (1); (i) < (((len) - (r)) - (1)); (i)++) {
        c_acc = starfield_color_add(c_acc, starfield_color_lerp(src[(i) + (r)], src[((i) + (r)) + (1)], a));
        c_acc = starfield_color_sub(c_acc, starfield_color_lerp(src[(i) - (r)], src[((i) - (r)) - (1)], a));
        *(dest) = starfield_color_mul1(c_acc, r_rcp);
        (dest)++;
    }
    #line 788
    c_acc = starfield_color_add(c_acc, starfield_color_mul1(src[(len) - (1)], (1) - (a)));
    #line 790
    for (int i = ((len) - (r)) - (1); (i) < (len); (i)++) {
        c_acc = starfield_color_sub(c_acc, starfield_color_lerp(src[(i) - (r)], src[((i) - (r)) - (1)], a));
        *(dest) = starfield_color_mul1(c_acc, r_rcp);
        (dest)++;
    }
    #line 796
    assert((dest) == (dest_end));
}

void starfield_blur_transpose(starfield_Color (*dest), starfield_Color (*src), int w) {
    for (int i = 0; (i) < (w); (i)++) {
        *(dest) = *(src);
        dest += w;
        (src)++;
    }
}

#line 734
void starfield_free_image(starfield_Image (*img)) {
    assert(img->pixels);
    free(img->pixels);
    img->pixels = 0;
    img->size = (noir_int2){0, 0};
}

#line 597
bool starfield_is_zero(void const ((*buf)), size_t len) {
    char const ((*p)) = (char const (*))(buf);
    if (*(p)) {
        return false;
    }
    #line 603
    return (memcmp((p) + (1), buf, (len) - (1))) == (0);
}

#line 514
noir_float2 starfield_rect_absolute(starfield_Rect rect, noir_float2 rel_pos) {
    noir_float2 centered_pos = starfield_sub2(rel_pos, (noir_float2){0.500000f, 0.500000f});
    noir_float2 scaled_pos = starfield_mul2(centered_pos, rect.size);
    noir_float2 rot_pos = starfield_rotate(scaled_pos, (noir_float2){rect.rot.x, -(rect.rot.y)});
    noir_float2 shift_pos = starfield_add2(rot_pos, rect.pos);
    return shift_pos;
}

#line 78
float starfield_min4(float a, float b, float c, float d) {
    return starfield_min(starfield_min(a, b), starfield_min(c, d));
}

float starfield_max4(float a, float b, float c, float d) {
    return starfield_max(starfield_max(a, b), starfield_max(c, d));
}

#line 606
starfield_Rect starfield_all_rect(void) {
    return (starfield_Rect){.pos = {0.500000f, 0.500000f}, .size = {1, 1}, .rot = {1, 0}};
}

#line 52
int32_t starfield_clampi(int32_t a, int32_t b, int32_t x) {
    return (((x) < (a)) ? a : (((x) > (b)) ? b : x));
}

#line 506
noir_float2 starfield_rect_relative(starfield_Rect rect, noir_float2 abs_pos) {
    noir_float2 shift_pos = starfield_sub2(abs_pos, rect.pos);
    noir_float2 rot_pos = starfield_rotate(shift_pos, rect.rot);
    noir_float2 scaled_pos = starfield_div2(rot_pos, rect.size);
    noir_float2 result = starfield_add2(scaled_pos, (noir_float2){0.500000f, 0.500000f});
    return result;
}

#line 497
bool starfield_inside_normal_rect(noir_float2 pos) {
    return ((((pos.x) > (0)) && ((pos.x) < (1))) && ((pos.y) > (0))) && ((pos.y) < (1));
}

#line 522
float starfield_lerp(float a, float b, float t) {
    return ((((1) - (t))) * (a)) + ((t) * (b));
}

#line 849
starfield_RGB8 starfield_color_to_rgb8(starfield_Color color) {
    #line 851
    starfield_RGB8 result = {.r = (uint8_t)((starfield_clamp01(color.r)) * (255.000000f)), .g = (uint8_t)((starfield_clamp01(color.g)) * (255.000000f)), .b = (uint8_t)((starfield_clamp01(color.b)) * (255.000000f))};
    #line 856
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

#line 376
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

starfield_StarType (starfield_star_types[STARFIELD_StarTypeCount]) = {0};
#line 398 "C:\\code\\starfield\\starfield\\starfield.ion"
starfield_Tex starfield_make_tex(noir_int2 size) {
    assert(starfield_is_power_2(size.x));
    assert(starfield_is_power_2(size.y));
    return (starfield_Tex){.size = size, .pixels = starfield_xcalloc((size.x) * (size.y), sizeof(starfield_Color))};
}

#line 98
noir_float2 starfield_div2(noir_float2 a, noir_float2 b) {
    return (noir_float2){(a.x) / (b.x), (a.y) / (b.y)};
}

#line 90
noir_float2 starfield_int2_to_float2(noir_int2 x) {
    return (noir_float2){(float)(x.x), (float)(x.y)};
}

#line 386
void starfield_draw_outline(starfield_Color (*buffer), noir_int2 size, starfield_Color color) {
    for (int i = 0; (i) < (size.x); (i)++) {
        buffer[i] = color;
        buffer[(i) + ((((size.x) - (1))) * (size.y))];
    }
    #line 392
    for (int i = 0; (i) < (size.y); (i)++) {
        buffer[(i) * (size.x)] = color;
        buffer[((i) * (size.x)) + (((size.x) - (1)))];
    }
}

#line 359
void starfield_draw_simple_star(starfield_Color (*buffer), noir_int2 size) {
    noir_float2 center = starfield_div2(starfield_int2_to_float2(size), (noir_float2){2.000000f, 2.000000f});
    float range = starfield_distance2((noir_float2){(size.x) / (2.000000f), 0}, center);
    float radius = starfield_distance2((noir_float2){0}, center);
    #line 364
    starfield_Color (*col) = buffer;
    for (int y = 0; (y) < (size.y); (y)++) {
        for (int x = 0; (x) < (size.x); (x)++) {
            noir_float2 xy = starfield_int2_to_float2((noir_int2){x, y});
            float c = (starfield_distance2(xy, center)) / (radius);
            noir_float2 rel = starfield_sub2(xy, center);
            #line 371
            float spike = starfield_clamp01((fabsf((rel.x) * (rel.y))) / (range));
            float color = (((1) - (c))) * (((1) - (spike)));
            #line 374
            col->a = color;
            if ((c) < (range)) {
                col->r = (color) * (col->a);
                col->g = (color) * (col->a);
                col->b = (color) * (col->a);
            }
            #line 381
            (col)++;
        }
    }
}

#line 253
uint32_t starfield_random(void) {
    starfield_random_state ^= (starfield_random_state) << (13);
    starfield_random_state ^= (starfield_random_state) >> (17);
    starfield_random_state ^= (starfield_random_state) << (5);
    return starfield_random_state;
}

#line 22
void (*starfield_xmalloc(size_t size)) {
    void (*result) = malloc(size);
    if (!(result)) {
        printf("Failed to malloc");
        assert(0);
        exit(1);
    }
    return result;
}

#line 165
starfield_StarsHeader (*starfield_stars_header(starfield_Star (*stars))) {
    return (starfield_StarsHeader *)(((((char *)(stars))) - (offsetof(starfield_StarsHeader, data))));
}

#line 12
void (*starfield_xrealloc(void (*mem), size_t size)) {
    void (*result) = realloc(mem, size);
    if (!(result)) {
        printf("Failed to realloc");
        assert(0);
        exit(1);
    }
    return result;
}

#line 676
starfield_Color starfield_tex_lookup(starfield_Tex tex, noir_float2 pos) {
    pos.x *= tex.size.x;
    pos.y *= tex.size.y;
    #line 680
    noir_float2 vi = {0};
    noir_float2 vf = {modff(pos.x, &(vi.x)), modff(pos.y, &(vi.y))};
    #line 683
    noir_int2 a = starfield_float2_to_int2(pos);
    noir_int2 b = starfield_float2_to_int2(starfield_add2(pos, (noir_float2){1, 0}));
    noir_int2 c = starfield_float2_to_int2(starfield_add2(pos, (noir_float2){0, 1}));
    noir_int2 d = starfield_float2_to_int2(starfield_add2(pos, (noir_float2){1, 1}));
    #line 688
    assert(starfield_is_power_2(tex.size.x));
    assert(starfield_is_power_2(tex.size.y));
    a.x &= (tex.size.x) - (1);
    a.y &= (tex.size.y) - (1);
    b.x &= (tex.size.x) - (1);
    b.y &= (tex.size.y) - (1);
    c.x &= (tex.size.x) - (1);
    c.y &= (tex.size.y) - (1);
    d.x &= (tex.size.x) - (1);
    d.y &= (tex.size.y) - (1);
    #line 699
    starfield_Color A = tex.pixels[(a.x) + ((a.y) * (tex.size.x))];
    starfield_Color B = tex.pixels[(b.x) + ((b.y) * (tex.size.x))];
    starfield_Color C = tex.pixels[(c.x) + ((c.y) * (tex.size.x))];
    starfield_Color D = tex.pixels[(d.x) + ((d.y) * (tex.size.x))];
    #line 704
    starfield_Color AB = starfield_color_lerp(A, B, vf.x);
    starfield_Color CD = starfield_color_lerp(C, D, vf.x);
    starfield_Color ABCD = starfield_color_lerp(AB, CD, vf.y);
    #line 708
    return ABCD;
}

#line 571
starfield_Color starfield_blend(starfield_Color dest, starfield_Color src) {
    starfield_Color result = {(src.r) + (((dest.r) * (((1.000000f) - (src.a))))), (src.g) + (((dest.g) * (((1.000000f) - (src.a))))), (src.b) + (((dest.b) * (((1.000000f) - (src.a))))), (src.a) + (dest.a)};
    #line 578
    return result;
}

#line 535
starfield_Color starfield_color_add(starfield_Color a, starfield_Color b) {
    return (starfield_Color){(a.r) + (b.r), (a.g) + (b.g), (a.b) + (b.b), (a.a) + (b.a)};
}

#line 544
starfield_Color starfield_color_sub(starfield_Color a, starfield_Color b) {
    return (starfield_Color){(a.r) - (b.r), (a.g) - (b.g), (a.b) - (b.b), (a.a) - (b.a)};
}

#line 106
noir_float2 starfield_sub2(noir_float2 a, noir_float2 b) {
    return (noir_float2){(a.x) - (b.x), (a.y) - (b.y)};
}

#line 94
noir_float2 starfield_mul2(noir_float2 a, noir_float2 b) {
    return (noir_float2){(a.x) * (b.x), (a.y) * (b.y)};
}

#line 102
noir_float2 starfield_add2(noir_float2 a, noir_float2 b) {
    return (noir_float2){(a.x) + (b.x), (a.y) + (b.y)};
}

#line 58
float starfield_clamp01(float x) {
    return starfield_clamp(0, 1, x);
}

#line 566 "C:\\code\\starfield\\noir\\noir.ion"
void noir_update_combination_key(int dest_key, int src_key1, int src_key2) {
    noir_update_digital_button(&(noir_app.keys[dest_key]), (noir_app.keys[src_key1].down) || (noir_app.keys[src_key2].down));
}

#line 42 "C:\\code\\starfield\\starfield\\starfield.ion"
bool starfield_is_power_2(int32_t x) {
    return ((x) != (0)) && (((x) & (((x) - (1)))) == (0));
}

#line 354
float starfield_distance2(noir_float2 a, noir_float2 b) {
    float d = starfield_distance_squared2(a, b);
    return sqrtf(d);
}

uint32_t starfield_random_state = 1;
#line 86
noir_int2 starfield_float2_to_int2(noir_float2 x) {
    return (noir_int2){(int32_t)(x.x), (int32_t)(x.y)};
}

#line 46
float starfield_clamp(float a, float b, float x) {
    return (((x) < (a)) ? a : (((x) > (b)) ? b : x));
}

#line 349
float starfield_distance_squared2(noir_float2 a, noir_float2 b) {
    noir_float2 d = starfield_sub2(a, b);
    return starfield_dot2(d, d);
}

#line 345
float starfield_dot2(noir_float2 a, noir_float2 b) {
    return ((a.x) * (b.x)) + ((a.y) * (b.y));
}

// Foreign source files

void va_arg_ptr(va_list *args, Any any) {
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
