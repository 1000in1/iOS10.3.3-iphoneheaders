/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, NSString;

@interface IMTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	char _clearsSelectionOnViewWillAppear;
	UITableView* _tableView;
	int _tableViewStyle;

}

@property (nonatomic,readonly) int tableViewStyle;                              //@synthesize tableViewStyle=_tableViewStyle - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                           //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) char clearsSelectionOnViewWillAppear;              //@synthesize clearsSelectionOnViewWillAppear=_clearsSelectionOnViewWillAppear - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(UITableView *)tableView;
-(id)initWithStyle:(int)arg1 ;
-(int)tableViewStyle;
-(void)setClearsSelectionOnViewWillAppear:(char)arg1 ;
-(char)clearsSelectionOnViewWillAppear;
@end

