/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class BBBulletin, NSArray;

@interface SBBulletinModalAlert : SBAlertItem {

	BBBulletin* _bulletin;
	NSArray* _buttons;
	NSArray* _bulletinButtonIndices;
	char _playedSound;
	SBBulletinModalAlert* _superseded;
	NSArray* _actions;

}

@property (nonatomic,retain) NSArray * buttons;                            //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) NSArray * bulletinButtonIndices;              //@synthesize bulletinButtonIndices=_bulletinButtonIndices - In the implementation block
@property (nonatomic,retain) NSArray * actions;                            //@synthesize actions=_actions - In the implementation block
-(id)initWithBulletin:(id)arg1 supersededAlert:(id)arg2 ;
-(void)_handleActionGroup:(id)arg1 ;
-(void)setBulletinButtonIndices:(NSArray *)arg1 ;
-(void)_handleAction:(id)arg1 ;
-(id)_actionsFromBulletin;
-(id)_actionsWithOptions;
-(id)_defaultActions;
-(id)_dismissAction;
-(id)_defaultAction;
-(id)_defaultAppearance;
-(id)_dismissAppearance;
-(id)_snoozeAppearance;
-(id)_optionsAppearance;
-(void)_configureSheetWithBulletinButtons;
-(void)_configureSheetWithBulletinActions;
-(id)initWithBulletin:(id)arg1 ;
-(id)_snoozeAction;
-(NSArray *)bulletinButtonIndices;
-(void)setActions:(NSArray *)arg1 ;
-(void)dealloc;
-(NSArray *)actions;
-(NSArray *)buttons;
-(char)dismissOnLock;
-(void)deactivateForReason:(int)arg1 ;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(char)allowMenuButtonDismissal;
-(char)shouldShowInLockScreen;
-(void)didActivate;
-(void)willDeactivateForReason:(int)arg1 ;
-(char)_preventLockOver;
-(void)setButtons:(NSArray *)arg1 ;
-(void)willActivate;
@end

