/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:40 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCObjectBase.h>

@class MCMontage, NSString;

@interface MCObject : MCObjectBase {

	MCMontage* mMontage;
	NSString* mObjectID;

}

@property (nonatomic,readonly) NSString * objectID; 
@property (nonatomic,readonly) MCMontage * montage; 
+(id)objectWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)demolish;
-(MCMontage *)montage;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(id)initFromScratchWithMontage:(id)arg1 ;
-(id)_initWithObjectID:(id)arg1 ;
-(id)initSnapshot;
-(void)dealloc;
-(id)snapshot;
-(NSString *)objectID;
-(id)imprint;
-(char)isSnapshot;
@end

