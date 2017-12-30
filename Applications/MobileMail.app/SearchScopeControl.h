/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIControl.h>

@class UIScrollView, UISegmentedControl, UIView, NSArray;

@interface SearchScopeControl : UIControl {

	UIScrollView* _scrollView;
	UISegmentedControl* _segments;
	UIView* _separator;
	NSArray* _scopeTitles;

}

@property (nonatomic,copy) NSArray * scopeTitles;                 //@synthesize scopeTitles=_scopeTitles - In the implementation block
@property (assign,nonatomic) int selectedScopeIndex; 
+(id)searchScopeControlForTableView:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(void)_segmentValueChanged:(id)arg1 ;
-(void)setSelectedScopeIndex:(int)arg1 ;
-(int)selectedScopeIndex;
-(void)_updateMaskIfNecessary;
-(void)setScopeTitles:(id)arg1 animated:(char)arg2 ;
-(void)_updateTitles:(char)arg1 ;
-(void)setScopeTitles:(NSArray *)arg1 ;
-(NSArray *)scopeTitles;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)_didScroll;
@end

