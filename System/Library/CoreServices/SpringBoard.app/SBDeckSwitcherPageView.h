/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAppSwitcherPageView.h>

@interface SBDeckSwitcherPageView : SBAppSwitcherPageView {

	int _orientation;

}

@property (assign,nonatomic) int orientation;                                             //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) UIView*<SBMainAppSwitcherPageContentView> view; 
-(void)setView:(id)arg1 animated:(char)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
@end

