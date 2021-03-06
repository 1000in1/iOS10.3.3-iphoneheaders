/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:40 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class MCAssetVideo, NSString;

@interface MCSlideAsset : NSObject {

	MCAssetVideo* _asset;
	NSString* _kenBurnsType;
	CGPoint center;
	float scale;
	float rotation;

}

@property (retain) MCAssetVideo * asset;               //@synthesize asset=_asset - In the implementation block
@property (copy) NSString * kenBurnsType;              //@synthesize kenBurnsType=_kenBurnsType - In the implementation block
-(NSString *)kenBurnsType;
-(void)setKenBurnsType:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(MCAssetVideo *)asset;
-(void)setAsset:(MCAssetVideo *)arg1 ;
@end

