/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/CAMetalDrawable.h>
@class CAMetalLayer;


@protocol CAMetalDrawable <MTLDrawable>
@property (readonly) id<MTLTexture> texture; 
@property (readonly) CAMetalLayer * layer; 
@required
-(CAMetalLayer *)layer;
-(id<MTLTexture>)texture;

@end

#import <libobjc.A.dylib/MTLDrawableSPI.h>

@protocol MTLTexture;
@class CAMetalLayer, NSMutableArray, NSString;

@interface CAMetalDrawable : NSObject <CAMetalDrawable, MTLDrawableSPI> {

	CAMetalDrawablePrivate* _priv;
	id<MTLTexture> _cachedTexture;
	CAMetalLayer* _layer;
	unsigned _insertSeed;
	NSMutableArray* _presentedHandlers;
	unsigned _status;
	double _presentedTime;
	unsigned _drawableID;

}

@property (assign,nonatomic) unsigned insertSeed;                   //@synthesize insertSeed=_insertSeed - In the implementation block
@property (assign,nonatomic) unsigned status;                       //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) double presentedTime;                  //@synthesize presentedTime=_presentedTime - In the implementation block
@property (assign,nonatomic) unsigned drawableID;                   //@synthesize drawableID=_drawableID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLTexture> texture; 
@property (readonly) CAMetalLayer * layer; 
-(void)didPresentAtTime:(double)arg1 ;
-(void)presentAfterMinimumDuration:(double)arg1 ;
-(void)presentAtTime:(double)arg1 ;
-(void)addPresentedHandler:(/*^block*/id)arg1 ;
-(double)presentedTime;
-(unsigned)drawableID;
-(char)hasPresentedHandlers;
-(id)initWithDrawablePrivate:(CAMetalDrawablePrivate*)arg1 layer:(id)arg2 ;
-(void)releasePrivateReferences:(CAMetalLayerPrivate*)arg1 ;
-(CAMetalDrawablePrivate*)priv;
-(unsigned)insertSeed;
-(void)setInsertSeed:(unsigned)arg1 ;
-(void)setDrawableID:(unsigned)arg1 ;
-(void)setPresentedTime:(double)arg1 ;
-(CAMetalLayer *)layer;
-(void)dealloc;
-(void)present;
-(unsigned)status;
-(void)setStatus:(unsigned)arg1 ;
-(id<MTLTexture>)texture;
@end
