#define WIN32_LEAN_AND_MEAN 1

/* Stormland FR V1.1 portable UI — installer maintenance revision 1.1.2.
   Uses the exact user-provided skin and the validated V1.1 runtime payloads. */

typedef unsigned char BYTE;
typedef unsigned short WORD;
typedef unsigned int UINT;
typedef unsigned long DWORD;
typedef long LONG;
typedef unsigned long ULONG;
typedef unsigned long long ULONGLONG;
typedef long long LONGLONG;
typedef unsigned long long ULONG_PTR;
typedef long long LONG_PTR;
typedef ULONG_PTR WPARAM;
typedef LONG_PTR LPARAM;
typedef LONG_PTR LRESULT;
typedef int BOOL;
typedef void* PVOID;
typedef void* LPVOID;
typedef const void* LPCVOID;
typedef unsigned short WCHAR;
typedef WCHAR* LPWSTR;
typedef const WCHAR* LPCWSTR;
typedef char CHAR;
typedef CHAR* LPSTR;
typedef const CHAR* LPCSTR;
typedef void* HANDLE;
typedef HANDLE HINSTANCE;
typedef HANDLE HMODULE;
typedef HANDLE HWND;
typedef HANDLE HDC;
typedef HANDLE HGDIOBJ;
typedef HANDLE HBRUSH;
typedef HANDLE HPEN;
typedef HANDLE HFONT;
typedef HANDLE HCURSOR;
typedef HANDLE HICON;
typedef HANDLE HKEY;
typedef HANDLE PIDLIST_ABSOLUTE;
typedef DWORD COLORREF;
typedef DWORD (*LPTHREAD_START_ROUTINE)(LPVOID);
typedef LRESULT (__stdcall *WNDPROC)(HWND,UINT,WPARAM,LPARAM);

typedef struct tagPOINT { LONG x,y; } POINT;
typedef struct tagRECT { LONG left,top,right,bottom; } RECT;
typedef struct tagMSG { HWND hwnd; UINT message; WPARAM wParam; LPARAM lParam; DWORD time; POINT pt; DWORD lPrivate; } MSG;
typedef struct tagPAINTSTRUCT { HDC hdc; BOOL fErase; RECT rcPaint; BOOL fRestore; BOOL fIncUpdate; BYTE rgbReserved[32]; } PAINTSTRUCT;
typedef struct tagWNDCLASSEXW { UINT cbSize,style; WNDPROC lpfnWndProc; int cbClsExtra,cbWndExtra; HINSTANCE hInstance; HICON hIcon; HCURSOR hCursor; HBRUSH hbrBackground; LPCWSTR lpszMenuName,lpszClassName; HICON hIconSm; } WNDCLASSEXW;
typedef union _LARGE_INTEGER { struct { DWORD LowPart; LONG HighPart; }; LONGLONG QuadPart; } LARGE_INTEGER;
typedef struct _WIN32_FIND_DATAW { DWORD dwFileAttributes; DWORD ftCreationTimeLow,ftCreationTimeHigh,ftLastAccessTimeLow,ftLastAccessTimeHigh,ftLastWriteTimeLow,ftLastWriteTimeHigh,nFileSizeHigh,nFileSizeLow,dwReserved0,dwReserved1; WCHAR cFileName[260]; WCHAR cAlternateFileName[14]; DWORD dwFileType,dwCreatorType; WORD wFinderFlags; } WIN32_FIND_DATAW;
typedef struct tagBROWSEINFOW { HWND hwndOwner; PIDLIST_ABSOLUTE pidlRoot; LPWSTR pszDisplayName; LPCWSTR lpszTitle; UINT ulFlags; void* lpfn; LPARAM lParam; int iImage; } BROWSEINFOW;
typedef struct tagBITMAPINFOHEADER { DWORD biSize; LONG biWidth,biHeight; WORD biPlanes,biBitCount; DWORD biCompression,biSizeImage; LONG biXPelsPerMeter,biYPelsPerMeter; DWORD biClrUsed,biClrImportant; } BITMAPINFOHEADER;
typedef struct tagRGBQUAD { BYTE rgbBlue,rgbGreen,rgbRed,rgbReserved; } RGBQUAD;
typedef struct tagBITMAPINFO { BITMAPINFOHEADER bmiHeader; RGBQUAD bmiColors[1]; } BITMAPINFO;
typedef struct _TOKEN_ELEVATION { DWORD TokenIsElevated; } TOKEN_ELEVATION;

#define NULL ((void*)0)
#define TRUE 1
#define FALSE 0
#define INVALID_HANDLE_VALUE ((HANDLE)(LONG_PTR)-1)
#define WINAPI __stdcall
#define CALLBACK __stdcall
#define MAX_PATH 260
#define CP_UTF8 65001
#define FILE_ATTRIBUTE_DIRECTORY 0x10
#define INVALID_FILE_ATTRIBUTES 0xFFFFFFFFUL
#define GENERIC_READ 0x80000000UL
#define GENERIC_WRITE 0x40000000UL
#define FILE_SHARE_READ 0x1
#define OPEN_EXISTING 3
#define CREATE_ALWAYS 2
#define FILE_ATTRIBUTE_NORMAL 0x80
#define FILE_BEGIN 0
#define SW_SHOWNORMAL 1
#define WS_POPUP 0x80000000UL
#define WS_VISIBLE 0x10000000UL
#define WS_EX_APPWINDOW 0x00040000UL
#define CS_HREDRAW 0x0002
#define CS_VREDRAW 0x0001
#define WM_DESTROY 0x0002
#define WM_PAINT 0x000F
#define WM_CLOSE 0x0010
#define WM_SETCURSOR 0x0020
#define WM_KEYDOWN 0x0100
#define WM_TIMER 0x0113
#define WM_MOUSEMOVE 0x0200
#define WM_LBUTTONDOWN 0x0201
#define WM_LBUTTONUP 0x0202
#define WM_APP 0x8000
#define WM_APP_DONE (WM_APP+7)
#define WM_APP_PROGRESS (WM_APP+8)
#define WM_NCLBUTTONDOWN 0x00A1
#define HTCAPTION 2
#define VK_ESCAPE 0x1B
#define IDC_ARROW ((LPCWSTR)32512)
#define IDC_HAND ((LPCWSTR)32649)
#define SPI_GETWORKAREA 0x0030
#define DIB_RGB_COLORS 0
#define SRCCOPY 0x00CC0020
#define HALFTONE 4
#define BI_RGB 0
#define TRANSPARENT 1
#define PS_SOLID 0
#define FW_NORMAL 400
#define FW_SEMIBOLD 600
#define FW_BOLD 700
#define DEFAULT_CHARSET 1
#define OUT_DEFAULT_PRECIS 0
#define CLIP_DEFAULT_PRECIS 0
#define CLEARTYPE_QUALITY 5
#define DEFAULT_PITCH 0
#define FF_DONTCARE 0
#define DT_LEFT 0x0000
#define DT_CENTER 0x0001
#define DT_VCENTER 0x0004
#define DT_WORDBREAK 0x0010
#define DT_SINGLELINE 0x0020
#define DT_END_ELLIPSIS 0x8000
#define TOKEN_QUERY 0x0008
#define TokenElevation 20
#define KEY_READ 0x20019
#define REG_SZ 1
#define REG_EXPAND_SZ 2
#define BIF_RETURNONLYFSDIRS 0x0001
#define BIF_NEWDIALOGSTYLE 0x0040
#define ERROR_SUCCESS 0
#define MOVEFILE_REPLACE_EXISTING 0x00000001
#define MOVEFILE_WRITE_THROUGH 0x00000008
#define HKEY_CURRENT_USER ((HKEY)(ULONG_PTR)0xFFFFFFFF80000001ULL)
#define HKEY_LOCAL_MACHINE ((HKEY)(ULONG_PTR)0xFFFFFFFF80000002ULL)

