/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextViewDelegate <NSObject,UIScrollViewDelegate>
@optional
-(void)textViewDidBeginEditing:(id)arg1;
-(void)textViewDidEndEditing:(id)arg1;
-(char)textViewShouldBeginEditing:(id)arg1;
-(char)textViewShouldEndEditing:(id)arg1;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3;
-(void)textViewDidChange:(id)arg1;
-(void)textViewDidChangeSelection:(id)arg1;
-(char)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(int)arg4;
-(char)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3;
-(char)textView:(id)arg1 shouldInteractWithTextAttachment:(id)arg2 inRange:(NSRange)arg3 interaction:(int)arg4;
-(char)textView:(id)arg1 shouldInteractWithTextAttachment:(id)arg2 inRange:(NSRange)arg3;

@end

