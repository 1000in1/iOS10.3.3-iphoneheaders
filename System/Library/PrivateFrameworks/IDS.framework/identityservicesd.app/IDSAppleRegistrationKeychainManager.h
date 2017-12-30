/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:00 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, IMTimer, NSRecursiveLock, NSArray;

@interface IDSAppleRegistrationKeychainManager : NSObject {

	NSMutableDictionary* _smsSignatures;
	NSMutableDictionary* _authenticationCerts;
	NSMutableArray* _registrationData;
	IMTimer* _purgeTimer;
	NSRecursiveLock* _lock;
	/*^block*/id _purgeCancelBlock;
	/*^block*/id _purgeEnqueueBlock;
	char _loaded;

}

@property (nonatomic,copy,readonly) NSArray * registrations; 
+(id)sharedInstance;
+(id)keychainServiceForVersion:(unsigned)arg1 ;
+(id)keychainAccountForVersion:(unsigned)arg1 ;
+(id)keychainAccessGroupForVersion:(unsigned)arg1 ;
-(id)registrationWithServiceType:(id)arg1 registrationType:(int)arg2 value:(id)arg3 ;
-(id)smsSignatureAndMainID:(id*)arg1 ;
-(char)removeAllRegistrations;
-(void)reloadFromKeychain;
-(char)__saveToKeychain;
-(char)_saveToKeychain;
-(void)_reloadFromDictionary:(id)arg1 ;
-(void)_loadIfNeeded;
-(char)addRegistration:(id)arg1 ;
-(char)removeRegistration:(id)arg1 ;
-(id)authenticationCertForID:(id)arg1 ;
-(void)setAuthenticationCert:(id)arg1 forID:(id)arg2 ;
-(void)setSMSSignature:(id)arg1 mainID:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)_setPurgeTimer;
-(void)_flush;
-(void)systemDidFinishMigration;
-(char)saveToKeychain;
-(NSArray *)registrations;
@end

