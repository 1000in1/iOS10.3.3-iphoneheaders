/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:34:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/WatchKit.framework/Support/companionappd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SPUtils : NSObject
+(id)serializeObject:(id)arg1 ;
+(char)isRTL;
+(id)localizedStringForSystemLanguage:(id)arg1 fromBundlePath:(id)arg2 ;
+(void)dispatchAsyncToMainThread:(/*^block*/id)arg1 ;
+(id)deserializeObject:(id)arg1 ;
+(char)isApplicationCompanionConnectionClientIdentifier:(id)arg1 ;
+(void)dispatchSyncToMainThread:(/*^block*/id)arg1 ;
+(char)subclassForObject:(id)arg1 overridesSelector:(SEL)arg2 fromSuperclass:(Class)arg3 ;
+(id)uniqueNumber;
+(unsigned)userVolumeBlockSize;
+(unsigned long long)folderSizeAtPath:(id)arg1 volumeBlockSize:(unsigned)arg2 ;
+(char)appExtensionFirstUnlock;
+(char)isRunningInF5DemoMode;
+(char)isRunningInF201DemoMode;
+(char)isRunningInAnyDemoMode;
+(id)SPURLQueryAllowedCharacterSet;
+(id)companionConnectionClientIdentifier:(char)arg1 isNotification:(char)arg2 ;
+(char)isNotificationCompanionConnectionClientIdentifier:(id)arg1 ;
+(id)UIColorFromString:(id)arg1 ;
+(id)machTime;
@end

