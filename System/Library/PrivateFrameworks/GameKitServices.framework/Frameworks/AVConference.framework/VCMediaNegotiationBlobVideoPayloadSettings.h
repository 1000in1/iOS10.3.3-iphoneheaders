/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:51 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface VCMediaNegotiationBlobVideoPayloadSettings : PBCodable <NSCopying> {

	NSString* _featureString;
	unsigned _parameterSet;
	unsigned _payload;
	NSMutableArray* _videoRuleCollections;

}

@property (assign,nonatomic) unsigned payload;                                   //@synthesize payload=_payload - In the implementation block
@property (nonatomic,retain) NSMutableArray * videoRuleCollections;              //@synthesize videoRuleCollections=_videoRuleCollections - In the implementation block
@property (nonatomic,retain) NSString * featureString;                           //@synthesize featureString=_featureString - In the implementation block
@property (assign,nonatomic) unsigned parameterSet;                              //@synthesize parameterSet=_parameterSet - In the implementation block
+(Class)videoRuleCollectionsType;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)payload;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setPayload:(unsigned)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)videoRuleCollections;
-(void)setVideoRuleCollections:(NSMutableArray *)arg1 ;
-(void)setFeatureString:(NSString *)arg1 ;
-(void)addVideoRuleCollections:(id)arg1 ;
-(unsigned)videoRuleCollectionsCount;
-(void)clearVideoRuleCollections;
-(id)videoRuleCollectionsAtIndex:(unsigned)arg1 ;
-(NSString *)featureString;
-(unsigned)parameterSet;
-(void)setParameterSet:(unsigned)arg1 ;
@end