__declspec(dllimport) HMODULE WINAPI GetModuleHandleW(LPCWSTR);
__declspec(dllimport) DWORD WINAPI GetModuleFileNameW(HMODULE,LPWSTR,DWORD);
__declspec(dllimport) DWORD WINAPI GetFileAttributesW(LPCWSTR);
__declspec(dllimport) HANDLE WINAPI CreateFileW(LPCWSTR,DWORD,DWORD,LPVOID,DWORD,DWORD,HANDLE);
__declspec(dllimport) BOOL WINAPI ReadFile(HANDLE,LPVOID,DWORD,DWORD*,LPVOID);
__declspec(dllimport) BOOL WINAPI WriteFile(HANDLE,LPCVOID,DWORD,DWORD*,LPVOID);
__declspec(dllimport) BOOL WINAPI SetFilePointerEx(HANDLE,LARGE_INTEGER,LARGE_INTEGER*,DWORD);
__declspec(dllimport) BOOL WINAPI GetFileSizeEx(HANDLE,LARGE_INTEGER*);
__declspec(dllimport) BOOL WINAPI CloseHandle(HANDLE);
__declspec(dllimport) BOOL WINAPI CreateDirectoryW(LPCWSTR,LPVOID);
__declspec(dllimport) DWORD WINAPI GetTempPathW(DWORD,LPWSTR);
__declspec(dllimport) DWORD WINAPI GetCurrentProcessId(void);
__declspec(dllimport) HANDLE WINAPI GetCurrentProcess(void);
__declspec(dllimport) BOOL WINAPI DeleteFileW(LPCWSTR);
__declspec(dllimport) BOOL WINAPI RemoveDirectoryW(LPCWSTR);
__declspec(dllimport) HANDLE WINAPI FindFirstFileW(LPCWSTR,WIN32_FIND_DATAW*);
__declspec(dllimport) BOOL WINAPI FindNextFileW(HANDLE,WIN32_FIND_DATAW*);
__declspec(dllimport) BOOL WINAPI FindClose(HANDLE);
__declspec(dllimport) BOOL WINAPI CopyFileW(LPCWSTR,LPCWSTR,BOOL);
__declspec(dllimport) HANDLE WINAPI CreateThread(LPVOID,ULONG_PTR,LPTHREAD_START_ROUTINE,LPVOID,DWORD,DWORD*);
__declspec(dllimport) int WINAPI MultiByteToWideChar(UINT,DWORD,LPCSTR,int,LPWSTR,int);
__declspec(dllimport) DWORD WINAPI GetEnvironmentVariableW(LPCWSTR,LPWSTR,DWORD);
__declspec(dllimport) HANDLE WINAPI GetProcessHeap(void);
__declspec(dllimport) LPVOID WINAPI HeapAlloc(HANDLE,DWORD,ULONG_PTR);
__declspec(dllimport) BOOL WINAPI HeapFree(HANDLE,DWORD,LPVOID);
__declspec(dllimport) void WINAPI ExitProcess(UINT);
__declspec(dllimport) BOOL WINAPI MoveFileExW(LPCWSTR,LPCWSTR,DWORD);
__declspec(dllimport) WORD WINAPI RegisterClassExW(const WNDCLASSEXW*);
__declspec(dllimport) HWND WINAPI CreateWindowExW(DWORD,LPCWSTR,LPCWSTR,DWORD,int,int,int,int,HWND,HANDLE,HINSTANCE,LPVOID);
__declspec(dllimport) BOOL WINAPI ShowWindow(HWND,int);
__declspec(dllimport) BOOL WINAPI UpdateWindow(HWND);
__declspec(dllimport) BOOL WINAPI GetMessageW(MSG*,HWND,UINT,UINT);
__declspec(dllimport) BOOL WINAPI TranslateMessage(const MSG*);
__declspec(dllimport) LRESULT WINAPI DispatchMessageW(const MSG*);
__declspec(dllimport) LRESULT WINAPI DefWindowProcW(HWND,UINT,WPARAM,LPARAM);
__declspec(dllimport) HDC WINAPI BeginPaint(HWND,PAINTSTRUCT*);
__declspec(dllimport) BOOL WINAPI EndPaint(HWND,const PAINTSTRUCT*);
__declspec(dllimport) BOOL WINAPI GetClientRect(HWND,RECT*);
__declspec(dllimport) BOOL WINAPI InvalidateRect(HWND,const RECT*,BOOL);
__declspec(dllimport) BOOL WINAPI PostMessageW(HWND,UINT,WPARAM,LPARAM);
__declspec(dllimport) ULONG_PTR WINAPI SetTimer(HWND,ULONG_PTR,UINT,void*);
__declspec(dllimport) BOOL WINAPI KillTimer(HWND,ULONG_PTR);
__declspec(dllimport) BOOL WINAPI SetProcessDPIAware(void);
__declspec(dllimport) BOOL WINAPI SystemParametersInfoW(UINT,UINT,LPVOID,UINT);
__declspec(dllimport) BOOL WINAPI DestroyWindow(HWND);
__declspec(dllimport) void WINAPI PostQuitMessage(int);
__declspec(dllimport) HCURSOR WINAPI LoadCursorW(HINSTANCE,LPCWSTR);
__declspec(dllimport) HCURSOR WINAPI SetCursor(HCURSOR);
__declspec(dllimport) BOOL WINAPI ReleaseCapture(void);
__declspec(dllimport) LRESULT WINAPI SendMessageW(HWND,UINT,WPARAM,LPARAM);
__declspec(dllimport) int WINAPI StretchDIBits(HDC,int,int,int,int,int,int,int,int,LPCVOID,const BITMAPINFO*,UINT,DWORD);
__declspec(dllimport) int WINAPI SetStretchBltMode(HDC,int);
__declspec(dllimport) HFONT WINAPI CreateFontW(int,int,int,int,int,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,LPCWSTR);
__declspec(dllimport) HGDIOBJ WINAPI SelectObject(HDC,HGDIOBJ);
__declspec(dllimport) COLORREF WINAPI SetTextColor(HDC,COLORREF);
__declspec(dllimport) int WINAPI SetBkMode(HDC,int);
__declspec(dllimport) int WINAPI DrawTextW(HDC,LPCWSTR,int,RECT*,UINT);
__declspec(dllimport) HGDIOBJ WINAPI GetStockObject(int);
__declspec(dllimport) HBRUSH WINAPI CreateSolidBrush(COLORREF);
__declspec(dllimport) HPEN WINAPI CreatePen(int,int,COLORREF);
__declspec(dllimport) BOOL WINAPI DeleteObject(HGDIOBJ);
__declspec(dllimport) BOOL WINAPI RoundRect(HDC,int,int,int,int,int,int);
__declspec(dllimport) ULONG_PTR WINAPI ShellExecuteW(HWND,LPCWSTR,LPCWSTR,LPCWSTR,LPCWSTR,int);
__declspec(dllimport) PIDLIST_ABSOLUTE WINAPI SHBrowseForFolderW(BROWSEINFOW*);
__declspec(dllimport) BOOL WINAPI SHGetPathFromIDListW(PIDLIST_ABSOLUTE,LPWSTR);
__declspec(dllimport) LONG WINAPI RegOpenKeyExW(HKEY,LPCWSTR,DWORD,DWORD,HKEY*);
__declspec(dllimport) LONG WINAPI RegEnumKeyExW(HKEY,DWORD,LPWSTR,DWORD*,DWORD*,LPWSTR,DWORD*,LPVOID);
__declspec(dllimport) LONG WINAPI RegQueryValueExW(HKEY,LPCWSTR,DWORD*,DWORD*,BYTE*,DWORD*);
__declspec(dllimport) LONG WINAPI RegCloseKey(HKEY);
__declspec(dllimport) BOOL WINAPI OpenProcessToken(HANDLE,DWORD,HANDLE*);
__declspec(dllimport) BOOL WINAPI GetTokenInformation(HANDLE,int,LPVOID,DWORD,DWORD*);
__declspec(dllimport) LONG WINAPI OleInitialize(LPVOID);
__declspec(dllimport) void WINAPI OleUninitialize(void);
__declspec(dllimport) void WINAPI CoTaskMemFree(LPVOID);

void* memset(void* d,int c,ULONG_PTR n){BYTE*p=(BYTE*)d;while(n--)*p++=(BYTE)c;return d;}
void* memcpy(void*d,const void*s,ULONG_PTR n){BYTE*o=(BYTE*)d;const BYTE*i=(const BYTE*)s;while(n--)*o++=*i++;return d;}
int memcmp(const void*a,const void*b,ULONG_PTR n){const BYTE*x=(const BYTE*)a,*y=(const BYTE*)b;while(n--){if(*x!=*y)return *x<*y?-1:1;x++;y++;}return 0;}

extern unsigned char _binary_skin_bgra_start[];

#define BASE_W 1200
#define BASE_H 675
#define APP_VERSION L"V1.1"
#define PATH_CAP 2048
#define IO_CAP (1024*1024)

