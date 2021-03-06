/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:51:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXAccessQueueTimer.h>

@protocol AXAccessQueueTimer <NSObject>
@property (getter=isActive,nonatomic,readonly) char active; 
@property (getter=isPending,nonatomic,readonly) char pending; 
@required
-(void)cancel;
-(char)isActive;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2;
-(char)isPending;

@end


@protocol OS_dispatch_source;
@class NSString, AXAccessQueue, NSObject;

@interface AXAccessQueueTimer : NSObject <AXAccessQueueTimer> {

	char _automaticallyCancelPendingBlockUponSchedulingNewBlock;
	char _active;
	char _accessQueueIsExternal;
	NSString* _label;
	int _state;
	AXAccessQueue* _accessQueue;
	NSObject*<OS_dispatch_source> _dispatchTimer;

}

@property (assign,getter=isActive,nonatomic) char active;                                             //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) int state;                                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) AXAccessQueue * accessQueue;                                             //@synthesize accessQueue=_accessQueue - In the implementation block
@property (assign,nonatomic) char accessQueueIsExternal;                                              //@synthesize accessQueueIsExternal=_accessQueueIsExternal - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> dispatchTimer;                             //@synthesize dispatchTimer=_dispatchTimer - In the implementation block
@property (copy) NSString * label;                                                                    //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) char automaticallyCancelPendingBlockUponSchedulingNewBlock;              //@synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isPending,nonatomic,readonly) char pending; 
+(id)timerTargettingMainAccessQueue;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(NSString *)description;
-(int)state;
-(char)isActive;
-(void)setState:(int)arg1 ;
-(NSString *)label;
-(void)setActive:(char)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 ;
-(id)initWithTargetAccessQueue:(id)arg1 ;
-(void)setAccessQueueIsExternal:(char)arg1 ;
-(void)_reallyCancel;
-(void)afterDelay:(double)arg1 processWritingBlock:(/*^block*/id)arg2 ;
-(void)_afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 shouldTreatAsWritingBlock:(char)arg3 ;
-(char)automaticallyCancelPendingBlockUponSchedulingNewBlock;
-(void)_didFinishProcessingBlock;
-(void)setDispatchTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(char)accessQueueIsExternal;
-(void)_warnAboutAsynchronousScheduling;
-(void)_performEnqueuedWritingBlock:(/*^block*/id)arg1 asynchronousExecutionWarningHandler:(SEL)arg2 ;
-(void)_warnAboutAsynchronousCancelling;
-(NSObject*<OS_dispatch_source>)dispatchTimer;
-(void)afterDelay:(double)arg1 processReadingBlock:(/*^block*/id)arg2 ;
-(void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(char)arg1 ;
-(void)setAccessQueue:(AXAccessQueue *)arg1 ;
-(AXAccessQueue *)accessQueue;
-(char)isPending;
@end

