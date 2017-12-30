/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AirTrafficSettings.bundle/AirTrafficSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewHeaderFooterView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UILabel, UIProgressView, NSString;

@interface SyncFooterView : UITableViewHeaderFooterView <PSHeaderFooterView> {

	UILabel* _notConnectedLabel;
	UILabel* _hostNameLabel;
	UILabel* _syncedAssetsLabel;
	UILabel* _timestampLabel;
	UILabel* _timestampLabel2;
	UILabel* _timestampLabel3;
	UILabel* _syncStatusLabel;
	UILabel* _assetInfoLabel;
	UIProgressView* _assetProgress;
	NSString* _hostIdentifier;
	char _showHostName;
	float _currentHeight;

}

@property (nonatomic,retain) NSString * hostIdentifier;              //@synthesize hostIdentifier=_hostIdentifier - In the implementation block
@property (assign,nonatomic) char showHostName;                      //@synthesize showHostName=_showHostName - In the implementation block
-(char)showHostName;
-(id)newLabel:(id)arg1 ;
-(id)newSingleLineLabel:(id)arg1 ;
-(void)configureLabelsForSyncState:(id)arg1 dataSource:(id)arg2 ;
-(void)configureLabelsForWakingState:(id)arg1 dataSource:(id)arg2 ;
-(void)configureLabelsForConnectedState:(id)arg1 dataSource:(id)arg2 ;
-(void)configureLabelsForDisconnectedState:(id)arg1 dataSource:(id)arg2 ;
-(void)configureTimestampLabels:(id)arg1 ;
-(void)setShowHostName:(char)arg1 ;
-(char)updateProgress:(id)arg1 dataSource:(id)arg2 ;
-(void)layoutSubviews;
-(id)initWithSpecifier:(id)arg1 ;
-(float)preferredHeightForWidth:(float)arg1 ;
-(NSString *)hostIdentifier;
-(void)setHostIdentifier:(NSString *)arg1 ;
@end