static const char *FR_CUSTOM_T="50acd38812044f7c05f1298fd77461088530dc65a9dde7eb0187e850cd549eee";
static const char *FR_CUSTOM_G="a7c9efff51d605fa7a3f04b6da0bef9359e60dba45bb19a68644785c1ac817f0";
static const char *FR_ORIG_T="b2e5b9c60b42c4653bd8ea192b7d5dfd6157ef3ff4a17018128caf9ae28f1f99";
static const char *FR_ORIG_G="acefda288b82f11fe2c32dea16787e8181ddd365935fd329f918e7804d41b6a4";
static const char *EN_CUSTOM_T="c28189d25b8becd543426097ed8921494bd10617c1ce8bc86c3c6f1026ae3367";
static const char *EN_CUSTOM_G="0256412eeb0ee91166a007020086b5de433c98e92a01ac8230e44f1ff5506050";
static const char *EN_ORIG_T="ae638744b3c71d2a4c95c76d0f29e0ae098f82a1cfa3c580e9fb997a1b503f89";
static const char *EN_ORIG_G="c5395b0762bde41d5625ec73b60f21fff85cf4bfc709bd6c986c81397f277c15";
static const char *V81_T="9deb5f94856f6dbcd5d89d7a0503dba75ad294106eb276ed571de1e0570d10c6";
static const char *V81_G="a3f2fb526777356b857bdcbc675fbe033b105997385ec32c2313c279a9a8a241";
static const char *V76_T="79f5c50a51b2a698bad01304e54ffa6dfa641809d27decc97745c204e1814a63";
static const char *V76_G="46222b8dbff7b2e75ca01c5212af192576205484cc82f4e0482c4ea087219d3a";
static const char *V61_T="89afe4bc71e3b69de1d1139170d6ad89247dda2c1299c94cf79378afbe6cc520";
static const char *V61_G="d3fc3b26437b097753cf82c7f0c9fc46d3c69f001cf335eb7bc8876c8963d5ab";
static const char *V44_T="85f636b7844b8bec7cb82fdf713fd8db3f034d0bf70299370659ed98ce9701c0";
static const char *V44_G="60d93ded3bfea4b2b3aea5d0a1484bde92b1a9c52f4bb19be4691cf97871a6f9";

static HWND gHwnd=NULL;
static HCURSOR gArrow=NULL,gHand=NULL;
static WCHAR gExePath[PATH_CAP],gGamePath[PATH_CAP],gError[512],gProgressText[256];
static int gClientW=BASE_W,gClientH=BASE_H,gGameValid=0,gBusy=0,gOperation=0,gModal=0,gHover=0,gProgress=0,gInfoSuccess=0;
static BYTE gIo[IO_CAP];

typedef struct { int known,tr,hud,exact_original; } State;

static ULONG_PTR wlen(LPCWSTR s){ULONG_PTR n=0;if(s)while(s[n])n++;return n;}
static void wcopy(LPWSTR d,ULONG_PTR cap,LPCWSTR s){ULONG_PTR i=0;if(!cap)return;while(s&&s[i]&&i+1<cap){d[i]=s[i];i++;}d[i]=0;}
static void wcat(LPWSTR d,ULONG_PTR cap,LPCWSTR s){ULONG_PTR i=wlen(d),j=0;while(s&&s[j]&&i+1<cap)d[i++]=s[j++];d[i]=0;}
static int weq(LPCWSTR a,LPCWSTR b){ULONG_PTR i=0;if(!a||!b)return 0;while(a[i]&&b[i]){WCHAR x=a[i],y=b[i];if(x>='A'&&x<='Z')x+=32;if(y>='A'&&y<='Z')y+=32;if(x!=y)return 0;i++;}return a[i]==0&&b[i]==0;}
static int wcontains(LPCWSTR s,LPCWSTR q){ULONG_PTR n=wlen(s),m=wlen(q),i,j;if(!m)return 1;for(i=0;i+m<=n;i++){for(j=0;j<m&&s[i+j]==q[j];j++){}if(j==m)return 1;}return 0;}
static int ccmp(const char*a,const char*b){while(*a&&*a==*b){a++;b++;}return (BYTE)*a-(BYTE)*b;}
static void uint_to_w(DWORD v,LPWSTR out,ULONG_PTR cap){WCHAR t[16];int n=0,k=0;if(!v){wcopy(out,cap,L"0");return;}while(v&&n<15){t[n++]=(WCHAR)(L'0'+v%10);v/=10;}while(n&&k+1<(int)cap)out[k++]=t[--n];out[k]=0;}
static COLORREF RGBc(BYTE r,BYTE g,BYTE b){return (COLORREF)(r|((DWORD)g<<8)|((DWORD)b<<16));}
static int Sx(int v){return (int)(((LONGLONG)v*gClientW)/BASE_W);}
static int Sy(int v){return (int)(((LONGLONG)v*gClientH)/BASE_H);}
static void ClientToBase(int x,int y,int*bx,int*by){*bx=(int)(((LONGLONG)x*BASE_W)/gClientW);*by=(int)(((LONGLONG)y*BASE_H)/gClientH);}
static int InRectB(int x,int y,int x1,int y1,int x2,int y2){return x>=x1&&x<x2&&y>=y1&&y<y2;}
static int FileExists(LPCWSTR p){DWORD a=GetFileAttributesW(p);return a!=INVALID_FILE_ATTRIBUTES&&!(a&FILE_ATTRIBUTE_DIRECTORY);}
static int DirExists(LPCWSTR p){DWORD a=GetFileAttributesW(p);return a!=INVALID_FILE_ATTRIBUTES&&(a&FILE_ATTRIBUTE_DIRECTORY);}
static void JoinPath(LPWSTR out,ULONG_PTR cap,LPCWSTR a,LPCWSTR b){wcopy(out,cap,a);ULONG_PTR n=wlen(out);if(n&&out[n-1]!=L'\\'&&out[n-1]!=L'/')wcat(out,cap,L"\\");wcat(out,cap,b);}
static void ParentDir(LPWSTR p){ULONG_PTR n=wlen(p);while(n){if(p[n-1]==L'\\'||p[n-1]==L'/'){p[n-1]=0;return;}n--;}p[0]=0;}
static void ExeDir(LPWSTR out,ULONG_PTR cap){wcopy(out,cap,gExePath);ParentDir(out);}
static void EnsureDirsForFile(LPWSTR p){ULONG_PTR n=wlen(p),i;if(n<3)return;for(i=3;i<n;i++)if(p[i]==L'\\'||p[i]==L'/'){WCHAR old=p[i];p[i]=0;CreateDirectoryW(p,NULL);p[i]=old;}}

/* SHA-256 */
typedef unsigned int U32; typedef unsigned long long U64; typedef struct{U32 h[8];U64 len;BYTE block[64];ULONG_PTR used;}Sha;
static U32 rr(U32 x,unsigned n){return (x>>n)|(x<<(32-n));}
static void sha_block(Sha*s,const BYTE*b){static const U32 k[64]={0x428a2f98,0x71374491,0xb5c0fbcf,0xe9b5dba5,0x3956c25b,0x59f111f1,0x923f82a4,0xab1c5ed5,0xd807aa98,0x12835b01,0x243185be,0x550c7dc3,0x72be5d74,0x80deb1fe,0x9bdc06a7,0xc19bf174,0xe49b69c1,0xefbe4786,0x0fc19dc6,0x240ca1cc,0x2de92c6f,0x4a7484aa,0x5cb0a9dc,0x76f988da,0x983e5152,0xa831c66d,0xb00327c8,0xbf597fc7,0xc6e00bf3,0xd5a79147,0x06ca6351,0x14292967,0x27b70a85,0x2e1b2138,0x4d2c6dfc,0x53380d13,0x650a7354,0x766a0abb,0x81c2c92e,0x92722c85,0xa2bfe8a1,0xa81a664b,0xc24b8b70,0xc76c51a3,0xd192e819,0xd6990624,0xf40e3585,0x106aa070,0x19a4c116,0x1e376c08,0x2748774c,0x34b0bcb5,0x391c0cb3,0x4ed8aa4a,0x5b9cca4f,0x682e6ff3,0x748f82ee,0x78a5636f,0x84c87814,0x8cc70208,0x90befffa,0xa4506ceb,0xbef9a3f7,0xc67178f2};U32 w[64],a=s->h[0],b0=s->h[1],c=s->h[2],d=s->h[3],e=s->h[4],f=s->h[5],g=s->h[6],h=s->h[7];int i;for(i=0;i<16;i++)w[i]=((U32)b[i*4]<<24)|((U32)b[i*4+1]<<16)|((U32)b[i*4+2]<<8)|b[i*4+3];for(i=16;i<64;i++){U32 x=w[i-15],y=w[i-2];w[i]=w[i-16]+(rr(x,7)^rr(x,18)^(x>>3))+w[i-7]+(rr(y,17)^rr(y,19)^(y>>10));}for(i=0;i<64;i++){U32 t1=h+(rr(e,6)^rr(e,11)^rr(e,25))+((e&f)^(~e&g))+k[i]+w[i];U32 t2=(rr(a,2)^rr(a,13)^rr(a,22))+((a&b0)^(a&c)^(b0&c));h=g;g=f;f=e;e=d+t1;d=c;c=b0;b0=a;a=t1+t2;}s->h[0]+=a;s->h[1]+=b0;s->h[2]+=c;s->h[3]+=d;s->h[4]+=e;s->h[5]+=f;s->h[6]+=g;s->h[7]+=h;}
static void sha_init(Sha*s){static const U32 q[8]={0x6a09e667,0xbb67ae85,0x3c6ef372,0xa54ff53a,0x510e527f,0x9b05688c,0x1f83d9ab,0x5be0cd19};int i;memset(s,0,sizeof(*s));for(i=0;i<8;i++)s->h[i]=q[i];}
static void sha_update(Sha*s,const void*p,ULONG_PTR n){const BYTE*x=(const BYTE*)p;s->len+=n;while(n){ULONG_PTR k=64-s->used;if(k>n)k=n;memcpy(s->block+s->used,x,k);s->used+=k;x+=k;n-=k;if(s->used==64){sha_block(s,s->block);s->used=0;}}}
static void sha_final(Sha*s,BYTE out[32]){U64 bits=s->len*8;int i;s->block[s->used++]=0x80;if(s->used>56){while(s->used<64)s->block[s->used++]=0;sha_block(s,s->block);s->used=0;}while(s->used<56)s->block[s->used++]=0;for(i=0;i<8;i++)s->block[63-i]=(BYTE)(bits>>(i*8));sha_block(s,s->block);for(i=0;i<8;i++){out[i*4]=(BYTE)(s->h[i]>>24);out[i*4+1]=(BYTE)(s->h[i]>>16);out[i*4+2]=(BYTE)(s->h[i]>>8);out[i*4+3]=(BYTE)s->h[i];}}
static void hex32(const BYTE in[32],char out[65]){static const char h[]="0123456789abcdef";int i;for(i=0;i<32;i++){out[i*2]=h[in[i]>>4];out[i*2+1]=h[in[i]&15];}out[64]=0;}
static int hash_file(LPCWSTR p,char out[65]){HANDLE h=CreateFileW(p,GENERIC_READ,FILE_SHARE_READ,NULL,OPEN_EXISTING,FILE_ATTRIBUTE_NORMAL,NULL);DWORD got;Sha s;BYTE d[32];if(h==INVALID_HANDLE_VALUE)return 0;sha_init(&s);for(;;){got=0;if(!ReadFile(h,gIo,IO_CAP,&got,NULL)){CloseHandle(h);return 0;}if(!got)break;sha_update(&s,gIo,got);}CloseHandle(h);sha_final(&s,d);hex32(d,out);return 1;}

