/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol EnqueueableDismissOperationProtocol, OS_dispatch_queue;
@class UIViewController, NSObject;

@interface DismissPresentedViewControllerOperation : NSOperation {

	UIViewController*<EnqueueableDismissOperationProtocol> _presentingViewController;
	int* _transition;
	/*^block*/id _completion;
	char _isFinished;
	char _isExecuting;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)blacklistedDismissalClasses;
-(id)initWithPresentingViewController:(id)arg1 transition:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancel;
-(id)description;
-(void)start;
-(void)main;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)isFinished;
-(char)isExecuting;
-(void)finish;
-(char)isConcurrent;
@end

