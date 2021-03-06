/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:58 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iap2d/iap2d-Structs.h>
@class NSDictionary, iAP2Session, NSTimer, NSData, NSString;

@interface iAP2AuthenticationController : NSObject {

	BOOL _disableAuthForTestingPref;
	CFDictionaryRef _authInfoDict;
	int _authState;
	const void* _pkAuthCaps;
	unsigned char _keyLength;
	NSDictionary* _AuthVersionsSupported;
	iAP2Session* _controlSession;
	NSTimer* _AuthTimer;
	NSData* _pNSDataAuthSerNum;
	NSString* _pNSStrAuthSerNum;
	BOOL _bCertMatchInCache;
	BOOL _skippedForCTA;
	NSData* _certificateSerial;
	NSString* _certificateSerialString;

}

@property (assign,nonatomic) NSString * certificateSerialString;                  //@synthesize certificateSerialString=_certificateSerialString - In the implementation block
@property (assign,nonatomic) NSData * certificateSerial;                          //@synthesize certificateSerial=_certificateSerial - In the implementation block
@property (nonatomic,readonly) int authState;                                     //@synthesize authState=_authState - In the implementation block
@property (nonatomic,readonly) NSDictionary * AuthVersionsSupported;              //@synthesize AuthVersionsSupported=_AuthVersionsSupported - In the implementation block
@property (nonatomic,readonly) CFDictionaryRef authInfoDict;                      //@synthesize authInfoDict=_authInfoDict - In the implementation block
@property (nonatomic,readonly) const void* pkAuthCaps;                            //@synthesize pkAuthCaps=_pkAuthCaps - In the implementation block
@property (nonatomic,readonly) BOOL skippedForCTA;                                //@synthesize skippedForCTA=_skippedForCTA - In the implementation block
@property (assign,nonatomic) iAP2Session * controlSession;                        //@synthesize controlSession=_controlSession - In the implementation block
-(BOOL)skippedForCTA;
-(const void*)pkAuthCaps;
-(int)authState;
-(void)setControlSession:(iAP2Session *)arg1 ;
-(void)skipAuthenticationAsCTAPassForCertCaps:(const void*)arg1 certSerial:(id)arg2 ;
-(void)startAuthentication:(BOOL)arg1 ;
-(void)shutdownAuthController;
-(const char*)getCertificateAndLength:(unsigned*)arg1 ;
-(NSString *)certificateSerialString;
-(void)sendiPodCertificate;
-(void)handleAccessoryCertificate:(const char*)arg1 withLength:(unsigned short)arg2 ;
-(void)sendiPodSignature:(const char*)arg1 withLength:(unsigned short)arg2 ;
-(char)verifyAccessoryChallengeResponse:(const char*)arg1 withLength:(unsigned)arg2 ;
-(void)_changeAuthStateAndNotify:(int)arg1 ;
-(void)_sendAuthFailureMessageAndLockoutPort:(id)arg1 ;
-(void)setCertificateSerialString:(NSString *)arg1 ;
-(void)_setCertificate:(const char*)arg1 withLength:(unsigned)arg2 authVersion:(unsigned short)arg3 ;
-(BOOL)_verifyCertificateValidity;
-(iAP2Session *)controlSession;
-(char)_notifyOfAuthStateEarly;
-(void)_createNonceAndStoreInDictionary;
-(void)_handleAuthInfoFailure;
-(void)_setChallengeResponseInDictionary:(const char*)arg1 withLength:(unsigned)arg2 ;
-(int)_getAuthVersionMajor;
-(void)_handleAuthChallengeResponseFailure;
-(void)_setCertOrNonceOrChallengeInternal:(CFStringRef)arg1 withBytes:(const char*)arg2 andLength:(unsigned)arg3 ;
-(void)_setAuthVersionMajor:(unsigned short)arg1 ;
-(void)setCertificateSerial:(NSData *)arg1 ;
-(NSDictionary *)AuthVersionsSupported;
-(CFDictionaryRef)authInfoDict;
-(NSData *)certificateSerial;
-(id)init;
-(void)dealloc;
@end