static int ValidateGameRoot(LPCWSTR root){WCHAR p[PATH_CAP];if(!root||!root[0]||!DirExists(root))return 0;JoinPath(p,PATH_CAP,root,L"Stormland.exe");if(!FileExists(p))return 0;JoinPath(p,PATH_CAP,root,L"asset_archive\\toc");return FileExists(p);}
static int FindGameUnderSoftwareRoot(LPCWSTR root,LPWSTR out,ULONG_PTR cap){WCHAR pat[PATH_CAP],cand[PATH_CAP];WIN32_FIND_DATAW fd;HANDLE h;if(!DirExists(root))return 0;JoinPath(pat,PATH_CAP,root,L"*");h=FindFirstFileW(pat,&fd);if(h==INVALID_HANDLE_VALUE)return 0;do{if((fd.dwFileAttributes&FILE_ATTRIBUTE_DIRECTORY)&&!weq(fd.cFileName,L".")&&!weq(fd.cFileName,L"..")){JoinPath(cand,PATH_CAP,root,fd.cFileName);if(ValidateGameRoot(cand)){wcopy(out,cap,cand);FindClose(h);return 1;}}}while(FindNextFileW(h,&fd));FindClose(h);return 0;}
static int TryOculusLibraries(HKEY hive,LPWSTR out,ULONG_PTR cap){HKEY key=NULL,sk=NULL;DWORD idx=0,subLen,type,cb;WCHAR sub[512],buf[PATH_CAP],c[PATH_CAP];if(RegOpenKeyExW(hive,L"Software\\Oculus VR, LLC\\Oculus\\Libraries",0,KEY_READ,&key)!=ERROR_SUCCESS)return 0;for(;;){subLen=511;if(RegEnumKeyExW(key,idx++,sub,&subLen,NULL,NULL,NULL,NULL)!=ERROR_SUCCESS)break;sub[subLen]=0;if(RegOpenKeyExW(key,sub,0,KEY_READ,&sk)==ERROR_SUCCESS){LPCWSTR names[2]={L"Path",L"OriginalPath"};int ni;for(ni=0;ni<2;ni++){cb=sizeof(buf);type=0;buf[0]=0;if(RegQueryValueExW(sk,names[ni],NULL,&type,(BYTE*)buf,&cb)==ERROR_SUCCESS&&(type==REG_SZ||type==REG_EXPAND_SZ)){JoinPath(c,PATH_CAP,buf,L"Software");if(FindGameUnderSoftwareRoot(c,out,cap)){RegCloseKey(sk);RegCloseKey(key);return 1;}JoinPath(c,PATH_CAP,buf,L"Software\\Software");if(FindGameUnderSoftwareRoot(c,out,cap)){RegCloseKey(sk);RegCloseKey(key);return 1;}if(ValidateGameRoot(buf)){wcopy(out,cap,buf);RegCloseKey(sk);RegCloseKey(key);return 1;}}}RegCloseKey(sk);sk=NULL;}}RegCloseKey(key);return 0;}
static int DetectGame(LPWSTR out,ULONG_PTR cap){WCHAR exeDir[PATH_CAP],pf[PATH_CAP],root[PATH_CAP];out[0]=0;ExeDir(exeDir,PATH_CAP);if(ValidateGameRoot(exeDir)){wcopy(out,cap,exeDir);return 1;}if(ValidateGameRoot(L"E:\\VR\\Revive_Stormland")){wcopy(out,cap,L"E:\\VR\\Revive_Stormland");return 1;}if(TryOculusLibraries(HKEY_CURRENT_USER,out,cap)||TryOculusLibraries(HKEY_LOCAL_MACHINE,out,cap))return 1;if(GetEnvironmentVariableW(L"ProgramFiles",pf,PATH_CAP)){JoinPath(root,PATH_CAP,pf,L"Oculus\\Software\\Software");if(FindGameUnderSoftwareRoot(root,out,cap))return 1;}if(GetEnvironmentVariableW(L"ProgramFiles(x86)",pf,PATH_CAP)){JoinPath(root,PATH_CAP,pf,L"Oculus\\Software\\Software");if(FindGameUnderSoftwareRoot(root,out,cap))return 1;}return 0;}
static int BrowseForGame(HWND owner,LPWSTR out,ULONG_PTR cap){BROWSEINFOW bi;WCHAR display[MAX_PATH],path[PATH_CAP];PIDLIST_ABSOLUTE p;memset(&bi,0,sizeof(bi));memset(display,0,sizeof(display));bi.hwndOwner=owner;bi.pszDisplayName=display;bi.lpszTitle=L"Sélectionnez le dossier racine de Stormland";bi.ulFlags=BIF_RETURNONLYFSDIRS|BIF_NEWDIALOGSTYLE;p=SHBrowseForFolderW(&bi);if(!p)return 0;path[0]=0;if(SHGetPathFromIDListW(p,path)){CoTaskMemFree(p);wcopy(out,cap,path);return 1;}CoTaskMemFree(p);return 0;}

static int game_paths(LPCWSTR root,LPWSTR toc,LPWSTR g,LPWSTR tt,LPWSTR tg,LPWSTR bt,LPWSTR bg){WCHAR ar[PATH_CAP];JoinPath(ar,PATH_CAP,root,L"asset_archive");JoinPath(toc,PATH_CAP,ar,L"toc");JoinPath(g,PATH_CAP,ar,L"g00s006");JoinPath(tt,PATH_CAP,ar,L"toc.stormlandfr.tmp");JoinPath(tg,PATH_CAP,ar,L"g00s006.stormlandfr.tmp");JoinPath(bt,PATH_CAP,ar,L"toc.stormlandfr.rollback");JoinPath(bg,PATH_CAP,ar,L"g00s006.stormlandfr.rollback");return 1;}
static State DetectState(void){State s={0,0,0,0};WCHAR t[PATH_CAP],g[PATH_CAP],a[PATH_CAP],b[PATH_CAP],c[PATH_CAP],d[PATH_CAP];char ht[65],hg[65];if(!gGameValid||!game_paths(gGamePath,t,g,a,b,c,d)||!FileExists(t)||!hash_file(t,ht))return s;if(!FileExists(g)){s.known=1;s.exact_original=1;return s;}if(!hash_file(g,hg))return s;
#define MATCH(T,G) (ccmp(ht,(T))==0&&ccmp(hg,(G))==0)
if(MATCH(FR_CUSTOM_T,FR_CUSTOM_G)||MATCH(V81_T,V81_G)){s.known=1;s.tr=1;s.hud=1;}
else if(MATCH(FR_ORIG_T,FR_ORIG_G)||MATCH(V76_T,V76_G)||MATCH(V61_T,V61_G)||MATCH(V44_T,V44_G)){s.known=1;s.tr=1;s.hud=0;}
else if(MATCH(EN_CUSTOM_T,EN_CUSTOM_G)){s.known=1;s.hud=1;}
else if(MATCH(EN_ORIG_T,EN_ORIG_G)){s.known=1;}
#undef MATCH
return s;}
static void RefreshState(void){gGameValid=ValidateGameRoot(gGamePath);}

