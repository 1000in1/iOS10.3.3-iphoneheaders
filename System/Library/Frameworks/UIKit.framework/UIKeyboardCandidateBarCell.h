/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UIKBCacheableView.h>

@class UIKBThemedView, UILabel, NSString;

@interface UIKeyboardCandidateBarCell : UICollectionViewCell <UIKBCacheableView> {

	char _beginsFirstPage;
	char _endsLastPage;
	char _isAtLeftEdge;
	char _isAutocorrectionCandidate;
	UIKBThemedView* _themedView;
	UILabel* _label;
	UILabel* _annotationLabel;
	NSString* _candidateText;
	NSString* _annotationText;

}

@property (nonatomic,retain) UIKBThemedView * themedView;                 //@synthesize themedView=_themedView - In the implementation block
@property (nonatomic,retain) UILabel * label;                             //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UILabel * annotationLabel;                   //@synthesize annotationLabel=_annotationLabel - In the implementation block
@property (nonatomic,copy) NSString * candidateText;                      //@synthesize candidateText=_candidateText - In the implementation block
@property (nonatomic,copy) NSString * annotationText;                     //@synthesize annotationText=_annotationText - In the implementation block
@property (assign,nonatomic) char beginsFirstPage;                        //@synthesize beginsFirstPage=_beginsFirstPage - In the implementation block
@property (assign,nonatomic) char endsLastPage;                           //@synthesize endsLastPage=_endsLastPage - In the implementation block
@property (assign,nonatomic) char isAtLeftEdge;                           //@synthesize isAtLeftEdge=_isAtLeftEdge - In the implementation block
@property (assign,nonatomic) char isAutocorrectionCandidate;              //@synthesize isAutocorrectionCandidate=_isAutocorrectionCandidate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) char cacheDeferable; 
@property (nonatomic,readonly) float cachedWidth; 
@property (nonatomic,readonly) char keepNonPersistent; 
+(id)font;
+(id)reuseIdentifier;
+(float)widthForCandidate:(id)arg1 ;
+(UIEdgeInsets)cacheInsets;
+(char)drawsSideBorders;
+(id)annotationFont;
+(id)textColorWithHighlight:(char)arg1 whiteText:(char)arg2 ;
+(char)highlightAffectsBackground;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)displayLayer:(id)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(char)arg1 ;
-(void)setCandidate:(id)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)_setRenderConfig:(id)arg1 ;
-(NSString *)annotationText;
-(void)setAnnotationText:(NSString *)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(NSString *)cacheKey;
-(float)cachedWidth;
-(id)cacheKeysForRenderFlags:(id)arg1 ;
-(char)cacheDeferable;
-(char)keepNonPersistent;
-(void)setThemedView:(UIKBThemedView *)arg1 ;
-(UIKBThemedView *)themedView;
-(void)updateLabels;
-(void)updateIsAtLeftEdgeState;
-(void)setBeginsFirstPage:(char)arg1 ;
-(void)setEndsLastPage:(char)arg1 ;
-(char)beginsFirstPage;
-(char)endsLastPage;
-(UILabel *)annotationLabel;
-(void)setAnnotationLabel:(UILabel *)arg1 ;
-(void)setCandidateText:(NSString *)arg1 ;
-(void)setIsAutocorrectionCandidate:(char)arg1 ;
-(NSString *)candidateText;
-(char)isAutocorrectionCandidate;
-(char)isAtLeftEdge;
-(void)setIsAtLeftEdge:(char)arg1 ;
@end

