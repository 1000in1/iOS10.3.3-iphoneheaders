/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccountSettings/ACUIViewControllerAccountChangeObserver.h>

@class ACAccountStore, PSViewController, NSString;

@interface AAUINavigationFlowController : NSObject <ACUIViewControllerAccountChangeObserver> {

	ACAccountStore* _accountStore;
	PSViewController* _activeViewController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_pushViewController:(id)arg1 replacingOldViewController:(id)arg2 ;
-(void)_popViewController:(id)arg1 replaceWithNewViewController:(id)arg2 ;
-(void)_updateParentSpecifier:(id)arg1 toPointToViewController:(id)arg2 ;
-(id)init;
-(void)viewController:(id)arg1 didFinishRemovingAccountWithSuccess:(char)arg2 ;
-(void)viewController:(id)arg1 didFinishSavingAccountWithSuccess:(char)arg2 ;
@end

