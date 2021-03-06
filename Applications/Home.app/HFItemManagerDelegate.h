/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFItemManagerDelegate <NSObject>
@optional
-(void)itemManager:(id)arg1 didInsertSections:(id)arg2;
-(void)itemManager:(id)arg1 didRemoveSections:(id)arg2;
-(void)itemManager:(id)arg1 didMoveSection:(int)arg2 toSection:(int)arg3;
-(void)itemManager:(id)arg1 didInsertItem:(id)arg2 atIndexPath:(id)arg3;
-(void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3;
-(void)itemManager:(id)arg1 didMoveItem:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;
-(char)itemManager:(id)arg1 shouldUpdateItems:(id)arg2 itemUpdateOptions:(id)arg3;
-(char)itemManager:(id)arg1 performBatchUpdateBlock:(/*^block*/id)arg2;
-(void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;
-(void)itemManager:(id)arg1 didChangeOverallLoadingState:(unsigned)arg2;
-(void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
-(void)itemManager:(id)arg1 didChangeSourceItem:(id)arg2;

@end

