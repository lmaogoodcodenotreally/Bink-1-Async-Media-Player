// binkw.cc : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

#include "../deps/bink/bink.h"

RADDEFSTART

#ifdef __RADMAC__
HBINK RADEXPLINK BinkMacOpen(void /*FSSpec*/* fsp, U32 flags) { return 0; }
#endif

#ifdef __RADNDS__
RADEXPFUNC HBINK RADEXPLINK BinkNDSOpen(void /*FSFileID*/* fid, U32 flags) {
  return 0;
}
#endif

void PTR4* RADEXPLINK BinkLogoAddress(void) { return 0; }

void RADEXPLINK BinkSetError(const char PTR4* err) {}
char PTR4* RADEXPLINK BinkGetError(void) { return 0; }

HBINK RADEXPLINK BinkOpen(const char PTR4* name, U32 flags) { return 0; }

void RADEXPLINK BinkGetFrameBuffersInfo(HBINK bink, BINKFRAMEBUFFERS* fbset) {}
void RADEXPLINK BinkRegisterFrameBuffers(HBINK bink, BINKFRAMEBUFFERS* fbset) {}
S32 RADEXPLINK BinkDoFrame(HBINK bnk) { return 0; }
void RADEXPLINK BinkNextFrame(HBINK bnk) {}
S32 RADEXPLINK BinkWait(HBINK bnk) { return 0; }
void RADEXPLINK BinkClose(HBINK bnk) {}
S32 RADEXPLINK BinkPause(HBINK bnk, S32 pause) { return 0; }
S32 RADEXPLINK BinkCopyToBuffer(HBINK bnk, void* dest, S32 destpitch,
                                U32 destheight, U32 destx, U32 desty,
                                U32 flags) {
  return 0;
}
S32 RADEXPLINK BinkCopyToBufferRect(HBINK bnk, void* dest, S32 destpitch,
                                    U32 destheight, U32 destx, U32 desty,
                                    U32 srcx, U32 srcy, U32 srcw, U32 srch,
                                    U32 flags) {
  return 0;
}
S32 RADEXPLINK BinkGetRects(HBINK bnk, U32 flags) { return 0; }
void RADEXPLINK BinkGoto(HBINK bnk, U32 frame, S32 flags) {
}  // use 1 for the first frame
U32 RADEXPLINK BinkGetKeyFrame(HBINK bnk, U32 frame, S32 flags) { return 0; }

S32 RADEXPLINK BinkSetVideoOnOff(HBINK bnk, S32 onoff) { return 0; }
S32 RADEXPLINK BinkSetSoundOnOff(HBINK bnk, S32 onoff) { return 0; }
void RADEXPLINK BinkSetVolume(HBINK bnk, U32 trackid, S32 volume) {}
void RADEXPLINK BinkSetPan(HBINK bnk, U32 trackid, S32 pan) {}
void RADEXPLINK BinkSetMixBins(HBINK bnk, U32 trackid, U32 PTR4* mix_bins,
                               U32 total) {}
void RADEXPLINK BinkSetMixBinVolumes(HBINK bnk, U32 trackid,
                                     U32 PTR4* vol_mix_bins, S32 PTR4* volumes,
                                     U32 total) {}
void RADEXPLINK BinkService(HBINK bink) {}

S32 RADEXPLINK BinkShouldSkip(HBINK bink) { return 0; }

void RADEXPLINK BinkGetPalette(void* out_pal) {}

S32 RADEXPLINK BinkControlBackgroundIO(HBINK bink, U32 control) { return 0; }

#if defined(__RADWIN__) || defined(__RADXENON__) || defined(__RADPS3__)

S32 RADEXPLINK BinkStartAsyncThread(S32 thread_num, void const* param) {
  return 0;
}
S32 RADEXPLINK BinkDoFrameAsync(HBINK bink, U32 yplane_thread_num,
                                U32 other_work_thread_num) {
  return 0;
}
S32 RADEXPLINK BinkDoFrameAsyncWait(HBINK bink, S32 us) { return 0; }
S32 RADEXPLINK BinkRequestStopAsyncThread(S32 thread_num) { return 0; }
S32 RADEXPLINK BinkWaitStopAsyncThread(S32 thread_num) { return 0; }

