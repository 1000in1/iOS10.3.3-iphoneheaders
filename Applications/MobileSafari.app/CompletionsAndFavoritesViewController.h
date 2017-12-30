/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIViewController.h>

@class BookmarksNavigationController, CompletionListTableViewController, UniversalSearchFirstTimeExperienceViewController;

@interface CompletionsAndFavoritesViewController : UIViewController {

	float _minimumHeight;
	char _showingFirstTimeExperience;
	char _showingCompletions;
	BookmarksNavigationController* _favoritesViewController;
	CompletionListTableViewController* _completionListTableViewController;
	UniversalSearchFirstTimeExperienceViewController* _firstTimeExperienceViewController;
	float _requiredPopoverWidth;

}

@property (nonatomic,retain) BookmarksNavigationController * favoritesViewController;                                           //@synthesize favoritesViewController=_favoritesViewController - In the implementation block
@property (nonatomic,retain) CompletionListTableViewController * completionListTableViewController;                             //@synthesize completionListTableViewController=_completionListTableViewController - In the implementation block
@property (nonatomic,retain) UniversalSearchFirstTimeExperienceViewController * firstTimeExperienceViewController;              //@synthesize firstTimeExperienceViewController=_firstTimeExperienceViewController - In the implementation block
@property (assign,getter=isShowingCompletions,nonatomic) char showingCompletions;                                               //@synthesize showingCompletions=_showingCompletions - In the implementation block
@property (assign,nonatomic) float requiredPopoverWidth;                                                                        //@synthesize requiredPopoverWidth=_requiredPopoverWidth - In the implementation block
-(BookmarksNavigationController *)favoritesViewController;
-(void)setFavoritesViewController:(BookmarksNavigationController *)arg1 ;
-(char)isShowingCompletions;
-(void)setShowingCompletions:(char)arg1 ;
-(void)setRequiredPopoverWidth:(float)arg1 ;
-(void)setCompletionListTableViewController:(CompletionListTableViewController *)arg1 ;
-(void)setShowingUniversalSearchFirstTimeExperience:(char)arg1 ;
-(id)_visibleContentViewController;
-(CompletionListTableViewController *)completionListTableViewController;
-(float)requiredPopoverWidth;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(UniversalSearchFirstTimeExperienceViewController *)firstTimeExperienceViewController;
-(void)setFirstTimeExperienceViewController:(UniversalSearchFirstTimeExperienceViewController *)arg1 ;
@end

