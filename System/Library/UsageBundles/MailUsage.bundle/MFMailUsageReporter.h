/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/UsageBundles/MailUsage.bundle/MailUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUsage/PSStorageReporting.h>

@class NSArray, NSDictionary, NSString;

@interface MFMailUsageReporter : NSObject <PSStorageReporting> {

	NSArray* _bundleApps;
	NSDictionary* _categorySizes;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_totalFileSizeAtPath:(id)arg1 ;
-(id)_bundleApps;
-(id)_categorySizes;
-(Class)usageDetailControllerClassForUsageBundleApp:(id)arg1 ;
-(void)dealloc;
-(id)usageBundleApps;
-(float)sizeForCategory:(id)arg1 ;
-(char)allowDeletionForCategory:(id)arg1 ;
@end
