/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <MobileNotes/ICImageCollectionViewCell.h>
#import <libobjc.A.dylib/AVPlayerViewControllerDelegate.h>

@class UIView, CAGradientLayer, UILabel, NSString;

@interface ICMovieCollectionViewCell : ICImageCollectionViewCell <AVPlayerViewControllerDelegate> {

	UIView* _bottomView;
	CAGradientLayer* _bottomGradient;
	UILabel* _timeLabel;

}

@property (nonatomic,retain) UIView * bottomView;                           //@synthesize bottomView=_bottomView - In the implementation block
@property (nonatomic,retain) CAGradientLayer * bottomGradient;              //@synthesize bottomGradient=_bottomGradient - In the implementation block
@property (nonatomic,retain) UILabel * timeLabel;                           //@synthesize timeLabel=_timeLabel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBottomGradient:(CAGradientLayer *)arg1 ;
-(CAGradientLayer *)bottomGradient;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(UIView *)bottomView;
-(void)setAttachment:(id)arg1 ;
-(void)setBottomView:(UIView *)arg1 ;
-(void)setTimeLabel:(UILabel *)arg1 ;
-(UILabel *)timeLabel;
@end
