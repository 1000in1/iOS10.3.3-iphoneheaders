/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SSAccountStore;


@protocol ADAdEnablingTester <NSObject>
@property (nonatomic,retain) SSAccountStore * accountStore; 
@required
-(char)isAdsEnabledForStorefront;
-(void)setAccountStore:(id)arg1;
-(SSAccountStore *)accountStore;
-(char)isManagedAppleID;

@end

