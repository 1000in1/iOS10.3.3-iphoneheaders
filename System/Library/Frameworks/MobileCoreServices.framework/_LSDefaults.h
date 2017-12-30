/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSURL, NSArray;

@interface _LSDefaults : NSObject {

	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSURL* _systemContainerURL;
	NSURL* _systemGroupContainerURL;
	NSURL* _iconsGroupContainerURL;
	NSURL* _userContainerURL;
	char _inSyncBubble;
	char _inXCTestRigInsecure;
	char _appleInternal;
	char _isServer;
	char _hasServer;
	char _inEducationMode;
	char _hasPersistentPreferences;

}

@property (readonly) unsigned currentSchemaVersion; 
@property (readonly) NSURL * systemContainerURL; 
@property (readonly) NSURL * systemGroupContainerURL; 
@property (readonly) NSURL * iconsGroupContainerURL; 
@property (readonly) NSURL * userContainerURL; 
@property (readonly) NSURL * databaseStoreFileURL; 
@property (readonly) NSURL * queriedSchemesMapFileURL; 
@property (readonly) NSURL * identifiersFileURL; 
@property (readonly) NSURL * preferencesFileURL; 
@property (readonly) NSURL * securePeferencesFileURL; 
@property (readonly) NSURL * iconCacheFolderURL; 
@property (readonly) NSURL * iconCacheSystemVersionFileURL; 
@property (readonly) NSURL * dbSentinelFileURL; 
@property (readonly) NSURL * dbRecoveryFileURL; 
@property (assign) char isServer;                                                                  //@synthesize isServer=_isServer - In the implementation block
@property (assign) char hasServer;                                                                 //@synthesize hasServer=_hasServer - In the implementation block
@property (getter=isInEducationMode,readonly) char inEducationMode;                                //@synthesize inEducationMode=_inEducationMode - In the implementation block
@property (readonly) char hasPersistentPreferences;                                                //@synthesize hasPersistentPreferences=_hasPersistentPreferences - In the implementation block
@property (readonly) char isSimulator; 
@property (getter=isInSyncBubble,readonly) char inSyncBubble;                                      //@synthesize inSyncBubble=_inSyncBubble - In the implementation block
@property (getter=isInXCTestRigInsecure,nonatomic,readonly) char inXCTestRigInsecure;              //@synthesize inXCTestRigInsecure=_inXCTestRigInsecure - In the implementation block
@property (getter=isAppleInternal,nonatomic,readonly) char appleInternal;                          //@synthesize appleInternal=_appleInternal - In the implementation block
@property (nonatomic,readonly) char allowsAlternateIcons; 
@property (readonly) double databaseSaveInterval; 
@property (readonly) double databaseSaveLatency; 
@property (readonly) NSArray * preferredLocalizations; 
+(char)appleInternal;
+(char)inSyncBubble;
+(char)inXCTestRigInsecure;
+(char)hasPersistentPreferences;
+(id)systemContainerURL;
+(id)userContainerURL;
+(id)systemGroupContainerURL;
+(id)iconsGroupContainerURL;
+(id)sharedInstance;
+(char)hasServer;
-(char)isServer;
-(NSURL *)dbRecoveryFileURL;
-(id)serviceNameForConnectionType:(unsigned short)arg1 ;
-(char)isInEducationMode;
-(void)setHasServer:(char)arg1 ;
-(char)hasPersistentPreferences;
-(NSURL *)systemContainerURL;
-(NSURL *)userContainerURL;
-(NSURL *)systemGroupContainerURL;
-(NSURL *)iconsGroupContainerURL;
-(unsigned)currentSchemaVersion;
-(NSURL *)iconCacheFolderURL;
-(char)isInXCTestRigInsecure;
-(unsigned)proxyUIDForUID:(unsigned)arg1 ;
-(id)darwinNotificationNameForCurrentUser:(id)arg1 ;
-(unsigned)proxyUIDForCurrentEffectiveUID;
-(NSURL *)databaseStoreFileURL;
-(NSURL *)queriedSchemesMapFileURL;
-(NSURL *)identifiersFileURL;
-(NSURL *)preferencesFileURL;
-(NSURL *)securePeferencesFileURL;
-(NSURL *)iconCacheSystemVersionFileURL;
-(char)isSimulator;
-(double)databaseSaveInterval;
-(double)databaseSaveLatency;
-(id)userPreferencesURL;
-(NSURL *)dbSentinelFileURL;
-(id)databaseUpdateNotificationName;
-(id)preferencesUpdateNotificationName;
-(id)preferencesFileChangeNotificationName;
-(void)setIsServer:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(id)debugDescription;
-(char)allowsAlternateIcons;
-(NSArray *)preferredLocalizations;
-(char)hasServer;
-(char)isInSyncBubble;
-(char)isAppleInternal;
@end