static int backup_path(LPWSTR out,ULONG_PTR cap){WCHAR d[PATH_CAP];JoinPath(d,PATH_CAP,gGamePath,L"Stormland_FR_Backup");CreateDirectoryW(d,NULL);JoinPath(out,cap,d,L"toc.original");return 1;}
static int find_original_backup(LPWSTR out,ULONG_PTR cap){WCHAR p[PATH_CAP],dst[PATH_CAP];backup_path(p,PATH_CAP);if(FileExists(p)){wcopy(out,cap,p);return 1;}JoinPath(p,PATH_CAP,gGamePath,L"Stormland_FR_Backup_V0.0.3\\toc.original");if(FileExists(p)){backup_path(dst,PATH_CAP);CopyFileW(p,dst,TRUE);wcopy(out,cap,FileExists(dst)?dst:p);return 1;}return 0;}
static int ensure_backup_from_original(State s){WCHAR toc[PATH_CAP],g[PATH_CAP],a[PATH_CAP],b[PATH_CAP],c[PATH_CAP],d[PATH_CAP],dst[PATH_CAP];if(!s.exact_original)return 1;game_paths(gGamePath,toc,g,a,b,c,d);backup_path(dst,PATH_CAP);if(FileExists(dst))return 1;return CopyFileW(toc,dst,TRUE)!=0;}

static int ReadExact(HANDLE h,void* dst,DWORD n){BYTE*p=(BYTE*)dst;DWORD done=0,r=0;while(done<n){if(!ReadFile(h,p+done,n-done,&r,NULL)||!r)return 0;done+=r;}return 1;}
static int WriteExact(HANDLE h,const void* src,DWORD n){const BYTE*p=(const BYTE*)src;DWORD done=0,w=0;while(done<n){if(!WriteFile(h,p+done,n-done,&w,NULL)||!w)return 0;done+=w;}return 1;}
static ULONGLONG ReadU64LE(const BYTE*b){ULONGLONG v=0;int i;for(i=7;i>=0;i--)v=(v<<8)|b[i];return v;}
static DWORD ReadU32LE(const BYTE*b){return (DWORD)b[0]|((DWORD)b[1]<<8)|((DWORD)b[2]<<16)|((DWORD)b[3]<<24);}
static WORD ReadU16LE(const BYTE*b){return (WORD)(b[0]|((WORD)b[1]<<8));}
static int SeekAbs(HANDLE h,ULONGLONG off){LARGE_INTEGER li;li.QuadPart=(LONGLONG)off;return SetFilePointerEx(h,li,NULL,FILE_BEGIN);}
static int ExtractPayload(LPCWSTR outDir,LPWSTR err,ULONG_PTR errcap){HANDLE h=CreateFileW(gExePath,GENERIC_READ,FILE_SHARE_READ,NULL,OPEN_EXISTING,FILE_ATTRIBUTE_NORMAL,NULL);LARGE_INTEGER sz;BYTE foot[16],head[12],small[10];ULONGLONG start;DWORD count,i;WCHAR rel[8192],target[PATH_CAP];if(h==INVALID_HANDLE_VALUE){wcopy(err,errcap,L"Impossible d'ouvrir l'exécutable.");return 0;}if(!GetFileSizeEx(h,&sz)||sz.QuadPart<16){wcopy(err,errcap,L"Exécutable incomplet.");CloseHandle(h);return 0;}if(!SeekAbs(h,(ULONGLONG)sz.QuadPart-16)||!ReadExact(h,foot,16)||memcmp(foot,"SLFEND11",8)!=0){wcopy(err,errcap,L"Payload interne introuvable.");CloseHandle(h);return 0;}start=ReadU64LE(foot+8);if(start>=(ULONGLONG)sz.QuadPart-16||!SeekAbs(h,start)||!ReadExact(h,head,12)||memcmp(head,"SLFPAY11",8)!=0){wcopy(err,errcap,L"Payload interne invalide.");CloseHandle(h);return 0;}count=ReadU32LE(head+8);if(!count||count>100){wcopy(err,errcap,L"Table du payload invalide.");CloseHandle(h);return 0;}CreateDirectoryW(outDir,NULL);for(i=0;i<count;i++){WORD nl;ULONGLONG fsz,rem;CHAR*nb;int wn,k;HANDLE o;if(!ReadExact(h,small,10)){wcopy(err,errcap,L"Payload tronqué.");CloseHandle(h);return 0;}nl=ReadU16LE(small);fsz=ReadU64LE(small+2);if(!nl||nl>4095){wcopy(err,errcap,L"Nom interne invalide.");CloseHandle(h);return 0;}nb=(CHAR*)HeapAlloc(GetProcessHeap(),0,nl+1);if(!nb||!ReadExact(h,nb,nl)){if(nb)HeapFree(GetProcessHeap(),0,nb);wcopy(err,errcap,L"Payload tronqué.");CloseHandle(h);return 0;}nb[nl]=0;wn=MultiByteToWideChar(CP_UTF8,0,nb,nl,rel,8191);HeapFree(GetProcessHeap(),0,nb);if(wn<=0){wcopy(err,errcap,L"Nom UTF-8 invalide.");CloseHandle(h);return 0;}rel[wn]=0;for(k=0;k<wn;k++)if(rel[k]==L'/')rel[k]=L'\\';if(wcontains(rel,L"..")||wcontains(rel,L":")){wcopy(err,errcap,L"Chemin interne dangereux.");CloseHandle(h);return 0;}JoinPath(target,PATH_CAP,outDir,rel);EnsureDirsForFile(target);o=CreateFileW(target,GENERIC_WRITE,0,NULL,CREATE_ALWAYS,FILE_ATTRIBUTE_NORMAL,NULL);if(o==INVALID_HANDLE_VALUE){wcopy(err,errcap,L"Impossible d'écrire les données temporaires.");CloseHandle(h);return 0;}rem=fsz;while(rem){DWORD ch=rem>IO_CAP?IO_CAP:(DWORD)rem;if(!ReadExact(h,gIo,ch)||!WriteExact(o,gIo,ch)){CloseHandle(o);CloseHandle(h);wcopy(err,errcap,L"Écriture du payload impossible.");return 0;}rem-=ch;}CloseHandle(o);}CloseHandle(h);return 1;}
static void RemoveTree(LPCWSTR root){WCHAR pat[PATH_CAP],p[PATH_CAP];WIN32_FIND_DATAW fd;HANDLE h;if(!DirExists(root))return;JoinPath(pat,PATH_CAP,root,L"*");h=FindFirstFileW(pat,&fd);if(h!=INVALID_HANDLE_VALUE){do{if(!weq(fd.cFileName,L".")&&!weq(fd.cFileName,L"..")){JoinPath(p,PATH_CAP,root,fd.cFileName);if(fd.dwFileAttributes&FILE_ATTRIBUTE_DIRECTORY)RemoveTree(p);else DeleteFileW(p);}}while(FindNextFileW(h,&fd));FindClose(h);}RemoveDirectoryW(root);}
static void MakeTempDir(LPWSTR out,ULONG_PTR cap){WCHAR t[PATH_CAP],pid[32];if(!GetTempPathW(PATH_CAP,t))wcopy(t,PATH_CAP,L"C:\\Windows\\Temp\\");uint_to_w(GetCurrentProcessId(),pid,32);wcopy(out,cap,t);wcat(out,cap,L"StormlandFR_V11_");wcat(out,cap,pid);}

static void WriteDiagnostic(LPCWSTR text){WCHAR p[PATH_CAP];HANDLE h;DWORD wr=0;WORD bom=0xFEFF;p[0]=0;if(!GetTempPathW(PATH_CAP,p))return;wcat(p,PATH_CAP,L"Stormland_FR_V1.1.2_last_action.log");h=CreateFileW(p,GENERIC_WRITE,FILE_SHARE_READ,NULL,CREATE_ALWAYS,FILE_ATTRIBUTE_NORMAL,NULL);if(h==INVALID_HANDLE_VALUE)return;WriteFile(h,&bom,2,&wr,NULL);if(text&&text[0])WriteFile(h,text,(DWORD)(wlen(text)*sizeof(WCHAR)),&wr,NULL);CloseHandle(h);}

