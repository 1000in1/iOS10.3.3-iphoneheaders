/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UIView, UILabel;

@interface CHFriendsTableViewCell : UITableViewCell {

	UIView* _badgeView;
	UILabel* _badgeValue;

}
+(float)preferredHeight;
-(void)setBadgeValue:(unsigned)arg1 hiddenFriends:(unsigned)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)_setupCell;
@end

