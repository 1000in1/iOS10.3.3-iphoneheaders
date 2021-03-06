/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatorTransitioning.h>

@class PaletteViewController, NSString;

@interface MonthDayAnimator : NSObject <UIViewControllerAnimatorTransitioning> {

	PaletteViewController* _paletteVC;
	char _reverse;

}

@property (assign,nonatomic) char reverse;                          //@synthesize reverse=_reverse - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPaletteVC:(id)arg1 ;
-(void)setReverse:(char)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(char)reverse;
@end

