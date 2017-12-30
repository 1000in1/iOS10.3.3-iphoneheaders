/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBTransaction.h>
#import <SpringBoard/SBAlertManagerObserver.h>

@protocol SBAlertChangeTransactionDelegate;
@class SBAlertManager, SBAlert, NSString;

@interface SBAlertChangeTransaction : SBTransaction <SBAlertManagerObserver> {

	SBAlertManager* _alertManager;
	SBAlert* _toAlert;
	SBAlert* _fromAlert;
	id<SBAlertChangeTransactionDelegate> _delegate;
	char _deactivateAll;
	char _suppressingActivationOcclusion;
	SBAlert* _alert;

}

@property (nonatomic,readonly) SBAlert * toAlert;                                               //@synthesize alert=_alert - In the implementation block
@property (nonatomic,readonly) SBAlert * fromAlert;                                             //@synthesize fromAlert=_fromAlert - In the implementation block
@property (nonatomic,readonly) SBAlertManager * alertManager;                                   //@synthesize alertManager=_alertManager - In the implementation block
@property (assign,nonatomic,__weak) id<SBAlertChangeTransactionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBAlertManager *)alertManager;
-(void)alertManager:(id)arg1 willActivateAlert:(id)arg2 overAlerts:(id)arg3 ;
-(void)alertManager:(id)arg1 didActivateAlert:(id)arg2 overAlerts:(id)arg3 ;
-(void)alertManager:(id)arg1 willDeactivateAlert:(id)arg2 top:(char)arg3 ;
-(void)alertManager:(id)arg1 didDeactivateAlert:(id)arg2 top:(char)arg3 ;
-(id)initWithAlertManager:(id)arg1 toAlert:(id)arg2 ;
-(id)initWithAlertManager:(id)arg1 toAlert:(id)arg2 fromAlert:(id)arg3 ;
-(id)_initWithAlertManager:(id)arg1 ;
-(void)_addDeactivationMilestones;
-(void)_addActivationMilestones;
-(void)_updateForegroundScenesUnderLock:(char)arg1 ;
-(id)initWithAlertManager:(id)arg1 fromAlert:(id)arg2 deactivateAll:(char)arg3 ;
-(SBAlert *)toAlert;
-(SBAlert *)fromAlert;
-(void)setDelegate:(id<SBAlertChangeTransactionDelegate>)arg1 ;
-(void)dealloc;
-(id<SBAlertChangeTransactionDelegate>)delegate;
-(void)_didComplete;
-(char)_canBeInterrupted;
-(void)_begin;
@end

