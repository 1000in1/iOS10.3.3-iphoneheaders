/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <UIKit/UIView.h>

@class ACSportsLoadingImageView, UILabel;

@interface ACSportsMatchupScheduleTeamView : UIView {

	ACSportsLoadingImageView* _logoView;
	UILabel* _nameLabel;
	UILabel* _recordLabel;
	char _isMultiLine;

}

@property (assign,nonatomic) char isMultiLine;              //@synthesize isMultiLine=_isMultiLine - In the implementation block
-(void)setTeam:(id)arg1 teamRecordDescription:(id)arg2 ;
-(void)setIsMultiLine:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(char)isMultiLine;
@end

