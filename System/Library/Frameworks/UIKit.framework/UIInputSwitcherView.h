/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardMenuView.h>

@class NSMutableArray, UISwitch, NSArray;

@interface UIInputSwitcherView : UIKeyboardMenuView {

	unsigned m_currentInputModeIndex;
	char m_fileReportFromSwitcher;
	NSMutableArray* m_inputModes;
	UISwitch* m_predictiveSwitch;
	UISwitch* m_assistantSwitch;
	UISwitch* m_floatingSwitch;
	NSMutableArray* m_switches;
	int m_numberOfInputModes;
	char _messagesWriteboardFromSwitcher;

}

@property (nonatomic,retain) NSArray * inputModes; 
@property (assign,nonatomic) char messagesWriteboardFromSwitcher;              //@synthesize messagesWriteboardFromSwitcher=_messagesWriteboardFromSwitcher - In the implementation block
@property (assign,nonatomic) char fileReportFromSwitcher; 
+(id)activeInstance;
+(id)sharedInstance;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)show;
-(void)dealloc;
-(unsigned)numberOfItems;
-(void)setInputMode:(id)arg1 ;
-(id)selectedInputMode;
-(void)selectInputMode:(id)arg1 ;
-(NSArray *)inputModes;
-(id)nextInputMode;
-(id)previousInputMode;
-(void)setInputModes:(NSArray *)arg1 ;
-(CGSize)preferredSize;
-(unsigned)defaultSelectedIndex;
-(id)predictiveSwitch;
-(void)toggleKeyboardPredictionPreference;
-(id)assistantSwitch;
-(void)toggleKeyboardAssistantPreference;
-(id)floatingSwitch;
-(void)toggleKeyboardFloatingPreference;
-(void)didSelectItemAtIndex:(unsigned)arg1 ;
-(id)localizedTitleForItemAtIndex:(unsigned)arg1 ;
-(id)fontForItemAtIndex:(unsigned)arg1 ;
-(id)switches;
-(id)subtitleForItemAtIndex:(unsigned)arg1 ;
-(id)subtitleFontForItemAtIndex:(unsigned)arg1 ;
-(id)titleForItemAtIndex:(unsigned)arg1 ;
-(void)setFileReportFromSwitcher:(char)arg1 ;
-(char)fileReportFromSwitcher;
-(void)switchAction;
-(void)selectRowForInputMode:(id)arg1 ;
-(unsigned)currentSelectedRow;
-(void)selectNextInputMode;
-(void)selectPreviousInputMode;
-(char)messagesWriteboardFromSwitcher;
-(void)setMessagesWriteboardFromSwitcher:(char)arg1 ;
@end

