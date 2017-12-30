/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <MobileNotes/ICAttachmentView.h>

@class ICAttachmentBrickView;

@interface ICTextAttachmentBrickView : ICAttachmentView {

	ICAttachmentBrickView* _brickView;

}

@property (nonatomic,retain) ICAttachmentBrickView * brickView;              //@synthesize brickView=_brickView - In the implementation block
+(Class)brickViewClass;
-(void)sharedInit;
-(ICAttachmentBrickView *)brickView;
-(void)setBrickView:(ICAttachmentBrickView *)arg1 ;
-(void)dealloc;
-(void)setupConstraints;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)didChangeAttachment;
-(void)didChangeAttachmentTitle;
-(CGSize)attachmentSizeForTextContainer:(id)arg1 ;
@end