#endif

HBINKTRACK RADEXPLINK BinkOpenTrack(HBINK bnk, U32 trackindex) { return 0; }
void RADEXPLINK BinkCloseTrack(HBINKTRACK bnkt) {}
U32 RADEXPLINK BinkGetTrackData(HBINKTRACK bnkt, void PTR4* dest) { return 0; }

U32 RADEXPLINK BinkGetTrackType(HBINK bnk, U32 trackindex) { return 0; }
U32 RADEXPLINK BinkGetTrackMaxSize(HBINK bnk, U32 trackindex) { return 0; }
U32 RADEXPLINK BinkGetTrackID(HBINK bnk, U32 trackindex) { return 0; }

void RADEXPLINK BinkGetSummary(HBINK bnk, BINKSUMMARY PTR4* sum) {}
void RADEXPLINK BinkGetRealtime(HBINK bink, BINKREALTIME PTR4* run,
                                U32 frames) {}

void RADEXPLINK BinkSetSoundTrack(U32 total_tracks, U32 PTR4* tracks) {}
void RADEXPLINK BinkSetIO(BINKIOOPEN io) {}
void RADEXPLINK BinkSetFrameRate(U32 forcerate, U32 forceratediv) {}
void RADEXPLINK BinkSetSimulate(U32 sim) {}
void RADEXPLINK BinkSetIOSize(U32 iosize) {}

S32 RADEXPLINK BinkSetSoundSystem(BINKSNDSYSOPEN open, UINTa param) {
  return 0;
}
S32 RADEXPLINK BinkControlPlatformFeatures(S32 use, S32 dont_use) { return 0; }

#ifdef __RADWIN__
// don't call directly
BINKSNDOPEN RADEXPLINK BinkOpenDirectSound(UINTa param) { return 0; }

// don't call directly
BINKSNDOPEN RADEXPLINK BinkOpenWaveOut(UINTa param) { return 0; }
#endif

#ifndef __RADMAC__
// don't call directly
BINKSNDOPEN RADEXPLINK BinkOpenMiles(UINTa param) { return 0; }
#endif

#ifdef __RADMAC__
// don't call directly
BINKSNDOPEN RADEXPLINK BinkOpenSoundManager(UINTa param) { return 0; }
#endif

#ifdef __RADLINUX__
// don't call directly
BINKSNDOPEN RADEXPLINK BinkOpenSDLMixer(UINTa param) { return 0; }
#endif

#if defined(__RADNGC__) || defined(__RADWII__)
// don't call directly
BINKSNDOPEN RADEXPLINK BinkOpenAX(U32 param) { return 0; }

// don't call directly
BINKSNDOPEN RADEXPLINK BinkOpenMusyXSound(U32 param) { return 0; }
#endif

#ifdef __RADPS2__
// don't call directly
BINKSNDOPEN RADEXPLINK BinkOpenRAD_IOP(U32 param) { return 0; }
#endif

#ifdef __RADPS3__
void RADEXPLINK BinkFreeGlobals(void) {}

BINKSNDOPEN RADEXPLINK BinkOpenLibAudio(U32 param) { return 0; }
#endif

#ifdef __RADPSP__
RADEXPFUNC BINKSNDOPEN RADEXPLINK BinkOpenPSPSound(U32 param) { return 0; }
#endif

#ifdef __RADNDS__
// don't call directly
RADEXPFUNC BINKSNDOPEN RADEXPLINK BinkOpenNDSSound(U32 param) { return 0; }
#endif

#if defined(__RADXBOX__) || defined(__RADWIN__)
RADEXPFUNC S32 RADEXPLINK BinkDX8SurfaceType(void* lpD3Ds) { return 0; }
#endif

#if defined(__RADXENON__) || defined(__RADWIN__)
RADEXPFUNC S32 RADEXPLINK BinkDX9SurfaceType(void* lpD3Ds) { return 0; }
#endif

