/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIView, NSMutableSet, NSMutableArray, NSArray;

@interface _UIViewLayoutFeedbackLoopDebugger : NSObject {

	int _debuggingState;
	UIView* _rootView;
	NSMutableSet* _viewsWithChangingGeometry;
	NSMutableSet* _viewsWithVariableChangesTriggeringLayout;
	NSMutableSet* _turningPointViews;
	NSMutableSet* _involvedViews;
	NSMutableArray* _layoutList;
	NSArray* _reducedLayoutList;
	char _rootViewConfirmed;
	char _feedbackLoopConfirmed;
	int _rootViewLayoutCount;
	UIView* _currentLayoutView;

}

@property (nonatomic,retain) UIView * currentLayoutView;              //@synthesize currentLayoutView=_currentLayoutView - In the implementation block
+(id)layoutFeedbackLoopDebugger;
+(void)createLayoutFeedbackLoopDebuggerForUnitTests;
+(void)destroyLayoutFeedbackLoopDebuggerForUnitTests;
-(id)description;
-(void)willSendSetPosition:(CGPoint)arg1 toLayerOfView:(id)arg2 ;
-(void)willSendSetFrame:(CGRect)arg1 toLayerOfView:(id)arg2 ;
-(void)willSendSetBounds:(CGRect)arg1 toLayerOfView:(id)arg2 ;
-(void)didSendSetNeedsLayoutToLayerOfView:(id)arg1 ;
-(void)willSendSetNeedsLayoutToLayerOfView:(id)arg1 ;
-(void)didEnterLayoutSublayersOfLayerForView:(id)arg1 ;
-(void)willSendViewWillLayoutSubviewsToViewControllerOfView:(id)arg1 ;
-(void)didSendViewWillLayoutSubviewsToViewControllerOfView:(id)arg1 ;
-(void)willSendLayoutSubviewsToView:(id)arg1 ;
-(void)didSendLayoutSubviewsToView:(id)arg1 ;
-(void)willSendViewDidLayoutSubviewsToViewControllerOfView:(id)arg1 ;
-(void)didSendViewDidLayoutSubviewsToViewControllerOfView:(id)arg1 ;
-(void)willExitLayoutSublayersOfLayerForView:(id)arg1 ;
-(UIView *)currentLayoutView;
-(void)dumpInfoWithInfoCollectionSuccess:(char)arg1 ;
-(id)viewsWithVariableChangesTriggeringLayoutCreateIfNecessary;
-(id)turningPointViewsCreateIfNecessary;
-(void)_recordSetNeedsLayoutToLayerOfView:(id)arg1 ;
-(void)willChangeGeometryForLayerOfView:(id)arg1 ;
-(id)viewsWithChangingGeometryCreateIfNecessary;
-(id)topLevelViewHierarchyTrace;
-(void)willSendSetNeedsLayoutToView:(id)arg1 becauseOfChangeInVariable:(id)arg2 inLayoutEngine:(id)arg3 ;
-(void)setCurrentLayoutView:(UIView *)arg1 ;
@end

