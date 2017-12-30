/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Health/WDAddDataManualEntryItem.h>
#import <Health/WDAddDataManualEntryItemDelegate.h>

@class WDAddDataManualEntryItem, NSDate, NSString;

@interface _WDTwoPartDateRangeManualEntryItem : WDAddDataManualEntryItem <WDAddDataManualEntryItemDelegate> {

	WDAddDataManualEntryItem* _startItem;
	WDAddDataManualEntryItem* _endItem;
	NSDate* _maximumEndDate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableViewCells;
-(id)generateValue;
-(void)manualEntryItemDidUpdate:(id)arg1 ;
-(id)initWithMaximumEndDate:(id)arg1 ;
-(void)_setupEntryItems;
-(void)_startItemDidChange;
-(void)_endItemDidChange;
-(void)presentViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)beginEditing;
@end

