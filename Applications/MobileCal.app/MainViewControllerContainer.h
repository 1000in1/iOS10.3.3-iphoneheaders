/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <FindMyFriends/MainViewController.h>
#import <MobileCal/MainViewControllerOptionalMethods.h>
#import <UIKit/UITraitEnvironment.h>

@class UITraitCollection, MainViewController, CalendarModel, NSString;

@interface MainViewControllerContainer : MainViewController <MainViewControllerOptionalMethods, UITraitEnvironment> {

	MainViewController* _currentChildViewController;
	MainViewController* _emptyChildViewController;
	char _animatingViewTransition;
	CalendarModel* _model;

}

@property (nonatomic,retain) CalendarModel * model;                                                        //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) char animatingViewTransition;                                                 //@synthesize animatingViewTransition=_animatingViewTransition - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (nonatomic,retain) UITraitCollection * futureTraitCollection; 
@property (nonatomic,readonly) char isTransitioningTraitCollection; 
@property (assign,nonatomic) char isWaitingForBackgroundLoadingOfSelectedEventOccurrenceView; 
@property (nonatomic,readonly) char shouldAdaptEventViewControllers; 
+(char)_shouldForwardViewWillTransitionToSize;
-(void)selectDate:(id)arg1 animated:(char)arg2 ;
-(void)showEvent:(id)arg1 animated:(char)arg2 showDetails:(char)arg3 context:(NSDictionary*)arg4 ;
-(void)showEvent:(id)arg1 animated:(char)arg2 showDetails:(char)arg3 showComments:(char)arg4 context:(NSDictionary*)arg5 ;
-(void)showViewController:(id)arg1 sender:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateBackButtonToDate:(id)arg1 ;
-(void)showEvent:(id)arg1 animated:(char)arg2 context:(NSDictionary*)arg3 ;
-(void)showNowAnimated:(char)arg1 ;
-(char)shouldPushNextLevelViewControllerWhenTodayIsVisible;
-(void)enableGestureRecognizers;
-(void)disableGestureRecognizers;
-(float)leftBarButtonBlankFixedSpaceWidth;
-(void)updatePalette:(id)arg1 ;
-(id)bestDateForNewEvent;
-(char)showEventDetailsWhenNewEventAdded;
-(id)toolBarTintColor;
-(int)supportedToggleMode;
-(id)navigationBarDisplayedDateString;
-(void)updateNavigationBarDisplayedDateString;
-(void)invalidateBackButtonDate;
-(char)shouldUpdateOwnBackButtonWhenTopViewController;
-(id)updateBackButtonWhileTopViewControllerToDate:(id)arg1 ;
-(char)shouldRespondToApplicationDidBecomeActiveStateChange;
-(void)setShouldRespondToApplicationDidBecomeActiveStateChange:(char)arg1 ;
-(char)isTodayVisible;
-(char)isWaitingForBackgroundLoadingOfSelectedEventOccurrenceView;
-(char)shouldAdaptEventViewControllers;
-(char)allowsOverriddenRightNavigationBarItems;
-(char)allowsOverriddenToolbarItems;
-(int)presentationStyleOverrideForChildViewControllers;
-(id)childViewControllerForCompactWidthRegularHeight;
-(id)pushedNextLevelMainViewControllerContainerAnimated:(char)arg1 ;
-(id)childViewControllerForUnknownTraits;
-(id)childViewControllerForRegularWidthCompactHeight;
-(id)childViewControllerForRegularWidthRegularHeight;
-(Class)childViewControllerClassForTraits:(id)arg1 ;
-(char)childViewControllerNeedsToBeInsettedFromNavigationElements;
-(void)_updateForCurrentTraits;
-(void)setupForViewAppearance;
-(char)currentChildViewControllerIsLoaded;
-(void)setupUIForTraitCollection:(id)arg1 ;
-(char)animatingViewTransition;
-(id)viewControllerToShowFrom;
-(id)_childViewControllerForTraitCollection:(id)arg1 ;
-(id)emptyChildViewController;
-(char)shouldRemoveSelfFromNavigationStackIfTraitCollectionIsUnsupported;
-(void)_removeChildViewControllerForCurrentTraits;
-(void)_addChildViewControllerForCurrentTraits;
-(id)childViewControllerForCompactWidthCompactHeight;
-(id)managedNavigationController;
-(char)shouldModallyPresentFirstShownViewController;
-(id)_todaysDate;
-(void)navigateToNextSelectableItem;
-(void)navigateToPreviousSelectableItem;
-(void)navigateToNextDateComponentUnitAnimated:(char)arg1 ;
-(void)navigateToPreviousDateComponentUnitAnimated:(char)arg1 ;
-(void)showTodayAnimated:(char)arg1 ;
-(void)setAnimatingViewTransition:(char)arg1 ;
-(UITraitCollection *)traitCollection;
-(char)respondsToSelector:(SEL)arg1 ;
-(NSString *)description;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(CalendarModel *)model;
-(id)initWithModel:(id)arg1 ;
-(id)navigationBarTintColor;
-(void)setModel:(CalendarModel *)arg1 ;
-(id)currentChildViewController;
@end

