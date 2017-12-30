/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBAwayListItem.h>

@class SBSCardItem, UIImage, NSString;

@interface SBAwayCardListItem : SBAwayListItem {

	SBSCardItem* _cardItem;
	UIImage* _cardThumbnail;
	UIImage* _iconImage;

}

@property (nonatomic,retain) UIImage * cardThumbnail;                //@synthesize cardThumbnail=_cardThumbnail - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                    //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,copy) SBSCardItem * cardItem;                   //@synthesize cardItem=_cardItem - In the implementation block
@property (nonatomic,__weak,readonly) NSString * title; 
@property (nonatomic,__weak,readonly) NSString * body; 
-(void)setCardThumbnail:(UIImage *)arg1 ;
-(void)setCardItem:(SBSCardItem *)arg1 ;
-(UIImage *)cardThumbnail;
-(NSString *)title;
-(NSString *)body;
-(UIImage *)iconImage;
-(SBSCardItem *)cardItem;
-(void)setIconImage:(UIImage *)arg1 ;
-(id)sortDate;
-(char)inertWhenLocked;
@end

