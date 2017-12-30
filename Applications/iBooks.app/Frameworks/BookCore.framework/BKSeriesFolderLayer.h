/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookCore/BookCore-Structs.h>
#import <QuartzCore/CALayer.h>
#import <BookCore/BKSeriesFolderFrameProvider.h>

@protocol BKSeriesFolderLayerConfiguring;
@class NSString, NSArray;

@interface BKSeriesFolderLayer : CALayer <BKSeriesFolderFrameProvider> {

	char _compact;
	char _fullSizeBanner;
	char _isRTL;
	char _imageNeedsRendering;
	unsigned _numCoverImages;
	CGPathRef _selectionMaskPath;
	id<BKSeriesFolderLayerConfiguring> _configuration;
	NSString* _identifier;
	NSArray* _coverImages;
	CGImageRef _bannerImage;
	float _horizontalMargin;
	CGRect _selectionRect;
	CGRect _frontCoverRect;
	CGRect __frameForSeries;

}

@property (nonatomic,retain) NSArray * coverImages;                                                //@synthesize coverImages=_coverImages - In the implementation block
@property (assign,nonatomic) CGImageRef bannerImage;                                               //@synthesize bannerImage=_bannerImage - In the implementation block
@property (assign,nonatomic) float horizontalMargin;                                               //@synthesize horizontalMargin=_horizontalMargin - In the implementation block
@property (assign,nonatomic) char imageNeedsRendering;                                             //@synthesize imageNeedsRendering=_imageNeedsRendering - In the implementation block
@property (assign,nonatomic) CGRect _frameForSeries;                                               //@synthesize _frameForSeries=__frameForSeries - In the implementation block
@property (nonatomic,readonly) unsigned numCoverImages;                                            //@synthesize numCoverImages=_numCoverImages - In the implementation block
@property (nonatomic,readonly) CGRect selectionRect;                                               //@synthesize selectionRect=_selectionRect - In the implementation block
@property (nonatomic,readonly) CGPathRef selectionMaskPath;                                        //@synthesize selectionMaskPath=_selectionMaskPath - In the implementation block
@property (nonatomic,readonly) CGRect frontCoverRect;                                              //@synthesize frontCoverRect=_frontCoverRect - In the implementation block
@property (assign,nonatomic,__weak) id<BKSeriesFolderLayerConfiguring> configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) char compact;                                                         //@synthesize compact=_compact - In the implementation block
@property (assign,nonatomic) char fullSizeBanner;                                                  //@synthesize fullSizeBanner=_fullSizeBanner - In the implementation block
@property (assign,nonatomic) char isRTL;                                                           //@synthesize isRTL=_isRTL - In the implementation block
@property (nonatomic,readonly) CGRect frameForSeries; 
+(CGImageRef)blankStackImage;
-(void)setIsRTL:(char)arg1 ;
-(void)setImageNeedsRendering:(char)arg1 ;
-(void)set_frameForSeries:(CGRect)arg1 ;
-(CGRect)_frameForSeries;
-(CGRect)_actualFrame;
-(NSArray *)coverImages;
-(CGRect)_rectForImageAtPosition:(unsigned)arg1 frontRect:(CGRect)arg2 ;
-(id)layoutRectsForImages:(id)arg1 ;
-(char)fullSizeBanner;
-(void)setCoverImages:(NSArray *)arg1 ;
-(char)imageNeedsRendering;
-(void)rebuildLayerImage:(char)arg1 ;
-(CGRect)frameForSeries;
-(void)setShadowFrame:(CGRect)arg1 ;
-(CGRect)folderRect;
-(void)renderIfNeeded:(char)arg1 ;
-(id)layoutRectsWithCount:(unsigned)arg1 ;
-(unsigned)numCoverImages;
-(CGPathRef)selectionMaskPath;
-(CGRect)frontCoverRect;
-(void)setFullSizeBanner:(char)arg1 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(void)setImages:(CFArrayRef)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setConfiguration:(id<BKSeriesFolderLayerConfiguring>)arg1 ;
-(id<BKSeriesFolderLayerConfiguring>)configuration;
-(id)initWithConfiguration:(id)arg1 ;
-(char)compact;
-(CGRect)selectionRect;
-(void)setCompact:(char)arg1 ;
-(id)_renderingQueue;
-(void)setBannerImage:(CGImageRef)arg1 ;
-(CGImageRef)bannerImage;
-(char)isRTL;
-(void)setHorizontalMargin:(float)arg1 ;
-(float)horizontalMargin;
@end

