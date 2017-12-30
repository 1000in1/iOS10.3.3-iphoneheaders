/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayerHost.h>

@interface FigBaseCALayerHost : CALayerHost {

	char _preventsChangesToSublayerHierarchy;

}

@property (assign,nonatomic) char preventsChangesToSublayerHierarchy;              //@synthesize preventsChangesToSublayerHierarchy=_preventsChangesToSublayerHierarchy - In the implementation block
+(id)defaultActionForKey:(id)arg1 ;
-(id)init;
-(void)addSublayer:(id)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)removeFromSuperlayer;
-(void)setSublayers:(id)arg1 ;
-(void)insertSublayer:(id)arg1 above:(id)arg2 ;
-(void)insertSublayer:(id)arg1 below:(id)arg2 ;
-(void)insertSublayer:(id)arg1 atIndex:(unsigned)arg2 ;
-(char)preventsChangesToSublayerHierarchy;
-(void)setPreventsChangesToSublayerHierarchy:(char)arg1 ;
-(void)replaceSublayer:(id)arg1 with:(id)arg2 ;
@end

