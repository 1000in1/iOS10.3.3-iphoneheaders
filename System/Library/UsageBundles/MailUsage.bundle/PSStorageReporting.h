/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/UsageBundles/MailUsage.bundle/MailUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSStorageReporting <NSObject>
@optional
-(void)usageBundleApp:(id)arg1 willDisplaySpecifier:(id*)arg2;
-(Class)usageDetailControllerClassForUsageBundleApp:(id)arg1;
-(float)sizeForCategory:(id)arg1;
-(char)deleteDataForCategory:(id)arg1 withError:(id*)arg2;

@required
-(id)usageBundleApps;
-(char)allowDeletionForCategory:(id)arg1;

@end

