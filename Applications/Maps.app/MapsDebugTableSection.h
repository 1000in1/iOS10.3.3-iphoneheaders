/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray, MapsDebugValuesViewController, NSString;

@interface MapsDebugTableSection : NSObject {

	NSMutableArray* _mutableRows;
	NSArray* _rows;
	MapsDebugValuesViewController* _displayingViewController;
	NSString* _title;
	NSString* _footer;

}

@property (assign,nonatomic,__weak) MapsDebugValuesViewController * displayingViewController;              //@synthesize displayingViewController=_displayingViewController - In the implementation block
@property (nonatomic,copy) NSString * title;                                                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * footer;                                                              //@synthesize footer=_footer - In the implementation block
@property (nonatomic,readonly) NSArray * rows;                                                             //@synthesize rows=_rows - In the implementation block
-(id)addCheckmarkRowsGroupWithContent:(/*^block*/id)arg1 object:(id)arg2 key:(id)arg3 ;
-(id)addButtonRowWithTitle:(id)arg1 action:(/*^block*/id)arg2 ;
-(id)addEmptySectionBannerRowWithTitle:(id)arg1 ;
-(id)addNavigationRowWithTitle:(id)arg1 action:(/*^block*/id)arg2 ;
-(id)addNavigationRowForViewControllerClass:(Class)arg1 ;
-(id)addNavigationRowWithTitle:(id)arg1 viewControllerContent:(/*^block*/id)arg2 ;
-(id)addSwitchRowWithTitle:(id)arg1 defaultsKey:(id)arg2 ;
-(id)addSwitchRowWithTitle:(id)arg1 userDefaults:(id)arg2 defaultsKey:(id)arg3 ;
-(id)addSwitchRowWithTitle:(id)arg1 defaultsKey:(id)arg2 switchOnStateIfUnset:(char)arg3 changeHandler:(/*^block*/id)arg4 ;
-(id)addSwitchRowWithTitle:(id)arg1 defaultsKey:(id)arg2 userDefaults:(id)arg3 switchOnStateIfUnset:(char)arg4 changeHandler:(/*^block*/id)arg5 ;
-(id)addSwitchRowWithTitle:(id)arg1 get:(/*^block*/id)arg2 set:(/*^block*/id)arg3 ;
-(id)addSliderRowWithTitle:(id)arg1 subtitleStringFormat:(id)arg2 min:(float)arg3 max:(float)arg4 get:(/*^block*/id)arg5 set:(/*^block*/id)arg6 ;
-(id)addSliderRowWithTitle:(id)arg1 subtitleStringFormat:(id)arg2 min:(float)arg3 max:(float)arg4 defaultsKey:(id)arg5 sliderValueIfUnset:(float)arg6 changeHandler:(/*^block*/id)arg7 ;
-(id)addTextFieldRowWithTitle:(id)arg1 placeholderText:(id)arg2 inputType:(int)arg3 get:(/*^block*/id)arg4 set:(/*^block*/id)arg5 ;
-(id)addTextFieldRowWithTitle:(id)arg1 placeholderText:(id)arg2 inputType:(int)arg3 defaultsKey:(id)arg4 ;
-(id)addGEOTextFieldRowWithTitle:(id)arg1 placeholderText:(id)arg2 inputType:(int)arg3 defaultsKey:(id)arg4 ;
-(id)addCheckmarkRowsGroupWithContent:(/*^block*/id)arg1 get:(/*^block*/id)arg2 set:(/*^block*/id)arg3 ;
-(id)addCheckmarkRowsGroupWithContent:(/*^block*/id)arg1 defaultsKey:(id)arg2 checkedRowValueIfUnset:(id)arg3 changeHandler:(/*^block*/id)arg4 ;
-(id)addCheckmarkRowsGroupWithContent:(/*^block*/id)arg1 defaultsKey:(id)arg2 changeHandler:(/*^block*/id)arg3 ;
-(MapsDebugValuesViewController *)displayingViewController;
-(void)setDisplayingViewController:(MapsDebugValuesViewController *)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)commit;
-(NSArray *)rows;
-(void)addRow:(id)arg1 ;
-(NSString *)footer;
-(void)setFooter:(NSString *)arg1 ;
@end

