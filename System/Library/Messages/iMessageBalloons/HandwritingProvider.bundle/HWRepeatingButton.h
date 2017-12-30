/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/HandwritingProvider.bundle/HandwritingProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HandwritingProvider/HandwritingProvider-Structs.h>
#import <UIKit/UIButton.h>

@interface HWRepeatingButton : UIButton {

	SEL _repeatingAction;
	unsigned _repeatCount;

}

@property (assign,nonatomic) unsigned repeatCount;              //@synthesize repeatCount=_repeatCount - In the implementation block
@property (assign,nonatomic) SEL repeatingAction;               //@synthesize repeatingAction=_repeatingAction - In the implementation block
-(void)_touchDown:(id)arg1 ;
-(SEL)repeatingAction;
-(void)_touchUp:(id)arg1 ;
-(void)_sendRepeatEvent:(id)arg1 ;
-(void)setRepeatingAction:(SEL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(unsigned)repeatCount;
-(void)setRepeatCount:(unsigned)arg1 ;
@end

