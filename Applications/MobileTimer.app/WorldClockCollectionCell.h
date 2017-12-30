/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol WorldClockCollectionCellDelegate;
@class UIButton, WorldClockCity, MTWorldClockView;

@interface WorldClockCollectionCell : UICollectionViewCell {

	char _editing;
	id<WorldClockCollectionCellDelegate> _delegate;
	UIButton* _deleteButton;
	WorldClockCity* _city;
	MTWorldClockView* _worldClockView;

}

@property (nonatomic,retain) UIButton * deleteButton;                                           //@synthesize deleteButton=_deleteButton - In the implementation block
@property (nonatomic,retain) MTWorldClockView * worldClockView;                                 //@synthesize worldClockView=_worldClockView - In the implementation block
@property (assign,nonatomic,__weak) id<WorldClockCollectionCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEditing,nonatomic) char editing;                                     //@synthesize editing=_editing - In the implementation block
@property (nonatomic,retain) WorldClockCity * city;                                             //@synthesize city=_city - In the implementation block
-(void)deleteTapped:(id)arg1 ;
-(void)handleContentSizeChange;
-(void)setWorldClockView:(MTWorldClockView *)arg1 ;
-(MTWorldClockView *)worldClockView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<WorldClockCollectionCellDelegate>)arg1 ;
-(id<WorldClockCollectionCellDelegate>)delegate;
-(void)stop;
-(void)start;
-(char)isEditing;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)setEditing:(char)arg1 ;
-(float)preferredHeight;
-(void)setCity:(WorldClockCity *)arg1 ;
-(UIButton *)deleteButton;
-(void)setDeleteButton:(UIButton *)arg1 ;
-(WorldClockCity *)city;
@end

