/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIInteractionProgress.h>
#import <libobjc.A.dylib/NSObservable.h>
#import <libobjc.A.dylib/NSObserver.h>

@class NSObservation, NSString;

@interface UIForceStageInteractionProgress : UIInteractionProgress <NSObservable, NSObserver> {

	NSObservation* _observation;
	char _completed;
	char _started;
	char _completesAtTargetState;

}

@property (assign,nonatomic) char completesAtTargetState;              //@synthesize completesAtTargetState=_completesAtTargetState - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)_reset;
-(void)receiveObservedValue:(id)arg1 ;
-(void)setCompletesAtTargetState:(char)arg1 ;
-(char)completesAtTargetState;
@end

