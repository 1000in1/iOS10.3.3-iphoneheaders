/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.podcasts.SpotlightIndexExtension/com.apple.podcasts.SpotlightIndexExtension-Structs.h>
#import <UIKit/UIControl.h>

@class NSMutableArray;

@interface IMCalendarMiniMonthView : UIControl {

	id _delegate;
	SCD_Struct_IM13 _displayedDate;
	SCD_Struct_IM13 _displayedMonth;
	NSMutableArray* _calendarDayItems;
	int _frameCount;
	int _currentStartIndex;
	int _touchDate;
	int _rowsNeededForCurrentMonth;
	char _maskTouches;

}

@property (assign,nonatomic) id delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char maskTouches;                             //@synthesize maskTouches=_maskTouches - In the implementation block
@property (nonatomic,readonly) int touchDate;                              //@synthesize touchDate=_touchDate - In the implementation block
@property (nonatomic,readonly) int rowsNeededForCurrentMonth;              //@synthesize rowsNeededForCurrentMonth=_rowsNeededForCurrentMonth - In the implementation block
+(id)defaultParagraphStyle;
-(SCD_Struct_IM13)displayedDate;
-(void)setDisplayedDate:(SCD_Struct_IM13)arg1 ;
-(int)dayForPoint:(CGPoint)arg1 ;
-(void)_drawBox:(CGRect)arg1 fill:(char)arg2 ;
-(id)MiniDayFont;
-(id)boxColor;
-(CGRect)rectForDay:(int)arg1 ;
-(CGRect)highlightRectForDayRect:(CGRect)arg1 ;
-(id)MiniDayNumberFont;
-(int)RowsNeededForMiniMonth:(SCD_Struct_IM13)arg1 ;
-(void)setDisplayedMonth:(SCD_Struct_IM13)arg1 ;
-(void)hideTouchFeedback;
-(void)updateTrackWithPoint:(CGPoint)arg1 ;
-(id)defaultNumberColor;
-(void)_drawBox:(CGRect)arg1 ;
-(SCD_Struct_IM13)displayedMonth;
-(int)touchDate;
-(char)maskTouches;
-(void)setMaskTouches:(char)arg1 ;
-(int)rowsNeededForCurrentMonth;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(char)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(char)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)darkTextColor;
-(id)todayTextColor;
-(void)_localeChanged;
-(id)defaultTextColor;
@end
