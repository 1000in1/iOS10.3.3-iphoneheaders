/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/TV.app/TV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TV/VideosDetailViewController.h>

@class VideosTVEpisodesTableViewController, VideosDetailsTextViewController, VideosRelatedStoreItemsCollectionViewController, MPUNotificationObserver, MPMediaItem, NSArray;

@interface VideosTVSeasonDetailViewController : VideosDetailViewController {

	VideosTVEpisodesTableViewController* _episodesViewController;
	VideosDetailsTextViewController* _detailsViewController;
	VideosRelatedStoreItemsCollectionViewController* _relatedViewController;
	MPUNotificationObserver* _detailsTextViewContentSizeObserver;
	MPMediaItem* _representativeItem;
	NSArray* _segments;

}

@property (nonatomic,retain) VideosTVEpisodesTableViewController * episodesViewController;                         //@synthesize episodesViewController=_episodesViewController - In the implementation block
@property (nonatomic,retain) VideosDetailsTextViewController * detailsViewController;                              //@synthesize detailsViewController=_detailsViewController - In the implementation block
@property (nonatomic,retain) VideosRelatedStoreItemsCollectionViewController * relatedViewController;              //@synthesize relatedViewController=_relatedViewController - In the implementation block
@property (getter=_currentDownloads,nonatomic,readonly) NSArray * currentDownloads; 
@property (nonatomic,retain) MPUNotificationObserver * detailsTextViewContentSizeObserver;                         //@synthesize detailsTextViewContentSizeObserver=_detailsTextViewContentSizeObserver - In the implementation block
@property (getter=_downloadableItems,nonatomic,readonly) NSArray * downloadableItems; 
@property (nonatomic,retain) MPMediaItem * representativeItem;                                                     //@synthesize representativeItem=_representativeItem - In the implementation block
@property (nonatomic,copy) NSArray * segments;                                                                     //@synthesize segments=_segments - In the implementation block
+(char)shouldShowDownloadProgress;
-(VideosDetailsTextViewController *)detailsViewController;
-(void)setDetailsViewController:(VideosDetailsTextViewController *)arg1 ;
-(char)showDetailsForItem:(id)arg1 ;
-(void)_allowsStorePurchaseDidChange:(id)arg1 ;
-(void)_updateDetailsViewController;
-(void)reloadSegments;
-(VideosRelatedStoreItemsCollectionViewController *)relatedViewController;
-(void)_updateRelatedViewController;
-(void)_cloudButtonPressed:(id)arg1 ;
-(id)localizedTitleForSegment:(unsigned)arg1 ;
-(id)viewControllerForSegment:(unsigned)arg1 ;
-(void)setRelatedViewController:(VideosRelatedStoreItemsCollectionViewController *)arg1 ;
-(VideosTVEpisodesTableViewController *)episodesViewController;
-(id)_downloadableItems;
-(id)_currentDownloads;
-(char)_setupDownloadObserver;
-(char)_hasAvailableDownloads;
-(void)_updateForChangedDownloads:(id)arg1 ;
-(void)setEpisodesViewController:(VideosTVEpisodesTableViewController *)arg1 ;
-(MPUNotificationObserver *)detailsTextViewContentSizeObserver;
-(void)setDetailsTextViewContentSizeObserver:(MPUNotificationObserver *)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)viewDidLayoutSubviews;
-(unsigned)numberOfSegments;
-(MPMediaItem *)representativeItem;
-(void)setRepresentativeItem:(MPMediaItem *)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(NSArray *)segments;
-(void)setSegments:(NSArray *)arg1 ;
@end

