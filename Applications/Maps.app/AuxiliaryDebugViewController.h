/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Maps/MapsDebugViewController.h>

@protocol MapsDebugViewControllerDelegate, MapsDebugViewControllerNavigationDelegate;
@class NSString;

@interface AuxiliaryDebugViewController : UITableViewController <MapsDebugViewController> {

	id<MapsDebugViewControllerDelegate> _delegate;
	id<MapsDebugViewControllerNavigationDelegate> _navigationDelegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MapsDebugViewControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MapsDebugViewControllerNavigationDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
+(id)navigationDestinationTitle;
-(void)segueToViewController:(id)arg1 ;
-(void)willNavigateToSubsequentController:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<MapsDebugViewControllerDelegate>)arg1 ;
-(id<MapsDebugViewControllerDelegate>)delegate;
-(char)shouldAutorotate;
-(id<MapsDebugViewControllerNavigationDelegate>)navigationDelegate;
-(void)_done;
-(void)setNavigationDelegate:(id<MapsDebugViewControllerNavigationDelegate>)arg1 ;
@end

