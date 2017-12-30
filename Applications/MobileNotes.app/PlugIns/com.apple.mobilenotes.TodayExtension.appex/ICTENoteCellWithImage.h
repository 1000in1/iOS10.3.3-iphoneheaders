/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/PlugIns/com.apple.mobilenotes.TodayExtension.appex/com.apple.mobilenotes.TodayExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.mobilenotes.TodayExtension/ICTENoteCell.h>

@class ICImageAndMovieThumbnailView, NSLayoutConstraint;

@interface ICTENoteCellWithImage : ICTENoteCell {

	ICImageAndMovieThumbnailView* _thumbnailView;
	NSLayoutConstraint* _previewImageViewHeightConstraint;
	NSLayoutConstraint* _previewImageViewBottomConstraint;

}

@property (assign,nonatomic,__weak) ICImageAndMovieThumbnailView * thumbnailView;                       //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * previewImageViewHeightConstraint;              //@synthesize previewImageViewHeightConstraint=_previewImageViewHeightConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * previewImageViewBottomConstraint;              //@synthesize previewImageViewBottomConstraint=_previewImageViewBottomConstraint - In the implementation block
-(NSLayoutConstraint *)previewImageViewHeightConstraint;
-(void)setPreviewImageViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)previewImageViewBottomConstraint;
-(void)setPreviewImageViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setNote:(id)arg1 ;
-(void)setThumbnailView:(ICImageAndMovieThumbnailView *)arg1 ;
-(ICImageAndMovieThumbnailView *)thumbnailView;
@end

