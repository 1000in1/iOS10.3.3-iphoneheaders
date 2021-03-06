/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStore/AppStore-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <AppStore/ASCategoriesControllerDelegate.h>
#import <libobjc.A.dylib/SKUIViewControllerTesting.h>

@protocol OS_dispatch_source, ASCategoriesControllerProtocol, ASCategoriesSelectionViewControllerDelegate;
@class JSManagedValue, IKJSNavigationDocument, SKUILoadingView, NSObject, UICollectionView, UIViewController, NSString;

@interface ASCategoriesSelectionViewController : SKUIViewController <ASCategoriesControllerDelegate, SKUIViewControllerTesting> {

	JSManagedValue* _managedNavigationDocument;
	IKJSNavigationDocument* _navigationDocument;
	SKUILoadingView* _loadingView;
	NSObject*<OS_dispatch_source> _loadingTimeoutTimer;
	char _highlightsSelection;
	UICollectionView* _collectionView;
	id<ASCategoriesControllerProtocol> _categoriesController;
	id<ASCategoriesSelectionViewControllerDelegate> _delegate;
	UIViewController* _errorViewController;

}

@property (nonatomic,readonly) UICollectionView * collectionView;                                          //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) id<ASCategoriesControllerProtocol> categoriesController;                    //@synthesize categoriesController=_categoriesController - In the implementation block
@property (nonatomic,retain) UIViewController * errorViewController;                                       //@synthesize errorViewController=_errorViewController - In the implementation block
@property (assign,nonatomic,__weak) id<ASCategoriesSelectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char highlightsSelection;                                                     //@synthesize highlightsSelection=_highlightsSelection - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)categoryCellClass;
+(id)categoriesDataSourceProtocolOverride;
-(void)setHighlightsSelection:(char)arg1 ;
-(void)selectedCategory:(id)arg1 ;
-(void)refetchIgnoringCache:(char)arg1 ;
-(void)handleNearMeLocationStatusChange:(char)arg1 ;
-(void)_startLoadingTimer;
-(void)_hideLoadingView;
-(id<ASCategoriesControllerProtocol>)categoriesController;
-(void)_clearCollectionViewSelections;
-(char)highlightsSelection;
-(void)categoriesController:(id)arg1 selectedCategoryForDisplay:(id)arg2 ;
-(void)categoriesController:(id)arg1 selectedCategoryForSubmenu:(id)arg2 ;
-(void)categoriesControllerBeganLoading:(id)arg1 ;
-(void)categoriesControllerEndedLoading:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<ASCategoriesSelectionViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<ASCategoriesSelectionViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UICollectionView *)collectionView;
-(UIViewController *)errorViewController;
-(void)setErrorViewController:(UIViewController *)arg1 ;
-(void)setClientContext:(id)arg1 ;
-(void)_showLoadingView;
-(char)performTestWithName:(id)arg1 options:(id)arg2 ;
-(void)wishlist:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3 ;
-(id)initWithController:(id)arg1 ;
@end

