/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UICollectionViewLayoutAttributes, UICollectionReusableView;

@interface _UICollectionViewPrefetchItem : NSObject {

	char _hasPrefetchedData;
	UICollectionViewLayoutAttributes* _attributes;
	UICollectionReusableView* _view;

}

@property (nonatomic,retain) UICollectionViewLayoutAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) char hasPrefetchedData;                                     //@synthesize hasPrefetchedData=_hasPrefetchedData - In the implementation block
@property (nonatomic,retain) UICollectionReusableView * view;                            //@synthesize view=_view - In the implementation block
-(id)description;
-(UICollectionReusableView *)view;
-(void)setView:(UICollectionReusableView *)arg1 ;
-(UICollectionViewLayoutAttributes *)attributes;
-(void)setHasPrefetchedData:(char)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(void)setAttributes:(UICollectionViewLayoutAttributes *)arg1 ;
-(char)hasPrefetchedData;
@end

