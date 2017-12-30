/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSDictionary, CUICatalog, CUIStyleEffectConfiguration;

@interface NSStringDrawingContext : NSObject {

	float _minimumScaleFactor;
	float _minimumTrackingAdjustment;
	float _actualScaleFactor;
	float _actualTrackingAdjustment;
	CGRect _totalBounds;
	NSDictionary* _linkAttributes;
	CUICatalog* _CUICatalog;
	CUIStyleEffectConfiguration* _CUIStyleEffects;
	unsigned _numberOfLineFragments;
	unsigned _maximumNumberOfLines;
	float _baselineOffset;
	float _scaledBaselineOffset;
	float _scaledLineHeight;
	float _firstBaselineOffset;
	id _layout;
	struct {
		unsigned _wantsNumberOfLineFragments : 1;
		unsigned _wrapsForTruncationMode : 1;
		unsigned _wantsBaselineOffset : 1;
		unsigned _wantsScaledBaselineOffset : 1;
		unsigned _wantsScaledLineHeight : 1;
		unsigned _drawsDebugBaselines : 1;
		unsigned _cachesLayout : 1;
		unsigned _usesSimpleTextEffects : 1;
		unsigned _activeRenderers : 4;
	}  _sdcFlags;

}

@property (assign,nonatomic) float minimumTrackingAdjustment; 
@property (nonatomic,readonly) float actualTrackingAdjustment; 
@property (assign,nonatomic) float actualScaleFactor;                                    //@synthesize actualScaleFactor=_actualScaleFactor - In the implementation block
@property (assign,nonatomic) float actualTrackingAdjustment;                             //@synthesize actualTrackingAdjustment=_actualTrackingAdjustment - In the implementation block
@property (assign,nonatomic) CGRect totalBounds;                                         //@synthesize totalBounds=_totalBounds - In the implementation block
@property (assign,nonatomic) char wantsNumberOfLineFragments; 
@property (assign,nonatomic) unsigned numberOfLineFragments;                             //@synthesize numberOfLineFragments=_numberOfLineFragments - In the implementation block
@property (assign,nonatomic) char wrapsForTruncationMode; 
@property (assign,nonatomic) unsigned maximumNumberOfLines;                              //@synthesize maximumNumberOfLines=_maximumNumberOfLines - In the implementation block
@property (assign,nonatomic) char wantsBaselineOffset; 
@property (assign,nonatomic) float baselineOffset;                                       //@synthesize baselineOffset=_baselineOffset - In the implementation block
@property (assign,nonatomic) char wantsScaledBaselineOffset; 
@property (assign,nonatomic) float scaledBaselineOffset;                                 //@synthesize scaledBaselineOffset=_scaledBaselineOffset - In the implementation block
@property (assign,nonatomic) char wantsScaledLineHeight; 
@property (assign,nonatomic) float scaledLineHeight;                                     //@synthesize scaledLineHeight=_scaledLineHeight - In the implementation block
@property (assign,nonatomic) float firstBaselineOffset;                                  //@synthesize firstBaselineOffset=_firstBaselineOffset - In the implementation block
@property (nonatomic,retain) CUICatalog * cuiCatalog;                                    //@synthesize CUICatalog=_CUICatalog - In the implementation block
@property (nonatomic,retain) CUIStyleEffectConfiguration * cuiStyleEffects;              //@synthesize CUIStyleEffects=_CUIStyleEffects - In the implementation block
@property (assign,nonatomic) char drawsDebugBaselines; 
@property (assign,nonatomic) char cachesLayout; 
@property (nonatomic,retain) id layout;                                                  //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) char usesSimpleTextEffects; 
@property (assign,nonatomic) unsigned activeRenderers; 
@property (assign,nonatomic) float minimumScaleFactor;                                   //@synthesize minimumScaleFactor=_minimumScaleFactor - In the implementation block
-(CUICatalog *)cuiCatalog;
-(CUIStyleEffectConfiguration *)cuiStyleEffects;
-(float)minimumTrackingAdjustment;
-(char)wantsNumberOfLineFragments;
-(char)wrapsForTruncationMode;
-(char)wantsScaledBaselineOffset;
-(char)wantsScaledLineHeight;
-(char)drawsDebugBaselines;
-(char)usesSimpleTextEffects;
-(unsigned)activeRenderers;
-(void)setActiveRenderers:(unsigned)arg1 ;
-(void)setTotalBounds:(CGRect)arg1 ;
-(void)setNumberOfLineFragments:(unsigned)arg1 ;
-(void)setActualTrackingAdjustment:(float)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMaximumNumberOfLines:(unsigned)arg1 ;
-(CGRect)totalBounds;
-(void)setWrapsForTruncationMode:(char)arg1 ;
-(void)setMinimumScaleFactor:(float)arg1 ;
-(id)layout;
-(float)actualScaleFactor;
-(void)setActualScaleFactor:(float)arg1 ;
-(float)baselineOffset;
-(void)setBaselineOffset:(float)arg1 ;
-(float)scaledBaselineOffset;
-(void)setScaledBaselineOffset:(float)arg1 ;
-(float)scaledLineHeight;
-(void)setScaledLineHeight:(float)arg1 ;
-(float)minimumScaleFactor;
-(void)setMinimumTrackingAdjustment:(float)arg1 ;
-(void)setDrawsDebugBaselines:(char)arg1 ;
-(void)setCachesLayout:(char)arg1 ;
-(void)setLayout:(id)arg1 ;
-(void)setUsesSimpleTextEffects:(char)arg1 ;
-(void)setCuiCatalog:(CUICatalog *)arg1 ;
-(void)setCuiStyleEffects:(CUIStyleEffectConfiguration *)arg1 ;
-(void)setWantsBaselineOffset:(char)arg1 ;
-(void)setWantsScaledBaselineOffset:(char)arg1 ;
-(void)setWantsScaledLineHeight:(char)arg1 ;
-(void)setWantsNumberOfLineFragments:(char)arg1 ;
-(float)actualTrackingAdjustment;
-(float)firstBaselineOffset;
-(char)cachesLayout;
-(unsigned)numberOfLineFragments;
-(unsigned)maximumNumberOfLines;
-(void)setFirstBaselineOffset:(float)arg1 ;
-(char)wantsBaselineOffset;
@end

