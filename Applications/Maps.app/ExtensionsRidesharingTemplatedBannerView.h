/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIImage, UILabel;

@interface ExtensionsRidesharingTemplatedBannerView : UIView {

	UIImageView* _appIconImageView;
	UIImage* _desaturatedAppIcon;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;

}

@property (nonatomic,retain) UILabel * primaryLabel;                //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,retain) UILabel * secondaryLabel;              //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(CGSize)intrinsicContentSize;
-(UILabel *)secondaryLabel;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(void)_updateConstraints;
-(void)setAppIcon:(id)arg1 ;
-(UILabel *)primaryLabel;
-(void)setPrimaryLabel:(UILabel *)arg1 ;
@end

