/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:07 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <profiled/MCNewPayloadHandler.h>

@interface MCNewRestrictionsPayloadHandler : MCNewPayloadHandler
-(char)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2 ;
-(void)didRemoveOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2 ;
-(char)isInstalled;
@end

