/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/COSOptinViewController.h>

@class UIButton, UILabel;

@interface COSPasscodeChoiceViewController : COSOptinViewController {

	UIButton* _acceptButton;
	UIButton* _declineButton;
	UILabel* _footerLabel;

}

@property (nonatomic,retain) UIButton * acceptButton;               //@synthesize acceptButton=_acceptButton - In the implementation block
@property (nonatomic,retain) UIButton * declineButton;              //@synthesize declineButton=_declineButton - In the implementation block
@property (nonatomic,retain) UILabel * footerLabel;                 //@synthesize footerLabel=_footerLabel - In the implementation block
+(char)controllerNeedsToRun;
-(id)detailString;
-(void)selectedOptinChoice:(id)arg1 ;
-(id)suggestedButtonString;
-(id)alternateButtonString;
-(id)detailTitleString;
-(char)legacyButtonStyles;
-(id)moreOptionsButtonString;
-(void)selectedMoreOptions:(id)arg1 ;
-(id)init;
-(void)viewDidLoad;
-(id)titleString;
-(id)imageResource;
-(void)setFooterLabel:(UILabel *)arg1 ;
-(UILabel *)footerLabel;
-(UIButton *)declineButton;
-(void)setDeclineButton:(UIButton *)arg1 ;
-(UIButton *)acceptButton;
-(void)setAcceptButton:(UIButton *)arg1 ;
@end

