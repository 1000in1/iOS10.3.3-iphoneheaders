/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>
#import <Maps/CarDistanceLabel.h>

@class UILabel, UIFont, NSString;

@interface CarNavigationDistanceLabel : UIView <CarDistanceLabel> {

	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	int _detail;
	UIFont* _topFont;
	UIFont* _bottomFont;
	double _remainingDistance;

}

@property (nonatomic,retain) UIFont * topFont;                      //@synthesize topFont=_topFont - In the implementation block
@property (nonatomic,retain) UIFont * bottomFont;                   //@synthesize bottomFont=_bottomFont - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double remainingDistance;              //@synthesize remainingDistance=_remainingDistance - In the implementation block
@property (assign,nonatomic) int detail;                            //@synthesize detail=_detail - In the implementation block
-(void)setTopFont:(UIFont *)arg1 ;
-(void)setBottomFont:(UIFont *)arg1 ;
-(float)_labelOffset;
-(void)_updateValues;
-(UIFont *)topFont;
-(UIFont *)bottomFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)intrinsicContentSize;
-(void)setDetail:(int)arg1 ;
-(int)detail;
-(void)setRemainingDistance:(double)arg1 ;
-(void)_updateStyling;
-(double)remainingDistance;
@end
