/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSString, CUIRenditionKey;

@interface CUIRenditionLayerReference : NSObject {

	CGRect _frame;
	NSString* _layerName;
	float _opacity;
	int _blendMode;
	char _fixedFrame;
	char _makeOpaqueIfPossible;
	CUIRenditionKey* _referenceKey;

}

@property (assign,nonatomic) CGRect frame;                                //@synthesize frame=_frame - In the implementation block
@property (nonatomic,copy) NSString * layerName;                          //@synthesize layerName=_layerName - In the implementation block
@property (assign,nonatomic) float opacity;                               //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) int blendMode;                               //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) char fixedFrame;                             //@synthesize fixedFrame=_fixedFrame - In the implementation block
@property (assign,nonatomic) char makeOpaqueIfPossible;                   //@synthesize makeOpaqueIfPossible=_makeOpaqueIfPossible - In the implementation block
@property (nonatomic,retain) CUIRenditionKey * referenceKey;              //@synthesize referenceKey=_referenceKey - In the implementation block
-(NSString *)layerName;
-(void)setLayerName:(NSString *)arg1 ;
-(char)makeOpaqueIfPossible;
-(void)setMakeOpaqueIfPossible:(char)arg1 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGRect)frame;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(int)blendMode;
-(char)fixedFrame;
-(void)setFixedFrame:(char)arg1 ;
-(void)setBlendMode:(int)arg1 ;
-(void)setReferenceKey:(CUIRenditionKey *)arg1 ;
-(CUIRenditionKey *)referenceKey;
@end

