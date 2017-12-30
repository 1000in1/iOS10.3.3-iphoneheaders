/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/Plugins/NanoAppSync.assistantBundle/NanoAppSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AFSyncHandler.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSString, NSDictionary, NSObject;

@interface NASAppIntentsInfoSyncHandler : NSObject <AFSyncHandler> {

	NSString* _nanoAppBundleId;
	NSDictionary* _nanoAppInfo;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _semaphore;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_pbLocalizedProjectsForVocabularyInfoDictionary:(id)arg1 ;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 count:(int)arg3 forKey:(id)arg4 beginInfo:(id)arg5 ;
-(void)syncDidEnd;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(id)init;
@end

