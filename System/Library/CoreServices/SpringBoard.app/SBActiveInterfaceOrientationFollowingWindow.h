/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSecureWindow.h>
#import <SpringBoard/SBUIActiveOrientationObserver.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class _SBDummyRootVC, NSString;

@interface SBActiveInterfaceOrientationFollowingWindow : SBSecureWindow <SBUIActiveOrientationObserver, BSDescriptionProviding> {

	_SBDummyRootVC* _rootVC;
	char _passesTouchesThrough;

}

@property (assign,nonatomic) char passesTouchesThrough;              //@synthesize passesTouchesThrough=_passesTouchesThrough - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDebugName:(id)arg1 ;
-(void)_updateInterfaceOrientationToCurrentActiveInterfaceOrientationWithDuration:(double)arg1 ;
-(char)passesTouchesThrough;
-(void)setPassesTouchesThrough:(char)arg1 ;
-(void)setHidden:(char)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(NSString *)description;
-(void)setRootViewController:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(int)arg1 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(int)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(int)arg3 ;
@end

