/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSInvocation, NSObject;

@interface _UIDelayedPresentationContext : NSObject {

	char _enableUserInteraction;
	int _reqcnt;
	NSInvocation* _presentInvocation;
	/*^block*/id _cancellationHandler;
	double _timeout;
	NSObject*<OS_dispatch_source> _timerSource;

}

@property (nonatomic,copy) id cancellationHandler;                          //@synthesize cancellationHandler=_cancellationHandler - In the implementation block
@property (nonatomic,retain) NSInvocation * presentInvocation;              //@synthesize presentInvocation=_presentInvocation - In the implementation block
-(void)setCancellationHandler:(id)arg1 ;
-(id)invocationTarget;
-(void)setPresentInvocation:(NSInvocation *)arg1 ;
-(id)delayingController;
-(id)initWithTimeout:(double)arg1 cancellationHandler:(/*^block*/id)arg2 ;
-(int)requestCount;
-(int)decrementRequestCount;
-(int)incrementRequestCount;
-(void)cancelDelayedPresentation:(char)arg1 ;
-(void)beginDelayedPresentation;
-(void)finishDelayedPresentation:(id)arg1 ;
-(id)cancellationHandler;
-(NSInvocation *)presentInvocation;
@end

