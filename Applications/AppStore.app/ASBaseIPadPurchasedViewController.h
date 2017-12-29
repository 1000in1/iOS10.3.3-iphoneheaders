/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStore/AppStore-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <AppStore/SKUIItemGridDelegate.h>
#import <libobjc.A.dylib/SKUIMenuViewControllerDelegate.h>
#import <libobjc.A.dylib/SKUIProductPageOverlayDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <libobjc.A.dylib/SKUIMessageBannerDelegate.h>
#import <AppStore/ASChildPurchasedViewController.h>

@protocol ASChildPurchasedViewControllerDelegate;
@class ASPurchasedPage, UIPopoverController, NSString, _UIContentUnavailableView, ASPurchasedHeaderView, SKUIItemGridViewController, SKUIProductPageOverlayController, SKUIMessageBanner, NSArray, SSFamilyMember;

@interface ASBaseIPadPurchasedViewController : SKUIViewController <SKUIItemGridDelegate, SKUIMenuViewControllerDelegate, SKUIProductPageOverlayDelegate, UIPopoverControllerDelegate, UISearchBarDelegate, SKUIMessageBannerDelegate, ASChildPurchasedViewController> {

	id<ASChildPurchasedViewControllerDelegate> _delegate;
	ASPurchasedPage* _page;
	UIPopoverController* _deviceTypeMenuPopover;
	UIPopoverController* _familyMemberMenuPopover;
	NSString* _familyMemberNoiTunesAccountActionURL;
	int _familyAlertReason;
	_UIContentUnavailableView* _familyMemberNoiTunesAccountView;
	ASPurchasedHeaderView* _headerView;
	SKUIItemGridViewController* _itemGridViewController;
	_UIContentUnavailableView* _noPurchasedPageView;
	SKUIProductPageOverlayController* _overlayController;
	int _overlaySourceItemIndex;
	SKUIMessageBanner* _banner;
	NSArray* _sortedFamilyMembers;
	SSFamilyMember* _activeFamilyMember;
	char _shouldShowFilterHeader;

}

@property (assign,nonatomic) char shouldShowFilterHeader;                                             //@synthesize shouldShowFilterHeader=_shouldShowFilterHeader - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<ASChildPurchasedViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) ASPurchasedPage * page;                                                  //@synthesize page=_page - In the implementation block
+(char)_shouldForwardViewWillTransitionToSize;
-(void)setShouldShowFilterHeader:(char)arg1 ;
-(void)_setFamilyBarButtonItem;
-(id)_noPurchasedPageView;
-(id)_familyMemberNoiTunesAccountView;
-(char)shouldShowFilterHeader;
-(id)_itemGridViewController;
-(id)_newMenuPopoverWithTitles:(id)arg1 images:(id)arg2 title:(id)arg3 checkedIndex:(int)arg4 ;
-(void)_filterLocalAppsAction:(id)arg1 ;
-(void)_deviceTypeButtonAction:(id)arg1 ;
-(void)_familyMemberNoiTunesAccountAction;
-(void)_signInAction;
-(id)_imageConsumer;
-(void)_familyButtonAction:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<ASChildPurchasedViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id<ASChildPurchasedViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(ASPurchasedPage *)page;
-(void)setPage:(ASPurchasedPage *)arg1 ;
-(id)_headerView;
-(id)productPageOverlay:(id)arg1 flipSourceViewToDismissItem:(id)arg2 ;
-(id)productPageOverlay:(id)arg1 flipSourceViewToPresentItem:(id)arg2 ;
-(void)productPageOverlayDidDismiss:(id)arg1 ;
-(id)_popSourceViewForOverlayController:(id)arg1 ;
-(void)menuViewController:(id)arg1 didSelectItemAtIndex:(int)arg2 ;
-(void)askPermissionBannerDidSelect:(id)arg1 ;
-(void)askPermissionBannerDidClear:(id)arg1 ;
-(void)itemGrid:(id)arg1 didPerformEditActionForItem:(id)arg2 atIndex:(int)arg3 ;
-(void)itemGrid:(id)arg1 didSelectItem:(id)arg2 atIndex:(int)arg3 ;
-(void)itemGridWillBeginDragging:(id)arg1 ;
-(Class)_cellClass;
@end
