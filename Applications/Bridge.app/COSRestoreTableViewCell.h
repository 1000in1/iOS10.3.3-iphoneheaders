/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, COSWatchView, UILabel, NSDateFormatter;

@interface COSRestoreTableViewCell : UITableViewCell {

	UIImageView* _background;
	COSWatchView* _watchView;
	UILabel* _deviceTitleLabel;
	UILabel* _pairedStatusLabel;
	UILabel* _deviceMaterialLabel;
	UILabel* _deviceLastBackupDetailLabel;
	UILabel* _deviceCaseSizeLabel;
	NSDateFormatter* _dateFormatter;

}

@property (nonatomic,readonly) UIImageView * background;                           //@synthesize background=_background - In the implementation block
@property (nonatomic,readonly) COSWatchView * watchView;                           //@synthesize watchView=_watchView - In the implementation block
@property (nonatomic,readonly) UILabel * deviceTitleLabel;                         //@synthesize deviceTitleLabel=_deviceTitleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * pairedStatusLabel;                        //@synthesize pairedStatusLabel=_pairedStatusLabel - In the implementation block
@property (nonatomic,readonly) UILabel * deviceMaterialLabel;                      //@synthesize deviceMaterialLabel=_deviceMaterialLabel - In the implementation block
@property (nonatomic,readonly) UILabel * deviceLastBackupDetailLabel;              //@synthesize deviceLastBackupDetailLabel=_deviceLastBackupDetailLabel - In the implementation block
@property (nonatomic,readonly) UILabel * deviceCaseSizeLabel;                      //@synthesize deviceCaseSizeLabel=_deviceCaseSizeLabel - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                      //@synthesize dateFormatter=_dateFormatter - In the implementation block
-(void)setRestoreDetailsFromBackup:(id)arg1 ;
-(void)setRestoreDetailsFromDevice:(id)arg1 ;
-(UILabel *)deviceTitleLabel;
-(UILabel *)pairedStatusLabel;
-(UILabel *)deviceMaterialLabel;
-(UILabel *)deviceLastBackupDetailLabel;
-(UILabel *)deviceCaseSizeLabel;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(UIImageView *)background;
-(NSDateFormatter *)dateFormatter;
-(COSWatchView *)watchView;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
@end

