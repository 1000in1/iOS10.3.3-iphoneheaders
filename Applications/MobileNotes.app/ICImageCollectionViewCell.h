/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <MobileNotes/ICImagesAndMoviesBaseCell.h>
#import <MobileNotes/ICImageAttachmentPresentationDelegate.h>

@class ICFreeTransformGestureRecognizer, ICFreeTransformableViewController, NSString;

@interface ICImageCollectionViewCell : ICImagesAndMoviesBaseCell <ICImageAttachmentPresentationDelegate> {

	ICFreeTransformGestureRecognizer* _freeTransformGestureRecognizer;
	ICFreeTransformableViewController* _freeTransformableViewController;

}

@property (nonatomic,retain) ICFreeTransformGestureRecognizer * freeTransformGestureRecognizer;                //@synthesize freeTransformGestureRecognizer=_freeTransformGestureRecognizer - In the implementation block
@property (nonatomic,retain) ICFreeTransformableViewController * freeTransformableViewController;              //@synthesize freeTransformableViewController=_freeTransformableViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)thumbnailCache;
-(id)initWithFrame:(CGRect)arg1 freeTransformEnabled:(char)arg2 ;
-(ICFreeTransformableViewController *)freeTransformableViewController;
-(char)isAttachmentEditable;
-(id)viewToPresentAttachmentFrom;
-(id)newNavigationController;
-(void)freeTransformGesture:(id)arg1 ;
-(void)setFreeTransformGestureRecognizer:(ICFreeTransformGestureRecognizer *)arg1 ;
-(ICFreeTransformGestureRecognizer *)freeTransformGestureRecognizer;
-(void)setFreeTransformableViewController:(ICFreeTransformableViewController *)arg1 ;
-(void)updatePreviewImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)prepareForReuse;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(void)setAttachment:(id)arg1 ;
-(id)attachmentImage;
@end

