/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.podcasts.SpotlightIndexExtension/com.apple.podcasts.SpotlightIndexExtension-Structs.h>
#import <UIKit/UILabel.h>

@class UIImageView;

@interface IMMarqueeLabel : UILabel {

	char _noDelay;
	char _needsAnimation;
	UIImageView* _marquee;
	UIEdgeInsets _edgeInsets;

}

@property (assign,nonatomic) char needsAnimation;                  //@synthesize needsAnimation=_needsAnimation - In the implementation block
@property (nonatomic,retain) UIImageView * marquee;                //@synthesize marquee=_marquee - In the implementation block
@property (assign,nonatomic) char running; 
@property (assign,nonatomic) UIEdgeInsets edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(void)setNeedsAnimation:(char)arg1 ;
-(id)siblingMarqueeLabels;
-(UIImageView *)marquee;
-(void)setMarquee:(UIImageView *)arg1 ;
-(float)maximumMarqueeTextWidth;
-(void)coordinateBeginTimeForMarqueeAnimations:(double)arg1 ;
-(void)startMarquee;
-(void)stopMarqueeWithRedisplay:(char)arg1 ;
-(void)startMarqueeIfNecessary;
-(void)runOnceWithoutDelay;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setNumberOfLines:(int)arg1 ;
-(void)setText:(id)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)drawTextInRect:(CGRect)arg1 ;
-(CGSize)textSizeForWidth:(float)arg1 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)runOnce;
-(char)needsAnimation;
-(char)running;
-(void)setRunning:(char)arg1 ;
@end

