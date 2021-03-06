/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UILabel, SCATModernMenuItem, NSString;

@interface SCATModernMenuItemSupplementaryView : UICollectionReusableView {

	UILabel* _titleLabel;
	SCATModernMenuItem* _menuItem;

}

@property (nonatomic,retain) UILabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) SCATModernMenuItem * menuItem;              //@synthesize menuItem=_menuItem - In the implementation block
@property (nonatomic,retain) NSString * titleText; 
-(void)setMenuItem:(SCATModernMenuItem *)arg1 ;
-(void)didUpdateScatMenuItemStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSString *)titleText;
-(SCATModernMenuItem *)menuItem;
-(void)_updateTextAttributes;
@end

