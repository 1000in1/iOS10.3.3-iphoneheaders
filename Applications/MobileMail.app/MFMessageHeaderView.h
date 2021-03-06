/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIStackView.h>
#import <MobileMail/MFReusable.h>

@protocol MFMessageHeaderViewDelegate;
@class NSMutableArray, MFMessageDisplayMetrics, MFMessageHeaderViewBlock, MFMessageLoadingContext, NSArray, NSString;

@interface MFMessageHeaderView : UIStackView <MFReusable> {

	NSMutableArray* _headerBlocks;
	char _bottomSeparatorDrawsFlushWithLeadingEdge;
	id<MFMessageHeaderViewDelegate> _delegate;
	MFMessageDisplayMetrics* _displayMetrics;
	MFMessageHeaderViewBlock* _pinnedBlock;
	MFMessageLoadingContext* _messageLoadingContext;

}

@property (nonatomic,retain) MFMessageLoadingContext * messageLoadingContext;              //@synthesize messageLoadingContext=_messageLoadingContext - In the implementation block
@property (assign,nonatomic) id<MFMessageHeaderViewDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MFMessageDisplayMetrics * displayMetrics;                     //@synthesize displayMetrics=_displayMetrics - In the implementation block
@property (nonatomic,retain) MFMessageHeaderViewBlock * pinnedBlock;                       //@synthesize pinnedBlock=_pinnedBlock - In the implementation block
@property (nonatomic,copy) NSArray * headerBlocks;                                         //@synthesize headerBlocks=_headerBlocks - In the implementation block
@property (assign,nonatomic) char bottomSeparatorDrawsFlushWithLeadingEdge;                //@synthesize bottomSeparatorDrawsFlushWithLeadingEdge=_bottomSeparatorDrawsFlushWithLeadingEdge - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MFMessageDisplayMetrics *)displayMetrics;
-(void)setDisplayMetrics:(MFMessageDisplayMetrics *)arg1 ;
-(void)displayMessage:(id)arg1 ;
-(MFMessageLoadingContext *)messageLoadingContext;
-(void)setMessageFlags:(unsigned long long)arg1 conversationFlags:(unsigned long long)arg2 ;
-(void)setHeaderBlocks:(NSArray *)arg1 ;
-(void)setMessageLoadingContext:(MFMessageLoadingContext *)arg1 ;
-(void)setPinnedBlock:(MFMessageHeaderViewBlock *)arg1 ;
-(void)removeAllHeaderBlocksAnimated:(char)arg1 ;
-(void)addHeaderBlock:(id)arg1 animated:(char)arg2 ;
-(void)removeHeaderBlock:(id)arg1 animated:(char)arg2 ;
-(void)insertHeaderBlock:(id)arg1 atIndex:(unsigned)arg2 animated:(char)arg3 ;
-(void)_updateSeparators;
-(NSArray *)headerBlocks;
-(MFMessageHeaderViewBlock *)pinnedBlock;
-(id)_animationConstraintsForBlockAtIndex:(unsigned)arg1 ;
-(void)_layoutAnimatedWithCompletion:(/*^block*/id)arg1 ;
-(void)setHeaderBlocks:(id)arg1 animated:(char)arg2 ;
-(char)bottomSeparatorDrawsFlushWithLeadingEdge;
-(char)_blockHasWhiteOrClearBackground:(id)arg1 ;
-(void)setBottomSeparatorDrawsFlushWithLeadingEdge:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MFMessageHeaderViewDelegate>)arg1 ;
-(void)dealloc;
-(id<MFMessageHeaderViewDelegate>)delegate;
-(void)prepareForReuse;
-(void)drawRect:(CGRect)arg1 forViewPrintFormatter:(id)arg2 ;
@end

