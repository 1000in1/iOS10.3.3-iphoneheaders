/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/CarDefaultSearchResultsViewController.h>
#import <Maps/CarMapsSuggestionsObserver.h>
#import <Maps/RecentsDataProviderDelegate.h>
#import <Maps/CarDestinationsTab.h>

@protocol CarDestinationsTabDelegate;
@class UIView, RecentsDataProvider, CarChromeViewController, NSArray, NSString, ChromeViewController, CarDestinationsTabBarItem;

@interface CarUserDestinationsViewController : CarDefaultSearchResultsViewController <CarMapsSuggestionsObserver, RecentsDataProviderDelegate, CarDestinationsTab> {

	UIView* _noContentView;
	char _refreshQuickRouteManagers;
	RecentsDataProvider* _recentsDataProvider;
	char _batchingUpdates;
	char _loading;
	id<CarDestinationsTabDelegate> _delegate;
	CarChromeViewController* _chromeViewController;
	NSArray* _recents;
	NSArray* _suggestions;

}

@property (nonatomic,copy) NSArray * recents;                                                   //@synthesize recents=_recents - In the implementation block
@property (nonatomic,retain) NSArray * suggestions;                                             //@synthesize suggestions=_suggestions - In the implementation block
@property (assign,getter=isLoading,nonatomic) char loading;                                     //@synthesize loading=_loading - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) char allowLowFuelSuggestion; 
@property (assign,nonatomic) ChromeViewController * chromeViewController; 
@property (assign,nonatomic,__weak) id<CarDestinationsTabDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CarDestinationsTabBarItem * destinationsTabBarItem; 
-(char)showsMapView;
-(char)shouldTimeoutAfterDisconnect;
-(ChromeViewController *)chromeViewController;
-(void)setChromeViewController:(ChromeViewController *)arg1 ;
-(void)becomeCurrentModeWithViews:(id)arg1 animated:(char)arg2 state:(id)arg3 fromMode:(id)arg4 ;
-(void)resignCurrentModeAnimated:(char)arg1 toMode:(id)arg2 ;
-(void)pushDetailsForItemSelectedAtIndexPath:(id)arg1 ;
-(void)didSelectTab;
-(void)didReselectTab;
-(CarDestinationsTabBarItem *)destinationsTabBarItem;
-(void)recentsDataProviderDidUpdate:(id)arg1 ;
-(void)_reloadSection:(int)arg1 ;
-(void)carMapsSuggestionControllerDidRefresh:(id)arg1 ;
-(void)_prepareQuickRouteETAsIfNeeded;
-(void)_endUpdates;
-(char)_shouldChangeToSuggestionEntries:(NSArray*)arg1 ;
-(id)init;
-(void)setDelegate:(id<CarDestinationsTabDelegate>)arg1 ;
-(void)dealloc;
-(id)indexPathForPreferredFocusedViewInTableView:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<CarDestinationsTabDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)viewController;
-(NSArray *)recents;
-(void)setRecents:(NSArray *)arg1 ;
-(void)setSuggestions:(NSArray *)arg1 ;
-(id)noContentView;
-(char)isLoading;
-(void)_reloadData;
-(NSString*)uniqueName;
-(void)_beginUpdates;
-(NSArray *)suggestions;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)setLoading:(char)arg1 ;
@end
