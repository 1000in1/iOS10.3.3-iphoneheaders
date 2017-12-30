/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Feedback Assistant iOS/Feedback Assistant iOS-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@protocol FBAExpandingTextViewTableCellDelegate;
@class FBAExpandingTextView, NSString;

@interface FBATextViewTableCell : UITableViewCell <UITextViewDelegate> {

	float _minimumHeight;
	FBAExpandingTextView* _expandingTextView;
	id<FBAExpandingTextViewTableCellDelegate> _delegate;

}

@property (nonatomic,readonly) FBAExpandingTextView * expandingTextView;                      //@synthesize expandingTextView=_expandingTextView - In the implementation block
@property (assign,nonatomic) float minimumHeight;                                             //@synthesize minimumHeight=_minimumHeight - In the implementation block
@property (nonatomic,retain) id<FBAExpandingTextViewTableCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBAExpandingTextView *)expandingTextView;
-(void)setPlaceholderAttributedText:(id)arg1 ;
-(char)canPerformPaste;
-(void)scrollToCursorForTextView:(id)arg1 ;
-(char)rectVisible:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<FBAExpandingTextViewTableCellDelegate>)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id<FBAExpandingTextViewTableCellDelegate>)delegate;
-(void)setText:(id)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(void)commonInit;
-(void)textViewDidChangeContentHeight:(id)arg1 ;
-(float)minimumHeight;
-(void)setPlaceholderText:(id)arg1 ;
-(void)setMinimumHeight:(float)arg1 ;
-(float)desiredHeight;
@end

