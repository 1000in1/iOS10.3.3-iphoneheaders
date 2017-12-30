/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:16 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/NotificationConsumer.h>

@class JobAgentSupervisor, NSString;

@interface LaunchServicesObserver : NSObject <NotificationConsumer> {

	JobAgentSupervisor* _supervisor;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithJobSupervisor:(id)arg1 ;
-(void)_handleRegistrationForBundleIDs:(id)arg1 isPlaceholder:(char)arg2 isUninstalled:(char)arg3 ;
-(void)_parseRegistrationNotification:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_applicationInstallsDidCancel:(id)arg1 ;
-(void)_parseProgressNotification:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_applicationInstallsDidPause:(id)arg1 ;
-(void)_applicationInstallsDidResume:(id)arg1 ;
-(void)_applicationInstallsDidPrioritize:(id)arg1 ;
-(void)_enumerateJobsForBundleIDs:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_copyBundleIDsFromXPCArray:(id)arg1 ;
-(void)registerNotifications:(id)arg1 ;
@end
