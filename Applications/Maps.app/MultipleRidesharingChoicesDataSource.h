/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/ScrollViewDelegateProxy.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol TableViewDataSourceDelegateRouteOverviewCellDelegateRidesharingRideChoiceBookingDelegateRidesharingAppLargeIconTableViewCellDelegateRidesharingOpenAppTableViewCellDelegate;
@class NSMutableArray, NSArray, NSMutableSet, NSString;

@interface MultipleRidesharingChoicesDataSource : ScrollViewDelegateProxy <UITableViewDelegate, UITableViewDataSource> {

	NSMutableArray* _appChoicesProviders;
	NSArray* _disabledApplications;
	NSArray* _appSuggestions;
	NSMutableSet* _disabledApplicationsToPresentLoadingView;
	id<TableViewDataSourceDelegate><RouteOverviewCellDelegate><RidesharingRideChoiceBookingDelegate><RidesharingAppLargeIconTableViewCellDelegate><RidesharingOpenAppTableViewCellDelegate> _delegate;

}

@property (nonatomic,retain) NSMutableArray * appChoicesProviders;                                                                                                                                                                                 //@synthesize appChoicesProviders=_appChoicesProviders - In the implementation block
@property (nonatomic,readonly) NSArray * disabledApplications;                                                                                                                                                                                     //@synthesize disabledApplications=_disabledApplications - In the implementation block
@property (nonatomic,readonly) NSArray * appSuggestions;                                                                                                                                                                                           //@synthesize appSuggestions=_appSuggestions - In the implementation block
@property (nonatomic,readonly) NSMutableSet * disabledApplicationsToPresentLoadingView;                                                                                                                                                            //@synthesize disabledApplicationsToPresentLoadingView=_disabledApplicationsToPresentLoadingView - In the implementation block
@property (assign,nonatomic,__weak) id<TableViewDataSourceDelegate><RouteOverviewCellDelegate><RidesharingRideChoiceBookingDelegate><RidesharingAppLargeIconTableViewCellDelegate><RidesharingOpenAppTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cellClasses;
+(id)headerFooterViewClasses;
-(NSArray *)appSuggestions;
-(id)indexPathForChoice:(id)arg1 ;
-(id)indexPathForLoadingProvider:(id)arg1 ;
-(id)indexPathForProviderWithFailure:(id)arg1 ;
-(id)choicesProviderAtSection:(int)arg1 ;
-(id)choiceForRowAtIndexPath:(id)arg1 ;
-(id)disabledApplicationForRowAtIndexPath:(id)arg1 ;
-(id)iTunesIdentifierFromSuggestedAppForRowAtIndexPath:(id)arg1 ;
-(id)currentChoiceProviderForApplication:(id)arg1 ;
-(char)displaysSmallerExplanatoryCellForIndexPath:(id)arg1 ;
-(unsigned)totalRidesharingChoices;
-(void)_configureHeader:(id)arg1 forSection:(int)arg2 ;
-(char)_hasDisabledApplicationsSection;
-(int)_disabledApplicationsSection;
-(char)_hasSuggestedApplicationsSection;
-(int)_suggestedApplicationsSection;
-(void)_configureRouteOverviewCell:(id)arg1 forChoice:(id)arg2 ;
-(void)_configureRouteOverviewCell:(id)arg1 forProvider:(id)arg2 ;
-(void)_configureOpenAppCell:(id)arg1 forProvider:(id)arg2 ;
-(void)_configureSuggestedAppCell:(id)arg1 forLookupItem:(id)arg2 ;
-(void)_configureSuggestedAppCell:(id)arg1 forDisabledApplication:(id)arg2 ;
-(void)_configureSuggestedAppCell:(id)arg1 forLoadingDisabledApplication:(id)arg2 ;
-(void)_configureSeparatorStyleOnCell:(id)arg1 withIndexPath:(id)arg2 onTableView:(id)arg3 ;
-(void)setAppChoicesProviders:(id)arg1 disabledApplications:(id)arg2 appSuggestions:(id)arg3 ;
-(void)replaceAppChoicesProviderAtIndex:(unsigned)arg1 withAppChoicesProvider:(id)arg2 ;
-(void)removeDisabledApplicationAtIndex:(unsigned)arg1 andInsertChoiceProvider:(id)arg2 atIndex:(unsigned)arg3 ;
-(NSMutableArray *)appChoicesProviders;
-(void)setAppChoicesProviders:(NSMutableArray *)arg1 ;
-(NSArray *)disabledApplications;
-(NSMutableSet *)disabledApplicationsToPresentLoadingView;
-(id)init;
-(void)setDelegate:(id<TableViewDataSourceDelegate><RouteOverviewCellDelegate><RidesharingRideChoiceBookingDelegate><RidesharingAppLargeIconTableViewCellDelegate><RidesharingOpenAppTableViewCellDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<TableViewDataSourceDelegate><RouteOverviewCellDelegate><RidesharingRideChoiceBookingDelegate><RidesharingAppLargeIconTableViewCellDelegate><RidesharingOpenAppTableViewCellDelegate>)delegate;
@end

