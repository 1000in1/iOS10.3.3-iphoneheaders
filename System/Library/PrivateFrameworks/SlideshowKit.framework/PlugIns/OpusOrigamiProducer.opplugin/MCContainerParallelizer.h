/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MCContainer.h>

@class NSMutableDictionary, NSArray, NSSet;

@interface MCContainerParallelizer : MCContainer {

	NSMutableDictionary* mPlugs;
	NSArray* mCachedZOrderedPlugs;
	CGColorRef mBackgroundColor;

}

@property (readonly) NSSet * plugs; 
@property (nonatomic,readonly) unsigned countOfPlugs; 
@property (readonly) NSArray * zOrderedPlugs; 
@property (assign) CGColorRef backgroundColor; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)demolish;
-(void)removeAllPlugs;
-(id)setPlugProxyForPlug:(id)arg1 ;
-(NSSet *)plugs;
-(void)removePlug:(id)arg1 ;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)removePlugForID:(id)arg1 ;
-(void)setBackgroundColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
-(id)plugForID:(id)arg1 ;
-(void)changeIDOfPlug:(id)arg1 toID:(id)arg2 ;
-(NSArray *)zOrderedPlugs;
-(id)setPlugForContainer:(id)arg1 forID:(id)arg2 ;
-(unsigned)countOfPlugs;
-(id)init;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(CGColorRef)backgroundColor;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)imprint;
@end

