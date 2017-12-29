/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBDashBoardBackgroundStyleTransitioning <NSObject>
@property (assign,nonatomic) int backgroundStyle; 
@property (getter=isTransitioningBackgroundStyle,nonatomic,readonly) char transitioningBackgroundStyle; 
@required
-(void)beginTransitionToBackgroundStyle:(int)arg1;
-(void)updateBackgroundStyleTransitionProgress:(float)arg1;
-(char)isTransitioningBackgroundStyle;
-(void)completeTransitionToBackgroundStyle:(int)arg1;
-(int)backgroundStyle;
-(void)setBackgroundStyle:(int)arg1;

@end
