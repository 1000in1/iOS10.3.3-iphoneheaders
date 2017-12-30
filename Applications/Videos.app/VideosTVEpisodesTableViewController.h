/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUTableViewController.h>
#import <TV/MPUCompletionQueryDataSourceDelegate.h>
#import <TV/MPUCompletionFooterViewDelegate.h>

@class NSIndexPath, VideosTVSeasonEpisodesDataSource, NSString;

@interface VideosTVEpisodesTableViewController : MPUTableViewController <MPUCompletionQueryDataSourceDelegate, MPUCompletionFooterViewDelegate> {

	char _alignCellSeparatorInsetsWithLabels;
	char _hasPendingScrollForDeepLink;
	NSIndexPath* _expandedIndexPath;

}

@property (nonatomic,retain) NSIndexPath * expandedIndexPath;                                   //@synthesize expandedIndexPath=_expandedIndexPath - In the implementation block
@property (assign,nonatomic) char hasPendingScrollForDeepLink;                                  //@synthesize hasPendingScrollForDeepLink=_hasPendingScrollForDeepLink - In the implementation block
@property (nonatomic,readonly) VideosTVSeasonEpisodesDataSource * queryDataSource; 
@property (assign,nonatomic) char alignCellSeparatorInsetsWithLabels;                           //@synthesize alignCellSeparatorInsetsWithLabels=_alignCellSeparatorInsetsWithLabels - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)usesCellConfigurations;
+(id)mediaEntityPropertiesToFetch;
-(char)showDetailsForItem:(id)arg1 ;
-(void)setAlignCellSeparatorInsetsWithLabels:(char)arg1 ;
-(char)hasPendingScrollForDeepLink;
-(void)setHasPendingScrollForDeepLink:(char)arg1 ;
-(NSIndexPath *)expandedIndexPath;
-(void)setExpandedIndexPath:(NSIndexPath *)arg1 ;
-(char)alignCellSeparatorInsetsWithLabels;
-(void)_configureFooterView:(id)arg1 forOffer:(id)arg2 ;
-(void)_moreEpisodesAction:(id)arg1 ;
-(int)_footerStyle;
-(void)setDataSource:(id)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidLoad;
-(id)initWithDataSource:(id)arg1 ;
-(id)_createTableView;
-(id)reuseIdentifierForCellAtIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 withEntity:(id)arg3 invalidationContext:(id)arg4 ;
-(void)completionFooterView:(id)arg1 purchaseCollectionFromOffering:(id)arg2 ;
-(void)completionFooterView:(id)arg1 didChangePreferredVariant:(int)arg2 ;
-(void)completionFooterView:(id)arg1 showItemsInOffering:(id)arg2 ;
-(void)completionQueryDataSource:(id)arg1 didUpdateOffer:(id)arg2 forSectionAtIndex:(int)arg3 ;
-(void)completionQueryDataSource:(id)arg1 didLoadOffer:(id)arg2 forSectionAtIndex:(int)arg3 ;
-(void)completionQueryDataSource:(id)arg1 didRemoveOfferForSectionAtIndex:(int)arg2 ;
@end

