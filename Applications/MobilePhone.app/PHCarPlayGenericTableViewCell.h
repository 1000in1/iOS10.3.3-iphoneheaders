/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView;

@interface PHCarPlayGenericTableViewCell : UITableViewCell {

	char _showsChevron;
	char _hidesChevronWhenUnhighlighted;
	UIImageView* _chevronImageView;

}

@property (retain) UIImageView * chevronImageView;                            //@synthesize chevronImageView=_chevronImageView - In the implementation block
@property (assign,nonatomic) char showsChevron;                               //@synthesize showsChevron=_showsChevron - In the implementation block
@property (assign,nonatomic) char hidesChevronWhenUnhighlighted;              //@synthesize hidesChevronWhenUnhighlighted=_hidesChevronWhenUnhighlighted - In the implementation block
-(void)setShowsChevron:(char)arg1 ;
-(char)showsChevron;
-(void)setHidesChevronWhenUnhighlighted:(char)arg1 ;
-(char)hidesChevronWhenUnhighlighted;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setChevronImageView:(UIImageView *)arg1 ;
-(UIImageView *)chevronImageView;
@end