// The BinkBuffer API isn't implemented on DOS, or any of the consoles
#if !defined(__RADDOS__) && !defined(__RADXBOX__) && !defined(__RADNGC__) && \
    !defined(__RADNDS__)

#ifdef __RADMAC__

//#include <windows.h>
//#include <palettes.h>
//#include <qdoffscreen.h>

RADEXPFUNC HBINKBUFFER RADEXPLINK BinkBufferOpen(void* /*WindowPtr*/ wnd,
                                                 U32 width, U32 height,
                                                 U32 bufferflags)  { return 0; }
RADEXPFUNC S32 RADEXPLINK BinkGDSurfaceType(void* /*GDHandle*/ gd)  { return 0; };
RADEXPFUNC S32 RADEXPLINK BinkIsSoftwareCursor(void* /*GDHandle*/ gd)  { return 0; }
RADEXPFUNC S32 RADEXPLINK BinkCheckCursor(void* /*WindowPtr*/ wp, S32 x, S32 y,
                                          S32 w, S32 h)  { return 0; }

#else

RADEXPFUNC HBINKBUFFER RADEXPLINK BinkBufferOpen(void* /*HWND*/ wnd, U32 width,
                                                 U32 height, U32 bufferflags)  { return 0; }
RADEXPFUNC S32 RADEXPLINK BinkBufferSetHWND(HBINKBUFFER buf,
                                            void* /*HWND*/ newwnd)  { return 0; }
RADEXPFUNC S32 RADEXPLINK BinkDDSurfaceType(void PTR4* lpDDS)  { return 0; }
RADEXPFUNC S32 RADEXPLINK BinkIsSoftwareCursor(void PTR4* lpDDSP,
                                               void* /*HCURSOR*/ cur)  { return 0; }
RADEXPFUNC S32 RADEXPLINK BinkCheckCursor(void* /*HWND*/ wnd, S32 x, S32 y,
                                          S32 w, S32 h)  { return 0; }
RADEXPFUNC S32 RADEXPLINK BinkBufferSetDirectDraw(void PTR4* lpDirectDraw,
                                                  void PTR4* lpPrimary)  { return 0; }

#endif

RADEXPFUNC void RADEXPLINK BinkBufferClose(HBINKBUFFER buf) {}
RADEXPFUNC S32 RADEXPLINK BinkBufferLock(HBINKBUFFER buf)  { return 0; }
RADEXPFUNC S32 RADEXPLINK BinkBufferUnlock(HBINKBUFFER buf)  { return 0; };
RADEXPFUNC void RADEXPLINK BinkBufferSetResolution(S32 w, S32 h, S32 bits) {}
RADEXPFUNC void RADEXPLINK BinkBufferCheckWinPos(HBINKBUFFER buf,
                                                 S32 PTR4* NewWindowX,
                                                 S32 PTR4* NewWindowY) {}
RADEXPFUNC S32 RADEXPLINK BinkBufferSetOffset(HBINKBUFFER buf, S32 destx,
                                              S32 desty)  { return 0; }
RADEXPFUNC void RADEXPLINK BinkBufferBlit(HBINKBUFFER buf, BINKRECT PTR4* rects,
                                          U32 numrects) {}
RADEXPFUNC S32 RADEXPLINK BinkBufferSetScale(HBINKBUFFER buf, U32 w, U32 h)  { return 0; }
RADEXPFUNC char PTR4* RADEXPLINK BinkBufferGetDescription(HBINKBUFFER buf)  { return 0; }
RADEXPFUNC char PTR4* RADEXPLINK BinkBufferGetError()  { return 0; }
RADEXPFUNC void RADEXPLINK BinkRestoreCursor(S32 checkcount)  { }
RADEXPFUNC S32 RADEXPLINK BinkBufferClear(HBINKBUFFER buf, U32 RGB)  { return 0; }

#endif

RADEXPFUNC void RADEXPLINK BinkSetMemory(BINKMEMALLOC a, BINKMEMFREE f) {}

RADDEFEND