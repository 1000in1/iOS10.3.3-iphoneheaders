/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSKeyedUnarchiver.h>

@protocol MPAssetKeyDelegate;
@class NSDictionary, MPDocument;

@interface MPDocumentKeyedUnarchiver : NSKeyedUnarchiver {

	id<MPAssetKeyDelegate> _assetKeyDelegate;
	NSDictionary* _mediaProperties;
	MPDocument* _parentDocument;

}

@property (assign,nonatomic) id<MPAssetKeyDelegate> assetKeyDelegate;              //@synthesize assetKeyDelegate=_assetKeyDelegate - In the implementation block
@property (assign,nonatomic) NSDictionary * mediaProperties;                       //@synthesize mediaProperties=_mediaProperties - In the implementation block
@property (assign,nonatomic) MPDocument * parentDocument;                          //@synthesize parentDocument=_parentDocument - In the implementation block
-(void)setMediaProperties:(NSDictionary *)arg1 ;
-(void)setParentDocument:(MPDocument *)arg1 ;
-(NSDictionary *)mediaProperties;
-(id<MPAssetKeyDelegate>)assetKeyDelegate;
-(void)setAssetKeyDelegate:(id<MPAssetKeyDelegate>)arg1 ;
-(MPDocument *)parentDocument;
@end
