/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.podcasts.SpotlightIndexExtension/com.apple.podcasts.SpotlightIndexExtension-Structs.h>
#import <com.apple.podcasts.SpotlightIndexExtension/IMViewController.h>
#import <com.apple.podcasts.SpotlightIndexExtension/IMLibraryBooksDataSourceDelegate.h>

@protocol IMLibraryBooksViewControllerDelegate;
@class NSPredicate, NSArray, IMToolbar, UIBarButtonItem, NSString, UITextField, IMLibraryBooksDataSource;

@interface IMLibraryBooksViewController : IMViewController <IMLibraryBooksDataSourceDelegate> {

	id<IMLibraryBooksViewControllerDelegate> _delegate;
	NSPredicate* _mainPredicate;
	NSPredicate* _compoundPredicate;
	NSArray* _embeddedToolbarItems;
	IMToolbar* _embeddedToolbar;
	char _repeatAppearance;
	UIBarButtonItem* _searchBarItem;
	NSString* _hiddenObjectID;
	char _multiselectEnabled;
	UITextField* _searchField;
	Class _cellPrototype;
	IMLibraryBooksDataSource* _dataSource;
	CGPoint _oldContentOffset;

}

@property (assign,nonatomic) id<IMLibraryBooksViewControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSPredicate * mainPredicate;                                      //@synthesize mainPredicate=_mainPredicate - In the implementation block
@property (assign,getter=isMultiselectEnabled,nonatomic) char multiselectEnabled;              //@synthesize multiselectEnabled=_multiselectEnabled - In the implementation block
@property (nonatomic,retain) IMLibraryBooksDataSource * dataSource;                            //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) UITextField * searchField; 
@property (nonatomic,readonly) UIBarButtonItem * searchBarItem; 
@property (nonatomic,retain) IMToolbar * embeddedToolbar;                                      //@synthesize embeddedToolbar=_embeddedToolbar - In the implementation block
@property (nonatomic,retain) NSArray * embeddedToolbarItems;                                   //@synthesize embeddedToolbarItems=_embeddedToolbarItems - In the implementation block
@property (nonatomic,retain) NSString * hiddenObjectID;                                        //@synthesize hiddenObjectID=_hiddenObjectID - In the implementation block
@property (assign,nonatomic) Class cellPrototype;                                              //@synthesize cellPrototype=_cellPrototype - In the implementation block
@property (assign,nonatomic) CGPoint oldContentOffset;                                         //@synthesize oldContentOffset=_oldContentOffset - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)coverArtDesiredSize;
-(id)sectionNameKeyPathForDataSource:(id)arg1 ;
-(id)predicateForDataSource:(id)arg1 ;
-(id)sortDescriptorsForDataSource:(id)arg1 ;
-(void)releaseViews;
-(char)wantsEmbeddedToolbar;
-(IMToolbar *)embeddedToolbar;
-(CGPoint)contentOffsetForTop;
-(void)repopulateDisplay;
-(CGPoint)oldContentOffset;
-(void)setOldContentOffset:(CGPoint)arg1 ;
-(NSArray *)embeddedToolbarItems;
-(void)setEmbeddedToolbarItems:(NSArray *)arg1 ;
-(void)searchTextDidChange:(id)arg1 ;
-(Class)cellPrototype;
-(char)isBookFullyVisible:(id)arg1 ;
-(void)scrollToMakeObjectVisible:(id)arg1 ;
-(CGRect)coverRectForObject:(id)arg1 generic:(char*)arg2 ;
-(void)setEmbeddedToolbar:(IMToolbar *)arg1 ;
-(char)wantsCollectionAnimation;
-(void)setCellPrototype:(Class)arg1 ;
-(void)setMainPredicate:(NSPredicate *)arg1 ;
-(id)coverImageForObject:(id)arg1 ;
-(CGRect)coverRectForObject:(id)arg1 ;
-(CGRect)shadowRectForObject:(id)arg1 ;
-(id)borderForObject:(id)arg1 ;
-(void)setEmptySpot:(char)arg1 forObject:(id)arg2 ;
-(void)resetSpotForObject:(id)arg1 ;
-(void)setSearchTextWithoutSearching:(id)arg1 ;
-(UIBarButtonItem *)searchBarItem;
-(id)collectionChangeParametersForObject:(id)arg1 visibleOnly:(char)arg2 ;
-(id)collectionChangeParametersForObjects:(id)arg1 ;
-(char)isMultiselectEnabled;
-(void)setMultiselectEnabled:(char)arg1 ;
-(NSPredicate *)mainPredicate;
-(NSString *)hiddenObjectID;
-(void)setHiddenObjectID:(NSString *)arg1 ;
-(void)setDataSource:(IMLibraryBooksDataSource *)arg1 ;
-(void)setDelegate:(id<IMLibraryBooksViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(IMLibraryBooksDataSource *)dataSource;
-(id<IMLibraryBooksViewControllerDelegate>)delegate;
-(id)allObjects;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)searchBar;
-(id)searchText;
-(UITextField *)searchField;
-(void)setSearchText:(id)arg1 ;
@end
