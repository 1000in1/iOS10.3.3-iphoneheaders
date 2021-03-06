/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView, UIButton, UIView;

@interface NoFriendsSplashView : UIView {

	UIImageView* _friendImageView;
	UIButton* _friendSuggestionsButton;
	UIView* _contentView;

}

@property (nonatomic,retain) UIImageView * friendImageView;                   //@synthesize friendImageView=_friendImageView - In the implementation block
@property (nonatomic,retain) UIButton * friendSuggestionsButton;              //@synthesize friendSuggestionsButton=_friendSuggestionsButton - In the implementation block
@property (nonatomic,retain) UIView * contentView;                            //@synthesize contentView=_contentView - In the implementation block
-(UIButton *)friendSuggestionsButton;
-(void)friendSuggestionsTapped:(id)arg1 ;
-(UIImageView *)friendImageView;
-(void)setFriendImageView:(UIImageView *)arg1 ;
-(void)setFriendSuggestionsButton:(UIButton *)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)contentView;
-(void)reload;
-(void)awakeFromNib;
@end

