/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <MobileNotes/ICNotesListTableViewCell.h>

@class ICAttachmentBrickView;

@interface ICSearchTableViewCellAttachment : ICNotesListTableViewCell {

	ICAttachmentBrickView* _brick;

}

@property (nonatomic,retain) ICAttachmentBrickView * brick;              //@synthesize brick=_brick - In the implementation block
-(ICAttachmentBrickView *)brick;
-(float)computeRowHeight;
-(Class)attachmentBrickViewClass;
-(void)setAttachment:(id)arg1 searchResult:(id)arg2 ;
-(void)awakeFromNib;
-(void)prepareForReuse;
-(UIFont*)preferredFont;
-(void)setBrick:(ICAttachmentBrickView *)arg1 ;
-(void)contentSizeCategoryDidChange;
@end
