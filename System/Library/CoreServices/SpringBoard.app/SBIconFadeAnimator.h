/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBIconAnimator.h>

@class UIView;

@interface SBIconFadeAnimator : SBIconAnimator {

	UIView* _crossfadeView;
	char _addedToWindow;
	char _fadesReferenceView;

}

@property (assign,nonatomic) char fadesReferenceView;              //@synthesize fadesReferenceView=_fadesReferenceView - In the implementation block
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(id)initWithFolderController:(id)arg1 crossfadeView:(id)arg2 ;
-(void)setFadesReferenceView:(char)arg1 ;
-(void)_setAnimationFraction:(float)arg1 ;
-(unsigned)_numberOfSignificantAnimations;
-(void)_animateToFraction:(float)arg1 afterDelay:(double)arg2 withSharedCompletion:(/*^block*/id)arg3 ;
-(void)_applyAlphaForFraction:(float)arg1 ;
-(char)fadesReferenceView;
@end

