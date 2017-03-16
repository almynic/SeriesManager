/* Generated by Nim Compiler v0.16.1 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/almynic/Nim/lib -o /home/almynic/Desktop/NimProjects/SeriesManager/nimcache/stdlib_pcre.o /home/almynic/Desktop/NimProjects/SeriesManager/nimcache/stdlib_pcre.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#undef linux
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct Pcre_bGVj3RgRlNY6kwJpiYI9b3A Pcre_bGVj3RgRlNY6kwJpiYI9b3A;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ExtraData_aRbi7557vgG4KV47nk1CWQ ExtraData_aRbi7557vgG4KV47nk1CWQ;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_CDECL_PTR(Pcre_bGVj3RgRlNY6kwJpiYI9b3A*, TY_OMNNRjh8IIE9bAc9btZcg0NA) (NCSTRING pattern, int options, NCSTRING* errptr, int* erroffset, void* tableptr);
typedef N_CDECL_PTR(void, TY_5cp59bim9aJ4WupX5aVaD1Sg) (NCSTRING stringptr);
struct  Pcre_bGVj3RgRlNY6kwJpiYI9b3A  {
char dummy;
};
typedef NU8 TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set;
typedef N_NIMCALL_PTR(void, TY_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct  TNimType  {
NI size;
TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY_ojoeKfW4VYIm36I9cpDTQIg marker;
TY_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct  ExtraData_aRbi7557vgG4KV47nk1CWQ  {
long flags;
void* study_data;
long match_limit;
void* callout_data;
void* tables;
long match_limit_recursion;
void* mark;
void* executable_jit;
};
typedef NU8 TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_CDECL_PTR(int, TY_KqPl2ltkjnSoyb04zAVCAQ) (int what, void* where);
typedef N_CDECL_PTR(ExtraData_aRbi7557vgG4KV47nk1CWQ*, TY_qU2uMIyWirSwn1Nd4hJjDw) (Pcre_bGVj3RgRlNY6kwJpiYI9b3A* code, int options, NCSTRING* errptr);
typedef N_CDECL_PTR(int, TY_y4Iy0gL1MDnSGVt43uUAgQ) (Pcre_bGVj3RgRlNY6kwJpiYI9b3A* code, ExtraData_aRbi7557vgG4KV47nk1CWQ* extra, NCSTRING subject, int length, int startoffset, int options, int* ovector, int ovecsize);
N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_NOINLINE(void, nimLoadLibraryError)(NimStringDesc* path);
N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static void* TM_9c4KgWyI7MBUp1bOanYigOw_2;
TY_OMNNRjh8IIE9bAc9btZcg0NA Dl_158601_;
TY_5cp59bim9aJ4WupX5aVaD1Sg Dl_158691_;
TNimType NTI_bGVj3RgRlNY6kwJpiYI9b3A_;
TNimType NTI_WH9aVfHDhtZbU6Y5QgauqZQ_;
TNimType NTI_aRbi7557vgG4KV47nk1CWQ_;
extern TNimType NTI_3VcGJ5ZzkB2b0MMruetfFg_;
extern TNimType NTI_vr5DoT1jILTGdRlYv1OYpw_;
TNimType NTI_z1uZWlkSdiDfd9ahW9a6Ibug_;
TY_KqPl2ltkjnSoyb04zAVCAQ Dl_158623_;
TY_qU2uMIyWirSwn1Nd4hJjDw Dl_158750_;
TY_y4Iy0gL1MDnSGVt43uUAgQ Dl_158663_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
STRING_LITERAL(TM_9c4KgWyI7MBUp1bOanYigOw_4, "libpcre.so.3", 12);
STRING_LITERAL(TM_9c4KgWyI7MBUp1bOanYigOw_6, "libpcre.so.1", 12);
STRING_LITERAL(TM_9c4KgWyI7MBUp1bOanYigOw_8, "libpcre.so", 10);
STRING_LITERAL(TM_9c4KgWyI7MBUp1bOanYigOw_9, "libpcre.so(.3|.1|)", 18);

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_pcreInit000)(void) {
	nimfr_("pcre", "pcre.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_pcreDatInit000)(void) {
static TNimNode* TM_9c4KgWyI7MBUp1bOanYigOw_14[8];
static TNimNode TM_9c4KgWyI7MBUp1bOanYigOw_0[10];
NTI_bGVj3RgRlNY6kwJpiYI9b3A_.size = sizeof(Pcre_bGVj3RgRlNY6kwJpiYI9b3A);
NTI_bGVj3RgRlNY6kwJpiYI9b3A_.kind = 18;
NTI_bGVj3RgRlNY6kwJpiYI9b3A_.base = 0;
NTI_bGVj3RgRlNY6kwJpiYI9b3A_.flags = 3;
TM_9c4KgWyI7MBUp1bOanYigOw_0[0].len = 0; TM_9c4KgWyI7MBUp1bOanYigOw_0[0].kind = 2;
NTI_bGVj3RgRlNY6kwJpiYI9b3A_.node = &TM_9c4KgWyI7MBUp1bOanYigOw_0[0];
NTI_WH9aVfHDhtZbU6Y5QgauqZQ_.size = sizeof(Pcre_bGVj3RgRlNY6kwJpiYI9b3A*);
NTI_WH9aVfHDhtZbU6Y5QgauqZQ_.kind = 21;
NTI_WH9aVfHDhtZbU6Y5QgauqZQ_.base = (&NTI_bGVj3RgRlNY6kwJpiYI9b3A_);
NTI_WH9aVfHDhtZbU6Y5QgauqZQ_.flags = 3;
NTI_aRbi7557vgG4KV47nk1CWQ_.size = sizeof(ExtraData_aRbi7557vgG4KV47nk1CWQ);
NTI_aRbi7557vgG4KV47nk1CWQ_.kind = 18;
NTI_aRbi7557vgG4KV47nk1CWQ_.base = 0;
NTI_aRbi7557vgG4KV47nk1CWQ_.flags = 3;
TM_9c4KgWyI7MBUp1bOanYigOw_14[0] = &TM_9c4KgWyI7MBUp1bOanYigOw_0[2];
TM_9c4KgWyI7MBUp1bOanYigOw_0[2].kind = 1;
TM_9c4KgWyI7MBUp1bOanYigOw_0[2].offset = offsetof(ExtraData_aRbi7557vgG4KV47nk1CWQ, flags);
TM_9c4KgWyI7MBUp1bOanYigOw_0[2].typ = (&NTI_3VcGJ5ZzkB2b0MMruetfFg_);
TM_9c4KgWyI7MBUp1bOanYigOw_0[2].name = "flags";
TM_9c4KgWyI7MBUp1bOanYigOw_14[1] = &TM_9c4KgWyI7MBUp1bOanYigOw_0[3];
TM_9c4KgWyI7MBUp1bOanYigOw_0[3].kind = 1;
TM_9c4KgWyI7MBUp1bOanYigOw_0[3].offset = offsetof(ExtraData_aRbi7557vgG4KV47nk1CWQ, study_data);
TM_9c4KgWyI7MBUp1bOanYigOw_0[3].typ = (&NTI_vr5DoT1jILTGdRlYv1OYpw_);
TM_9c4KgWyI7MBUp1bOanYigOw_0[3].name = "study_data";
TM_9c4KgWyI7MBUp1bOanYigOw_14[2] = &TM_9c4KgWyI7MBUp1bOanYigOw_0[4];
TM_9c4KgWyI7MBUp1bOanYigOw_0[4].kind = 1;
TM_9c4KgWyI7MBUp1bOanYigOw_0[4].offset = offsetof(ExtraData_aRbi7557vgG4KV47nk1CWQ, match_limit);
TM_9c4KgWyI7MBUp1bOanYigOw_0[4].typ = (&NTI_3VcGJ5ZzkB2b0MMruetfFg_);
TM_9c4KgWyI7MBUp1bOanYigOw_0[4].name = "match_limit";
TM_9c4KgWyI7MBUp1bOanYigOw_14[3] = &TM_9c4KgWyI7MBUp1bOanYigOw_0[5];
TM_9c4KgWyI7MBUp1bOanYigOw_0[5].kind = 1;
TM_9c4KgWyI7MBUp1bOanYigOw_0[5].offset = offsetof(ExtraData_aRbi7557vgG4KV47nk1CWQ, callout_data);
TM_9c4KgWyI7MBUp1bOanYigOw_0[5].typ = (&NTI_vr5DoT1jILTGdRlYv1OYpw_);
TM_9c4KgWyI7MBUp1bOanYigOw_0[5].name = "callout_data";
TM_9c4KgWyI7MBUp1bOanYigOw_14[4] = &TM_9c4KgWyI7MBUp1bOanYigOw_0[6];
TM_9c4KgWyI7MBUp1bOanYigOw_0[6].kind = 1;
TM_9c4KgWyI7MBUp1bOanYigOw_0[6].offset = offsetof(ExtraData_aRbi7557vgG4KV47nk1CWQ, tables);
TM_9c4KgWyI7MBUp1bOanYigOw_0[6].typ = (&NTI_vr5DoT1jILTGdRlYv1OYpw_);
TM_9c4KgWyI7MBUp1bOanYigOw_0[6].name = "tables";
TM_9c4KgWyI7MBUp1bOanYigOw_14[5] = &TM_9c4KgWyI7MBUp1bOanYigOw_0[7];
TM_9c4KgWyI7MBUp1bOanYigOw_0[7].kind = 1;
TM_9c4KgWyI7MBUp1bOanYigOw_0[7].offset = offsetof(ExtraData_aRbi7557vgG4KV47nk1CWQ, match_limit_recursion);
TM_9c4KgWyI7MBUp1bOanYigOw_0[7].typ = (&NTI_3VcGJ5ZzkB2b0MMruetfFg_);
TM_9c4KgWyI7MBUp1bOanYigOw_0[7].name = "match_limit_recursion";
TM_9c4KgWyI7MBUp1bOanYigOw_14[6] = &TM_9c4KgWyI7MBUp1bOanYigOw_0[8];
TM_9c4KgWyI7MBUp1bOanYigOw_0[8].kind = 1;
TM_9c4KgWyI7MBUp1bOanYigOw_0[8].offset = offsetof(ExtraData_aRbi7557vgG4KV47nk1CWQ, mark);
TM_9c4KgWyI7MBUp1bOanYigOw_0[8].typ = (&NTI_vr5DoT1jILTGdRlYv1OYpw_);
TM_9c4KgWyI7MBUp1bOanYigOw_0[8].name = "mark";
TM_9c4KgWyI7MBUp1bOanYigOw_14[7] = &TM_9c4KgWyI7MBUp1bOanYigOw_0[9];
TM_9c4KgWyI7MBUp1bOanYigOw_0[9].kind = 1;
TM_9c4KgWyI7MBUp1bOanYigOw_0[9].offset = offsetof(ExtraData_aRbi7557vgG4KV47nk1CWQ, executable_jit);
TM_9c4KgWyI7MBUp1bOanYigOw_0[9].typ = (&NTI_vr5DoT1jILTGdRlYv1OYpw_);
TM_9c4KgWyI7MBUp1bOanYigOw_0[9].name = "executable_jit";
TM_9c4KgWyI7MBUp1bOanYigOw_0[1].len = 8; TM_9c4KgWyI7MBUp1bOanYigOw_0[1].kind = 2; TM_9c4KgWyI7MBUp1bOanYigOw_0[1].sons = &TM_9c4KgWyI7MBUp1bOanYigOw_14[0];
NTI_aRbi7557vgG4KV47nk1CWQ_.node = &TM_9c4KgWyI7MBUp1bOanYigOw_0[1];
NTI_z1uZWlkSdiDfd9ahW9a6Ibug_.size = sizeof(ExtraData_aRbi7557vgG4KV47nk1CWQ*);
NTI_z1uZWlkSdiDfd9ahW9a6Ibug_.kind = 21;
NTI_z1uZWlkSdiDfd9ahW9a6Ibug_.base = (&NTI_aRbi7557vgG4KV47nk1CWQ_);
NTI_z1uZWlkSdiDfd9ahW9a6Ibug_.flags = 3;
if (!((TM_9c4KgWyI7MBUp1bOanYigOw_2 = nimLoadLibrary((NimStringDesc*) &TM_9c4KgWyI7MBUp1bOanYigOw_4))
||(TM_9c4KgWyI7MBUp1bOanYigOw_2 = nimLoadLibrary((NimStringDesc*) &TM_9c4KgWyI7MBUp1bOanYigOw_6))
||(TM_9c4KgWyI7MBUp1bOanYigOw_2 = nimLoadLibrary((NimStringDesc*) &TM_9c4KgWyI7MBUp1bOanYigOw_8))
)) nimLoadLibraryError((NimStringDesc*) &TM_9c4KgWyI7MBUp1bOanYigOw_9);
	Dl_158601_ = (TY_OMNNRjh8IIE9bAc9btZcg0NA) nimGetProcAddr(TM_9c4KgWyI7MBUp1bOanYigOw_2, "pcre_compile");
	Dl_158691_ = (TY_5cp59bim9aJ4WupX5aVaD1Sg) nimGetProcAddr(TM_9c4KgWyI7MBUp1bOanYigOw_2, "pcre_free_substring");
	Dl_158623_ = (TY_KqPl2ltkjnSoyb04zAVCAQ) nimGetProcAddr(TM_9c4KgWyI7MBUp1bOanYigOw_2, "pcre_config");
	Dl_158750_ = (TY_qU2uMIyWirSwn1Nd4hJjDw) nimGetProcAddr(TM_9c4KgWyI7MBUp1bOanYigOw_2, "pcre_study");
	Dl_158663_ = (TY_y4Iy0gL1MDnSGVt43uUAgQ) nimGetProcAddr(TM_9c4KgWyI7MBUp1bOanYigOw_2, "pcre_exec");
}

