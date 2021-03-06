/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarKitSettings/CRTableViewCell.h>

@class CRCollectionView, UIImage;

@interface _CRCollectionTableCell : CRTableViewCell {

	CRCollectionView* _collectionView;
	UIImage* _cellDecorationImage;

}

@property (nonatomic,readonly) CRCollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) UIImage * cellDecorationImage;                  //@synthesize cellDecorationImage=_cellDecorationImage - In the implementation block
-(void)createCollectionViewWithLayout:(id)arg1 cellDecorationImage:(id)arg2 ;
-(UIImage *)cellDecorationImage;
-(CRCollectionView *)collectionView;
@end

