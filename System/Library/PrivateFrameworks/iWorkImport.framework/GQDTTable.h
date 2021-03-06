/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:35 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDGraphic.h>
#import <iWorkImport/GQDNameMappable.h>

@class GQDTTableModel, GQDSStyle, NSString;

@interface GQDTTable : GQDGraphic <GQDNameMappable> {

	GQDTTableModel* mModel;
	GQDSStyle* mStyle;
	char mIsStreamed;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const StateSpec*)stateForReading;
-(int)walkTableWithGenerator:(Class)arg1 state:(id)arg2 ;
-(void)setTableStyle:(id)arg1 ;
-(char)isStreamed;
-(id)defaultVectorStyleForVectorType:(int)arg1 ;
-(void)dealloc;
-(id)model;
-(void)setModel:(id)arg1 ;
-(id)tableStyle;
@end

