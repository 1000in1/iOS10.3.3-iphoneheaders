/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/HomeUIService.app/HomeUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <libobjc.A.dylib/HMHomeManagerDelegate.h>
#import <HomeUIService/HSUserListViewControllerDelegate.h>
#import <libobjc.A.dylib/HUAddUserViewControllerDelegate.h>
#import <libobjc.A.dylib/HMUserManagementRemoteService.h>

@class HMHomeManager, HMHome, NSUUID, NSString;

@interface HSUserManagementViewController : UINavigationController <HMHomeManagerDelegate, HSUserListViewControllerDelegate, HUAddUserViewControllerDelegate, HMUserManagementRemoteService> {

	char _didNotifyFinishLoading;
	HMHomeManager* _homeManager;
	HMHome* _home;
	NSUUID* _homeUUID;

}

@property (nonatomic,retain) HMHomeManager * homeManager;              //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) HMHome * home;                            //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSUUID * homeUUID;                        //@synthesize homeUUID=_homeUUID - In the implementation block
@property (assign,nonatomic) char didNotifyFinishLoading;              //@synthesize didNotifyFinishLoading=_didNotifyFinishLoading - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)_updateHome;
-(void)_notifyRemoteReadyToDisplayIfNeeded;
-(char)didNotifyFinishLoading;
-(void)setDidNotifyFinishLoading:(char)arg1 ;
-(id)initWithRootViewController:(id)arg1 ;
-(void)_updateViewControllers;
-(HMHomeManager *)homeManager;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(void)setHomeManager:(HMHomeManager *)arg1 ;
-(NSUUID *)homeUUID;
-(void)setHomeUUID:(NSUUID *)arg1 ;
-(void)controllerDidDismissWithError:(id)arg1 ;
-(void)controllerDidSendInvitations:(id)arg1 ;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
@end

