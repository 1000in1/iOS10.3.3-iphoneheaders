/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyCommandDiscoverabilityHUDVisualStyle.h>
@class UIFont, UIColor;


@protocol UIKeyCommandDiscoverabilityHUDVisualStyle <NSObject>
@property (nonatomic,readonly) UIEdgeInsets HUDViewInsets; 
@property (nonatomic,readonly) float HUDPageControlBottomMargin; 
@property (nonatomic,readonly) float columnDividerWidth; 
@property (nonatomic,readonly) float summaryXPadding; 
@property (nonatomic,readonly) float summaryYPadding; 
@property (nonatomic,readonly) float summaryDescriptionToModifiersSpacing; 
@property (nonatomic,readonly) float summaryModifiersSpacing; 
@property (nonatomic,readonly) UIFont * summaryFont; 
@property (nonatomic,readonly) float summaryLineHeight; 
@property (nonatomic,readonly) float summaryLineSpacing; 
@property (nonatomic,readonly) float minimumFontScaleBeforeTruncation; 
@property (nonatomic,readonly) UIColor * titleColor; 
@property (nonatomic,readonly) UIColor * inputColor; 
@property (nonatomic,readonly) UIColor * dividerColor; 
@required
-(float)minimumFontScaleBeforeTruncation;
-(float)maxHUDWidthForWidth:(float)arg1;
-(float)maxHUDHeightForHeight:(float)arg1;
-(UIEdgeInsets)HUDViewInsets;
-(float)summaryLineSpacing;
-(float)summaryLineHeight;
-(float)columnDividerWidth;
-(float)HUDPageControlBottomMargin;
-(UIColor *)dividerColor;
-(float)columnDividerHeightForHUDHeight:(float)arg1;
-(UIColor *)inputColor;
-(float)summaryXPadding;
-(float)summaryYPadding;
-(float)summaryDescriptionToModifiersSpacing;
-(float)summaryModifiersSpacing;
-(UIFont *)summaryFont;
-(UIColor *)titleColor;

@end


@class UIFont, UIColor, NSString;

@interface UIKeyCommandDiscoverabilityHUDVisualStyle : NSObject <UIKeyCommandDiscoverabilityHUDVisualStyle>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIEdgeInsets HUDViewInsets; 
@property (nonatomic,readonly) float HUDPageControlBottomMargin; 
@property (nonatomic,readonly) float columnDividerWidth; 
@property (nonatomic,readonly) float summaryXPadding; 
@property (nonatomic,readonly) float summaryYPadding; 
@property (nonatomic,readonly) float summaryDescriptionToModifiersSpacing; 
@property (nonatomic,readonly) float summaryModifiersSpacing; 
@property (nonatomic,readonly) UIFont * summaryFont; 
@property (nonatomic,readonly) float summaryLineHeight; 
@property (nonatomic,readonly) float summaryLineSpacing; 
@property (nonatomic,readonly) float minimumFontScaleBeforeTruncation; 
@property (nonatomic,readonly) UIColor * titleColor; 
@property (nonatomic,readonly) UIColor * inputColor; 
@property (nonatomic,readonly) UIColor * dividerColor; 
+(id)visualStyleForTraitCollection:(id)arg1 ;
-(float)maxHUDWidthForWidth:(float)arg1 ;
-(float)maxHUDHeightForHeight:(float)arg1 ;
-(float)columnDividerHeightForHUDHeight:(float)arg1 ;
@end
