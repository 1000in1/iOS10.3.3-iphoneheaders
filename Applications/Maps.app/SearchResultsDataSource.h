/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/DataSourceWithLocation.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol ShareDelegate, SARSearchResultTableViewCellDelegate;
@class UITableViewRowAction, NSString, NSArray;

@interface SearchResultsDataSource : DataSourceWithLocation <UITableViewDelegate, UITableViewDataSource> {

	unsigned _currentIndex;
	UITableViewRowAction* _shareAction;
	char _displaysAsChainResult;
	char _isPresentingSearchAlongTheRouteResults;
	NSString* _resultDisplayHeader;
	NSArray* _content;
	id<ShareDelegate> _shareDelegate;
	id<SARSearchResultTableViewCellDelegate> _searchAlongTheRouteCellDelegate;

}

@property (assign,nonatomic) char displaysAsChainResult;                                                                   //@synthesize displaysAsChainResult=_displaysAsChainResult - In the implementation block
@property (nonatomic,copy) NSString * resultDisplayHeader;                                                                 //@synthesize resultDisplayHeader=_resultDisplayHeader - In the implementation block
@property (nonatomic,copy) NSArray * content;                                                                              //@synthesize content=_content - In the implementation block
@property (assign,nonatomic,__weak) id<ShareDelegate> shareDelegate;                                                       //@synthesize shareDelegate=_shareDelegate - In the implementation block
@property (assign,nonatomic) char isPresentingSearchAlongTheRouteResults;                                                  //@synthesize isPresentingSearchAlongTheRouteResults=_isPresentingSearchAlongTheRouteResults - In the implementation block
@property (assign,nonatomic,__weak) id<SARSearchResultTableViewCellDelegate> searchAlongTheRouteCellDelegate;              //@synthesize searchAlongTheRouteCellDelegate=_searchAlongTheRouteCellDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDisplaysAsChainResult:(char)arg1 ;
-(char)displaysAsChainResult;
-(id)objectsForAnalytics;
-(float)currentContentHeight;
-(void)setIsPresentingSearchAlongTheRouteResults:(char)arg1 ;
-(void)setSearchAlongTheRouteCellDelegate:(id<SARSearchResultTableViewCellDelegate>)arg1 ;
-(void)shareRowAtIndexPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<ShareDelegate>)shareDelegate;
-(void)setShareDelegate:(id<ShareDelegate>)arg1 ;
-(char)isPresentingSearchAlongTheRouteResults;
-(id<SARSearchResultTableViewCellDelegate>)searchAlongTheRouteCellDelegate;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(NSArray *)content;
-(id)initWithTableView:(id)arg1 ;
-(NSString *)resultDisplayHeader;
-(void)setResultDisplayHeader:(NSString *)arg1 ;
-(void)setContent:(NSArray *)arg1 ;
-(id)objectAtIndexPath:(id)arg1 ;
@end
