/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:51 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface XPCClientUser : NSObject {

	NSObject*<OS_dispatch_queue> queue;
	/*^block*/id block;
	int _eventLogLevel;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,copy) id block; 
@property (assign,nonatomic) int eventLogLevel;                               //@synthesize eventLogLevel=_eventLogLevel - In the implementation block
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)eventLogLevel;
-(void)setEventLogLevel:(int)arg1 ;
-(void)setBlock:(id)arg1 ;
-(id)block;
@end

