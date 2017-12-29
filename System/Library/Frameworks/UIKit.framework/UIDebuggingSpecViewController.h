/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIDebuggingInformationViewController.h>

@class UIView, NSMutableArray, UICollectionView, UICollectionViewFlowLayout, NSString;

@interface UIDebuggingSpecViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UIDebuggingInformationViewController> {

	UIView* _spec;
	NSMutableArray* _specImages;
	float _originalOpacity;
	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _flowLayout;
	CGPoint _origin;

}

@property (nonatomic,retain) UIView * spec;                                        //@synthesize spec=_spec - In the implementation block
@property (nonatomic,retain) NSMutableArray * specImages;                          //@synthesize specImages=_specImages - In the implementation block
@property (assign,nonatomic) CGPoint origin;                                       //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) float originalOpacity;                                //@synthesize originalOpacity=_originalOpacity - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                    //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * flowLayout;              //@synthesize flowLayout=_flowLayout - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGPoint)origin;
-(void)setOrigin:(CGPoint)arg1 ;
-(UICollectionView *)collectionView;
-(void)viewDidLoad;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(UICollectionViewFlowLayout *)flowLayout;
-(void)setFlowLayout:(UICollectionViewFlowLayout *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)prepareForMediaBrowser;
-(void)gotDeleteGesture:(id)arg1 ;
-(NSMutableArray *)specImages;
-(void)gotPanGesture:(id)arg1 ;
-(void)hideImage;
-(void)setSpec:(UIView *)arg1 ;
-(UIView *)spec;
-(void)setOriginalOpacity:(float)arg1 ;
-(float)originalOpacity;
-(char)startMediaBrowserFromViewController:(id)arg1 ;
-(void)setSpecImages:(NSMutableArray *)arg1 ;
@end
