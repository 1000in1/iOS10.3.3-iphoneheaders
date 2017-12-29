/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsEntityView.h>

@class ACSportsLoadingImageView, UILabel, SiriUIKeyline, SASportsTeam;

@interface ACSportsTeamHeaderView : ACSportsEntityView {

	ACSportsLoadingImageView* _teamLogoImageView;
	UILabel* _headerLabel;
	UILabel* _subtitleLabel;
	SiriUIKeyline* _headerKeyline;
	UILabel* _numberHeader;
	UILabel* _playerHeader;
	UILabel* _positionHeader;
	UILabel* _heightHeader;
	UILabel* _weightHeader;
	char _hidePlayerImages;

}

@property (nonatomic,retain) SASportsTeam * entity; 
@property (assign,nonatomic) char hidePlayerImages;              //@synthesize hidePlayerImages=_hidePlayerImages - In the implementation block
-(id)_addedLabelWithFrame:(CGRect)arg1 ;
-(char)supportsDisplayOfDomainObject:(id)arg1 league:(id)arg2 ;
-(void)setHidePlayerImages:(char)arg1 ;
-(void)didChangeEntityFromEntity:(id)arg1 ;
-(float)_legendHeight;
-(char)hidePlayerImages;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(float)contentHeight;
@end
