/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/MapsDebugTableRow.h>

@class MapsDebugCheckmarkRowsGroup;

@interface MapsDebugCheckmarkRow : MapsDebugTableRow {

	char _checked;
	/*^block*/id _get;
	id _value;
	MapsDebugCheckmarkRowsGroup* _rowsGroup;

}

@property (nonatomic,retain) id value;                                             //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) id get;                                                 //@synthesize get=_get - In the implementation block
@property (nonatomic,retain) MapsDebugCheckmarkRowsGroup * rowsGroup;              //@synthesize rowsGroup=_rowsGroup - In the implementation block
-(MapsDebugCheckmarkRowsGroup *)rowsGroup;
-(void)setRowsGroup:(MapsDebugCheckmarkRowsGroup *)arg1 ;
-(void)_configureCellForCheckedValue:(id)arg1 ;
-(id)init;
-(void)invalidate;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)reuseIdentifier;
-(void)update;
-(id)get;
-(void)setGet:(id)arg1 ;
-(void)configureCell:(id)arg1 ;
@end

