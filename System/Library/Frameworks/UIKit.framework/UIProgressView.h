/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/NSCoding.h>

@class UIColor, UIView, UIImageView, NSArray, UIVisualEffectView, NSProgress, NSObservation, UIImage;

@interface UIProgressView : UIView <NSCoding> {

	int _progressViewStyle;
	float _progress;
	int _barStyle;
	UIColor* _progressTintColor;
	UIColor* _trackTintColor;
	UIView* _contentView;
	UIImageView* _trackView;
	UIImageView* _progressView;
	char _isAnimating;
	NSArray* _trackColors;
	NSArray* _progressColors;
	UIVisualEffectView* _effectView;
	NSProgress* _observedProgress;
	NSObservation* _progressObservation;
	UIImage* _trackImage;
	UIImage* _progressImage;

}

@property (assign,nonatomic) int progressViewStyle;                      //@synthesize progressViewStyle=_progressViewStyle - In the implementation block
@property (assign,nonatomic) float progress;                             //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) UIColor * progressTintColor;                //@synthesize progressTintColor=_progressTintColor - In the implementation block
@property (nonatomic,retain) UIColor * trackTintColor;                   //@synthesize trackTintColor=_trackTintColor - In the implementation block
@property (nonatomic,retain) UIImage * progressImage;                    //@synthesize progressImage=_progressImage - In the implementation block
@property (nonatomic,retain) UIImage * trackImage;                       //@synthesize trackImage=_trackImage - In the implementation block
@property (nonatomic,retain) NSProgress * observedProgress;              //@synthesize observedProgress=_observedProgress - In the implementation block
+(CGSize)defaultSize;
+(id)_tintedImageForHeight:(float)arg1 andColors:(id)arg2 roundingRectCorners:(unsigned)arg3 ;
+(id)_tintedImageForHeight:(float)arg1 andColors:(id)arg2 ;
+(unsigned)_indexForStyle:(int)arg1 barStyle:(int)arg2 ;
+(void)_fillImagesForIndex:(unsigned)arg1 style:(int)arg2 barStyle:(int)arg3 ;
+(id)_standardOuterImageForStyle:(int)arg1 barStyle:(int)arg2 ;
+(id)_standardInnerImageForStyle:(int)arg1 barStyle:(int)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(char)_contentHuggingDefault_isUsuallyFixedHeight;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)tintColorDidChange;
-(void)setProgress:(float)arg1 ;
-(void)setBarStyle:(int)arg1 ;
-(int)barStyle;
-(id)_effectiveContentView;
-(void)_updateImages;
-(void)_setProgress:(float)arg1 ;
-(void)_reducedTransparencyDidChange:(id)arg1 ;
-(void)_setupProgressViewCommon;
-(void)setProgressViewStyle:(int)arg1 ;
-(char)_shouldTintTrack;
-(char)_shouldTintProgress;
-(UIColor *)trackTintColor;
-(id)_defaultTrackColorForCurrentStyle;
-(unsigned)_roundedCornersForTrackForCurrentStyle;
-(id)_appropriateTrackImage;
-(UIColor *)progressTintColor;
-(unsigned)_roundedCornersForProgressForCurrentStyle;
-(id)_appropriateProgressImage;
-(NSProgress *)observedProgress;
-(void)_setProgressAnimated:(float)arg1 duration:(double)arg2 delay:(double)arg3 options:(unsigned)arg4 ;
-(void)setProgressTintColor:(UIColor *)arg1 ;
-(id)initWithProgressViewStyle:(int)arg1 ;
-(void)setObservedProgress:(NSProgress *)arg1 ;
-(void)setProgress:(float)arg1 animated:(char)arg2 ;
-(id)_progressColor;
-(void)_setProgressColor:(id)arg1 ;
-(void)setProgressImage:(UIImage *)arg1 ;
-(void)setTrackTintColor:(UIColor *)arg1 ;
-(void)setTrackImage:(UIImage *)arg1 ;
-(int)progressViewStyle;
-(float)progress;
-(UIImage *)trackImage;
-(UIImage *)progressImage;
-(char)isElementAccessibilityExposedToInterfaceBuilder;
@end
