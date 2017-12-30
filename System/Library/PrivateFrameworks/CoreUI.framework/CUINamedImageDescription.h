/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CUINamedImageDescription : NSObject {

	float _scale;
	int _idiom;
	int _subtype;
	int _sizeClassHorizontal;
	int _sizeClassVertical;
	int _displayGamut;
	int _layoutDirection;
	int _blendMode;
	int _templateRenderingMode;
	int _imageType;
	SCD_Struct_CU13 _edgeInsets;
	SCD_Struct_CU13 _alignmentEdgeInsets;
	int _resizingMode;
	int _exifOrientation;

}

@property (assign,nonatomic) float scale;                                      //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) int idiom;                                        //@synthesize idiom=_idiom - In the implementation block
@property (assign,nonatomic) int subtype;                                      //@synthesize subtype=_subtype - In the implementation block
@property (assign,nonatomic) int sizeClassHorizontal;                          //@synthesize sizeClassHorizontal=_sizeClassHorizontal - In the implementation block
@property (assign,nonatomic) int sizeClassVertical;                            //@synthesize sizeClassVertical=_sizeClassVertical - In the implementation block
@property (assign,nonatomic) int blendMode;                                    //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) char isTemplate; 
@property (assign,nonatomic) int templateRenderingMode;                        //@synthesize templateRenderingMode=_templateRenderingMode - In the implementation block
@property (assign,nonatomic) int imageType;                                    //@synthesize imageType=_imageType - In the implementation block
@property (assign,nonatomic) SCD_Struct_CU13 edgeInsets;                       //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) SCD_Struct_CU13 alignmentEdgeInsets;              //@synthesize alignmentEdgeInsets=_alignmentEdgeInsets - In the implementation block
@property (assign,nonatomic) int resizingMode;                                 //@synthesize resizingMode=_resizingMode - In the implementation block
@property (assign,nonatomic) int exifOrientation;                              //@synthesize exifOrientation=_exifOrientation - In the implementation block
@property (assign,nonatomic) int displayGamut;                                 //@synthesize displayGamut=_displayGamut - In the implementation block
@property (assign,nonatomic) int layoutDirection;                              //@synthesize layoutDirection=_layoutDirection - In the implementation block
-(int)sizeClassHorizontal;
-(int)sizeClassVertical;
-(id)description;
-(void)setScale:(float)arg1 ;
-(int)subtype;
-(float)scale;
-(SCD_Struct_CU13)edgeInsets;
-(int)resizingMode;
-(int)exifOrientation;
-(SCD_Struct_CU13)alignmentEdgeInsets;
-(int)templateRenderingMode;
-(int)layoutDirection;
-(void)setSubtype:(int)arg1 ;
-(int)displayGamut;
-(int)idiom;
-(char)isTemplate;
-(void)setEdgeInsets:(SCD_Struct_CU13)arg1 ;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(void)setIsTemplate:(char)arg1 ;
-(void)setIdiom:(int)arg1 ;
-(void)setDisplayGamut:(int)arg1 ;
-(void)setSizeClassHorizontal:(int)arg1 ;
-(void)setSizeClassVertical:(int)arg1 ;
-(void)setLayoutDirection:(int)arg1 ;
-(void)setTemplateRenderingMode:(int)arg1 ;
-(void)setAlignmentEdgeInsets:(SCD_Struct_CU13)arg1 ;
-(void)setResizingMode:(int)arg1 ;
-(void)setImageType:(int)arg1 ;
-(void)setExifOrientation:(int)arg1 ;
-(int)imageType;
@end

