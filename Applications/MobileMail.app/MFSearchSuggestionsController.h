/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol MFSearchSuggestionsControllerDelegate;
@class _MFSearchSuggestionsTableViewModel, NSMutableSet, SearchScopeControl;

@interface MFSearchSuggestionsController : UITableViewController {

	_MFSearchSuggestionsTableViewModel* _tableViewModel;
	NSMutableSet* _touchedCategories;
	id<MFSearchSuggestionsControllerDelegate> _delegate;
	SearchScopeControl* _searchGlobalScopeControl;

}

@property (nonatomic,retain) SearchScopeControl * searchGlobalScopeControl;                   //@synthesize searchGlobalScopeControl=_searchGlobalScopeControl - In the implementation block
@property (assign,nonatomic) id<MFSearchSuggestionsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char hasSuggestions; 
+(/*^block*/id)categoryComparator;
-(void)globalSearchScopeChanged:(id)arg1 ;
-(void)_updateTableHeaderView;
-(void)beginUpdatingSuggestions;
-(id)searchSuggestionsForCategory:(id)arg1 ;
-(void)updateSuggestions:(id)arg1 categories:(id)arg2 ;
-(void)endUpdatingSuggestions;
-(void)setSearchGlobalScopeControl:(SearchScopeControl *)arg1 ;
-(SearchScopeControl *)searchGlobalScopeControl;
-(void)setTableViewModel:(id)arg1 animated:(char)arg2 ;
-(char)_delegateAllowsCategory:(id)arg1 cachedValues:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<MFSearchSuggestionsControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id<MFSearchSuggestionsControllerDelegate>)delegate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(char)hasSuggestions;
-(void)clearSuggestions;
@end

