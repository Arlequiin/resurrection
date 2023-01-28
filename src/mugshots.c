#include "global.h"
#include "blit.h"
#include "window.h"
#include "menu.h"
#include "palette.h"
#include "event_data.h"
#include "constants/mugshots.h"

#define MUGSHOT_PALETTE_NUM 13

struct Mugshot{
    u8 x;
    u8 y;
    u8 width;
    u8 height;
    const u32* image;
    const u16* palette;
};

void DrawMugshot(void); //VAR_0x8000 = mugshot id
void DrawMugshotAtPos(void); //VAR_0x8000 = mugshot id, VAR_0x8001 = x, VAR_0x8002 = y
void ClearMugshot(void);

static const u32 sMugshotImg_Midori[] = INCBIN_U32("graphics/mugshots/midori.4bpp.lz");
static const u16 sMugshotPal_Midori[] = INCBIN_U16("graphics/mugshots/midori.gbapal");

static const u32 sMugshotImg_MidoriHappy[] = INCBIN_U32("graphics/mugshots/midori_happy.4bpp.lz");
static const u16 sMugshotPal_MidoriHappy[] = INCBIN_U16("graphics/mugshots/midori_happy.gbapal");

static const u32 sMugshotImg_Lisa[] = INCBIN_U32("graphics/mugshots/liz_mug2.4bpp.lz");
static const u16 sMugshotPal_Lisa[] = INCBIN_U16("graphics/mugshots/liz_mug2.gbapal");
static const u32 sMugshotImg_LisaAngry[] = INCBIN_U32("graphics/mugshots/liz_mug_unhappy.4bpp.lz");
static const u16 sMugshotPal_LisaAngry[] = INCBIN_U16("graphics/mugshots/liz_mug_unhappy.gbapal");
static const u32 sMugshotImg_LisaCry1[] = INCBIN_U32("graphics/mugshots/liz_mug_crying.4bpp.lz");
static const u16 sMugshotPal_LisaCry1[] = INCBIN_U16("graphics/mugshots/liz_mug_crying.gbapal");
static const u32 sMugshotImg_LisaCry2[] = INCBIN_U32("graphics/mugshots/liz_mug_crying2.4bpp.lz");
static const u16 sMugshotPal_LisaCry2[] = INCBIN_U16("graphics/mugshots/liz_mug_crying2.gbapal");
static const u32 sMugshotImg_LisaCry3[] = INCBIN_U32("graphics/mugshots/liz_mug_crying3.4bpp.lz");
static const u16 sMugshotPal_LisaCry3[] = INCBIN_U16("graphics/mugshots/liz_mug_crying3.gbapal");
static const u32 sMugshotImg_LisaHappy[] = INCBIN_U32("graphics/mugshots/liz_mug4.4bpp.lz");
static const u16 sMugshotPal_LisaHappy[] = INCBIN_U16("graphics/mugshots/liz_mug4.gbapal");
static const u32 sMugshotImg_LisaAwk[] = INCBIN_U32("graphics/mugshots/liz_mug5.4bpp.lz");
static const u16 sMugshotPal_LisaAwk[] = INCBIN_U16("graphics/mugshots/liz_mug5.gbapal");
static const u32 sMugshotImg_LisaSad[] = INCBIN_U32("graphics/mugshots/liz_mug6.4bpp.lz");
static const u16 sMugshotPal_LisaSad[] = INCBIN_U16("graphics/mugshots/liz_mug6.gbapal");

static const u32 sMugshotImg_Schwartz[] = INCBIN_U32("graphics/mugshots/schwartz.4bpp.lz");
static const u16 sMugshotPal_Schwartz[] = INCBIN_U16("graphics/mugshots/schwartz.gbapal");

static const u32 sMugshotImg_Vs[] = INCBIN_U32("graphics/mugshots/vs.4bpp.lz");
static const u16 sMugshotPal_Vs[] = INCBIN_U16("graphics/mugshots/vs.gbapal");

