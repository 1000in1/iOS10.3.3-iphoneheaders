/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSUserActivityDelegate.h>

@protocol UIActivityContinuationManagerApplicationContext;
@class NSString, NSProgress;

@interface UIActivityContinuationManager : NSObject <NSUserActivityDelegate> {

	id<UIActivityContinuationManagerApplicationContext> _context;
	NSString* _currentActivityContinuationType;
	NSString* _currentActivityContinuationUUIDString;
	NSProgress* _currentActivityContinuationProgress;

}

@property (setter=_setCurrentActivityContinuationType:,getter=_currentActivityContinuationType,nonatomic,copy) NSString * currentActivityContinuationType;                                //@synthesize currentActivityContinuationType=_currentActivityContinuationType - In the implementation block
@property (setter=_setCurrentActivityContinuationUUIDString:,getter=_currentActivityContinuationUUIDString,nonatomic,copy) NSString * currentActivityContinuationUUIDString;              //@synthesize currentActivityContinuationUUIDString=_currentActivityContinuationUUIDString - In the implementation block
@property (setter=_setCurrentActivityContinuationProgress:,getter=_currentActivityContinuationProgress,nonatomic,retain) NSProgress * currentActivityContinuationProgress;                //@synthesize currentActivityContinuationProgress=_currentActivityContinuationProgress - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithApplicationContext:(id)arg1 ;
-(id)activityContinuationDictionaryWithAction:(id)arg1 ;
-(void)handleActivityContinuation:(id)arg1 isSuspended:(char)arg2 ;
-(char)activityContinuationsAreBeingTracked;
-(void)addResponder:(id)arg1 document:(id)arg2 forUserActivity:(id)arg3 ;
-(void)removeResponder:(id)arg1 document:(id)arg2 forUserActivity:(id)arg3 ;
-(void)_clearCurrentActivityContinuationCancelingProgress:(char)arg1 ;
-(void)_didFailToContinueUserActivityWithType:(id)arg1 error:(id)arg2 ;
-(id)_fetchUserActivityWithUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setCurrentActivityContinuationType:(id)arg1 ;
-(void)_setCurrentActivityContinuationUUIDString:(id)arg1 ;
-(void)_setCurrentActivityContinuationProgress:(id)arg1 ;
-(char)_delegateHandledContinueActivityWithType:(id)arg1 ;
-(void)_hideCurrentActivityContinuationProgressUI;
-(void)_displayCurrentActivityContinuationProgressUI;
-(char)_continueUserActivity:(id)arg1 ;
-(void)_endCurrentActivityContinuationWithCompletion:(/*^block*/id)arg1 ;
-(void)_endCurrentActivityContinuationAndDisplayError:(id)arg1 ;
-(void)_userActivityWillSave:(id)arg1 ;
-(void)_cleanupUserActivity:(id)arg1 activityIdentifier:(id)arg2 ;
-(void)userActivityWillSave:(id)arg1 ;
-(id)_currentActivityContinuationType;
-(id)_currentActivityContinuationUUIDString;
-(id)_currentActivityContinuationProgress;
@end

