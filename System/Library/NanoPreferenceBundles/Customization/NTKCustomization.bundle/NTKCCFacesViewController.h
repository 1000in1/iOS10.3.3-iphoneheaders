/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/NTKCustomization.bundle/NTKCustomization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NTKCustomization/NTKCustomization-Structs.h>
#import <BridgePreferences/BPSNTKFacesViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <NTKCustomization/NTKFaceObserver.h>
#import <NTKCustomization/NTKFaceCollectionObserver.h>
#import <NTKCustomization/NTKCCFaceDetailViewControllerDelegate.h>

@class NTKFaceCollection, UIView, UILabel, UIButton, NSLayoutConstraint, UICollectionView, UICollectionViewFlowLayout, NSMutableArray, NTKCCFaceDetailViewController, NTKCCLibraryListViewController, NSString;

@interface NTKCCFacesViewController : BPSNTKFacesViewController <UICollectionViewDelegate, UICollectionViewDataSource, NTKFaceObserver, NTKFaceCollectionObserver, NTKCCFaceDetailViewControllerDelegate> {

	char _visible;
	NTKFaceCollection* _library;
	UIView* _headerView;
	UILabel* _titleLabel;
	UIButton* _editButton;
	UIView* _topSeparatorView;
	NSLayoutConstraint* _titleBaselineConstraint;
	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _layout;
	NSMutableArray* _faceVCs;
	NTKCCFaceDetailViewController* _presentedDetailVC;
	NTKCCLibraryListViewController* _presentedListVC;
	CGSize _faceSize;

}

@property (nonatomic,retain) NTKFaceCollection * library;                                    //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                            //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIButton * editButton;                                          //@synthesize editButton=_editButton - In the implementation block
@property (nonatomic,retain) UIView * topSeparatorView;                                      //@synthesize topSeparatorView=_topSeparatorView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleBaselineConstraint;                   //@synthesize titleBaselineConstraint=_titleBaselineConstraint - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * layout;                            //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) CGSize faceSize;                                                //@synthesize faceSize=_faceSize - In the implementation block
@property (nonatomic,retain) NSMutableArray * faceVCs;                                       //@synthesize faceVCs=_faceVCs - In the implementation block
@property (assign,nonatomic) char visible;                                                   //@synthesize visible=_visible - In the implementation block
@property (nonatomic,retain) NTKCCFaceDetailViewController * presentedDetailVC;              //@synthesize presentedDetailVC=_presentedDetailVC - In the implementation block
@property (nonatomic,retain) NTKCCLibraryListViewController * presentedListVC;               //@synthesize presentedListVC=_presentedListVC - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)height;
+(void)setDisplayDevice:(id)arg1 ;
-(void)_editDoneTapped;
-(void)_fontSizeDidChange;
-(void)_showBearTrap;
-(void)_popLibraryDetailViewControllerForFace:(id)arg1 ;
-(void)_removeViewControllerForFace:(id)arg1 ;
-(void)setTitleBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setFaceVCs:(NSMutableArray *)arg1 ;
-(void)libraryDetail:(id)arg1 didSelectFace:(id)arg2 ;
-(char)libraryDetail:(id)arg1 canRemoveFace:(id)arg2 ;
-(void)libraryDetail:(id)arg1 didRemoveFace:(id)arg2 ;
-(void)_resetCollectionView;
-(void)setPresentedListVC:(NTKCCLibraryListViewController *)arg1 ;
-(char)_canTouchCollectionView;
-(id)_viewControllerForFace:(id)arg1 ;
-(void)_faceAddedFromGallery:(id)arg1 ;
-(void)setPresentedDetailVC:(NTKCCFaceDetailViewController *)arg1 ;
-(void)_reloadFaces;
-(void)_loadLibrary;
-(void)_editTapped;
-(NTKCCFaceDetailViewController *)presentedDetailVC;
-(NSMutableArray *)faceVCs;
-(NSLayoutConstraint *)titleBaselineConstraint;
-(NTKCCLibraryListViewController *)presentedListVC;
-(void)setFaceSize:(CGSize)arg1 ;
-(void)dealloc;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)visible;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(UILabel *)titleLabel;
-(UICollectionViewFlowLayout *)layout;
-(UICollectionView *)collectionView;
-(void)setVisible:(char)arg1 ;
-(void)viewDidLoad;
-(void)setLayout:(UICollectionViewFlowLayout *)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NTKFaceCollection *)library;
-(void)setLibrary:(NTKFaceCollection *)arg1 ;
-(CGSize)faceSize;
-(UIButton *)editButton;
-(void)faceConfigurationDidChange:(id)arg1 ;
-(void)_activeDeviceChanged;
-(void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)faceCollectionDidReorderFaces:(id)arg1 ;
-(void)faceCollectionDidLoad:(id)arg1 ;
-(UIView *)topSeparatorView;
-(void)setTopSeparatorView:(UIView *)arg1 ;
-(void)setEditButton:(UIButton *)arg1 ;
@end

