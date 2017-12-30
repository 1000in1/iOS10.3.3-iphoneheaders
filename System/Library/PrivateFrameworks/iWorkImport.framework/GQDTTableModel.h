/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:35 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDNameMappable.h>

@class NSString;

@interface GQDTTableModel : NSObject <GQDNameMappable> {

	unsigned short mColumnCount;
	unsigned short mRowCount;
	CFStringRef mName;
	char mNameVisible;
	CFArrayRef mColumnWidths;
	CFArrayRef mRowHeights;
	CFArrayRef mColumnVisibilities;
	CFArrayRef mRowVisibilities;
	unsigned short mHeaderRowCount;
	unsigned short mHeaderColumnCount;
	unsigned short mFooterRowCount;
	CFArrayRef mCells;
	CFArrayRef mColumnGroupDisplayTypes;
	int mNumGroupLevels;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const StateSpec*)stateForReading;
-(unsigned short)headerColumnCount;
-(unsigned short)footerRowCount;
-(int)readAttributesForModel:(xmlTextReaderRef)arg1 ;
-(int)readAttributesForGrid:(xmlTextReaderRef)arg1 ;
-(int)addColumnWidthFrom:(xmlTextReaderRef)arg1 ;
-(int)addRowHeightFrom:(xmlTextReaderRef)arg1 ;
-(int)addGroupLevelsFrom:(xmlTextReaderRef)arg1 ;
-(BOOL)visibilityForColumn:(unsigned short)arg1 ;
-(char)isNameVisible;
-(float)widthForColumn:(unsigned short)arg1 ;
-(BOOL)visibilityForRow:(unsigned short)arg1 ;
-(int)typeOfVectorAlongGridline:(unsigned short)arg1 offset:(unsigned short)arg2 length:(unsigned short)arg3 vertical:(char)arg4 ;
-(char)hasGroupDisplayType:(unsigned short)arg1 level:(int)arg2 displayType:(int*)arg3 isTypeVisible:(char*)arg4 ;
-(unsigned short)firstVisibleColumn;
-(int)numGroupLevels;
-(void)setNumGroupLevels:(int)arg1 ;
-(void)dealloc;
-(CFStringRef)name;
-(CFArrayRef)cells;
-(void)setCells:(CFArrayRef)arg1 ;
-(float)heightForRow:(unsigned short)arg1 ;
-(unsigned short)columnCount;
-(unsigned short)rowCount;
-(id)cellAt:(unsigned short)arg1 ;
-(unsigned short)headerRowCount;
@end

