/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/SCATSimpleElementManager.h>

@class NSArray, SCATScrollViewPickerViewController;

@interface SCATScrollViewPickerManager : SCATSimpleElementManager {

	NSArray* _scrollViews;
	NSArray* _elementsToScroll;
	int _scrollAction;
	SCATScrollViewPickerViewController* _pickerViewController;

}

@property (nonatomic,retain) SCATScrollViewPickerViewController * pickerViewController;              //@synthesize pickerViewController=_pickerViewController - In the implementation block
@property (nonatomic,retain) NSArray * scrollViews;                                                  //@synthesize scrollViews=_scrollViews - In the implementation block
@property (nonatomic,retain) NSArray * elementsToScroll;                                             //@synthesize elementsToScroll=_elementsToScroll - In the implementation block
@property (assign,nonatomic) int scrollAction;                                                       //@synthesize scrollAction=_scrollAction - In the implementation block
-(char)handleInputAction:(int)arg1 withElement:(id)arg2 ;
-(char)canBeActiveElementManager;
-(id)allElements;
-(NSArray *)scrollViews;
-(NSArray *)elementsToScroll;
-(int)scrollAction;
-(void)setScrollViews:(NSArray *)arg1 ;
-(void)setElementsToScroll:(NSArray *)arg1 ;
-(void)setScrollAction:(int)arg1 ;
-(void)dealloc;
-(id)viewController;
-(SCATScrollViewPickerViewController *)pickerViewController;
-(void)setPickerViewController:(SCATScrollViewPickerViewController *)arg1 ;
@end

