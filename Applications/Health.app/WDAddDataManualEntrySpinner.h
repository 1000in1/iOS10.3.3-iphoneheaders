/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Health/WDAddDataManualEntryItem.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@protocol WDAddDataManualEntrySpinnerDataSource;
@class UIPickerView, WDManualDataEntryTableViewCell, NSString;

@interface WDAddDataManualEntrySpinner : WDAddDataManualEntryItem <UIPickerViewDataSource, UIPickerViewDelegate> {

	UIPickerView* _pickerView;
	WDManualDataEntryTableViewCell* _tableViewCell;
	int _selectedPickerViewIndex;
	id<WDAddDataManualEntrySpinnerDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<WDAddDataManualEntrySpinnerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableViewCells;
-(id)generateValue;
-(void)_updateTableViewCellValue;
-(void)setDataSource:(id<WDAddDataManualEntrySpinnerDataSource>)arg1 ;
-(int)numberOfComponentsInPickerView:(id)arg1 ;
-(int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2 ;
-(id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4 ;
-(void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3 ;
-(void)setTitle:(id)arg1 ;
-(id<WDAddDataManualEntrySpinnerDataSource>)dataSource;
-(void)setValue:(id)arg1 ;
-(void)beginEditing;
@end

