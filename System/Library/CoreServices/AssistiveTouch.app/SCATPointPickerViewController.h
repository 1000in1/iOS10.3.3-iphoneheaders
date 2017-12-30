/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/SCATElementManagerViewController.h>
#import <assistivetouchd/SCATMenuObserver.h>

@class SCATMenu, SCATPointPickerView, SCATPointPicker, NSString;

@interface SCATPointPickerViewController : SCATElementManagerViewController <SCATMenuObserver> {

	SCATMenu* _menu;

}

@property (nonatomic,retain) SCATMenu * menu;                                      //@synthesize menu=_menu - In the implementation block
@property (nonatomic,readonly) SCATPointPickerView * pointPickerView; 
@property (nonatomic,readonly) SCATPointPicker * pointPicker; 
@property (nonatomic,copy) NSString * prompt; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithElementManager:(id)arg1 menu:(id)arg2 ;
-(SCATPointPicker *)pointPicker;
-(void)menuWillAppear:(id)arg1 ;
-(void)menuWillDisappear:(id)arg1 ;
-(void)willPresentWithDisplayContext:(id)arg1 animated:(char)arg2 ;
-(int)pickerType;
-(SCATPointPickerView *)pointPickerView;
-(Class)classForPointPickerView;
-(id)init;
-(void)dealloc;
-(void)loadView;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(SCATMenu *)menu;
-(void)setMenu:(SCATMenu *)arg1 ;
-(void)orientationDidChange:(id)arg1 ;
@end

