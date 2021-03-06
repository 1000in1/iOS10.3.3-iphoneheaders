/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:30 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <cloudphotod/cloudphotod-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CPLCloudKitFeatureVersionHistory : PBCodable <NSCopying> {

	NSMutableArray* _featureVersions;

}

@property (nonatomic,retain) NSMutableArray * featureVersions;              //@synthesize featureVersions=_featureVersions - In the implementation block
-(void)addFeatureVersion:(id)arg1 ;
-(unsigned)featureVersionsCount;
-(void)clearFeatureVersions;
-(id)featureVersionAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)featureVersions;
-(void)setFeatureVersions:(NSMutableArray *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
@end

