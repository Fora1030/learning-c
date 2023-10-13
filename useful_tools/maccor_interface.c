#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#ifdef MACCOR_DLL
#define DLL_HEADER __stdcall __declspec(dllexport)
#else
#define DLL_HEADER __stdcall __declspec(dllimport)
#endif

#define MAX_SYSID_LEN 25
#define MAX_TESTNAME_LEN 25
#define MAX_TESTCOMMENT_LEN 80
#define MAX_PROCNAME_LEN 25
#define MAX_PROCCOMMENT_LEN 80
#define MAX_DLLVERSTR_LEN 80
#define MAX_MACCORPATH_LEN 80
#define MAX_SYSPATH_LEN 80
#define MAX_PROCPATH_LEN 80
#define MAX_STEPNOTE_LEN 80
#define STEP_NUMBER_LEN 3

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef struct __attribute__ ((__packed__))
{
    float Vmax;
    float Vmin;
    float ChI;
    float DisI;
} TSpecData;

typedef struct __attribute__ ((__packed__))
{
    char SystemID[MAX_SYSID_LEN];
    char TestName[MAX_TESTNAME_LEN];
    char TestComment[MAX_TESTCOMMENT_LEN];
    char ProcedureName[MAX_PROCNAME_LEN];
    char ProcedureComment[MAX_PROCCOMMENT_LEN];
    double TimeStamp;
    uint32_t SWversion;
    uint32_t DLLversion;
    char DLLversionString[MAX_DLLVERSTR_LEN];
    char MaccorPath[MAX_MACCORPATH_LEN];
    char SysPath[MAX_SYSPATH_LEN];
    char ProcPath[MAX_PROCPATH_LEN];
    char StepNote[MAX_STEPNOTE_LEN];
    uint16_t APIversion;
} TTestData;

typedef struct __attribute__ ((__packed__))
{
    uint8_t RF1;
    uint8_t RF2;
    int Cycle;
    int Step;
    float TestTime;
    float StepTime;
    float Voltage;
    float Current;
    float Capacity;
    float HCCapacity;
    float LHCCapacity;
    float Energy;
    float HCEnergy;
    float LHCEnergy;
    float tFactor;
    float AUXdata[48];
    uint8_t AUXinput[48];
    uint16_t AUXtype[48];
    char AUXunit[48][3];
    uint16_t SMBdata[256];
} TStatusData;

typedef struct __attribute__ ((__packed__))
{
    float Current;
    float Voltage;
    float Power;
    float Resistance;
    int Flags;
} TOutData;
typedef enum
{
    CONTINUE_STEP = 0,
    CONTINUE_STEP_ALSO = 1,
    GOTO_NEXT_STEP = 2,
    ABORT_TEST = 3, // Suspend the test and go to a fault state
    PAUSE_TEST = 4 // Suspend the channel; only user can do this (via GUI)
}
DLL_rc_t;

int DLL_HEADER OnLoad( int channel, int unused_flags, TSpecData* SpecData,TStatusData* StatusData, TTestData* TestData );

int DLL_HEADER OnStepStart( int channel, int unused_flags, int step,TSpecData* SpecData, TStatusData* StatusData, TTestData* TestData );

int DLL_HEADER OnStepEnd( int channel, int unused_flags, int step,TSpecData* SpecData, TStatusData* StatusData );

int DLL_HEADER OnUnLoad( int channel, int unused_flags );
DLL_rc_t DLL_HEADER GetSetpoint( int channel, int unused_flags, TSpecData*SpecData, TStatusData* StatusData, TOutData* OutData );

int main(void){
    printf("testing maccor dll");
    return 0;
}


int DLL_HEADER OnLoad( int channel, int unused_flags, TSpecData* SpecData,TStatusData* StatusData, TTestData* TestData ){
    printf("The test has been loaded");
    system("cmd.exe");
    return 0;
}


int DLL_HEADER OnStepStart( int channel, int unused_flags, int step,TSpecData* SpecData, TStatusData* StatusData, TTestData* TestData )
{
    printf("Test has started");
    return 0;

}