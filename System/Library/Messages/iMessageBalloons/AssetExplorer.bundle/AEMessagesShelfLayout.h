/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/AssetExplorer.bundle/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <PhotosUICore/PXAssetsTilingLayout.h>

@protocol AEMessagesShelfLayoutDelegate;
@interface AEMessagesShelfLayout : PXAssetsTilingLayout {

	CGRect* _itemFramesForCurrentDataSource;
	float _currentContentWidth;
	char _wasPreparedAtLeastOnce;
	id<AEMessagesShelfLayoutDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AEMessagesShelfLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(float)_zPositionForShelfTileKind:(unsigned)arg1 ;
-(CGRect)_cancelButtonFrameForGridFrame:(CGRect)arg1 ;
-(CGRect)_frameForGridItemAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(CGRect)_irisToggleFrameForGridFrame:(CGRect)arg1 ;
-(CGRect)_videoBadgeFrameForItemFrame:(CGRect)arg1 ;
-(CGRect)_videoDurationFrameForItemFrame:(CGRect)arg1 ;
-(CGRect)_gradientShadowFrameForItemFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<AEMessagesShelfLayoutDelegate>)arg1 ;
-(void)dealloc;
-(id<AEMessagesShelfLayoutDelegate>)delegate;
-(void)prepareLayout;
-(CGRect)contentBounds;
-(char)getGeometry:(PXTileGeometry*)arg1 group:(unsigned*)arg2 userData:(id*)arg3 forTileWithIdentifier:(PXTileIdentifier)arg4 ;
-(void)setReferenceSize:(CGSize)arg1 ;
-(void)enumerateTilesInRect:(CGRect)arg1 withOptions:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
@end