static const struct Mugshot sMugshots[] = {
   [MUGSHOT_MIDORI] = {.x = 16, .y = 6, .width = 96, .height = 64, .image = sMugshotImg_Midori, .palette = sMugshotPal_Midori},
   [MUGSHOT_MIDORI_HAPPY] = {.x = 16, .y = 6, .width = 96, .height = 64, .image = sMugshotImg_MidoriHappy, .palette = sMugshotPal_MidoriHappy},
   [MUGSHOT_SCHWARTZ] = {.x = 16, .y = 2, .width = 120, .height = 96, .image = sMugshotImg_Schwartz, .palette = sMugshotPal_Schwartz},
   [MUGSHOT_LISA] = {.x = 16, .y = 6, .width = 128, .height = 96, .image = sMugshotImg_Lisa, .palette = sMugshotPal_Lisa},
   [MUGSHOT_LISA_CRY1] = {.x = 16, .y = 6, .width = 128, .height = 96, .image = sMugshotImg_LisaCry1, .palette = sMugshotPal_LisaCry1},
   [MUGSHOT_LISA_CRY2] = {.x = 16, .y = 6, .width = 128, .height = 96, .image = sMugshotImg_LisaCry2, .palette = sMugshotPal_LisaCry2},
   [MUGSHOT_LISA_CRY3] = {.x = 16, .y = 6, .width = 128, .height = 96, .image = sMugshotImg_LisaCry3, .palette = sMugshotPal_LisaCry3},
   [MUGSHOT_LISA_HAPPY] = {.x = 16, .y = 6, .width = 128, .height = 96, .image = sMugshotImg_LisaHappy, .palette = sMugshotPal_LisaHappy},
   [MUGSHOT_LISA_SAD] = {.x = 16, .y = 6, .width = 128, .height = 96, .image = sMugshotImg_LisaSad, .palette = sMugshotPal_LisaSad},
   [MUGSHOT_LISA_AWK] = {.x = 16, .y = 6, .width = 128, .height = 96, .image = sMugshotImg_LisaAwk, .palette = sMugshotPal_LisaAwk},
   [MUGSHOT_LISA_ANGRY] = {.x = 16, .y = 6, .width = 128, .height = 96, .image = sMugshotImg_LisaAngry, .palette = sMugshotPal_LisaAngry},
   [MUGSHOT_VS] = {.x = 9, .y = 6, .width = 72, .height = 64, .image = sMugshotImg_Midori, .palette = sMugshotPal_Midori},
};


//WindowId + 1, 0 if window is not open
static EWRAM_DATA u8 sMugshotWindow = 0;

void ClearMugshot(void){
    if(sMugshotWindow != 0){
        ClearStdWindowAndFrameToTransparent(sMugshotWindow - 1, 0);
        CopyWindowToVram(sMugshotWindow - 1, 3);
        RemoveWindow(sMugshotWindow - 1);
        sMugshotWindow = 0;
    }
}

static void DrawMugshotCore(const struct Mugshot* const mugshot, int x, int y){
    struct WindowTemplate t;
    u16 windowId;
    
    if(sMugshotWindow != 0){
        ClearMugshot();
    }
    
    #if GAME_VERSION==VERSION_EMERALD
    SetWindowTemplateFields(&t, 0, x, y, mugshot->width/8, mugshot->height/8, MUGSHOT_PALETTE_NUM, 0x40);
    #else
    t = SetWindowTemplateFields(0, x, y, mugshot->width/8, mugshot->height/8, MUGSHOT_PALETTE_NUM, 0x40);
    #endif
    windowId = AddWindow(&t);
    sMugshotWindow = windowId + 1;
    
    LoadPalette(mugshot->palette, 16 * MUGSHOT_PALETTE_NUM, 32);
    CopyToWindowPixelBuffer(windowId, (const void*)mugshot->image, 0, 0);
    PutWindowRectTilemap(windowId, 0, 0, mugshot->width/8, mugshot->height/8);
    CopyWindowToVram(windowId, 3);
}

void DrawMugshot(void){
    const struct Mugshot* const mugshot = sMugshots + VarGet(VAR_0x8000);
    DrawMugshotCore(mugshot, mugshot->x, mugshot->y);
}

void DrawMugshotAtPos(void){
    DrawMugshotCore(sMugshots + VarGet(VAR_0x8000), VarGet(VAR_0x8001), VarGet(VAR_0x8002));
}
