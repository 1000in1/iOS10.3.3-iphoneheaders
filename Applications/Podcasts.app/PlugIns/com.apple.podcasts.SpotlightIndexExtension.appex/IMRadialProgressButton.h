/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.podcasts.SpotlightIndexExtension/com.apple.podcasts.SpotlightIndexExtension-Structs.h>
#import <UIKit/UIButton.h>

@class UIColor;

@interface IMRadialProgressButton : UIButton {

	float _progress;
	UIColor* _progressColor;
	UIColor* _emptyProgressColor;
	UIColor* _selectedProgressColor;

}

@property (assign,nonatomic) float progress;                               //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) UIColor * progressColor;                      //@synthesize progressColor=_progressColor - In the implementation block
@property (nonatomic,retain) UIColor * emptyProgressColor;                 //@synthesize emptyProgressColor=_emptyProgressColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedProgressColor;              //@synthesize selectedProgressColor=_selectedProgressColor - In the implementation block
-(void)setEmptyProgressColor:(UIColor *)arg1 ;
-(void)setSelectedProgressColor:(UIColor *)arg1 ;
-(UIColor *)selectedProgressColor;
-(UIColor *)emptyProgressColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setProgress:(float)arg1 ;
-(CGRect)backgroundRectForBounds:(CGRect)arg1 ;
-(CGRect)contentRectForBounds:(CGRect)arg1 ;
-(float)progress;
-(void)setProgressColor:(UIColor *)arg1 ;
-(UIColor *)progressColor;
@end
