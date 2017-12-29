/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iCloudDriveApp.app/iCloudDriveApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCloudDriveApp/iCloudDriveApp-Structs.h>
#import <UIKit/UIViewController.h>

@class UIView, PreviewItemManager, UIScrollView, UIBarButtonItem, NSLayoutConstraint;

@interface PreviewBaseViewController : UIViewController {

	UIView* _wrapperView;
	PreviewItemManager* _itemManager;
	int _mode;
	UIScrollView* _scrollView;
	UIView* _contentView;
	id _subscriber;
	UIBarButtonItem* _barButtonActionItem;
	UIBarButtonItem* _barButtonDeleteItem;
	UIBarButtonItem* _barButtonMoveItem;
	NSLayoutConstraint* _parentLeadingConstraint;
	NSLayoutConstraint* _parentTrailingConstraint;
	NSLayoutConstraint* _parentTopConstraint;
	NSLayoutConstraint* _parentBottomConstraint;
	int _lastProgressChunk;

}

@property (nonatomic,retain) id subscriber;                                              //@synthesize subscriber=_subscriber - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * barButtonActionItem;                      //@synthesize barButtonActionItem=_barButtonActionItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * barButtonDeleteItem;                      //@synthesize barButtonDeleteItem=_barButtonDeleteItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * barButtonMoveItem;                        //@synthesize barButtonMoveItem=_barButtonMoveItem - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * parentLeadingConstraint;               //@synthesize parentLeadingConstraint=_parentLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * parentTrailingConstraint;              //@synthesize parentTrailingConstraint=_parentTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * parentTopConstraint;                   //@synthesize parentTopConstraint=_parentTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * parentBottomConstraint;                //@synthesize parentBottomConstraint=_parentBottomConstraint - In the implementation block
@property (assign,nonatomic) int lastProgressChunk;                                      //@synthesize lastProgressChunk=_lastProgressChunk - In the implementation block
@property (nonatomic,retain) UIView * wrapperView;                                       //@synthesize wrapperView=_wrapperView - In the implementation block
@property (assign,nonatomic,__weak) PreviewItemManager * itemManager;                    //@synthesize itemManager=_itemManager - In the implementation block
@property (assign,nonatomic) int mode;                                                   //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                  //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                       //@synthesize contentView=_contentView - In the implementation block
-(void)configureButtons;
-(UIView *)wrapperView;
-(int)currentPseudoOrientation;
-(void)openInDefaultApp:(id)arg1 ;
-(void)refreshItem;
-(void)configureMargins;
-(UIEdgeInsets)scrollViewDefaultEdgeInsets;
-(id)openInAppNavControllerButton;
-(void)showMoveTarget:(id)arg1 ;
-(void)showWarningAndDeleteDocument:(id)arg1 ;
-(UIBarButtonItem *)barButtonDeleteItem;
-(void)setBarButtonDeleteItem:(UIBarButtonItem *)arg1 ;
-(void)setBarButtonMoveItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)barButtonMoveItem;
-(void)setWrapperView:(UIView *)arg1 ;
-(void)setLastProgressChunk:(int)arg1 ;
-(void)unregisterProgress;
-(void)setParentLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setParentTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setParentTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setParentBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)parentLeadingConstraint;
-(NSLayoutConstraint *)parentTrailingConstraint;
-(NSLayoutConstraint *)parentTopConstraint;
-(NSLayoutConstraint *)parentBottomConstraint;
-(int)lastProgressChunk;
-(void)showDocumentActivities:(id)arg1 ;
-(void)registerForProgress;
-(UIBarButtonItem *)barButtonActionItem;
-(void)setBarButtonActionItem:(UIBarButtonItem *)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)contentView;
-(void)loadView;
-(UIScrollView *)scrollView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)viewDidLoad;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setupConstraints;
-(void)updateProgress:(id)arg1 ;
-(id)subscriber;
-(void)setSubscriber:(id)arg1 ;
-(PreviewItemManager *)itemManager;
-(void)setItemManager:(PreviewItemManager *)arg1 ;
@end
