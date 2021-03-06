/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/SCATModernMenuItemDelegate.h>

@class NSArray, SCATStaticElementProvider, UIViewController, UICollectionViewLayout, SCATMenu, UICollectionView, SCATModernMenuSheetCollectionViewController, SCATModernMenuViewController, NSString;

@interface SCATModernMenuSheet : NSObject <SCATModernMenuItemDelegate> {

	NSArray* _menuItems;
	char _collectionBased;
	char _shouldIncludeBackItem;
	SCATStaticElementProvider* _elementProvider;
	UIViewController* _viewController;
	UICollectionViewLayout* _collectionViewLayout;
	SCATMenu* _menu;
	UICollectionView* _collectionView;

}

@property (nonatomic,retain) UIViewController * viewController;                                                         //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) SCATMenu * menu;                                                                           //@synthesize menu=_menu - In the implementation block
@property (nonatomic,retain) UICollectionViewLayout * collectionViewLayout;                                             //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (nonatomic,readonly) SCATModernMenuSheetCollectionViewController * scatCollectionViewController; 
@property (getter=isCollectionBased,nonatomic,readonly) char collectionBased;                                           //@synthesize collectionBased=_collectionBased - In the implementation block
@property (nonatomic,readonly) SCATModernMenuViewController * menuViewController; 
@property (nonatomic,retain,readonly) SCATStaticElementProvider * elementProvider;                                      //@synthesize elementProvider=_elementProvider - In the implementation block
@property (assign,nonatomic) char shouldIncludeBackItem;                                                                //@synthesize shouldIncludeBackItem=_shouldIncludeBackItem - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                                         //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) NSArray * menuItems; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isValidForElement:(id)arg1 ;
-(char)shouldUpdateMenuItem:(id)arg1 ;
-(void)menuItemWasActivated:(id)arg1 ;
-(id)makeMenuItemsIfNeeded;
-(id)menuItemStruts;
-(char)allowsBackAction;
-(char)allowsExitAction;
-(char)shouldAllowDwellSelection;
-(char)shouldKeepScannerAwake;
-(SCATStaticElementProvider *)elementProvider;
-(id)initWithMenu:(id)arg1 ;
-(void)viewControllerViewWillDisappear:(char)arg1 ;
-(void)didPressScreenChangingButton;
-(id)backTitle;
-(char)shouldUseBackItemAsDoneItem;
-(int)preferredTipObject;
-(char)isBackItemIdentifier:(id)arg1 ;
-(void)didChangeOrientation;
-(void)setShouldIncludeBackItem:(char)arg1 ;
-(char)isCollectionBased;
-(unsigned)numberOfPagesRequired;
-(CGRect)rectToClear;
-(id)alternateTipElement;
-(char)delegatesScannerControl;
-(void)willFocusOnContext:(id)arg1 ;
-(void)didFocusOnContext:(id)arg1 oldContext:(id)arg2 ;
-(void)willUnfocusFromContext:(id)arg1 ;
-(id)menuItemsForCustomActions:(id)arg1 activateBehavior:(unsigned)arg2 ;
-(unsigned)numberOfItemsInFirstPage;
-(void)invalidateMenuItems;
-(char)shouldIncludeTextLabels;
-(Class)_menuItemClass;
-(void)_setupForCollectionBasedSheet;
-(char)shouldIncludeBackItem;
-(id)_filteredMenuItemsForGuidedAccessIfNeeded:(id)arg1 ;
-(id)_scannerGroupsForMenuItems:(id)arg1 ;
-(SCATModernMenuSheetCollectionViewController *)scatCollectionViewController;
-(id)_fallbackImageForCustomActionMenuItem:(id)arg1 charactersInUse:(id)arg2 ;
-(void)_setupForCustomSheet:(id)arg1 ;
-(SCATModernMenuViewController *)menuViewController;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)reload;
-(UICollectionViewLayout *)collectionViewLayout;
-(UICollectionView *)collectionView;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(unsigned)currentPage;
-(void)setCollectionViewLayout:(UICollectionViewLayout *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setMenuItems:(NSArray *)arg1 ;
-(NSArray *)menuItems;
-(SCATMenu *)menu;
-(void)setMenu:(SCATMenu *)arg1 ;
-(id)itemWithIdentifier:(id)arg1 ;
-(unsigned)presentationMode;
-(void)viewControllerViewWillAppear:(char)arg1 ;
@end

