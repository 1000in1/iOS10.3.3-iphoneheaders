/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:40 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class MRTextRenderer, MRMarimbaLayer, MPText;

@interface MRMarimbaLayoutManager : NSObject {

	MRTextRenderer* _textRenderer;
	MRMarimbaLayer* _marimbaLayer;
	MPText* _text;

}

@property (nonatomic,retain) MRMarimbaLayer * marimbaLayer;              //@synthesize marimbaLayer=_marimbaLayer - In the implementation block
@property (nonatomic,retain) MPText * text;                              //@synthesize text=_text - In the implementation block
-(MRMarimbaLayer *)marimbaLayer;
-(id)textRenderer;
-(void)setMarimbaLayer:(MRMarimbaLayer *)arg1 ;
-(CGRect)currentRectForEditedText;
-(id)init;
-(void)dealloc;
-(MPText *)text;
-(void)setText:(MPText *)arg1 ;
-(CGPoint)shadowOffset;
-(int)lineCount;
-(id)_renderer;
-(void)updateWithString:(id)arg1 ;
@end

