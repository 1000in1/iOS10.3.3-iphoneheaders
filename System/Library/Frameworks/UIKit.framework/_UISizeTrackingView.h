/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UIScrollToTopView.h>
#import <UIKit/_UIRemoteViewFocusProxy.h>

@class _UIRemoteViewController, NSString;

@interface _UISizeTrackingView : UIView <_UIScrollToTopView, _UIRemoteViewFocusProxy> {

	_UIRemoteViewController* _remoteViewController;
	id _viewControllerOperatorProxy;
	id _textEffectsOperatorProxy;
	char _hasIntrinsicContentSize;
	CGSize _intrinsicContentSize;
	CGRect _formerTextEffectsContentFrame;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _UIRemoteViewController * remoteViewController; 
+(id)viewWithRemoteViewController:(id)arg1 viewControllerOperatorProxy:(id)arg2 textEffectsOperatorProxy:(id)arg3 ;
-(void)dealloc;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(char)isScrollEnabled;
-(void)_scrollToTopFromTouchAtScreenLocation:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)_geometryChanges:(id)arg1 forAncestor:(id)arg2 ;
-(char)canBecomeFocused;
-(id)_childFocusRegions;
-(id)_childFocusRegionsInRect:(CGRect)arg1 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(_UIRemoteViewController *)remoteViewController;
-(void)_updateTextEffectsGeometries:(CGRect)arg1 ;
-(char)_needsTextEffectsUpdateToFrame:(CGRect)arg1 ;
-(int)_interfaceOrientationForScene:(id)arg1 ;
-(void)_updateSceneGeometries:(id)arg1 forOrientation:(int)arg2 ;
-(void)updateIntrinsicContentSize:(CGSize)arg1 ;
-(void)_updateTextEffectsGeometriesImmediately;
@end

