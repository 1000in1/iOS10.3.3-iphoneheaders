/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UINavigationController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <MobileCal/ImmunityFromCustomAdaptationOfPresentedViewControllersAcrossSizeClasses.h>

@class SearchResultsViewController, UISearchBar, CalendarModel, NSString;

@interface SearchResultsNavigationController : UINavigationController <UINavigationControllerDelegate, UISearchControllerDelegate, ImmunityFromCustomAdaptationOfPresentedViewControllersAcrossSizeClasses> {

	char _initialPresentationHasCompleted;
	SearchResultsViewController* _searchResultsViewController;
	UISearchBar* _searchBar;
	CalendarModel* _model;

}

@property (nonatomic,retain) CalendarModel * model;                                                  //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) SearchResultsViewController * searchResultsViewController;              //@synthesize searchResultsViewController=_searchResultsViewController - In the implementation block
@property (assign,nonatomic) char initialPresentationHasCompleted;                                   //@synthesize initialPresentationHasCompleted=_initialPresentationHasCompleted - In the implementation block
@property (assign,nonatomic,__weak) UISearchBar * searchBar;                                         //@synthesize searchBar=_searchBar - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_todayLocalizedString;
+(char)_shouldForwardViewWillTransitionToSize;
-(char)isImmuneToCustomAdaptation;
-(void)todayPressed;
-(id)noContentString;
-(void)_updateTodayButtonPosition;
-(void)setInitialPresentationHasCompleted:(char)arg1 ;
-(char)initialPresentationHasCompleted;
-(void)animateShowingSearchBarAnimated:(char)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_setSearchBarEnabledState:(char)arg1 ;
-(void)hideSearchBarForNavigationTransitionAnimated:(char)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(UISearchBar *)searchBar;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(CalendarModel *)model;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(void)setModel:(CalendarModel *)arg1 ;
-(SearchResultsViewController *)searchResultsViewController;
-(void)setSearchResultsViewController:(SearchResultsViewController *)arg1 ;
-(void)_showSearchBar;
-(void)_hideSearchBar;
@end

