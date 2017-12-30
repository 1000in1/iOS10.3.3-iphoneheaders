/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIInterfaceActionRepresentationView.h>
#import <UIKit/UIInterfaceActionDisplayPropertyObserver.h>

@class _UIInterfaceActionImagePropertyView, _UIInterfaceActionLabelsPropertyView, NSSet, NSArray, NSString;

@interface _UIInterfaceActionSystemRepresentationView : UIInterfaceActionRepresentationView <UIInterfaceActionDisplayPropertyObserver> {

	_UIInterfaceActionImagePropertyView* _leadingImageView;
	_UIInterfaceActionImagePropertyView* _trailingImageView;
	_UIInterfaceActionLabelsPropertyView* _labelsView;
	NSSet* _viewsToDisplayWhenContentsVisible;
	NSSet* _displayedViews;
	NSArray* _displayedViewsSpacingConstraints;
	NSArray* _displayedViewsPositioningConstraints;

}

@property (nonatomic,readonly) _UIInterfaceActionImagePropertyView * leadingImageView;               //@synthesize leadingImageView=_leadingImageView - In the implementation block
@property (nonatomic,readonly) _UIInterfaceActionImagePropertyView * trailingImageView;              //@synthesize trailingImageView=_trailingImageView - In the implementation block
@property (nonatomic,readonly) _UIInterfaceActionLabelsPropertyView * labelsView;                    //@synthesize labelsView=_labelsView - In the implementation block
@property (nonatomic,retain) NSSet * viewsToDisplayWhenContentsVisible;                              //@synthesize viewsToDisplayWhenContentsVisible=_viewsToDisplayWhenContentsVisible - In the implementation block
@property (nonatomic,retain) NSSet * displayedViews;                                                 //@synthesize displayedViews=_displayedViews - In the implementation block
@property (nonatomic,readonly) NSArray * displayedViewsSpacingConstraints;                           //@synthesize displayedViewsSpacingConstraints=_displayedViewsSpacingConstraints - In the implementation block
@property (nonatomic,readonly) NSArray * displayedViewsPositioningConstraints;                       //@synthesize displayedViewsPositioningConstraints=_displayedViewsPositioningConstraints - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateConstraints;
-(void)_applyVisualStyle;
-(void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2 ;
-(void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2 ;
-(id)initWithAction:(id)arg1 ;
-(void)_invalidateDisplayedViewsConstraints;
-(void)_reloadViewsToDisplayWhenContentsVisible;
-(void)_arrangeDisplayedViews;
-(void)_loadConstraintsForDisplayedViews;
-(void)_applyVisualStyleToDisplayedViews;
-(void)_updateDisplayedViewsConstraintsVisualStyleConstants;
-(char)_hasLoadedContents;
-(void)setViewsToDisplayWhenContentsVisible:(NSSet *)arg1 ;
-(void)_removeAllDisplayedViews;
-(void)_reloadHierarchyWithViewsToDisplayWhenContentsVisible;
-(void)_loadConstraintsForLabelsOnlyDisplay;
-(void)_loadConstraintsForLabelsAndImagesDisplay;
-(void)_activateDisplayedViewsConstraints;
-(id)_constraintsForVeritcallyCenteringViews:(id)arg1 ;
-(id)_constraintsToEnsureContainerHeightTallEnoughForViews:(id)arg1 ;
-(id)_constraintsForInsettingLabelsViewLeadingAndTrailing;
-(id)_constraintsForInsettingImageViewsLeadingAndTrailingEdge;
-(id)_constraintsForHorizontallyCenteringLabelsView;
-(id)_constraintsForInsettingLabelsViewLeadingAndTrailingHorizontalEdgeReferenceExact:(char)arg1 ;
-(id)_constraintsForInsettingLabelsViewLeadingAndTrailingToImageViewsExact:(char)arg1 ;
-(char)_isDisplayingLeadingImageView;
-(id)_horizontalEdgeReference;
-(char)_isDisplayingTrailingImageView;
-(void)loadContents;
-(void)updateContentsInsertedIntoHierarchy;
-(char)_displayedViewsConstraintsNeedsLoading;
-(_UIInterfaceActionImagePropertyView *)leadingImageView;
-(_UIInterfaceActionImagePropertyView *)trailingImageView;
-(_UIInterfaceActionLabelsPropertyView *)labelsView;
-(NSSet *)viewsToDisplayWhenContentsVisible;
-(NSSet *)displayedViews;
-(void)setDisplayedViews:(NSSet *)arg1 ;
-(NSArray *)displayedViewsSpacingConstraints;
-(NSArray *)displayedViewsPositioningConstraints;
@end

