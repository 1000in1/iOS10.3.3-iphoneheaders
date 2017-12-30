/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/Nearby.appex/Nearby
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Nearby/Nearby-Structs.h>
#import <UIKit/UIView.h>

@protocol NUIWidgetGridViewDataSource, NUIWidgetGridViewDelegate;
@class NUIContainerStackView, NSArray;

@interface NUIWidgetGridView : UIView {

	NUIContainerStackView* _stackView;
	NSArray* _itemViews;
	unsigned _visibleCount;
	CGSize _labelSizes[6];
	id<NUIWidgetGridViewDataSource> _dataSource;
	id<NUIWidgetGridViewDelegate> _delegate;
	int _imageStyle;
	int _titleStyle;
	int _subtitleStyle;
	float _centerAdjustmentAllowed;
	float _currentLabelOutset;

}

@property (nonatomic,readonly) float currentLabelOutset;                                     //@synthesize currentLabelOutset=_currentLabelOutset - In the implementation block
@property (assign,nonatomic,__weak) id<NUIWidgetGridViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<NUIWidgetGridViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int imageStyle;                                                 //@synthesize imageStyle=_imageStyle - In the implementation block
@property (assign,nonatomic) int titleStyle;                                                 //@synthesize titleStyle=_titleStyle - In the implementation block
@property (assign,nonatomic) int subtitleStyle;                                              //@synthesize subtitleStyle=_subtitleStyle - In the implementation block
@property (assign,nonatomic) float centerAdjustmentAllowed;                                  //@synthesize centerAdjustmentAllowed=_centerAdjustmentAllowed - In the implementation block
+(float)itemWidth;
+(unsigned)maxNumberOfItems;
-(void)layoutSubviews;
-(void)setDataSource:(id<NUIWidgetGridViewDataSource>)arg1 ;
-(void)setDelegate:(id<NUIWidgetGridViewDelegate>)arg1 ;
-(void)reloadData;
-(id<NUIWidgetGridViewDataSource>)dataSource;
-(id<NUIWidgetGridViewDelegate>)delegate;
-(int)imageStyle;
-(void)setImageStyle:(int)arg1 ;
-(int)titleStyle;
-(void)setTitleStyle:(int)arg1 ;
-(int)subtitleStyle;
-(CGSize)entitledExtraSpaceForCellAtIndex:(unsigned)arg1 ;
-(id)cellForGridViewItemAtIndex:(int)arg1 ;
-(CGSize)borrowableSpaceForCellAtIndex:(unsigned)arg1 ;
-(float)centerAdjustmentAllowed;
-(void)_createStackViewIfNeeded;
-(void)setSubtitleStyle:(int)arg1 ;
-(void)setCenterAdjustmentAllowed:(float)arg1 ;
-(float)currentLabelOutset;
-(id)initWithDataSource:(id)arg1 delegate:(id)arg2 ;
@end

