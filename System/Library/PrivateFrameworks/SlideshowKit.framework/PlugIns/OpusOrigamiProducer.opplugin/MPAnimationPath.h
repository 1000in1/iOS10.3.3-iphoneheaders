/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:40 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MPAnimationSupport;
@class NSObject, MCAnimationPath;

@interface MPAnimationPath : NSObject <NSCoding, NSCopying> {

	char _isTriggered;
	NSObject*<MPAnimationSupport> _parentObject;
	MCAnimationPath* _animationPath;

}

@property (assign) char isTriggered; 
+(id)animationPath;
-(void)setIsTriggered:(char)arg1 ;
-(id)animationPath;
-(char)isTriggered;
-(void)setAnimationPath:(id)arg1 ;
-(id)animatedParent;
-(id)animatedKey;
-(id)init;
-(id)key;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)cleanup;
-(id)parent;
-(void)setParent:(id)arg1 ;
-(id)parentDocument;
@end
