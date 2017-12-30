/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface MeTableViewCell : UITableViewCell {

	UILabel* _textLabelModified;
	UILabel* _detailTextLabelModified;

}

@property (nonatomic,retain) UILabel * textLabelModified;                    //@synthesize textLabelModified=_textLabelModified - In the implementation block
@property (nonatomic,retain) UILabel * detailTextLabelModified;              //@synthesize detailTextLabelModified=_detailTextLabelModified - In the implementation block
-(UILabel *)textLabelModified;
-(void)setTextLabelModified:(UILabel *)arg1 ;
-(UILabel *)detailTextLabelModified;
-(void)setDetailTextLabelModified:(UILabel *)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
@end

