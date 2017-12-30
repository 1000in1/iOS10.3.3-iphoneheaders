/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextInputAdditions
@property (getter=isEditable,nonatomic,readonly) char editable; 
@property (getter=isEditing,nonatomic,readonly) char editing; 
@property (getter=_caretRect,nonatomic,readonly) CGRect caretRect; 
@optional
-(id)selectionInteractionAssistant;
-(char)_useGesturesForEditableContent;
-(id)_textInputViewForAddingGestureRecognizers;
-(char)_allowAnimatedUpdateSelectionRectViews;

@required
-(char)isEditable;
-(id)textInputView;
-(char)isEditing;
-(id)interactionAssistant;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(CGRect*)_caretRect;

@end