static void SetProgress(int n,LPCWSTR text){gProgress=n;wcopy(gProgressText,256,text);PostMessageW(gHwnd,WM_APP_PROGRESS,0,0);}
static void SetError(LPCWSTR text){wcopy(gError,512,text);}
static int payload_paths(LPCWSTR temp,int tr,int hud,LPWSTR t,LPWSTR g,const char**ht,const char**hg){LPCWSTR dn;WCHAR d[PATH_CAP];if(tr&&hud){dn=L"payload_fr_custom";*ht=FR_CUSTOM_T;*hg=FR_CUSTOM_G;}else if(tr&&!hud){dn=L"payload_fr_original";*ht=FR_ORIG_T;*hg=FR_ORIG_G;}else if(!tr&&hud){dn=L"payload_en_custom";*ht=EN_CUSTOM_T;*hg=EN_CUSTOM_G;}else{dn=L"payload_en_original_compat";*ht=EN_ORIG_T;*hg=EN_ORIG_G;}JoinPath(d,PATH_CAP,temp,dn);JoinPath(t,PATH_CAP,d,L"toc");JoinPath(g,PATH_CAP,d,L"g00s006");return 1;}
static int apply_payload(LPCWSTR temp,int tr,int hud){State cur=DetectState();WCHAR st[PATH_CAP],sg[PATH_CAP],dt[PATH_CAP],dg[PATH_CAP],tt[PATH_CAP],tg[PATH_CAP],bt[PATH_CAP],bg[PATH_CAP];const char*wantt,*wantg;char ht[65],hg[65];int hadg,mg,mt;if(!cur.known){SetError(L"État Stormland non reconnu. Aucun fichier n'a été modifié.");return 0;}if(cur.tr==tr&&cur.hud==hud&&!cur.exact_original){SetProgress(100,L"Ce réglage est déjà actif.");return 1;}if(!ensure_backup_from_original(cur)){SetError(L"Impossible de sauvegarder le TOC original.");return 0;}payload_paths(temp,tr,hud,st,sg,&wantt,&wantg);game_paths(gGamePath,dt,dg,tt,tg,bt,bg);SetProgress(10,L"Vérification des fichiers intégrés...");if(!hash_file(st,ht)||!hash_file(sg,hg)||ccmp(ht,wantt)||ccmp(hg,wantg)){SetError(L"Payload intégré corrompu. Retéléchargez l'installateur.");return 0;}DeleteFileW(tt);DeleteFileW(tg);DeleteFileW(bt);DeleteFileW(bg);SetProgress(28,L"Création d'un rollback de sécurité...");if(!CopyFileW(dt,bt,FALSE)){SetError(L"Impossible de sauvegarder le TOC actuel.");return 0;}hadg=FileExists(dg);if(hadg&&!CopyFileW(dg,bg,FALSE)){DeleteFileW(bt);SetError(L"Impossible de sauvegarder g00s006.");return 0;}SetProgress(48,L"Préparation de la nouvelle configuration...");if(!CopyFileW(st,tt,FALSE)||!CopyFileW(sg,tg,FALSE)){DeleteFileW(tt);DeleteFileW(tg);DeleteFileW(bt);DeleteFileW(bg);SetError(L"Préparation des fichiers impossible.");return 0;}SetProgress(68,L"Application transactionnelle...");mg=MoveFileExW(tg,dg,MOVEFILE_REPLACE_EXISTING|MOVEFILE_WRITE_THROUGH)!=0;mt=mg&&(MoveFileExW(tt,dt,MOVEFILE_REPLACE_EXISTING|MOVEFILE_WRITE_THROUGH)!=0);if(!mg||!mt){CopyFileW(bt,dt,FALSE);if(hadg)CopyFileW(bg,dg,FALSE);else DeleteFileW(dg);DeleteFileW(tt);DeleteFileW(tg);DeleteFileW(bt);DeleteFileW(bg);SetError(L"Échec d'application. L'état précédent a été restauré.");return 0;}SetProgress(90,L"Vérification finale...");if(!hash_file(dt,ht)||!hash_file(dg,hg)||ccmp(ht,wantt)||ccmp(hg,wantg)){CopyFileW(bt,dt,FALSE);if(hadg)CopyFileW(bg,dg,FALSE);else DeleteFileW(dg);DeleteFileW(bt);DeleteFileW(bg);SetError(L"Vérification finale échouée. Rollback effectué.");return 0;}DeleteFileW(bt);DeleteFileW(bg);SetProgress(100,L"Configuration appliquée avec succès.");return 1;}
static int restore_exact_original(LPCWSTR temp){State cur=DetectState();WCHAR orig[PATH_CAP],dt[PATH_CAP],dg[PATH_CAP],tt[PATH_CAP],tg[PATH_CAP],bt[PATH_CAP],bg[PATH_CAP];char ho[65],hn[65];int hadg;if(!cur.known){SetError(L"État Stormland non reconnu. Aucun fichier n'a été modifié.");return 0;}if(cur.exact_original){SetProgress(100,L"Le placement original et les textes anglais sont déjà actifs.");return 1;}if(!find_original_backup(orig,PATH_CAP))return apply_payload(temp,0,0);game_paths(gGamePath,dt,dg,tt,tg,bt,bg);SetProgress(20,L"Préparation de la restauration originale...");DeleteFileW(tt);DeleteFileW(bt);DeleteFileW(bg);if(!CopyFileW(dt,bt,FALSE)){SetError(L"Rollback TOC impossible.");return 0;}hadg=FileExists(dg);if(hadg&&!CopyFileW(dg,bg,FALSE)){DeleteFileW(bt);SetError(L"Rollback g00s006 impossible.");return 0;}if(!CopyFileW(orig,tt,FALSE)){DeleteFileW(bt);DeleteFileW(bg);SetError(L"Lecture de la sauvegarde originale impossible.");return 0;}if(!hash_file(orig,ho)||!hash_file(tt,hn)||ccmp(ho,hn)){DeleteFileW(tt);DeleteFileW(bt);DeleteFileW(bg);SetError(L"Copie du TOC original invalide.");return 0;}SetProgress(65,L"Restauration du jeu d'origine...");if(!MoveFileExW(tt,dt,MOVEFILE_REPLACE_EXISTING|MOVEFILE_WRITE_THROUGH)){DeleteFileW(bt);DeleteFileW(bg);SetError(L"Restauration du TOC original impossible.");return 0;}if(FileExists(dg)&&!DeleteFileW(dg)){CopyFileW(bt,dt,FALSE);if(hadg)CopyFileW(bg,dg,FALSE);DeleteFileW(bt);DeleteFileW(bg);SetError(L"Impossible de retirer g00s006. Rollback effectué.");return 0;}DeleteFileW(bt);DeleteFileW(bg);SetProgress(100,L"Jeu original restauré.");return 1;}

static DWORD WINAPI WorkerProc(LPVOID p){int op=(int)(ULONG_PTR)p,ok=0;WCHAR temp[PATH_CAP],err[512];State s;WriteDiagnostic(op==1?L"V1.1 / installateur 1.1.2\r\nAction : installer la traduction\r\nÉtape : démarrage du worker.":op==2?L"V1.1 / installateur 1.1.2\r\nAction : désinstaller la traduction\r\nÉtape : démarrage du worker.":op==3?L"V1.1 / installateur 1.1.2\r\nAction : sous-titres originaux à droite\r\nÉtape : démarrage du worker.":L"V1.1 / installateur 1.1.2\r\nAction : sous-titres custom de face\r\nÉtape : démarrage du worker.");MakeTempDir(temp,PATH_CAP);RemoveTree(temp);gError[0]=0;SetProgress(3,L"Ouverture du payload intégré...");WriteDiagnostic(L"V1.1 / installateur 1.1.2\r\nÉtape : extraction du payload intégré.");if(!ExtractPayload(temp,err,512)){SetError(err);WriteDiagnostic(L"V1.1 / installateur 1.1.2\r\nÉchec : extraction du payload intégré.");goto done;}WriteDiagnostic(L"V1.1 / installateur 1.1.2\r\nÉtape : détection de l'état du jeu.");s=DetectState();if(!s.known){SetError(L"État Stormland non reconnu. Aucun fichier n'a été modifié.");WriteDiagnostic(L"V1.1 / installateur 1.1.2\r\nÉchec : état du jeu non reconnu.");goto done;}WriteDiagnostic(L"V1.1 / installateur 1.1.2\r\nÉtape : application transactionnelle.");if(op==1)ok=apply_payload(temp,1,s.hud);else if(op==2)ok=s.hud?apply_payload(temp,0,1):restore_exact_original(temp);else if(op==3)ok=s.tr?apply_payload(temp,1,0):restore_exact_original(temp);else if(op==4)ok=apply_payload(temp,s.tr,1);WriteDiagnostic(ok?L"V1.1 / installateur 1.1.2\r\nRésultat : opération terminée avec succès.":L"V1.1 / installateur 1.1.2\r\nRésultat : opération terminée en erreur ; voir le message affiché dans l'installateur.");done:RemoveTree(temp);PostMessageW(gHwnd,WM_APP_DONE,(WPARAM)(ok?0:1),(LPARAM)op);return 0;}

