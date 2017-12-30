/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/AuxiliaryDebugViewController.h>

@protocol MapsDebugViewControllerDelegate;
@class NSArray;

@interface ServiceURLsDebugController : AuxiliaryDebugViewController {

	NSArray* _serviceURLs;
	id<MapsDebugViewControllerDelegate> _delegate;

}
+(id)navigationDestinationTitle;
-(void)updateCurrentTestEnvironmentKeys;
-(void)customURLDidChange:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)delegate;
-(id)title;
@end

