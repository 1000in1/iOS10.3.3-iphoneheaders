/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:58 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef union iAP2ParamDataInteger_ {
	unsigned long long u64;
	unsigned u32;
	unsigned short u16;
	unsigned char u8;
	long long int64;
	int int32;
	short int16;
	char int8;
	unsigned char u8Raw[8];
} iAP2ParamDataInteger_;

typedef struct {
	unsigned char id;
	unsigned char type;
	unsigned char version;
	char unreliable;
} SCD_Struct_iA3;

typedef struct iAP2PacketSYNData_st {
	unsigned char version;
	unsigned char maxOutstandingPackets;
	unsigned char maxRetransmissions;
	unsigned char maxCumAck;
	unsigned short maxPacketSize;
	unsigned short retransmitTimeout;
	unsigned short cumAckTimeout;
	unsigned char numSessionInfo;
	unsigned char peerMaxOutstandingPackets;
	unsigned short peerMaxPacketSize;
	unsigned char maxSessVer[4];
	unsigned char minSessVer[4];
	unsigned char linkCmdCnt;
	unsigned char linkCmdInfo[5];
	SCD_Struct_iA3 sessionInfo[4];
} iAP2PacketSYNData_st;

typedef struct __CFUserNotification* CFUserNotificationRef;

typedef struct {
	BOOL field1[2];
	BOOL field2;
	id field3;
} SCD_Struct_iA6;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __CFString* CFStringRef;

typedef struct __CFRunLoopTimer* CFRunLoopTimerRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct BTAccessoryManagerImpl* BTAccessoryManagerImplRef;

typedef struct BTDeviceImpl* BTDeviceImplRef;

typedef struct {
	unsigned val[8];
} SCD_Struct_IA13;

typedef struct SBSProcessAssertion* SBSProcessAssertionRef;

typedef struct BTSessionImpl* BTSessionImplRef;

typedef struct _NSZone* NSZoneRef;

typedef struct __IOHIDUserDevice* IOHIDUserDeviceRef;

typedef struct __IOHIDEventSystemClient* IOHIDEventSystemClientRef;

typedef struct {
	unsigned long long pid;
	char libUUID[60];
} SCD_Struct_iA19;

typedef struct {
	unsigned short len;
	/*function pointer*/void* data;
	char callUUID[38];
	SCD_Struct_iA19) libItem;
} SCD_Struct_iA20;

typedef struct iAP2FileTransfer_st {
	iAP2Link_st link;
	char* pCurPos;
	char* pBuffer;
	unsigned long long sentSize;
	unsigned long long totalSize;
	unsigned long long buffSize;
	unsigned long long buffSentSize;
	/*function pointer*/void* endCB;
	void endCBUserInfo;
	/*function pointer*/void* gotCB;
	void gotCBUserInfo;
	/*function pointer*/void* timerStatusCB;
	void timerStatusCBUserInfo;
	int state;
	unsigned char session;
	unsigned char bufferID;
	unsigned char version;
	unsigned bDeleteBuffOnFinish : 1;
	unsigned bStream : 1;
	unsigned bIsReceive : 1;
	unsigned short type;
	SCD_Struct_iA20 typeData;
	unsigned setupTimestamp;
	unsigned waitEndTimestamp;
} iAP2FileTransfer_st;

typedef struct {
	unsigned short( field1;
	/*function pointer*/void* field2;
	= field3;
	char field4[38];
	SCD_Struct_iA19) field5;
} SCD_Struct_iA22;

typedef struct {
	unsigned field1;
	unsigned char field2;
} SCD_Struct_iA23;

typedef struct __CFSocket* CFSocketRef;

typedef struct __CFArray* CFArrayRef;

typedef struct _MRMediaRemoteCommandInfo* MRMediaRemoteCommandInfoRef;