static int IsElevated(void){HANDLE tok=NULL;TOKEN_ELEVATION te;DWORD got=0;memset(&te,0,sizeof(te));if(!OpenProcessToken(GetCurrentProcess(),TOKEN_QUERY,&tok))return 0;BOOL ok=GetTokenInformation(tok,TokenElevation,&te,sizeof(te),&got);CloseHandle(tok);return ok&&te.TokenIsElevated;}
static void EnsureElevatedOrExit(void){if(IsElevated())return;ULONG_PTR r=ShellExecuteW(NULL,L"runas",gExePath,NULL,NULL,SW_SHOWNORMAL);if(r>32)ExitProcess(0);ExitProcess(1);}

static void DrawTxt(HDC dc,LPCWSTR text,int x,int y,int w,int h,int px,COLORREF col,int weight,UINT fmt){HFONT f=CreateFontW(-Sy(px),0,0,0,weight,0,0,0,DEFAULT_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,CLEARTYPE_QUALITY,DEFAULT_PITCH|FF_DONTCARE,L"Segoe UI");HGDIOBJ old=SelectObject(dc,f);RECT r={Sx(x),Sy(y),Sx(x+w),Sy(y+h)};SetBkMode(dc,TRANSPARENT);SetTextColor(dc,col);DrawTextW(dc,text,-1,&r,fmt);SelectObject(dc,old);DeleteObject(f);}
static void FillBox(HDC dc,int x1,int y1,int x2,int y2,COLORREF fill,COLORREF border,int radius){HBRUSH b=CreateSolidBrush(fill);HPEN p=CreatePen(PS_SOLID,Sy(2)<1?1:Sy(2),border);HGDIOBJ ob=SelectObject(dc,b),op=SelectObject(dc,p);RoundRect(dc,Sx(x1),Sy(y1),Sx(x2),Sy(y2),Sy(radius),Sy(radius));SelectObject(dc,op);SelectObject(dc,ob);DeleteObject(p);DeleteObject(b);}
static void DrawDynamic(HDC dc){COLORREF white=RGBc(236,232,219),warn=RGBc(245,179,74);if(gGameValid)DrawTxt(dc,gGamePath,96,374,500,36,15,white,FW_SEMIBOLD,DT_LEFT|DT_VCENTER|DT_SINGLELINE|DT_END_ELLIPSIS);else DrawTxt(dc,L"Jeu non détecté — utilisez Parcourir",96,374,500,36,15,warn,FW_SEMIBOLD,DT_LEFT|DT_VCENTER|DT_SINGLELINE|DT_END_ELLIPSIS);}
static void DrawModal(HDC dc){COLORREF panel=RGBc(24,25,20),panel2=RGBc(31,34,27),edge=RGBc(130,88,46),green=RGBc(91,112,67),amber=RGBc(229,157,50),white=RGBc(241,238,226),muted=RGBc(201,196,180),red=RGBc(181,73,43);if(gBusy){int x1=175,y1=190,x2=1025,y2=505;FillBox(dc,x1,y1,x2,y2,panel,edge,18);DrawTxt(dc,gOperation==1?L"INSTALLATION EN COURS":gOperation==2?L"DÉSINSTALLATION EN COURS":L"MODIFICATION DU PLACEMENT",x1+40,y1+34,770,36,25,white,FW_BOLD,DT_CENTER|DT_VCENTER|DT_SINGLELINE);DrawTxt(dc,gProgressText,x1+65,y1+92,720,40,16,muted,FW_NORMAL,DT_CENTER|DT_WORDBREAK);FillBox(dc,x1+90,y1+160,x2-90,y1+196,RGBc(10,13,10),RGBc(74,68,52),7);{int bw=(x2-x1)-196;int fill=(bw*gProgress)/100;if(fill>0)FillBox(dc,x1+98,y1+168,x1+98+fill,y1+188,RGBc(52,77,43),green,5);}DrawTxt(dc,L"Ne fermez pas Stormland ni l'installateur pendant cette opération.",x1+65,y1+220,720,26,14,muted,FW_NORMAL,DT_CENTER|DT_VCENTER|DT_SINGLELINE);return;}if(!gModal)return;FillBox(dc,160,135,1040,535,panel,edge,18);if(gModal==1){DrawTxt(dc,L"À PROPOS",205,165,200,30,17,amber,FW_BOLD,DT_LEFT|DT_VCENTER|DT_SINGLELINE);DrawTxt(dc,L"Stormland — Traduction française non officielle",205,205,760,36,23,white,FW_BOLD,DT_LEFT|DT_VCENTER|DT_SINGLELINE);DrawTxt(dc,L"Traduction française réalisée par LoVeMaKeRz",205,242,760,28,17,RGBc(214,164,92),FW_SEMIBOLD,DT_LEFT|DT_VCENTER|DT_SINGLELINE);DrawTxt(dc,L"Projet communautaire gratuit et non affilié, approuvé ou sponsorisé par les détenteurs des droits de Stormland. Stormland, ses marques, personnages, visuels et autres éléments associés restent la propriété de leurs détenteurs respectifs.\n\nCe patch nécessite une copie légitime de Stormland et ne contient pas le jeu original.",205,292,760,125,15,muted,FW_NORMAL,DT_LEFT|DT_WORDBREAK);DrawTxt(dc,L"V1.1  •  Installateur révision 1.1.2",205,440,320,24,14,RGBc(171,159,133),FW_NORMAL,DT_LEFT|DT_VCENTER|DT_SINGLELINE);FillBox(dc,805,438,965,482,panel2,green,8);DrawTxt(dc,L"FERMER",805,446,160,28,16,white,FW_BOLD,DT_CENTER|DT_VCENTER|DT_SINGLELINE);return;}DrawTxt(dc,gModal==2?L"INSTALLER LA TRADUCTION ?":gModal==3?L"DÉSINSTALLER LA TRADUCTION ?":L"INFORMATION",205,178,790,38,22,white,FW_BOLD,DT_CENTER|DT_VCENTER|DT_SINGLELINE);if(gModal==2)DrawTxt(dc,L"La traduction française V1.1 va être installée. Le placement actuel des sous-titres sera conservé.\n\nUne sauvegarde du TOC original est créée automatiquement lorsque le jeu est encore d'origine.",245,250,710,104,16,muted,FW_NORMAL,DT_CENTER|DT_WORDBREAK);else if(gModal==3)DrawTxt(dc,L"La traduction française va être retirée. Le placement actuel des sous-titres sera conservé.\n\nSi le mode original est actif et qu'une sauvegarde originale existe, le jeu est restauré proprement sans g00s006.",245,245,710,112,16,muted,FW_NORMAL,DT_CENTER|DT_WORDBREAK);else{DrawTxt(dc,gError,245,gInfoSuccess?238:245,710,gInfoSuccess?70:120,16,muted,FW_NORMAL,DT_CENTER|DT_WORDBREAK);if(gInfoSuccess)DrawTxt(dc,L"Installé avec succès",245,326,710,34,20,RGBc(104,196,88),FW_BOLD,DT_CENTER|DT_VCENTER|DT_SINGLELINE);}if(gModal==2||gModal==3){FillBox(dc,325,408,535,456,panel2,gModal==3?red:green,8);FillBox(dc,665,408,875,456,panel2,RGBc(105,91,67),8);DrawTxt(dc,gModal==3?L"DÉSINSTALLER":L"INSTALLER",325,417,210,30,16,white,FW_BOLD,DT_CENTER|DT_VCENTER|DT_SINGLELINE);DrawTxt(dc,L"ANNULER",665,417,210,30,16,white,FW_BOLD,DT_CENTER|DT_VCENTER|DT_SINGLELINE);}else{FillBox(dc,495,408,705,456,panel2,green,8);DrawTxt(dc,L"FERMER",495,417,210,30,16,white,FW_BOLD,DT_CENTER|DT_VCENTER|DT_SINGLELINE);}}
static void Paint(HWND hwnd){PAINTSTRUCT ps;HDC dc=BeginPaint(hwnd,&ps);RECT cr;BITMAPINFO bi;GetClientRect(hwnd,&cr);gClientW=cr.right-cr.left;gClientH=cr.bottom-cr.top;memset(&bi,0,sizeof(bi));bi.bmiHeader.biSize=sizeof(BITMAPINFOHEADER);bi.bmiHeader.biWidth=BASE_W;bi.bmiHeader.biHeight=-BASE_H;bi.bmiHeader.biPlanes=1;bi.bmiHeader.biBitCount=32;bi.bmiHeader.biCompression=BI_RGB;SetStretchBltMode(dc,HALFTONE);StretchDIBits(dc,0,0,gClientW,gClientH,0,0,BASE_W,BASE_H,_binary_skin_bgra_start,&bi,DIB_RGB_COLORS,SRCCOPY);DrawDynamic(dc);DrawModal(dc);EndPaint(hwnd,&ps);}

