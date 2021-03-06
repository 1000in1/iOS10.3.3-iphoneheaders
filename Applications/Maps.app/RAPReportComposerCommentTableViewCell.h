/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@class TextViewWithPlaceholderText, NSString;

@interface RAPReportComposerCommentTableViewCell : UITableViewCell <UITextViewDelegate> {

	TextViewWithPlaceholderText* _textView;
	/*^block*/id _textDidChange;
	unsigned _maximumTextLength;

}

@property (nonatomic,copy) NSString * placeholderText; 
@property (nonatomic,copy) NSString * commentText; 
@property (nonatomic,copy) id textDidChange;                          //@synthesize textDidChange=_textDidChange - In the implementation block
@property (assign,nonatomic) unsigned maximumTextLength;              //@synthesize maximumTextLength=_maximumTextLength - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)preferredHeight;
-(void)beginEditingCommentIfPossible;
-(void)_setFont;
-(void)setPropertiesFromQuestion:(id)arg1 ;
-(void)setTextDidChange:(id)arg1 ;
-(unsigned)maximumTextLength;
-(void)setMaximumTextLength:(unsigned)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id)textDidChange;
-(void)_textDidChange;
-(NSString *)commentText;
-(void)setCommentText:(NSString *)arg1 ;
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
@end

