/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:12 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/XPCServices/com.apple.MobileInstallationHelperService.xpc/com.apple.MobileInstallationHelperService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MCMContainer, NSURL;

@interface MIContainer : NSObject {

	MCMContainer* _container;
	unsigned _status;

}

@property (nonatomic,readonly) MCMContainer * container;                  //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) NSURL * containerURL; 
@property (nonatomic,readonly) int contentClass; 
@property (nonatomic,readonly) unsigned status;                           //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) unsigned long long diskUsage; 
+(id)containerWithIdentifier:(id)arg1 ofContentClass:(int)arg2 createIfNeeded:(char)arg3 created:(char*)arg4 error:(id*)arg5 ;
+(id)tempContainerWithIdentifier:(id)arg1 ofContentClass:(int)arg2 error:(id*)arg3 ;
+(id)_bundleContainerForIdentifier:(id)arg1 error:(id*)arg2 ;
+(id)_groupContainerIdentifiersForBundleId:(id)arg1 ;
+(id)allContainersForIdentifier:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
+(id)containersWithClass:(int)arg1 error:(id*)arg2 ;
-(int)contentClass;
-(char)makeContainerLiveWithError:(id*)arg1 ;
-(char)makeContainerLiveReplacingContainer:(id)arg1 reason:(unsigned)arg2 withError:(id*)arg3 ;
-(char)purgeContentWithError:(id*)arg1 ;
-(char)captureStoreDataFromDirectory:(id)arg1 doCopy:(char)arg2 failureIsFatal:(char)arg3 withError:(id*)arg4 ;
-(unsigned long long)diskUsage;
-(NSURL *)containerURL;
-(id)description;
-(MCMContainer *)container;
-(unsigned)status;
-(id)initWithContainer:(id)arg1 ;
@end

