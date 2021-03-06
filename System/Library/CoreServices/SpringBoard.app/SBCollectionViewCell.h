/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>

@protocol SBCollectionViewCellDelegate;
@interface SBCollectionViewCell : UICollectionViewCell {

	char _performSetHighlighted;
	char _protectDelayedUnhighlights;
	id<SBCollectionViewCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char protectDelayedUnhighlights;                               //@synthesize protectDelayedUnhighlights=_protectDelayedUnhighlights - In the implementation block
-(void)setHighlighted:(char)arg1 afterDelay:(double)arg2 ;
-(void)_performSetHighlighted;
-(void)_didSetHighlighted:(char)arg1 ;
-(char)protectDelayedUnhighlights;
-(void)setProtectDelayedUnhighlights:(char)arg1 ;
-(void)setDelegate:(id<SBCollectionViewCellDelegate>)arg1 ;
-(id<SBCollectionViewCellDelegate>)delegate;
-(void)setHighlighted:(char)arg1 ;
-(void)prepareForReuse;
@end

