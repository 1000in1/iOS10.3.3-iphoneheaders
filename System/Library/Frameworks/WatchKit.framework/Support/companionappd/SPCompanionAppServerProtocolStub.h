/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:34:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/WatchKit.framework/Support/companionappd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <companionappd/SPRemoteInterfaceProtocol.h>

@class NSString;

@interface SPCompanionAppServerProtocolStub : NSObject <SPRemoteInterfaceProtocol>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)receiveData:(id)arg1 fromIdentifier:(id)arg2 ;
-(void)applicationDidFinishConnecting:(id)arg1 ;
-(void)dataInterfaceDidBecomeActive:(id)arg1 ;
-(void)dataInterfaceWillResignActive:(id)arg1 ;
-(void)receiveProtoData:(id)arg1 fromIdentifier:(id)arg2 ;
-(void)applicationDidTerminate:(id)arg1 ;
-(void)applicationContentsDidReset:(id)arg1 ;
-(void)applicationIsStillActive;
-(void)applicationHandleWatchTaskKeys:(id)arg1 returnToPrimaryUI:(char)arg2 visibleVCID:(id)arg3 clientIdentifier:(id)arg4 ;
-(void)applicationDidReceiveNotification:(id)arg1 clientIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)preferredContentSizeCategory:(id)arg1 ;
-(void)layoutDirection:(int)arg1 ;
-(void)replyTimingData:(id)arg1 ;
@end

