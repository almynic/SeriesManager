/* Generated by Nim Compiler v0.16.1 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/almynic/Nim/lib -o /home/almynic/Desktop/NimProjects/SeriesManager/nimcache/stdlib_os.o /home/almynic/Desktop/NimProjects/SeriesManager/nimcache/stdlib_os.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
#include <errno.h>
#include <stdio.h>
#undef linux
typedef struct TY_sM4lkSb7zS6F7OVMvW9cffQ TY_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell_1zcF9cV8XIAtbN8h5HRUB8g Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct CellSeq_Axo1XVm9aaQueTOldv8le5w CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct GcHeap_1TRH1TZMaVZTnLNcIHuNFQ GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct GcStack_7fytPA5bBsob6See21YMRA GcStack_7fytPA5bBsob6See21YMRA;
typedef struct MemRegion_x81NhDv59b8ercDZ9bi85jyg MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct SmallChunk_tXn60W2f8h3jgAYdEmy5NQ SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct LLChunk_XsENErzHIZV9bhvyJx56wGw LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct BigChunk_Rv9c70Uhp2TytkX7eH78qEg BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct IntSet_EZObFrE3NC9bIb3YMkY9crZA IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct Trunk_W0r8S0Y3UGke6T9bIUWnnuw Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct AvlNode_IaqjtwKhxLEpvDS9bct9blEw AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct GcStat_0RwLoVBHZPfUAcLczmfQAg GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct CellSet_jG87P0AI9aZtss9ccTYBIISQ CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct PageDesc_fublkgIY4LG3mT51LU2WHg PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct OSError_3XwRQvmzCEOC4QnT706q1g OSError_3XwRQvmzCEOC4QnT706q1g;
typedef struct SystemError_Fjf9b9b2IlzRO2tspHxG3tgg SystemError_Fjf9b9b2IlzRO2tspHxG3tgg;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct BaseChunk_Sdq7WpT6qAH858F5ZEdG3w BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct FreeCell_u6M5LHprqzkn9axr04yg9bGQ FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
typedef NU8 TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, TY_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
struct  Cell_1zcF9cV8XIAtbN8h5HRUB8g  {
NI refcount;
TNimType* typ;
};
struct  GcStack_7fytPA5bBsob6See21YMRA  {
void* bottom;
};
struct  CellSeq_Axo1XVm9aaQueTOldv8le5w  {
NI len;
NI cap;
Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* TY_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef Trunk_W0r8S0Y3UGke6T9bIUWnnuw* TY_lh2A89ahMmYg9bCmpVaplLbA[256];
struct  IntSet_EZObFrE3NC9bIb3YMkY9crZA  {
TY_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef AvlNode_IaqjtwKhxLEpvDS9bct9blEw* TY_0aOLqZchNi8nWtMTi8ND8w[2];
struct  AvlNode_IaqjtwKhxLEpvDS9bct9blEw  {
TY_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct  MemRegion_x81NhDv59b8ercDZ9bi85jyg  {
NI minLargeObj;
NI maxLargeObj;
TY_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI lastSize;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* freeChunksList;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* heapLink;
IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
};
struct  GcStat_0RwLoVBHZPfUAcLczmfQAg  {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct  CellSet_jG87P0AI9aZtss9ccTYBIISQ  {
NI counter;
NI max;
PageDesc_fublkgIY4LG3mT51LU2WHg* head;
PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct  GcHeap_1TRH1TZMaVZTnLNcIHuNFQ  {
GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
};
typedef NU8 PathComponent_9c1SIU9cO1wHcl09b703A9cDrg;
struct  TNimObject  {
TNimType* m_type;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  SystemError_Fjf9b9b2IlzRO2tspHxG3tgg  {
  Exception Sup;
};
struct  OSError_3XwRQvmzCEOC4QnT706q1g  {
  SystemError_Fjf9b9b2IlzRO2tspHxG3tgg Sup;
NI32 errorCode;
};
struct  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w  {
NI prevSize;
NI size;
NI origSize;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* heapLink;
};
struct  SmallChunk_tXn60W2f8h3jgAYdEmy5NQ  {
  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct  LLChunk_XsENErzHIZV9bhvyJx56wGw  {
NI size;
NI acc;
LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
struct  BigChunk_Rv9c70Uhp2TytkX7eH78qEg  {
  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
typedef NI TY_9a8QARi5WsUggNU9bom7kzTQ[8];
struct  Trunk_W0r8S0Y3UGke6T9bIUWnnuw  {
Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct  PageDesc_fublkgIY4LG3mT51LU2WHg  {
PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct  FreeCell_u6M5LHprqzkn9axr04yg9bGQ  {
FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
struct TY_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, TM_yu6cxgKBBXbNsTkT9cyMd4g_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(TY_T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
static N_INLINE(NimStringDesc*, pop_9cDsfK2acP02vJ9bhxIE9caEAos)(TY_sM4lkSb7zS6F7OVMvW9cffQ** s);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemSize, NI newLen);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NI, findEnvVar_cmJJ3H7KloA4DztTvzWyCw)(NimStringDesc* key);
N_NIMCALL(void, getEnvVarsC_xlXgIeBHBOL9cl4MJcFJ8xA)(void);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(CellSeq_Axo1XVm9aaQueTOldv8le5w* s, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
static N_INLINE(NIM_BOOL, eqeq__9ccNWqrTIE9bcAqE2Q0ro7zgsystem)(NCSTRING x, NCSTRING y);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemSize);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start, NI last);
N_NIMCALL(void, failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA)(NimStringDesc* msg);
N_NOINLINE(void, raiseOSError_86HIIOlD5N61CWaO5GBgqA)(NI32 errorCode, NimStringDesc* additionalInfo);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, osErrorMsg_v9awlLNgSl9aayKENuY0r8AA)(NI32 errorCode);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(NI32, osLastError_YyC2FKP9bqQiUDq2XVqW9acA)(void);
NIM_BOOL envComputed_LLyFo9bsdu1ZXMDvAe8DhrQ;
TY_sM4lkSb7zS6F7OVMvW9cffQ* environment_mlhK49b6YMgc9cgrcYkKq9a3g;
extern TNimType NTI_sM4lkSb7zS6F7OVMvW9cffQ_;
extern NCSTRING* environ;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern int cmdCount;
extern NCSTRING* cmdLine;
extern GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
extern TNimType NTI_Qx9aKy4vZ9bVz9bnG9brQcRHGA_;
extern TNimType NTI_3XwRQvmzCEOC4QnT706q1g_;
STRING_LITERAL(TM_yu6cxgKBBXbNsTkT9cyMd4g_7, "", 0);
STRING_LITERAL(TM_yu6cxgKBBXbNsTkT9cyMd4g_8, "\012  not (path == \"\") ", 20);
STRING_LITERAL(TM_yu6cxgKBBXbNsTkT9cyMd4g_9, "\012Additional info: ", 18);
STRING_LITERAL(TM_yu6cxgKBBXbNsTkT9cyMd4g_10, "unknown OS error", 16);
static N_NIMCALL(void, TM_yu6cxgKBBXbNsTkT9cyMd4g_2)(void) {
	nimGCvisit((void*)environment_mlhK49b6YMgc9cgrcYkKq9a3g, 0);
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a <= i);
		if (!(T3_)) goto LA4_;
		T3_ = (i <= b);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = i;
		goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

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

static N_INLINE(NimStringDesc*, pop_9cDsfK2acP02vJ9bhxIE9caEAos)(TY_sM4lkSb7zS6F7OVMvW9cffQ** s) {
	NimStringDesc* result;
	NI L;
	NI TM_yu6cxgKBBXbNsTkT9cyMd4g_3;
	nimfr_("pop", "system.nim")
	result = (NimStringDesc*)0;
	nimln_(2262, "system.nim");
	TM_yu6cxgKBBXbNsTkT9cyMd4g_3 = subInt(((*s) ? (*s)->Sup.len : 0), ((NI) 1));
	L = (NI)(TM_yu6cxgKBBXbNsTkT9cyMd4g_3);
	nimln_(2263, "system.nim");
	if ((NU)(L) >= (NU)((*s)->Sup.len)) raiseIndexError();
	result = copyString((*s)->data[L]);
	nimln_(2264, "system.nim");
	(*s) = (TY_sM4lkSb7zS6F7OVMvW9cffQ*) setLengthSeq(&((*s))->Sup, sizeof(NimStringDesc*), ((NI)chckRange(L, ((NI) 0), ((NI) IL64(9223372036854775807)))));
	popFrame();
	return result;
}

static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	nimfr_("usrToCell", "gc.nim")
	result = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	nimln_(138, "gc.nim");
	result = ((Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("rtlAddZCT", "gc.nim")
	nimln_(216, "gc.nim");
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
	nimfr_("nimGCunrefNoCycle", "gc.nim")
	nimln_(270, "gc.nim");
	c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	nimln_(272, "gc.nim");
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		nimln_(273, "gc.nim");
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
	popFrame();
}

static N_INLINE(NIM_BOOL, eqeq__9ccNWqrTIE9bcAqE2Q0ro7zgsystem)(NCSTRING x, NCSTRING y) {
	NIM_BOOL result;
	nimfr_("==", "system.nim")
	result = (NIM_BOOL)0;
	nimln_(3753, "system.nim");
	{
		if (!(((void*) (x)) == ((void*) (y)))) goto LA3_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA3_: ;
	{
		NIM_BOOL T6_;
		nimln_(3754, "system.nim");
		T6_ = (NIM_BOOL)0;
		T6_ = (x == 0);
		if (T6_) goto LA7_;
		T6_ = (y == 0);
		LA7_: ;
		if (!T6_) goto LA8_;
		result = NIM_FALSE;
	}
	goto LA1_;
	LA8_: ;
	{
		int T11_;
		nimln_(3755, "system.nim");
		T11_ = (int)0;
		T11_ = strcmp(x, y);
		result = (T11_ == ((NI32) 0));
	}
	LA1_: ;
	popFrame();
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(void, getEnvVarsC_xlXgIeBHBOL9cl4MJcFJ8xA)(void) {
	nimfr_("getEnvVarsC", "os.nim")
	nimln_(752, "os.nim");
	{
		NI i;
		if (!!(envComputed_LLyFo9bsdu1ZXMDvAe8DhrQ)) goto LA3_;
		nimln_(753, "os.nim");
		if (environment_mlhK49b6YMgc9cgrcYkKq9a3g) nimGCunrefNoCycle(environment_mlhK49b6YMgc9cgrcYkKq9a3g);
		environment_mlhK49b6YMgc9cgrcYkKq9a3g = (TY_sM4lkSb7zS6F7OVMvW9cffQ*) newSeqRC1((&NTI_sM4lkSb7zS6F7OVMvW9cffQ_), 0);
		nimln_(756, "os.nim");
		i = ((NI) 0);
		{
			nimln_(757, "os.nim");
			while (1) {
				NimStringDesc* T12_;
				NimStringDesc* T13_;
				NI TM_yu6cxgKBBXbNsTkT9cyMd4g_4;
				nimln_(758, "os.nim");
				{
					NIM_BOOL T9_;
					if ((NU)(i) > (NU)(100000000)) raiseIndexError();
					T9_ = (NIM_BOOL)0;
					T9_ = eqeq__9ccNWqrTIE9bcAqE2Q0ro7zgsystem(environ[(i)- 0], NIM_NIL);
					if (!T9_) goto LA10_;
					goto LA5;
				}
				LA10_: ;
				nimln_(759, "os.nim");
				if ((NU)(i) > (NU)(100000000)) raiseIndexError();
				T12_ = (NimStringDesc*)0;
				T12_ = cstrToNimstr(environ[(i)- 0]);
				environment_mlhK49b6YMgc9cgrcYkKq9a3g = (TY_sM4lkSb7zS6F7OVMvW9cffQ*) incrSeqV2(&(environment_mlhK49b6YMgc9cgrcYkKq9a3g)->Sup, sizeof(NimStringDesc*));
				T13_ = (NimStringDesc*)0;
				T13_ = environment_mlhK49b6YMgc9cgrcYkKq9a3g->data[environment_mlhK49b6YMgc9cgrcYkKq9a3g->Sup.len]; environment_mlhK49b6YMgc9cgrcYkKq9a3g->data[environment_mlhK49b6YMgc9cgrcYkKq9a3g->Sup.len] = copyStringRC1(T12_);
				if (T13_) nimGCunrefNoCycle(T13_);
				++environment_mlhK49b6YMgc9cgrcYkKq9a3g->Sup.len;
				nimln_(760, "os.nim");
				TM_yu6cxgKBBXbNsTkT9cyMd4g_4 = addInt(i, ((NI) 1));
				i = (NI)(TM_yu6cxgKBBXbNsTkT9cyMd4g_4);
			}
		} LA5: ;
		nimln_(761, "os.nim");
		envComputed_LLyFo9bsdu1ZXMDvAe8DhrQ = NIM_TRUE;
	}
	LA3_: ;
	popFrame();
}

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(NI, findEnvVar_cmJJ3H7KloA4DztTvzWyCw)(NimStringDesc* key) {
	NI result;
	NimStringDesc* temp;
	NimStringDesc* T1_;
	nimfr_("findEnvVar", "os.nim")
{	result = (NI)0;
	nimln_(764, "os.nim");
	getEnvVarsC_xlXgIeBHBOL9cl4MJcFJ8xA();
	nimln_(765, "os.nim");
	T1_ = (NimStringDesc*)0;
	T1_ = rawNewString(key->Sup.len + 1);
appendString(T1_, key);
appendChar(T1_, 61);
	temp = T1_;
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		nimln_(766, "os.nim");
		colontmp_ = (environment_mlhK49b6YMgc9cgrcYkKq9a3g ? (environment_mlhK49b6YMgc9cgrcYkKq9a3g->Sup.len-1) : -1);
		nimln_(1925, "system.nim");
		res = ((NI) 0);
		{
			nimln_(1926, "system.nim");
			while (1) {
				NI TM_yu6cxgKBBXbNsTkT9cyMd4g_5;
				if (!(res <= colontmp_)) goto LA4;
				nimln_(1927, "system.nim");
				i = res;
				nimln_(767, "os.nim");
				{
					NIM_BOOL T7_;
					if ((NU)(i) >= (NU)(environment_mlhK49b6YMgc9cgrcYkKq9a3g->Sup.len)) raiseIndexError();
					T7_ = (NIM_BOOL)0;
					T7_ = nsuStartsWith(environment_mlhK49b6YMgc9cgrcYkKq9a3g->data[i], temp);
					if (!T7_) goto LA8_;
					result = i;
					goto BeforeRet_;
				}
				LA8_: ;
				nimln_(1946, "system.nim");
				TM_yu6cxgKBBXbNsTkT9cyMd4g_5 = addInt(res, ((NI) 1));
				res = (NI)(TM_yu6cxgKBBXbNsTkT9cyMd4g_5);
			} LA4: ;
		}
	}
	nimln_(768, "os.nim");
	result = ((NI) -1);
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, getEnv_8zNgT9bxx7m9cTt2TeVdTdIw)(NimStringDesc* key) {
	NimStringDesc* result;
	NI i;
	nimfr_("getEnv", "os.nim")
{	result = (NimStringDesc*)0;
	nimln_(776, "os.nim");
	i = findEnvVar_cmJJ3H7KloA4DztTvzWyCw(key);
	nimln_(777, "os.nim");
	{
		NI T5_;
		NI TM_yu6cxgKBBXbNsTkT9cyMd4g_6;
		if (!(((NI) 0) <= i)) goto LA3_;
		nimln_(778, "os.nim");
		if ((NU)(i) >= (NU)(environment_mlhK49b6YMgc9cgrcYkKq9a3g->Sup.len)) raiseIndexError();
		if ((NU)(i) >= (NU)(environment_mlhK49b6YMgc9cgrcYkKq9a3g->Sup.len)) raiseIndexError();
		T5_ = (NI)0;
		T5_ = nsuFindChar(environment_mlhK49b6YMgc9cgrcYkKq9a3g->data[i], 61, ((NI) 0), ((NI) 0));
		TM_yu6cxgKBBXbNsTkT9cyMd4g_6 = addInt(T5_, ((NI) 1));
		result = copyStr(environment_mlhK49b6YMgc9cgrcYkKq9a3g->data[i], (NI)(TM_yu6cxgKBBXbNsTkT9cyMd4g_6));
		goto BeforeRet_;
	}
	goto LA1_;
	LA3_: ;
	{
		NCSTRING env;
		nimln_(780, "os.nim");
		env = getenv(key->data);
		nimln_(781, "os.nim");
		{
			NIM_BOOL T9_;
			T9_ = (NIM_BOOL)0;
			T9_ = eqeq__9ccNWqrTIE9bcAqE2Q0ro7zgsystem(env, NIM_NIL);
			if (!T9_) goto LA10_;
			result = copyString(((NimStringDesc*) &TM_yu6cxgKBBXbNsTkT9cyMd4g_7));
			goto BeforeRet_;
		}
		LA10_: ;
		nimln_(782, "os.nim");
		result = cstrToNimstr(env);
	}
	LA1_: ;
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, existsEnv_ahpnHkfRE9cLlJNaRpEL7Vw)(NimStringDesc* key) {
	NIM_BOOL result;
	nimfr_("existsEnv", "os.nim")
{	result = (NIM_BOOL)0;
	nimln_(787, "os.nim");
	{
		NCSTRING T3_;
		NIM_BOOL T4_;
		nimln_(347, "system.nim");
		nimln_(787, "os.nim");
		T3_ = (NCSTRING)0;
		T3_ = getenv(key->data);
		T4_ = (NIM_BOOL)0;
		T4_ = eqeq__9ccNWqrTIE9bcAqE2Q0ro7zgsystem(T3_, NIM_NIL);
		if (!!(T4_)) goto LA5_;
		result = NIM_TRUE;
		goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		NI T8_;
		nimln_(788, "os.nim");
		T8_ = (NI)0;
		T8_ = findEnvVar_cmJJ3H7KloA4DztTvzWyCw(key);
		result = (((NI) 0) <= T8_);
		goto BeforeRet_;
	}
	LA1_: ;
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, nosexistsDir)(NimStringDesc* dir) {
	NIM_BOOL result;
	struct stat res;
	NIM_BOOL T1_;
	int T2_;
	nimfr_("existsDir", "os.nim")
{	result = (NIM_BOOL)0;
	memset((void*)(&res), 0, sizeof(res));
	nimln_(230, "os.nim");
	T1_ = (NIM_BOOL)0;
	T2_ = (int)0;
	T2_ = stat(dir->data, (&res));
	T1_ = (((NI32) 0) <= T2_);
	if (!(T1_)) goto LA3_;
	T1_ = S_ISDIR(res.st_mode);
	LA3_: ;
	result = T1_;
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, osErrorMsg_v9awlLNgSl9aayKENuY0r8AA)(NI32 errorCode) {
	NimStringDesc* result;
	nimfr_("osErrorMsg", "os.nim")
	result = (NimStringDesc*)0;
	nimln_(119, "os.nim");
	result = copyString(((NimStringDesc*) &TM_yu6cxgKBBXbNsTkT9cyMd4g_7));
	nimln_(135, "os.nim");
	{
		NCSTRING T5_;
		nimln_(347, "system.nim");
		nimln_(135, "os.nim");
		if (!!((errorCode == ((NI32) 0)))) goto LA3_;
		nimln_(136, "os.nim");
		T5_ = (NCSTRING)0;
		T5_ = strerror(errorCode);
		result = cstrToNimstr(T5_);
	}
	LA3_: ;
	popFrame();
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr_("asgnRefNoCycle", "gc.nim")
	nimln_(288, "gc.nim");
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
		nimln_(347, "system.nim");
		nimln_(288, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3_;
		nimln_(289, "gc.nim");
		c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		nimln_(290, "gc.nim");
		(*c).refcount += ((NI) 8);
	}
	LA3_: ;
	nimln_(291, "gc.nim");
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* c_2;
		nimln_(347, "system.nim");
		nimln_(291, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7_;
		nimln_(292, "gc.nim");
		c_2 = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		nimln_(293, "gc.nim");
		{
			(*c_2).refcount -= ((NI) 8);
			if (!((NU64)((*c_2).refcount) < (NU64)(((NI) 8)))) goto LA11_;
			nimln_(294, "gc.nim");
			rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c_2);
		}
		LA11_: ;
	}
	LA7_: ;
	nimln_(295, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NOINLINE(void, raiseOSError_86HIIOlD5N61CWaO5GBgqA)(NI32 errorCode, NimStringDesc* additionalInfo) {
	OSError_3XwRQvmzCEOC4QnT706q1g* e;
	nimfr_("raiseOSError", "os.nim")
	e = (OSError_3XwRQvmzCEOC4QnT706q1g*)0;
	nimln_(146, "os.nim");
	e = (OSError_3XwRQvmzCEOC4QnT706q1g*) newObj((&NTI_Qx9aKy4vZ9bVz9bnG9brQcRHGA_), sizeof(OSError_3XwRQvmzCEOC4QnT706q1g));
	(*e).Sup.Sup.Sup.m_type = (&NTI_3XwRQvmzCEOC4QnT706q1g_);
	nimln_(147, "os.nim");
	(*e).errorCode = errorCode;
	nimln_(148, "os.nim");
	{
		if (!((additionalInfo ? additionalInfo->Sup.len : 0) == ((NI) 0))) goto LA3_;
		nimln_(149, "os.nim");
		asgnRefNoCycle((void**) (&(*e).Sup.Sup.message), osErrorMsg_v9awlLNgSl9aayKENuY0r8AA(errorCode));
	}
	goto LA1_;
	LA3_: ;
	{
		NimStringDesc* T6_;
		NimStringDesc* T7_;
		nimln_(151, "os.nim");
		T6_ = (NimStringDesc*)0;
		T7_ = (NimStringDesc*)0;
		T7_ = osErrorMsg_v9awlLNgSl9aayKENuY0r8AA(errorCode);
		T6_ = rawNewString(T7_->Sup.len + additionalInfo->Sup.len + 18);
appendString(T6_, T7_);
appendString(T6_, ((NimStringDesc*) &TM_yu6cxgKBBXbNsTkT9cyMd4g_9));
appendString(T6_, additionalInfo);
		asgnRefNoCycle((void**) (&(*e).Sup.Sup.message), T6_);
	}
	LA1_: ;
	nimln_(152, "os.nim");
	{
		NimStringDesc* T12_;
		if (!(((*e).Sup.Sup.message) && ((*e).Sup.Sup.message)->Sup.len == 0)) goto LA10_;
		nimln_(153, "os.nim");
		T12_ = (NimStringDesc*)0;
		T12_ = (*e).Sup.Sup.message; (*e).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TM_yu6cxgKBBXbNsTkT9cyMd4g_10));
		if (T12_) nimGCunrefNoCycle(T12_);
	}
	LA10_: ;
	nimln_(154, "os.nim");
	raiseException((Exception*)e, "OSError");
	popFrame();
}

N_NIMCALL(NI32, osLastError_YyC2FKP9bqQiUDq2XVqW9acA)(void) {
	NI32 result;
	result = (NI32)0;
	result = errno;
	return result;
}

N_NIMCALL(PathComponent_9c1SIU9cO1wHcl09b703A9cDrg, getSymlinkFileKind_WoXOp8qmMec1P4MyA3LBKg)(NimStringDesc* path) {
	PathComponent_9c1SIU9cO1wHcl09b703A9cDrg result;
	struct stat s;
	nimfr_("getSymlinkFileKind", "os.nim")
	result = (PathComponent_9c1SIU9cO1wHcl09b703A9cDrg)0;
	memset((void*)(&s), 0, sizeof(s));
	nimln_(917, "os.nim");
	{
		if (!!(!(((path) && (path)->Sup.len == 0)))) goto LA3_;
		failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_yu6cxgKBBXbNsTkT9cyMd4g_8));
	}
	LA3_: ;
	nimln_(918, "os.nim");
	{
		int T7_;
		NI32 T10_;
		T7_ = (int)0;
		T7_ = stat(path->data, (&s));
		if (!(T7_ < ((NI32) 0))) goto LA8_;
		nimln_(919, "os.nim");
		T10_ = (NI32)0;
		T10_ = osLastError_YyC2FKP9bqQiUDq2XVqW9acA();
		raiseOSError_86HIIOlD5N61CWaO5GBgqA(T10_, ((NimStringDesc*) &TM_yu6cxgKBBXbNsTkT9cyMd4g_7));
	}
	LA8_: ;
	nimln_(920, "os.nim");
	{
		NIM_BOOL T13_;
		T13_ = (NIM_BOOL)0;
		T13_ = S_ISDIR(s.st_mode);
		if (!T13_) goto LA14_;
		nimln_(921, "os.nim");
		result = ((PathComponent_9c1SIU9cO1wHcl09b703A9cDrg) 3);
	}
	goto LA11_;
	LA14_: ;
	{
		nimln_(923, "os.nim");
		result = ((PathComponent_9c1SIU9cO1wHcl09b703A9cDrg) 1);
	}
	LA11_: ;
	popFrame();
	return result;
}

N_NIMCALL(void, nosmoveFile)(NimStringDesc* source, NimStringDesc* dest) {
	nimfr_("moveFile", "os.nim")
	nimln_(631, "os.nim");
	{
		int T3_;
		NI32 T6_;
		NCSTRING T7_;
		NimStringDesc* T8_;
		nimln_(347, "system.nim");
		nimln_(631, "os.nim");
		T3_ = (int)0;
		T3_ = rename(source->data, dest->data);
		if (!!((T3_ == ((NI32) 0)))) goto LA4_;
		nimln_(632, "os.nim");
		T6_ = (NI32)0;
		T6_ = osLastError_YyC2FKP9bqQiUDq2XVqW9acA();
		T7_ = (NCSTRING)0;
		T7_ = strerror(errno);
		T8_ = (NimStringDesc*)0;
		T8_ = cstrToNimstr(T7_);
		raiseOSError_86HIIOlD5N61CWaO5GBgqA(T6_, T8_);
	}
	LA4_: ;
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, stdlib_osInit000)(void) {
	nimfr_("os", "os.nim")
nimRegisterGlobalMarker(TM_yu6cxgKBBXbNsTkT9cyMd4g_2);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_osDatInit000)(void) {
}

