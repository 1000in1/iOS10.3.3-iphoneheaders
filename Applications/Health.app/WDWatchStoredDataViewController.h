/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Health/WDSourceStoredDataViewController.h>

@interface WDWatchStoredDataViewController : WDSourceStoredDataViewController {

	char _watchPaired;

}

@property (assign) char watchPaired;              //@synthesize watchPaired=_watchPaired - In the implementation block
-(void)updateTableHeaderViewForUnpairedWatch;
-(void)handlePairedWatchIdentifiers:(id)arg1 ;
-(void)addUnpairedWatchHeaderView;
-(char)watchPaired;
-(void)setWatchPaired:(char)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
@end

