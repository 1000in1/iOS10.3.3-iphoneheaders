/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStore/AppStore-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIMessageBannerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UIColor, UITableView, SKUIMessageBanner, SSFamilyMember, NSArray, NSString;

@interface ASBaseIPhoneFamilyPurchasedViewController : SKUIViewController <SKUIMessageBannerDelegate, UITableViewDataSource, UITableViewDelegate> {

	UIColor* _borderColor;
	UITableView* _tableView;
	int _familyAlertReason;
	SKUIMessageBanner* _messageBanner;
	SSFamilyMember* _activeFamilyMember;
	NSArray* _otherFamilyMembers;

}

@property (nonatomic,retain) NSArray * otherFamilyMembers;              //@synthesize otherFamilyMembers=_otherFamilyMembers - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_shouldForwardViewWillTransitionToSize;
-(void)_reloadTableView;
-(void)_familyCircleDidChange:(id)arg1 ;
-(id)_newPurchasedViewController;
-(void)_familyCircleProfilePictureDidChange:(id)arg1 ;
-(NSArray *)otherFamilyMembers;
-(void)setOtherFamilyMembers:(NSArray *)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)_tableView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)_reloadData;
-(void)layoutCacheDidFinishBatch:(id)arg1 ;
-(void)askPermissionBannerDidSelect:(id)arg1 ;
-(void)askPermissionBannerDidClear:(id)arg1 ;
@end

