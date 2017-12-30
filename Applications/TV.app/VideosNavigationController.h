/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/TV.app/TV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TV/TV-Structs.h>
#import <UIKit/UINavigationController.h>

@protocol VideosNavigationControllerViewLayoutObserver;
@interface VideosNavigationController : UINavigationController {

	char _shouldFakeStatusBarVisible;
	char _shouldPreventContentFromShiftingVertically;
	char _originalValueForNavigationBarForceFullHeightInLandscape;
	id<VideosNavigationControllerViewLayoutObserver> _viewLayoutObserver;

}

@property (assign,nonatomic) char shouldFakeStatusBarVisible;                                                         //@synthesize shouldFakeStatusBarVisible=_shouldFakeStatusBarVisible - In the implementation block
@property (assign,nonatomic) char shouldPreventContentFromShiftingVertically;                                         //@synthesize shouldPreventContentFromShiftingVertically=_shouldPreventContentFromShiftingVertically - In the implementation block
@property (assign,nonatomic) char originalValueForNavigationBarForceFullHeightInLandscape;                            //@synthesize originalValueForNavigationBarForceFullHeightInLandscape=_originalValueForNavigationBarForceFullHeightInLandscape - In the implementation block
@property (assign,nonatomic,__weak) id<VideosNavigationControllerViewLayoutObserver> viewLayoutObserver;              //@synthesize viewLayoutObserver=_viewLayoutObserver - In the implementation block
-(id<VideosNavigationControllerViewLayoutObserver>)viewLayoutObserver;
-(void)setViewLayoutObserver:(id<VideosNavigationControllerViewLayoutObserver>)arg1 ;
-(void)willPresentTraitsOverridingViewController:(id)arg1 ;
-(void)didPresentTraitsOverridingViewController:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(float)_statusBarHeightAdjustmentForCurrentOrientation;
-(void)_setContentOverlayInsets:(UIEdgeInsets)arg1 ;
-(void)setShouldPreventContentFromShiftingVertically:(char)arg1 ;
-(void)setOriginalValueForNavigationBarForceFullHeightInLandscape:(char)arg1 ;
-(void)setShouldFakeStatusBarVisible:(char)arg1 ;
-(char)originalValueForNavigationBarForceFullHeightInLandscape;
-(char)shouldFakeStatusBarVisible;
-(char)shouldPreventContentFromShiftingVertically;
@end

