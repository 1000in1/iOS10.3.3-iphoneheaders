/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/HashtagImages.app/PlugIns/HashtagImagesExtension.appex/HashtagImagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HashtagImagesExtension/HashtagImagesExtension-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <HashtagImagesExtension/STSSuggestionViewDelegate.h>
#import <HashtagImagesExtension/STSSearchModelQuerySuggestionsDelegate.h>

@protocol STSSuggestionViewControllerDelegate;
@class STSSearchModel, STSSuggestionView, NSString;

@interface STSSuggestionViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, STSSuggestionViewDelegate, STSSearchModelQuerySuggestionsDelegate> {

	STSSearchModel* _searchModel;
	id<STSSuggestionViewControllerDelegate> _selectionDelegate;

}

@property (nonatomic,retain) STSSuggestionView * view; 
@property (nonatomic,retain) STSSearchModel * searchModel;                                                  //@synthesize searchModel=_searchModel - In the implementation block
@property (assign,nonatomic,__weak) id<STSSuggestionViewControllerDelegate> selectionDelegate;              //@synthesize selectionDelegate=_selectionDelegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateFooterOrigin;
-(void)suggestionViewDidTapLogo:(id)arg1 ;
-(void)searchModelWillFetchQuerySuggestionsCompletions:(id)arg1 ;
-(void)searchModelUpdatedQuerySuggestions:(id)arg1 ;
-(void)updateQuerySuggestions:(id)arg1 ;
-(void)updateContentOffset:(float)arg1 ;
-(void)_updateFooterOriginForBoundsHeight:(float)arg1 ;
-(void)_hideNoticeOverlay;
-(void)noticeViewDidDismiss:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)clearSuggestions;
-(id<STSSuggestionViewControllerDelegate>)selectionDelegate;
-(void)setSearchModel:(STSSearchModel *)arg1 ;
-(STSSearchModel *)searchModel;
-(void)setSelectionDelegate:(id<STSSuggestionViewControllerDelegate>)arg1 ;
@end

