/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, NSArray;

@interface SteppingTransitArtworkView : UIView {

	float _preferredMaxLayoutWidth;
	NSMutableArray* _layoutConstraints;
	float _totalImageWidth;
	float _maxImageHeight;
	NSArray* _imageSources;

}

@property (nonatomic,retain) NSMutableArray * layoutConstraints;              //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (assign,nonatomic) float totalImageWidth;                           //@synthesize totalImageWidth=_totalImageWidth - In the implementation block
@property (assign,nonatomic) float maxImageHeight;                            //@synthesize maxImageHeight=_maxImageHeight - In the implementation block
@property (nonatomic,copy) NSArray * imageSources;                            //@synthesize imageSources=_imageSources - In the implementation block
@property (assign,nonatomic) float preferredMaxLayoutWidth;                   //@synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth - In the implementation block
+(char)requiresConstraintBasedLayout;
-(void)resetConstraints;
-(void)setImageSources:(NSArray *)arg1 ;
-(float)_totalImageWidthWithSpacing;
-(float)_imageScaleFactorForAvailableWidth:(float)arg1 ;
-(void)_resetLayoutConstraints;
-(CGSize)sizeThatFitsWidth:(float)arg1 ;
-(float)totalImageWidth;
-(void)setTotalImageWidth:(float)arg1 ;
-(float)maxImageHeight;
-(void)setMaxImageHeight:(float)arg1 ;
-(NSArray *)imageSources;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setPreferredMaxLayoutWidth:(float)arg1 ;
-(float)preferredMaxLayoutWidth;
-(void)_updateSubviews;
-(NSMutableArray *)layoutConstraints;
-(void)setLayoutConstraints:(NSMutableArray *)arg1 ;
@end

