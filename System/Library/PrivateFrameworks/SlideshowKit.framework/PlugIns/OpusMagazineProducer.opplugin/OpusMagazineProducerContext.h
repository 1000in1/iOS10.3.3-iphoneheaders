/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:37 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMagazineProducer.opplugin/OpusMagazineProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray;

@interface OpusMagazineProducerContext : NSObject {

	NSMutableDictionary* _producerResources;
	NSMutableArray* _synopsisGroups;
	NSMutableArray* _audioList;

}

@property (nonatomic,retain) NSMutableDictionary * producerResources;              //@synthesize producerResources=_producerResources - In the implementation block
@property (nonatomic,retain) NSMutableArray * synopsisGroups;                      //@synthesize synopsisGroups=_synopsisGroups - In the implementation block
@property (nonatomic,retain) NSMutableArray * audioList;                           //@synthesize audioList=_audioList - In the implementation block
-(void)setAudioList:(NSMutableArray *)arg1 ;
-(void)setProducerResources:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)synopsisGroups;
-(void)setSynopsisGroups:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)producerResources;
-(NSMutableArray *)audioList;
-(id)init;
-(void)dealloc;
@end

