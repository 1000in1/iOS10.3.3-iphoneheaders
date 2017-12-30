/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUISnippetViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class SAFmfGeoFence, UITableView, NSString;

@interface SAFMFGeoFenceSnippetController : SiriUISnippetViewController <UITableViewDataSource, UITableViewDelegate> {

	SAFmfGeoFence* aceFmfGeoFence;
	float zoomLevel;
	UITableView* _tableView;

}

@property (assign,nonatomic) float zoomLevel; 
@property (nonatomic,retain) SAFmfGeoFence * aceFmfGeoFence; 
@property (nonatomic,retain) UITableView * tableView;                     //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)snippetViewController:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)setZoomLevel:(float)arg1 ;
-(SAFmfGeoFence *)aceFmfGeoFence;
-(void)setAceFmfGeoFence:(SAFmfGeoFence *)arg1 ;
-(id)initWithAceObject:(id)arg1 ;
-(float)zoomLevel;
-(float)desiredHeight;
@end

