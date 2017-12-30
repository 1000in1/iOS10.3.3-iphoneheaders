/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <MapKit/_MKTableViewController.h>

@protocol HeightProviding, UIScrollViewDelegate;
@class VKTrafficIncident;

@interface TrafficIncidentsViewController : _MKTableViewController {

	id<HeightProviding> _heightProvider;
	VKTrafficIncident* _incident;
	id<UIScrollViewDelegate> _scrollViewDelegate;

}

@property (nonatomic,retain) VKTrafficIncident * incident;                                    //@synthesize incident=_incident - In the implementation block
@property (nonatomic,readonly) id<HeightProviding> heightProvider;                            //@synthesize heightProvider=_heightProvider - In the implementation block
@property (assign,nonatomic,__weak) id<UIScrollViewDelegate> scrollViewDelegate;              //@synthesize scrollViewDelegate=_scrollViewDelegate - In the implementation block
-(void)updateTheme;
-(void)setIncident:(VKTrafficIncident *)arg1 ;
-(void)updateForLightLevel:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(id<UIScrollViewDelegate>)scrollViewDelegate;
-(void)setScrollViewDelegate:(id<UIScrollViewDelegate>)arg1 ;
-(id<HeightProviding>)heightProvider;
-(id)_cellForRow:(int)arg1 inSection:(int)arg2 ;
-(VKTrafficIncident *)incident;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(char)isDimmed;
@end

