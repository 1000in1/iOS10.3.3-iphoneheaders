/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileStore.app/MobileStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MSQuickActionController : NSObject
+(void)processShortcutItem:(id)arg1 applicationController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)sharedInstance;
+(void)updateShortcutItems;
-(void)processShortcutItem:(id)arg1 applicationController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_shortcutItems;
-(id)init;
-(void)dealloc;
-(void)_accountStoreDidChange:(id)arg1 ;
@end

