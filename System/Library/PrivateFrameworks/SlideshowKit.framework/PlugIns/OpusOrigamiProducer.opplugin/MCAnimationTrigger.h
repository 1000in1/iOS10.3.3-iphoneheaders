/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCAction.h>

@class NSMutableDictionary, NSString, NSDictionary;

@interface MCAnimationTrigger : MCAction {

	NSMutableDictionary* _animationAttributes;
	NSString* _animationKey;

}

@property (copy) NSString * animationKey;                                   //@synthesize animationKey=_animationKey - In the implementation block
@property (nonatomic,copy) NSDictionary * animationAttributes;              //@synthesize animationAttributes=_animationAttributes - In the implementation block
+(id)animationTriggerForTargetPlugObjectID:(id)arg1 withAnimationKey:(id)arg2 ;
-(void)demolish;
-(NSString *)animationKey;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(void)setAnimationKey:(NSString *)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(NSDictionary *)animationAttributes;
-(id)description;
-(void)setAnimationAttributes:(NSDictionary *)arg1 ;
-(id)imprint;
@end

