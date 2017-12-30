/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:06 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXHAAccessQueueTimer.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString;

@interface AXHADispatchTimer : NSObject <AXHAAccessQueueTimer> {

	char _active;
	char _pending;
	char _cancelled;
	char _automaticallyCancelPendingBlockUponSchedulingNewBlock;
	char _useWallTime;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSObject*<OS_dispatch_source> _dispatchTimer;
	/*^block*/id _processBlock;
	/*^block*/id _cancelBlock;
	NSString* _label;

}

@property (assign,getter=isActive,nonatomic) char active;                                             //@synthesize active=_active - In the implementation block
@property (assign,getter=isPending,nonatomic) char pending;                                           //@synthesize pending=_pending - In the implementation block
@property (assign,getter=isCancelled,nonatomic) char cancelled;                                       //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> dispatchTimer;                             //@synthesize dispatchTimer=_dispatchTimer - In the implementation block
@property (nonatomic,copy) id processBlock;                                                           //@synthesize processBlock=_processBlock - In the implementation block
@property (nonatomic,copy) id cancelBlock;                                                            //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (nonatomic,retain) NSString * label;                                                        //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) char automaticallyCancelPendingBlockUponSchedulingNewBlock;              //@synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock - In the implementation block
@property (assign,nonatomic) char useWallTime;                                                        //@synthesize useWallTime=_useWallTime - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)cancel;
-(void)dealloc;
-(NSString *)description;
-(char)isActive;
-(char)isCancelled;
-(void)setCancelled:(char)arg1 ;
-(NSString *)label;
-(void)setActive:(char)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)setPending:(char)arg1 ;
-(id)initWithTargetSerialQueue:(id)arg1 ;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 ;
-(void)_reallyCancel;
-(char)automaticallyCancelPendingBlockUponSchedulingNewBlock;
-(void)setDispatchTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)dispatchTimer;
-(void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(char)arg1 ;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 cancelBlock:(/*^block*/id)arg3 ;
-(void)setProcessBlock:(id)arg1 ;
-(char)useWallTime;
-(void)setUseWallTime:(char)arg1 ;
-(id)processBlock;
-(char)isPending;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)cancelBlock;
-(void)setCancelBlock:(id)arg1 ;
@end
