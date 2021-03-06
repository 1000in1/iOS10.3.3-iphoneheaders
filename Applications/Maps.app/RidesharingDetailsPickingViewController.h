/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/ExtensionsStackViewController.h>
#import <Maps/HeaderViewDelegate.h>
#import <Maps/BannerContaineeProtocol.h>

@protocol BannerContainerProtocol, RidesharingDetailsPickingProvider;
@class NSArray, ContainerHeaderView, RouteFromToView, ExtensionsPrimaryDetailsView, ExtensionsPayView, ExtensionsSecondaryDetailsView, ExtensionsActionsFooterView, ProminentActionButton, TopBannerItem, RidesharingCoordinator, NSString;

@interface RidesharingDetailsPickingViewController : ExtensionsStackViewController <HeaderViewDelegate, BannerContaineeProtocol> {

	ContainerHeaderView* _containerHeaderView;
	RouteFromToView* _routeFromToView;
	ExtensionsPrimaryDetailsView* _primaryDetailsView;
	ExtensionsPayView* _payView;
	ExtensionsSecondaryDetailsView* _secondaryDetailsView;
	ExtensionsActionsFooterView* _openAppView;
	ProminentActionButton* _requestButton;
	TopBannerItem* _moveMapPromptItem;
	char _finishedPickingDetails;
	NSArray* _topBannerItems;
	id<BannerContainerProtocol> _bannerContainer;
	id<RidesharingDetailsPickingProvider> _detailsPickingProvider;
	RidesharingCoordinator* _coordinator;

}

@property (nonatomic,retain) id<RidesharingDetailsPickingProvider> detailsPickingProvider;                     //@synthesize detailsPickingProvider=_detailsPickingProvider - In the implementation block
@property (assign,nonatomic,__weak) RidesharingCoordinator * coordinator;                                      //@synthesize coordinator=_coordinator - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char allowsLimitedInteractionOnly; 
@property (assign,nonatomic,__weak) UIViewController*<ContainerProtocol> containerViewController; 
@property (assign,nonatomic) char presentedModally; 
@property (assign,nonatomic) char takesAvailableHeight; 
@property (nonatomic,readonly) NSArray * topBannerItems;                                                       //@synthesize topBannerItems=_topBannerItems - In the implementation block
@property (assign,nonatomic,__weak) id<BannerContainerProtocol> bannerContainer;                               //@synthesize bannerContainer=_bannerContainer - In the implementation block
-(NSArray *)topBannerItems;
-(unsigned)defaultLayoutForStyle:(unsigned)arg1 ;
-(char)allowsLongPressToMarkLocation;
-(char)allowsQuickActionMenuInMap;
-(char)updateConstraintsForLayout:(unsigned)arg1 ;
-(float)heightForLayout:(unsigned)arg1 ;
-(void)headerViewButtonTapped:(id)arg1 ;
-(id<BannerContainerProtocol>)bannerContainer;
-(void)setBannerContainer:(id<BannerContainerProtocol>)arg1 ;
-(id)stackedViews;
-(void)_updateFromProvider:(id)arg1 ;
-(void)_showExpirationAlert;
-(void)_selectPaymentType;
-(void)_openApp;
-(id<RidesharingDetailsPickingProvider>)detailsPickingProvider;
-(void)setDetailsPickingProvider:(id<RidesharingDetailsPickingProvider>)arg1 ;
-(void)setCoordinator:(RidesharingCoordinator *)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(char)_isPresented;
-(RidesharingCoordinator *)coordinator;
-(void)_request;
-(id)initWithProvider:(id)arg1 ;
@end

