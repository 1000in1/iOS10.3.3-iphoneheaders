/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UITextView.h>

@interface _MFAtomFieldEditor : UITextView {

	struct {
		unsigned avoidBecomeFirstResponder : 1;
		unsigned deferringBecomeFirstResponder : 1;
	}  _flags;

}
-(id)_hostView;
-(id)_enclosingScrollView;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(char)arg2 ;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)undoManager;
-(id)selectionRectsForRange:(id)arg1 ;
-(id)textInputTraits;
-(id)_textInputTraits;
-(void)_becomeFirstResponder;
-(void)_resignFirstResponder;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)_define:(id)arg1 ;
-(void)_share:(id)arg1 ;
-(void)__resumeBecomeFirstResponder;
-(void)_lookup:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(CGRect)_rectForScrollToVisible:(NSRange)arg1 ;
-(CGRect)convertGlyphRect:(CGRect)arg1 ;
@end

