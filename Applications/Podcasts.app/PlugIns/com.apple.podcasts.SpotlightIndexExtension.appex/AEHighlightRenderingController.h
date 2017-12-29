/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <com.apple.podcasts.SpotlightIndexExtension/com.apple.podcasts.SpotlightIndexExtension-Structs.h>
@class AENoCopyDictionary;

@interface AEHighlightRenderingController : NSObject {

	AENoCopyDictionary* mDataHighlights;
	AENoCopyDictionary* mLineLayers;
	char addingHighlights;
	char _useSinglePassRender;
	char _canUseFilters;
	char invertedContent;
	char _addingHighlights;

}

@property (nonatomic,retain) AENoCopyDictionary * dataHighlights; 
@property (nonatomic,retain) AENoCopyDictionary * lineLayers; 
@property (assign,nonatomic) char useSinglePassRender;                                     //@synthesize useSinglePassRender=_useSinglePassRender - In the implementation block
@property (assign,nonatomic) char canUseFilters;                                           //@synthesize canUseFilters=_canUseFilters - In the implementation block
@property (assign,nonatomic) char invertedContent; 
@property (assign,getter=isAddingHighlights,nonatomic) char addingHighlights;              //@synthesize addingHighlights=_addingHighlights - In the implementation block
+(UIEdgeInsets)highlightInsets:(char)arg1 ;
+(UIEdgeInsets)insetsForHighlight:(id)arg1 ;
+(unsigned)p_variantForLine:(id)arg1 outOf:(unsigned)arg2 isVertical:(char)arg3 ;
+(lineTransformInfo)p_transformInfoForRect:(CGRect)arg1 direction:(int)arg2 ;
+(id)p_underlineFileForHighlightLine:(id)arg1 invertedContent:(char)arg2 isVertical:(char)arg3 ;
+(CGRect)p_currentLineRectForLine:(id)arg1 ofHighlight:(id)arg2 ;
+(CGRect)p_fullLineRectForLine:(id)arg1 ofHighlight:(id)arg2 ;
+(id)p_highlightMaskFileForHighlightLine:(id)arg1 width:(float)arg2 isVertical:(char)arg3 ;
+(id)p_striationFileForHighlightLine:(id)arg1 width:(float)arg2 isVertical:(char)arg3 ;
+(id)p_maskImageForLine:(id)arg1 ofHighlight:(id)arg2 withTransformInfo:(lineTransformInfo)arg3 ;
+(id)p_striationImageForLine:(id)arg1 ofHighlight:(id)arg2 baseMask:(id)arg3 withTransformInfo:(lineTransformInfo)arg4 ;
+(void)p_drawMaskImageForLine:(id)arg1 ofHighlight:(id)arg2 withTransformInfo:(lineTransformInfo)arg3 intoContext:(CGContextRef)arg4 ;
+(void)p_maskToStriationImageForLine:(id)arg1 ofHighlight:(id)arg2 withTransformInfo:(lineTransformInfo)arg3 intoContext:(CGContextRef)arg4 ;
+(id)imageForLine:(id)arg1 ofHighlight:(id)arg2 invertedContent:(char)arg3 isVertical:(char)arg4 ;
+(id)imageForLine:(id)arg1 ofHighlight:(id)arg2 invertedContent:(char)arg3 isVertical:(char)arg4 useSinglePass:(char)arg5 ;
+(id)p_underlineImageForLine:(id)arg1 ofHighlight:(id)arg2 invertedContent:(char)arg3 ;
+(id)p_fastHighlightImageForLine:(id)arg1 ofHighlight:(id)arg2 invertedContent:(char)arg3 ;
+(id)p_highlightImageForLine:(id)arg1 ofHighlight:(id)arg2 invertedContent:(char)arg3 ;
+(UIEdgeInsets)insetsForHighlight:(id)arg1 lineRect:(CGRect)arg2 numberOfLines:(unsigned)arg3 ;
+(id)imageForLine:(id)arg1 ofHighlight:(id)arg2 invertedContent:(char)arg3 ;
-(void)setDataHighlights:(AENoCopyDictionary *)arg1 ;
-(void)setLineLayers:(AENoCopyDictionary *)arg1 ;
-(AENoCopyDictionary *)dataHighlights;
-(char)invertedContent;
-(AENoCopyDictionary *)lineLayers;
-(void)p_renderLine:(id)arg1 ofHighlight:(id)arg2 intoLayer:(id)arg3 ;
-(void)updatedHighlight:(id)arg1 forceRerender:(char)arg2 ;
-(id)p_orderHighlights:(id)arg1 ;
-(id)highlightWithData:(id)arg1 ;
-(void)addHighlight:(id)arg1 forData:(id)arg2 ;
-(void)removeHighlightForData:(id)arg1 ;
-(void)updatedHighlight:(id)arg1 ;
-(id)highlightLayers;
-(id)annotationUuidForHighlightLayer:(id)arg1 ;
-(char)useSinglePassRender;
-(void)setUseSinglePassRender:(char)arg1 ;
-(char)canUseFilters;
-(void)setCanUseFilters:(char)arg1 ;
-(void)setInvertedContent:(char)arg1 ;
-(char)isAddingHighlights;
-(void)setAddingHighlights:(char)arg1 ;
-(id)init;
-(void)dealloc;
@end
