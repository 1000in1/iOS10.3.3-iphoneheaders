/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/Bridge-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface COSManualPairingHeader : UIView {

	UILabel* _headerLabel;
	UILabel* _devices;

}

@property (nonatomic,retain) UILabel * headerLabel;              //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UILabel * devices;                  //@synthesize devices=_devices - In the implementation block
-(id)pairingInstructionAttributedString;
-(id)deviceListTitleName;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setDevices:(UILabel *)arg1 ;
-(UILabel *)headerLabel;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(UILabel *)devices;
@end
