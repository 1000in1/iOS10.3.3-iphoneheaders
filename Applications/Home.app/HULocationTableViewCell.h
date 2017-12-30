/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView, NSArray, NSString;

@interface HULocationTableViewCell : UITableViewCell {

	UILabel* _titleLabel;
	UIImageView* _locationIcon;
	NSArray* _horizontalConstraints;

}

@property (nonatomic,retain) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * locationIcon;                   //@synthesize locationIcon=_locationIcon - In the implementation block
@property (nonatomic,retain) NSArray * horizontalConstraints;              //@synthesize horizontalConstraints=_horizontalConstraints - In the implementation block
@property (nonatomic,retain) NSString * titleText; 
@property (assign,nonatomic) char showLocationIcon; 
-(void)setShowLocationIcon:(char)arg1 ;
-(UIImageView *)locationIcon;
-(void)setLocationIcon:(UIImageView *)arg1 ;
-(char)showLocationIcon;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateConstraints;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(void)setTitleText:(NSString *)arg1 ;
-(NSArray *)horizontalConstraints;
-(void)setHorizontalConstraints:(NSArray *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSString *)titleText;
@end