static int Hotspot(int x,int y){if(InRectB(x,y,1120,0,1200,82))return 11;if(InRectB(x,y,620,360,765,425))return 3;if(InRectB(x,y,73,430,432,523))return 1;if(InRectB(x,y,435,430,797,523))return 2;if(InRectB(x,y,82,540,319,616))return 5;if(InRectB(x,y,324,538,572,617))return 6;if(InRectB(x,y,720,570,895,642))return 4;return 0;}
static void ShowInfo(LPCWSTR text){gInfoSuccess=0;wcopy(gError,512,text);gModal=4;InvalidateRect(gHwnd,NULL,FALSE);}static void ShowInfoSuccess(LPCWSTR text){gInfoSuccess=1;wcopy(gError,512,text);gModal=4;InvalidateRect(gHwnd,NULL,FALSE);}
static void StartOperation(int op){HANDLE th;if(gBusy)return;if(!gGameValid){ShowInfo(L"Sélectionnez d'abord le dossier racine de Stormland avec le bouton Parcourir...");return;}gBusy=1;gOperation=op;gModal=0;gProgress=0;wcopy(gProgressText,256,L"Préparation...");SetTimer(gHwnd,1,100,NULL);th=CreateThread(NULL,0,WorkerProc,(LPVOID)(ULONG_PTR)op,0,NULL);if(th)CloseHandle(th);else{gBusy=0;KillTimer(gHwnd,1);ShowInfo(L"Impossible de démarrer l'opération.");}InvalidateRect(gHwnd,NULL,FALSE);}
static LRESULT CALLBACK WndProc(HWND hwnd,UINT msg,WPARAM wp,LPARAM lp){if(msg==WM_PAINT){Paint(hwnd);return 0;}if(msg==WM_DESTROY){PostQuitMessage(0);return 0;}if(msg==WM_CLOSE){if(!gBusy)DestroyWindow(hwnd);return 0;}if(msg==WM_TIMER){if(gBusy)InvalidateRect(hwnd,NULL,FALSE);return 0;}if(msg==WM_APP_PROGRESS){InvalidateRect(hwnd,NULL,FALSE);return 0;}if(msg==WM_APP_DONE){int op=(int)lp;KillTimer(hwnd,1);gBusy=0;RefreshState();if((DWORD)wp==0){if(op==1)ShowInfo(L"La traduction française V1.1 est installée. Le placement des sous-titres a été conservé.");else if(op==2)ShowInfo(L"La traduction française a été désinstallée. Le placement des sous-titres a été conservé.");else if(op==3)ShowInfoSuccess(L"Placement des sous-titres : Original à droite (jeu par défaut).");else ShowInfoSuccess(L"Placement des sous-titres : Custom de face (Stormland FR).");}else ShowInfo(gError[0]?gError:L"L'opération a échoué.");InvalidateRect(hwnd,NULL,FALSE);return 0;}if(msg==WM_MOUSEMOVE){int bx,by,x=(short)(lp&0xffff),y=(short)((lp>>16)&0xffff);ClientToBase(x,y,&bx,&by);int h=(gModal||gBusy)?0:Hotspot(bx,by);if(h!=gHover){gHover=h;SetCursor(h?gHand:gArrow);}return 0;}if(msg==WM_SETCURSOR){SetCursor(gHover?gHand:gArrow);return TRUE;}if(msg==WM_KEYDOWN&&wp==VK_ESCAPE){if(gBusy)return 0;if(gModal){gModal=0;InvalidateRect(hwnd,NULL,FALSE);}else DestroyWindow(hwnd);return 0;}if(msg==WM_LBUTTONDOWN){if(gModal||gBusy)return 0;int bx,by,x=(short)(lp&0xffff),y=(short)((lp>>16)&0xffff);ClientToBase(x,y,&bx,&by);if(by<100&&!InRectB(bx,by,1120,0,1200,82)){ReleaseCapture();SendMessageW(hwnd,WM_NCLBUTTONDOWN,HTCAPTION,0);}return 0;}if(msg==WM_LBUTTONUP){int bx,by,x=(short)(lp&0xffff),y=(short)((lp>>16)&0xffff);ClientToBase(x,y,&bx,&by);if(gBusy)return 0;if(gModal){if(gModal==1){if(InRectB(bx,by,805,438,965,482)){gModal=0;InvalidateRect(hwnd,NULL,FALSE);}}else if(gModal==2||gModal==3){if(InRectB(bx,by,325,408,535,456)){int op=gModal==2?1:2;StartOperation(op);}else if(InRectB(bx,by,665,408,875,456)){gModal=0;InvalidateRect(hwnd,NULL,FALSE);}}else if(InRectB(bx,by,495,408,705,456)){gModal=0;InvalidateRect(hwnd,NULL,FALSE);}return 0;}int h=Hotspot(bx,by);if(h==11){DestroyWindow(hwnd);return 0;}if(h==4){gModal=1;InvalidateRect(hwnd,NULL,FALSE);return 0;}if(h==3){WCHAR p[PATH_CAP];if(BrowseForGame(hwnd,p,PATH_CAP)){if(ValidateGameRoot(p)){wcopy(gGamePath,PATH_CAP,p);RefreshState();InvalidateRect(hwnd,NULL,FALSE);}else ShowInfo(L"Ce dossier ne correspond pas à une installation compatible de Stormland.");}return 0;}if(h==1){State s;if(!gGameValid){ShowInfo(L"Sélectionnez d'abord le dossier racine de Stormland avec Parcourir...");return 0;}s=DetectState();if(!s.known){ShowInfo(L"État Stormland non reconnu. Aucun fichier ne sera forcé.");return 0;}if(s.tr){ShowInfo(L"La traduction française est déjà installée.");return 0;}gModal=2;InvalidateRect(hwnd,NULL,FALSE);return 0;}if(h==2){State s;if(!gGameValid){ShowInfo(L"Sélectionnez d'abord le dossier racine de Stormland avec Parcourir...");return 0;}s=DetectState();if(!s.known){ShowInfo(L"État Stormland non reconnu. Aucun fichier ne sera forcé.");return 0;}if(!s.tr){ShowInfo(L"Aucune traduction française n'est actuellement détectée.");return 0;}gModal=3;InvalidateRect(hwnd,NULL,FALSE);return 0;}if(h==5){StartOperation(3);return 0;}if(h==6){StartOperation(4);return 0;}return 0;}return DefWindowProcW(hwnd,msg,wp,lp);}

static int AppMain(void){WNDCLASSEXW wc;RECT work;int x,y;GetModuleFileNameW(NULL,gExePath,PATH_CAP);EnsureElevatedOrExit();OleInitialize(NULL);SetProcessDPIAware();gArrow=LoadCursorW(NULL,IDC_ARROW);gHand=LoadCursorW(NULL,IDC_HAND);DetectGame(gGamePath,PATH_CAP);RefreshState();memset(&wc,0,sizeof(wc));wc.cbSize=sizeof(wc);wc.style=CS_HREDRAW|CS_VREDRAW;wc.lpfnWndProc=WndProc;wc.hInstance=GetModuleHandleW(NULL);wc.hCursor=gArrow;wc.lpszClassName=L"StormlandFRPortableV112";if(!RegisterClassExW(&wc)){OleUninitialize();return 2;}memset(&work,0,sizeof(work));SystemParametersInfoW(SPI_GETWORKAREA,0,&work,0);x=work.left+(work.right-work.left-BASE_W)/2;y=work.top+(work.bottom-work.top-BASE_H)/2;if(x<work.left)x=work.left;if(y<work.top)y=work.top;gHwnd=CreateWindowExW(WS_EX_APPWINDOW,wc.lpszClassName,L"Stormland — Traduction française V1.1",WS_POPUP|WS_VISIBLE,x,y,BASE_W,BASE_H,NULL,NULL,wc.hInstance,NULL);if(!gHwnd){OleUninitialize();return 3;}ShowWindow(gHwnd,SW_SHOWNORMAL);UpdateWindow(gHwnd);MSG m;while(GetMessageW(&m,NULL,0,0)>0){TranslateMessage(&m);DispatchMessageW(&m);}OleUninitialize();return 0;}
void WINAPI WinMainCRTStartup(void){ExitProcess((UINT)AppMain());}
