/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Videos/Videos-Structs.h>
#import <UIKit/UITabBarController.h>
#import <UIKit/UITabBarControllerDelegate.h>
#import <Videos/VideosNavigationControllerViewLayoutObserver.h>

@class NSArray, VideosTabBarSegmentedControl, NSString;

@interface VideosTabBarController : UITabBarController <UITabBarControllerDelegate, VideosNavigationControllerViewLayoutObserver> {

	NSArray* _customizableViewControllerIdentifiers;
	Class _viewControllerFactoryClass;
	NSArray* _viewControllerIdentifiers;
	VideosTabBarSegmentedControl* _videosTabBarSegmentedControl;

}

@property (assign,nonatomic,__weak) id<VideosTabBarControllerDelegate> delegate; 
@property (nonatomic,copy) NSArray * customizableViewControllerIdentifiers;                            //@synthesize customizableViewControllerIdentifiers=_customizableViewControllerIdentifiers - In the implementation block
@property (nonatomic,readonly) NSArray * filteredViewControllerIdentifiers; 
@property (nonatomic,copy) NSString * selectedViewControllerIdentifier; 
@property (nonatomic,retain) Class viewControllerFactoryClass;                                         //@synthesize viewControllerFactoryClass=_viewControllerFactoryClass - In the implementation block
@property (nonatomic,copy) NSArray * viewControllerIdentifiers;                                        //@synthesize viewControllerIdentifiers=_viewControllerIdentifiers - In the implementation block
@property (nonatomic,retain) VideosTabBarSegmentedControl * videosTabBarSegmentedControl;              //@synthesize videosTabBarSegmentedControl=_videosTabBarSegmentedControl - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_shouldForwardViewWillTransitionToSize;
+(Class)_moreNavigationControllerClass;
-(void)setSelectedViewControllerIdentifier:(NSString *)arg1 ;
-(void)viewDidLayoutSubviewsForNavigationController:(id)arg1 ;
-(void)setViewControllerFactoryClass:(Class)arg1 ;
-(void)_tabBarItemSelected:(id)arg1 ;
-(void)_refreshTabBar;
-(void)_recursivelyConfigureTitleForVideosTabBarVisibilityInViewController:(id)arg1 ;
-(void)_layoutTabBar;
-(char)presentModalViewControllerIfAppropriate:(id)arg1 ;
-(void)_selectSegmentAtIndex:(unsigned)arg1 ;
-(char)shouldSelectViewController:(id)arg1 ;
-(void)_reloadTabBarFromIdentifiersAnimated:(char)arg1 ;
-(id)_identifierForViewControllerAtIndex:(unsigned)arg1 ;
-(Class)viewControllerFactoryClass;
-(id)_existingViewControllerForIdentifier:(id)arg1 ;
-(void)setViewControllerIdentifiers:(id)arg1 animated:(char)arg2 ;
-(id)_identifierForViewController:(id)arg1 ;
-(NSArray *)viewControllerIdentifiers;
-(id)_viewControllerForIdentifier:(id)arg1 ;
-(NSArray *)customizableViewControllerIdentifiers;
-(void)reloadTabsAnimated:(char)arg1 ;
-(void)reloadTabsPurgingExistingTabs:(char)arg1 ;
-(void)setCustomizableViewControllerIdentifiers:(NSArray *)arg1 ;
-(NSArray *)filteredViewControllerIdentifiers;
-(NSString *)selectedViewControllerIdentifier;
-(void)setViewControllerIdentifiers:(NSArray *)arg1 ;
-(VideosTabBarSegmentedControl *)videosTabBarSegmentedControl;
-(void)setVideosTabBarSegmentedControl:(VideosTabBarSegmentedControl *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setViewControllers:(id)arg1 animated:(char)arg2 ;
-(void)setSelectedViewController:(id)arg1 ;
-(void)setSelectedIndex:(unsigned)arg1 ;
@end

