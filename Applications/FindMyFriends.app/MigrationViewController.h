/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyFriends/FMFViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol MigrationPresenter;
@class NSString, UILabel, UIActivityIndicatorView, UIButton, NSLayoutConstraint, NSTimer;

@interface MigrationViewController : FMFViewController <UITextFieldDelegate> {

	NSString* _email;
	id<MigrationPresenter> _migrationPresenter;
	UILabel* _titleLabel;
	UILabel* _signIniCloudTitleLabel;
	UILabel* _signedIniCloudEmailLabel;
	UIActivityIndicatorView* _activityIndicator;
	UIButton* _moveButton;
	UIButton* _notNowButton;
	UILabel* _moveBodyLabel;
	NSLayoutConstraint* _containerVerticalCenteringConstraint;
	NSLayoutConstraint* _containerBottomConstraint;
	NSString* _inProgressMigrationId;
	NSString* _currentICloudId;
	NSTimer* _dismissMigrationTimer;
	double _migrationStartTime;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * signIniCloudTitleLabel;                                       //@synthesize signIniCloudTitleLabel=_signIniCloudTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * signedIniCloudEmailLabel;                                     //@synthesize signedIniCloudEmailLabel=_signedIniCloudEmailLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                            //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) UIButton * moveButton;                                                  //@synthesize moveButton=_moveButton - In the implementation block
@property (nonatomic,retain) UIButton * notNowButton;                                                //@synthesize notNowButton=_notNowButton - In the implementation block
@property (nonatomic,retain) UILabel * moveBodyLabel;                                                //@synthesize moveBodyLabel=_moveBodyLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * containerVerticalCenteringConstraint;              //@synthesize containerVerticalCenteringConstraint=_containerVerticalCenteringConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * containerBottomConstraint;                         //@synthesize containerBottomConstraint=_containerBottomConstraint - In the implementation block
@property (nonatomic,retain) NSString * inProgressMigrationId;                                       //@synthesize inProgressMigrationId=_inProgressMigrationId - In the implementation block
@property (nonatomic,retain) NSString * currentICloudId;                                             //@synthesize currentICloudId=_currentICloudId - In the implementation block
@property (assign,nonatomic) double migrationStartTime;                                              //@synthesize migrationStartTime=_migrationStartTime - In the implementation block
@property (nonatomic,retain) NSTimer * dismissMigrationTimer;                                        //@synthesize dismissMigrationTimer=_dismissMigrationTimer - In the implementation block
@property (nonatomic,retain) NSString * email;                                                       //@synthesize email=_email - In the implementation block
@property (assign,nonatomic,__weak) id<MigrationPresenter> migrationPresenter;                       //@synthesize migrationPresenter=_migrationPresenter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCurrentICloudId:(NSString *)arg1 ;
-(void)updateUIForMigrating:(char)arg1 ;
-(NSLayoutConstraint *)containerVerticalCenteringConstraint;
-(NSLayoutConstraint *)containerBottomConstraint;
-(void)migrationStatusDidChange:(id)arg1 ;
-(id<MigrationPresenter>)migrationPresenter;
-(void)startMigrationForUser:(id)arg1 password:(id)arg2 ;
-(void)clearLegacyAccount;
-(char)validateFields:(id)arg1 ;
-(void)setInProgressMigrationId:(NSString *)arg1 ;
-(void)setMigrationStartTime:(double)arg1 ;
-(NSString *)inProgressMigrationId;
-(NSTimer *)dismissMigrationTimer;
-(void)setDismissMigrationTimer:(NSTimer *)arg1 ;
-(UILabel *)moveBodyLabel;
-(id)loggedInAs;
-(UILabel *)signIniCloudTitleLabel;
-(UILabel *)signedIniCloudEmailLabel;
-(UIButton *)moveButton;
-(NSString *)currentICloudId;
-(void)moveFriendsButtonTapped:(id)arg1 ;
-(void)setMigrationPresenter:(id<MigrationPresenter>)arg1 ;
-(void)setSignIniCloudTitleLabel:(UILabel *)arg1 ;
-(void)setSignedIniCloudEmailLabel:(UILabel *)arg1 ;
-(void)setMoveButton:(UIButton *)arg1 ;
-(void)setNotNowButton:(UIButton *)arg1 ;
-(void)setMoveBodyLabel:(UILabel *)arg1 ;
-(void)setContainerVerticalCenteringConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContainerBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(double)migrationStartTime;
-(void)didReceiveMemoryWarning;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(UILabel *)titleLabel;
-(void)viewDidLoad;
-(void)dismiss;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIButton *)notNowButton;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(void)notNowButtonTapped:(id)arg1 ;
@end

