/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RAPTablePartSection.h>

@class NSArray;

@interface RAPTableCheckmarkRadioSection : RAPTablePartSection {

	NSArray* _values;
	id _owner;
	/*^block*/id _configure;
	/*^block*/id _selection;
	id _selectedValue;

}

@property (nonatomic,copy) NSArray * values;                //@synthesize values=_values - In the implementation block
@property (nonatomic,retain) id selectedValue;              //@synthesize selectedValue=_selectedValue - In the implementation block
-(int)rowsCount;
-(id)cellForRowAtIndex:(int)arg1 ;
-(void)didSelectCellForRowAtIndex:(int)arg1 tableIndexPath:(id)arg2 ;
-(void)registerReuseIdentifiersForCells;
-(Class)defaultCellClass;
-(void)configureCell:(id)arg1 forValue:(id)arg2 ;
-(id)dequeueCellForValue:(id)arg1 ;
-(id)initWithOwner:(id)arg1 configureForValue:(/*^block*/id)arg2 selection:(/*^block*/id)arg3 ;
-(id)initWithOwner:(id)arg1 initialValues:(id)arg2 initialSelectedValue:(id)arg3 configureForValue:(/*^block*/id)arg4 selection:(/*^block*/id)arg5 ;
-(void)selectedValueDidChange;
-(id)init;
-(NSArray *)values;
-(void)setValues:(NSArray *)arg1 ;
-(void)setSelectedValue:(id)arg1 ;
-(id)selectedValue;
@end

