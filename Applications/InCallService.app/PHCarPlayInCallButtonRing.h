/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InCallService/InCallService-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface PHCarPlayInCallButtonRing : UIView {

	char _dimmed;
	char _selected;
	char _highlighted;
	char _toggledOn;
	UIColor* _fillColor;

}

@property (nonatomic,retain) UIColor * fillColor;              //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) char dimmed;                      //@synthesize dimmed=_dimmed - In the implementation block
@property (assign,nonatomic) char selected;                    //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) char highlighted;                 //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) char toggledOn;                   //@synthesize toggledOn=_toggledOn - In the implementation block
-(void)setToggledOn:(char)arg1 ;
-(char)toggledOn;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(char)arg1 ;
-(void)setSelected:(char)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(char)highlighted;
-(char)selected;
-(void)setDimmed:(char)arg1 ;
-(char)dimmed;
@end

