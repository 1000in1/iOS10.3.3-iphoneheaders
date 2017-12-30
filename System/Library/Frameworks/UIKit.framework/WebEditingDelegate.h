/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WebEditingDelegate <NSObject>
@optional
-(void)webViewDidChange:(id)arg1;
-(id)undoManagerForWebView:(id)arg1;
-(char)webView:(id)arg1 shouldBeginEditingInDOMRange:(id)arg2;
-(char)webView:(id)arg1 shouldEndEditingInDOMRange:(id)arg2;
-(char)webView:(id)arg1 shouldInsertNode:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(int)arg4;
-(char)webView:(id)arg1 shouldInsertText:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(int)arg4;
-(char)webView:(id)arg1 shouldDeleteDOMRange:(id)arg2;
-(char)webView:(id)arg1 shouldChangeSelectedDOMRange:(id)arg2 toDOMRange:(id)arg3 affinity:(int)arg4 stillSelecting:(char)arg5;
-(char)webView:(id)arg1 shouldApplyStyle:(id)arg2 toElementsInDOMRange:(id)arg3;
-(char)webView:(id)arg1 shouldChangeTypingStyle:(id)arg2 toStyle:(id)arg3;
-(char)webView:(id)arg1 doCommandBySelector:(SEL)arg2;
-(void)webViewDidBeginEditing:(id)arg1;
-(void)webViewDidEndEditing:(id)arg1;
-(void)webViewDidChangeTypingStyle:(id)arg1;
-(void)webViewDidChangeSelection:(id)arg1;

@end

