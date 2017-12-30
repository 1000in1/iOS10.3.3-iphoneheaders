/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CacheDelete/CacheDelete-Structs.h>
#import <CacheDelete/CacheDeleteRecent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSNumber, NSMutableDictionary, NSObject;

@interface CacheDeleteRecentInfo : CacheDeleteRecent <NSSecureCoding, NSCopying> {

	NSNumber* _version;
	NSMutableDictionary* _volumes;
	NSObject*<OS_dispatch_queue> _collection_queue;

}

@property (nonatomic,retain) NSNumber * version;                                         //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * volumes;                              //@synthesize volumes=_volumes - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> collection_queue;              //@synthesize collection_queue=_collection_queue - In the implementation block
+(char)supportsSecureCoding;
+(id)cacheDeleteRecentInfo:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)log;
-(void)setVersion:(NSNumber *)arg1 ;
-(NSNumber *)version;
-(NSObject*<OS_dispatch_queue>)collection_queue;
-(void)removeServiceInfo:(id)arg1 ;
-(void)setCollection_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithVolumes:(id)arg1 ;
-(NSMutableDictionary *)volumes;
-(char)validateForVolume:(id)arg1 andService:(id)arg2 atUrgency:(int)arg3 ;
-(id)copyInvalidsForVolume:(id)arg1 atUrgency:(int)arg2 ;
-(id)recentInfoForVolume:(id)arg1 atUrgency:(int)arg2 ;
-(char)updateServiceInfoAmount:(id)arg1 forService:(id)arg2 onVolume:(id)arg3 atUrgency:(int)arg4 pushed:(char)arg5 ;
-(id)diagnosticsForService:(id)arg1 onVolume:(id)arg2 atUrgency:(int)arg3 ;
-(void)updateDiagnostics:(id)arg1 forService:(id)arg2 onVolume:(id)arg3 atUrgency:(int)arg4 ;
-(id)diagnosticsForVolume:(id)arg1 atUrgency:(int)arg2 ;
-(void)updateDiagnostics:(id)arg1 forVolume:(id)arg2 atUrgency:(int)arg3 ;
-(id)lookupAmountForService:(id)arg1 onVolume:(id)arg2 atUrgency:(int)arg3 ;
-(void)invalidateForVolume:(id)arg1 ;
-(void)setVolumes:(NSMutableDictionary *)arg1 ;
@end

