/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:06 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <profiled/MCInteractionClientDelegate.h>

@class MCProfile, NSMutableArray, NSMutableDictionary, NSArray;

@interface MCProfileHandler : NSObject <MCInteractionClientDelegate> {

	MCProfile* _profile;
	NSMutableArray* _payloadHandlers;
	NSMutableDictionary* _UUIDToPersistentIDMap;
	char _isSetAside;

}

@property (nonatomic,retain,readonly) MCProfile * profile;                    //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) char isSetAside;                               //@synthesize isSetAside=_isSetAside - In the implementation block
@property (nonatomic,retain,readonly) NSArray * payloadHandlers;              //@synthesize payloadHandlers=_payloadHandlers - In the implementation block
+(id)userCancelledError;
-(char)interactionClient:(id)arg1 didRequestPreflightUserInputResponses:(id)arg2 forPayloadIndex:(unsigned)arg3 outError:(id*)arg4 ;
-(char)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2 ;
-(void)setAsideWithInstaller:(id)arg1 ;
-(void)unsetAside;
-(id)payloadHandlerWithUUID:(id)arg1 ;
-(char)stageForInstallationWithInstaller:(id)arg1 interactionClient:(id)arg2 outError:(id*)arg3 ;
-(void)unstageFromInstallationWithInstaller:(id)arg1 ;
-(void)didRemoveOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2 ;
-(void)setUserInputResponses:(id)arg1 ;
-(id)persistentIDForCertificateUUID:(id)arg1 ;
-(id)userCancelledError;
-(id)_profileInstallationErrorWithUnderlyingError:(id)arg1 ;
-(char)preflightUserInputResponses:(id)arg1 forPayloadIndex:(unsigned)arg2 outError:(id*)arg3 ;
-(id)userInputArray;
-(NSArray *)payloadHandlers;
-(void)remove;
-(char)isInstalled;
-(char)isSetAside;
-(id)initWithProfile:(id)arg1 ;
-(MCProfile *)profile;
@end

