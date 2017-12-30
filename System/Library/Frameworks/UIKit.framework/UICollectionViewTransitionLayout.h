/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class UICollectionViewLayout, NSMutableDictionary, NSMutableArray;

@interface UICollectionViewTransitionLayout : UICollectionViewLayout {

	UICollectionViewLayout* _fromLayout;
	UICollectionViewLayout* _toLayout;
	CGRect _fromVisibleBounds;
	CGRect _toVisibleBounds;
	CGSize _contentSize;
	char _haveValidInfos;
	float _transitionProgress;
	NSMutableDictionary* _transitionInformationsDict;
	NSMutableDictionary* _currentLayoutInfos;
	char _layoutIsValid;
	NSMutableArray* _disappearingLayoutAttributes;
	NSMutableArray* _appearingLayoutAttributes;
	float _accuracy;

}

@property (assign,nonatomic) float transitionProgress;                              //@synthesize transitionProgress=_transitionProgress - In the implementation block
@property (nonatomic,readonly) UICollectionViewLayout * currentLayout;              //@synthesize fromLayout=_fromLayout - In the implementation block
@property (nonatomic,readonly) UICollectionViewLayout * nextLayout;                 //@synthesize toLayout=_toLayout - In the implementation block
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(void)invalidateLayout;
-(UICollectionViewLayout *)currentLayout;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(CGRect)_oldVisibleBounds;
-(CGRect)_newVisibleBounds;
-(void)_setCollectionView:(id)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(void)_prepareForTransitionToLayout:(id)arg1 ;
-(void)_prepareForTransitionFromLayout:(id)arg1 ;
-(void)setTransitionProgress:(float)arg1 ;
-(char)_supportsAdvancedTransitionAnimations;
-(void)_finalizeLayoutTransition;
-(id)initWithCurrentLayout:(id)arg1 nextLayout:(id)arg2 ;
-(UICollectionViewLayout *)nextLayout;
-(float)transitionProgress;
-(id)interpolatedLayoutAttributesFromLayoutAttributes:(id)arg1 toLayoutAttributes:(id)arg2 progress:(float)arg3 ;
-(void)updateValue:(float)arg1 forAnimatedKey:(id)arg2 ;
-(float)valueForAnimatedKey:(id)arg1 ;
@end

