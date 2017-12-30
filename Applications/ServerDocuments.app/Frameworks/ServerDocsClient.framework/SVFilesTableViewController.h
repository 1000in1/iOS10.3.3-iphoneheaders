/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/ServerDocuments.app/Frameworks/ServerDocsClient.framework/ServerDocsClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <ServerDocsClient/SVFilesChildViewController.h>

@protocol SVFilesContainerViewController;
@class SVViewOptionsHeaderView, NSIndexPath, SVMetadataItem, NSTimer, SVMetadataCache, NSString, UIScrollView;

@interface SVFilesTableViewController : UITableViewController <SVFilesChildViewController> {

	id<SVFilesContainerViewController> _containerViewController;
	SVViewOptionsHeaderView* _headerView;
	NSIndexPath* _indexPathOfDownloadingFile;
	SVMetadataItem* _downloadingItem;
	NSTimer* _downloadProgressUpdateTimer;
	SVMetadataCache* _metadataCache;

}

@property (assign,nonatomic,__weak) id<SVFilesContainerViewController> containerViewController;              //@synthesize containerViewController=_containerViewController - In the implementation block
@property (nonatomic,retain) SVViewOptionsHeaderView * headerView;                                           //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPathOfDownloadingFile;                                       //@synthesize indexPathOfDownloadingFile=_indexPathOfDownloadingFile - In the implementation block
@property (nonatomic,retain) SVMetadataItem * downloadingItem;                                               //@synthesize downloadingItem=_downloadingItem - In the implementation block
@property (nonatomic,retain) NSTimer * downloadProgressUpdateTimer;                                          //@synthesize downloadProgressUpdateTimer=_downloadProgressUpdateTimer - In the implementation block
@property (nonatomic,retain) SVMetadataCache * metadataCache;                                                //@synthesize metadataCache=_metadataCache - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SVViewOptionsHeaderView * viewOptionsHeaderView; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
-(void)metadataCacheDidUpdateContents:(id)arg1 ;
-(SVViewOptionsHeaderView *)viewOptionsHeaderView;
-(id)initWithContainerViewController:(id)arg1 metadataCache:(id)arg2 ;
-(NSIndexPath *)indexPathOfDownloadingFile;
-(SVMetadataItem *)downloadingItem;
-(void)setIndexPathOfDownloadingFile:(NSIndexPath *)arg1 ;
-(void)setDownloadingItem:(SVMetadataItem *)arg1 ;
-(void)updateDownloadProgress:(id)arg1 ;
-(void)setDownloadProgressUpdateTimer:(NSTimer *)arg1 ;
-(void)disableAndDimCollectionViewCellsForSelectedIndexPath:(id)arg1 ;
-(NSTimer *)downloadProgressUpdateTimer;
-(void)enableAllCells;
-(id)showDownloadProgressForItem:(id)arg1 ;
-(void)cancelDownloadProgressForItem:(id)arg1 ;
-(void)scrollItemToVisible:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)flashToEmphasizeItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(UIScrollView *)scrollView;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(void)viewDidLoad;
-(SVViewOptionsHeaderView *)headerView;
-(void)setHeaderView:(SVViewOptionsHeaderView *)arg1 ;
-(void)updateFonts;
-(SVMetadataCache *)metadataCache;
-(void)setMetadataCache:(SVMetadataCache *)arg1 ;
-(id<SVFilesContainerViewController>)containerViewController;
-(void)setContainerViewController:(id<SVFilesContainerViewController>)arg1 ;
@end

