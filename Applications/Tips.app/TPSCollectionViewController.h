/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Tips.app/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tips/TPSTipsViewController.h>
#import <Tips/TPSCollectionsTableViewControllerDelegate.h>

@class NSString, TPSCollectionsController;

@interface TPSCollectionViewController : TPSTipsViewController <TPSCollectionsTableViewControllerDelegate> {

	char _supports3DTouch;
	NSString* _currentCollectionFirstTipID;
	NSString* _pendingCollectionID;
	NSString* _pendingTipID;
	TPSCollectionsController* _collectionsController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showCollectionsTableViewAnimated:(char)arg1 ;
-(void)fetchControllerDataUpdated:(id)arg1 listChanged:(char)arg2 ;
-(id)initWithAppController:(id)arg1 tipsController:(id)arg2 ;
-(void)updateWithCollectionID:(id)arg1 tipID:(id)arg2 ;
-(void)fetchControllerDidFinishLoading:(id)arg1 ;
-(void)collectionListViewController:(id)arg1 didSelectCollection:(id)arg2 ;
-(void)showCollectionsList;
-(void)updateCollectionsBarButtonItem;
-(void)updateTipsForCurrentCollection;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)showError;
-(void)updateShortcutItems;
@end

