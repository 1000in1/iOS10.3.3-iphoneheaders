/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@protocol WAWeatherCollectionFooterViewCellDelegate;
@class WATouchButton, WAUnitSelectionControl, UIButton;

@interface WAWeatherCollectionFooterViewCell : UICollectionReusableView {

	id<WAWeatherCollectionFooterViewCellDelegate> _delegate;
	WATouchButton* _addButton;
	WAUnitSelectionControl* _unitControl;
	UIButton* _theWeatherChannelButton;

}

@property (nonatomic,retain) WAUnitSelectionControl * unitControl;                                       //@synthesize unitControl=_unitControl - In the implementation block
@property (nonatomic,retain) UIButton * theWeatherChannelButton;                                         //@synthesize theWeatherChannelButton=_theWeatherChannelButton - In the implementation block
@property (assign,nonatomic,__weak) id<WAWeatherCollectionFooterViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WATouchButton * addButton;                                                  //@synthesize addButton=_addButton - In the implementation block
-(void)_showAddSheet:(id)arg1 ;
-(void)_selectedSegmentChanged:(id)arg1 ;
-(void)_updateUnitControl;
-(void)_twcLogoTapped:(id)arg1 ;
-(WAUnitSelectionControl *)unitControl;
-(void)setUnitControl:(WAUnitSelectionControl *)arg1 ;
-(UIButton *)theWeatherChannelButton;
-(void)setTheWeatherChannelButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<WAWeatherCollectionFooterViewCellDelegate>)arg1 ;
-(id<WAWeatherCollectionFooterViewCellDelegate>)delegate;
-(void)prepareForReuse;
-(void)setAddButton:(WATouchButton *)arg1 ;
-(WATouchButton *)addButton;
@end

