/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/EKCurrentTimeMarkerViewUpdating.h>

@class UIScrollView, EKDayTimeView, UIView, UILabel, NSString;

@interface WeekTimeView : UIView <UIScrollViewDelegate, EKCurrentTimeMarkerViewUpdating> {

	UIScrollView* _timeScroller;
	EKDayTimeView* _timeView;
	UIView* _rightBorderView;
	UILabel* _monthLabel;
	UILabel* _overlayMonthLabel;
	UILabel* _weekNumberLabel;
	UILabel* _allDayLabel;
	UIView* _allDayBackgroundColorView;
	UIView* _topAllDaySeparatorView;
	UIView* _bottomAllDaySeparatorView;
	UIView* _headerBackground;
	float _headerHeight;
	int _orientation;

}

@property (assign,nonatomic) float headerHeight;                       //@synthesize headerHeight=_headerHeight - In the implementation block
@property (assign,nonatomic) char usesLightText; 
@property (assign,nonatomic) char showsTimeMarker; 
@property (assign,nonatomic) char allDayHighlighted; 
@property (assign,nonatomic) float allDayAlpha; 
@property (nonatomic,retain) NSString * monthText; 
@property (nonatomic,retain) NSString * overlayMonthText; 
@property (nonatomic,retain) NSString * weekNumberText; 
@property (assign,nonatomic) int orientation;                          //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;              //@synthesize timeScroller=_timeScroller - In the implementation block
@property (nonatomic,readonly) EKDayTimeView * timeView;               //@synthesize timeView=_timeView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)widthForOrientation:(int)arg1 ;
-(char)_showRightBorder;
-(float)allDayBackgroundColorOriginY;
-(float)allDayAlpha;
-(void)setAllDayHighlighted:(char)arg1 ;
-(char)allDayHighlighted;
-(void)setDayTimeViewDelegate:(id)arg1 ;
-(void)contentSizeCategoryChanged;
-(void)setAllDayAlpha:(float)arg1 ;
-(void)setMonthText:(NSString *)arg1 ;
-(NSString *)monthText;
-(void)setWeekNumberText:(NSString *)arg1 ;
-(NSString *)weekNumberText;
-(void)setOverlayMonthText:(NSString *)arg1 ;
-(NSString *)overlayMonthText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(UIScrollView *)scrollView;
-(void)sizeToFit;
-(float)headerHeight;
-(void)setHeaderHeight:(float)arg1 ;
-(void)setUsesLightText:(char)arg1 ;
-(void)setShowsTimeMarker:(char)arg1 ;
-(void)updateMarkerPosition;
-(char)showsTimeMarker;
-(void)setHourHeightScale:(float)arg1 ;
-(EKDayTimeView *)timeView;
-(char)usesLightText;
@end
