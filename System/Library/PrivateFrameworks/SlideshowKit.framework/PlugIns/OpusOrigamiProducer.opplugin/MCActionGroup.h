/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCAction.h>

@class NSMutableArray, NSArray;

@interface MCActionGroup : MCAction {

	NSMutableArray* _actions;

}

@property (nonatomic,readonly) NSArray * actions;                    //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) unsigned countOfActions; 
+(id)actionGroup;
-(void)demolish;
-(id)actionAtIndex:(unsigned)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(void)moveActionsAtIndices:(id)arg1 toIndex:(unsigned)arg2 ;
-(unsigned)countOfActions;
-(void)insertActions:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeActionsAtIndices:(id)arg1 ;
-(void)insertAction:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)init;
-(id)description;
-(NSArray *)actions;
-(void)addAction:(id)arg1 ;
-(void)removeAllActions;
-(void)addActions:(id)arg1 ;
-(id)imprint;
@end
