/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/Maps.siriUIBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol MAListSnippetViewDelegate;
@class UITableView, CLLocation, NSArray, NSString;

@interface MAListSnippetView : UIView <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	CLLocation* _userLocation;
	char _sameTitleForAllResults;
	char _showDisclosureIndicatorInCells;
	char _shouldDisplayLocationDetail;
	char _displayForSAR;
	id<MAListSnippetViewDelegate> _delegate;
	NSArray* _mapItems;

}

@property (assign,nonatomic) char showDisclosureIndicatorInCells;                        //@synthesize showDisclosureIndicatorInCells=_showDisclosureIndicatorInCells - In the implementation block
@property (assign,nonatomic) char shouldDisplayLocationDetail;                           //@synthesize shouldDisplayLocationDetail=_shouldDisplayLocationDetail - In the implementation block
@property (assign,getter=isDisplayForSAR,nonatomic) char displayForSAR;                  //@synthesize displayForSAR=_displayForSAR - In the implementation block
@property (assign,nonatomic,__weak) id<MAListSnippetViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mapItems;                                  //@synthesize mapItems=_mapItems - In the implementation block
@property (nonatomic,retain) CLLocation * userLocation; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isDisplayForSAR;
-(void)setShowDisclosureIndicatorInCells:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 mapItems:(id)arg2 ;
-(void)setDisplayForSAR:(char)arg1 ;
-(void)setShouldDisplayLocationDetail:(char)arg1 ;
-(id)_mapItemForRow:(int)arg1 ;
-(float)_preferredHeightForRow:(int)arg1 ;
-(id)_prepareTableViewCellForRow:(int)arg1 ;
-(char)shouldDisplayLocationDetail;
-(char)_checkAllItemsHaveSameTitle;
-(char)showDisclosureIndicatorInCells;
-(void)layoutSubviews;
-(void)setDelegate:(id<MAListSnippetViewDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<MAListSnippetViewDelegate>)delegate;
-(void)_handleTap:(id)arg1 ;
-(void)setUserLocation:(CLLocation *)arg1 ;
-(NSArray *)mapItems;
-(CLLocation *)userLocation;
-(float)desiredHeight;
@end

