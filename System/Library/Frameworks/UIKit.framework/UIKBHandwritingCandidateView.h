/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBKeyView.h>
#import <UIKit/UIKeyboardCandidateList.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol UIKeyboardCandidateListDelegate;
@class TIKeyboardCandidateResultSet, UIKBCandidateCollectionView, UIKeyboardCandidatePocketShadow, UIKeyboardCandidateLogButton, NSArray, NSString;

@interface UIKBHandwritingCandidateView : UIKBKeyView <UIKeyboardCandidateList, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	id<UIKeyboardCandidateListDelegate> _delegate;
	TIKeyboardCandidateResultSet* _candidateResultSet;
	UIKBCandidateCollectionView* _candidatesCollectionView;
	UIKeyboardCandidatePocketShadow* _pocketShadow;
	UIKeyboardCandidatePocketShadow* _leftBorder;
	SCD_Struct_UI35 _visualStyling;
	UIKeyboardCandidateLogButton* _logButton;
	unsigned _dummyCellCount;
	float _dummyCellWidth;

}

@property (nonatomic,retain) TIKeyboardCandidateResultSet * candidateResultSet;                   //@synthesize candidateResultSet=_candidateResultSet - In the implementation block
@property (nonatomic,readonly) NSArray * candidates; 
@property (nonatomic,retain) UIKBCandidateCollectionView * candidatesCollectionView;              //@synthesize candidatesCollectionView=_candidatesCollectionView - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidatePocketShadow * pocketShadow;                      //@synthesize pocketShadow=_pocketShadow - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidatePocketShadow * leftBorder;                        //@synthesize leftBorder=_leftBorder - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI35 visualStyling;                                       //@synthesize visualStyling=_visualStyling - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidateLogButton * logButton;                            //@synthesize logButton=_logButton - In the implementation block
@property (assign,nonatomic) unsigned dummyCellCount;                                             //@synthesize dummyCellCount=_dummyCellCount - In the implementation block
@property (assign,nonatomic) float dummyCellWidth;                                                //@synthesize dummyCellWidth=_dummyCellWidth - In the implementation block
@property (assign,nonatomic,__weak) id<UIKeyboardCandidateListDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<UIKeyboardCandidateList> candidateList; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)cellClass;
-(void)setDelegate:(id<UIKeyboardCandidateListDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<UIKeyboardCandidateListDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)setRenderConfig:(id)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(NSArray *)candidates;
-(void)showCandidateAtIndex:(unsigned)arg1 ;
-(void)showNextCandidate;
-(char)hasCandidates;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(float)arg4 layout:(char)arg5 ;
-(id)statisticsIdentifier;
-(char)isExtendedList;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1 ;
-(char)showCandidate:(id)arg1 ;
-(void)showPreviousCandidate;
-(void)showNextPage;
-(void)showPreviousPage;
-(void)showNextRow;
-(void)showPreviousRow;
-(id)currentCandidate;
-(unsigned)currentIndex;
-(void)candidateAcceptedAtIndex:(unsigned)arg1 ;
-(id)keyboardBehaviors;
-(unsigned)selectedSortIndex;
-(char)hasNextPage;
-(char)hasPreviousPage;
-(void)jumpToCompositions;
-(id)secureCandidateRenderTraits;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)_setRenderConfig:(id)arg1 ;
-(id)_inheritedRenderConfig;
-(void)setVisualStyling:(SCD_Struct_UI35)arg1 ;
-(SCD_Struct_UI35)visualStyling;
-(void)updatePocketShadowForKeyplane:(id)arg1 ;
-(void)updateLeftBorderForKeyplane:(id)arg1 ;
-(void)calculateDummyCellAttributes;
-(UIKBCandidateCollectionView *)candidatesCollectionView;
-(UIKeyboardCandidateLogButton *)logButton;
-(UIKeyboardCandidatePocketShadow *)pocketShadow;
-(void)setPocketShadow:(UIKeyboardCandidatePocketShadow *)arg1 ;
-(UIKeyboardCandidatePocketShadow *)leftBorder;
-(void)setLeftBorder:(UIKeyboardCandidatePocketShadow *)arg1 ;
-(void)setDummyCellWidth:(float)arg1 ;
-(void)setDummyCellCount:(unsigned)arg1 ;
-(void)reloadDataByAppendingAtEnd:(char)arg1 ;
-(unsigned)dummyCellCount;
-(TIKeyboardCandidateResultSet *)candidateResultSet;
-(float)singleCellWidthForProactiveCellCount:(unsigned)arg1 ;
-(float)dummyCellWidth;
-(void)setCandidateResultSet:(TIKeyboardCandidateResultSet *)arg1 ;
-(void)selectAndScrollToCandidateAtIndexPath:(id)arg1 animated:(char)arg2 ;
-(unsigned)maxNumberOfProactiveCells;
-(void)setCandidatesCollectionView:(UIKBCandidateCollectionView *)arg1 ;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(id<UIKeyboardCandidateList>)candidateList;
-(void)setLogButton:(UIKeyboardCandidateLogButton *)arg1 ;
@end

