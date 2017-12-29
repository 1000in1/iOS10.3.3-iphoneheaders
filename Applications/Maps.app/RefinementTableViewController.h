/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UITableViewController.h>

@protocol RefinementSelectionDelegate;
@class SearchInfo, NSDictionary;

@interface RefinementTableViewController : UITableViewController {

	SearchInfo* _refinementSearchInfo;
	NSDictionary* _textAttributes;
	id<RefinementSelectionDelegate> _delegate;

}

@property (nonatomic,retain) SearchInfo * refinementSearchInfo;                            //@synthesize refinementSearchInfo=_refinementSearchInfo - In the implementation block
@property (assign,nonatomic,__weak) id<RefinementSelectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setRefinementSearchInfo:(SearchInfo *)arg1 ;
-(SearchInfo *)refinementSearchInfo;
-(void)setDelegate:(id<RefinementSelectionDelegate>)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<RefinementSelectionDelegate>)delegate;
-(CGSize)preferredContentSize;
-(id)initWithStyle:(int)arg1 ;
@end
