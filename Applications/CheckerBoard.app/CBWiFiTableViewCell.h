/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/CheckerBoard.app/CheckerBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, NSArray;

@interface CBWiFiTableViewCell : UITableViewCell {

	float _networkScaledRSSIStrength;
	UIImageView* _lockView;
	UIImageView* _rssiBarsView;
	NSArray* _rssiBarImages;

}

@property (nonatomic,retain) UIImageView * lockView;                       //@synthesize lockView=_lockView - In the implementation block
@property (nonatomic,retain) UIImageView * rssiBarsView;                   //@synthesize rssiBarsView=_rssiBarsView - In the implementation block
@property (nonatomic,retain) NSArray * rssiBarImages;                      //@synthesize rssiBarImages=_rssiBarImages - In the implementation block
@property (assign,nonatomic) float networkScaledRSSIStrength;              //@synthesize networkScaledRSSIStrength=_networkScaledRSSIStrength - In the implementation block
-(void)showPasswordLock:(char)arg1 ;
-(void)setNetworkScaledRSSIStrength:(float)arg1 ;
-(void)hideRSSIStrength:(char)arg1 ;
-(UIImageView *)rssiBarsView;
-(float)networkScaledRSSIStrength;
-(NSArray *)rssiBarImages;
-(UIImageView *)lockView;
-(void)setLockView:(UIImageView *)arg1 ;
-(void)setRssiBarsView:(UIImageView *)arg1 ;
-(void)setRssiBarImages:(NSArray *)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
@end

