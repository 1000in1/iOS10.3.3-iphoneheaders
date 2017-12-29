/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.podcasts.SpotlightIndexExtension/com.apple.podcasts.SpotlightIndexExtension-Structs.h>
#import <com.apple.podcasts.SpotlightIndexExtension/IMViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol IMSegmentedViewControllerDelegate;
@class NSArray, IMViewControllerTransition, UITableView, UIView, UIViewController, NSString;

@interface IMSegmentedViewController : IMViewController <UIScrollViewDelegate> {

	int _selectedIndex;
	NSArray* _viewControllers;
	IMViewControllerTransition* _defaultTransition;
	id<IMSegmentedViewControllerDelegate> _delegate;
	UITableView* _contentTableView;
	float _headerInset;
	UIView* _contentView;
	UIView* _headerView;
	float _headerHeight;

}

@property (nonatomic,retain) UIView * contentView;                                        //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) int selectedIndex;                                           //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (nonatomic,readonly) UIViewController * selectedViewController; 
@property (nonatomic,retain) NSArray * viewControllers;                                   //@synthesize viewControllers=_viewControllers - In the implementation block
@property (nonatomic,retain) IMViewControllerTransition * defaultTransition;              //@synthesize defaultTransition=_defaultTransition - In the implementation block
@property (assign,nonatomic) id<IMSegmentedViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                         //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) float headerHeight;                                          //@synthesize headerHeight=_headerHeight - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)viewControllerAtIndex:(int)arg1 ;
-(void)releaseViews;
-(void)showViewController:(id)arg1 sendAppearaneMessages:(char)arg2 ;
-(void)reconcileChildViewControllersWithOldViewControllers:(id)arg1 newViewControllers:(id)arg2 ;
-(void)selectDefaultIndex;
-(void)setSelectedIndex:(int)arg1 withTransition:(id)arg2 ;
-(void)setSelectedIndex:(int)arg1 withTransition:(id)arg2 force:(char)arg3 ;
-(char)shouldSelectViewController:(id)arg1 force:(char)arg2 ;
-(void)didSelectViewController:(id)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)contentView;
-(void)setDelegate:(id<IMSegmentedViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IMSegmentedViewControllerDelegate>)delegate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(NSArray *)viewControllers;
-(void)setViewControllers:(NSArray *)arg1 ;
-(UIViewController *)selectedViewController;
-(int)selectedIndex;
-(void)setSelectedIndex:(int)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(float)headerHeight;
-(void)setHeaderHeight:(float)arg1 ;
-(void)_addHeaderView;
-(void)setSelectedIndex:(int)arg1 animated:(char)arg2 ;
-(void)setDefaultTransition:(IMViewControllerTransition *)arg1 ;
-(IMViewControllerTransition *)defaultTransition;
@end
