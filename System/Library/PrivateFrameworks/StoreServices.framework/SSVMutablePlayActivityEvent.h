/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSVPlayActivityEvent.h>

@class NSString, SSVPlayActivityEventContainerIDs, NSDate, NSTimeZone, SSVPlayActivityEventItemIDs, NSData;

@interface SSVMutablePlayActivityEvent : SSVPlayActivityEvent

@property (assign,nonatomic) long long persistentID; 
@property (assign,nonatomic) int version; 
@property (nonatomic,copy) NSString * buildVersion; 
@property (nonatomic,copy) SSVPlayActivityEventContainerIDs * containerIDs; 
@property (assign,nonatomic) unsigned containerType; 
@property (nonatomic,copy) NSString * deviceName; 
@property (assign,nonatomic) unsigned endReasonType; 
@property (nonatomic,copy) NSDate * eventDate; 
@property (nonatomic,copy) NSTimeZone * eventTimeZone; 
@property (assign,nonatomic) unsigned eventType; 
@property (nonatomic,copy) NSString * featureName; 
@property (assign,getter=isInternalBuild,nonatomic) char internalBuild; 
@property (nonatomic,copy) SSVPlayActivityEventItemIDs * itemIDs; 
@property (assign,nonatomic) double itemDuration; 
@property (assign,nonatomic) double itemEndTime; 
@property (assign,nonatomic) double itemStartTime; 
@property (assign,nonatomic) unsigned itemType; 
@property (assign,nonatomic) unsigned mediaType; 
@property (assign,getter=isOffline,nonatomic) char offline; 
@property (assign,nonatomic) unsigned reasonHintType; 
@property (nonatomic,copy) NSData * recommendationData; 
@property (nonatomic,copy) NSString * requestingBundleIdentifier; 
@property (nonatomic,copy) NSString * requestingBundleVersion; 
@property (assign,getter=isSBEnabled,nonatomic) char SBEnabled; 
@property (assign,nonatomic) unsigned sourceType; 
@property (assign,nonatomic) unsigned long long storeAccountID; 
@property (nonatomic,copy) NSString * storeFrontID; 
@property (nonatomic,copy) NSData * timedMetadata; 
@property (nonatomic,copy) NSData * trackInfo; 
@property (nonatomic,copy) NSString * containerID; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSString * personalizedContainerID; 
@property (nonatomic,copy) NSString * storeID; 
-(void)setStoreAccountID:(unsigned long long)arg1 ;
-(Class)_mutableCopyClass;
-(void)setFeatureName:(NSString *)arg1 ;
-(void)setItemDuration:(double)arg1 ;
-(void)setItemEndTime:(double)arg1 ;
-(void)setItemStartTime:(double)arg1 ;
-(void)setOffline:(char)arg1 ;
-(void)setPersistentID:(long long)arg1 ;
-(void)setSBEnabled:(char)arg1 ;
-(void)setTimedMetadata:(NSData *)arg1 ;
-(void)setTrackInfo:(NSData *)arg1 ;
-(void)setInternalBuild:(char)arg1 ;
-(void)setPersonalizedContainerID:(NSString *)arg1 ;
-(void)setReasonHintType:(unsigned)arg1 ;
-(void)setEventTimeZone:(NSTimeZone *)arg1 ;
-(void)setItemIDs:(SSVPlayActivityEventItemIDs *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSourceType:(unsigned)arg1 ;
-(void)setVersion:(int)arg1 ;
-(void)setEventDate:(NSDate *)arg1 ;
-(void)setEventType:(unsigned)arg1 ;
-(void)setRequestingBundleIdentifier:(NSString *)arg1 ;
-(void)setRequestingBundleVersion:(NSString *)arg1 ;
-(void)setEndReasonType:(unsigned)arg1 ;
-(void)setExternalID:(NSString *)arg1 ;
-(void)setStoreID:(NSString *)arg1 ;
-(void)setItemType:(unsigned)arg1 ;
-(void)setMediaType:(unsigned)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setContainerID:(NSString *)arg1 ;
-(void)setContainerType:(unsigned)arg1 ;
-(void)setRecommendationData:(NSData *)arg1 ;
-(void)setContainerIDs:(SSVPlayActivityEventContainerIDs *)arg1 ;
-(void)setBuildVersion:(NSString *)arg1 ;
-(void)setStoreFrontID:(NSString *)arg1 ;
@end
