/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCEFormulaRewrite_RegionInfo;

@interface TSCEFormulaRewrite_RegionMergedInfo : NSObject {

	TSUCellCoord _mergeSource;
	TSCEFormulaRewrite_RegionInfo* _mergeRegion;

}

@property (assign,nonatomic) const TSUCellCoord* mergeSource;                            //@synthesize mergeSource=_mergeSource - In the implementation block
@property (nonatomic,readonly) TSCEFormulaRewrite_RegionInfo * mergeRegion;              //@synthesize mergeRegion=_mergeRegion - In the implementation block
-(id)initWithMergeRegion:(id)arg1 mergeSource:(TSUCellCoord)arg2 ;
-(const TSUCellCoord*)mergeSource;
-(void)setMergeSource:(const TSUCellCoord*)arg1 ;
-(TSCEFormulaRewrite_RegionInfo *)mergeRegion;
-(void)dealloc;
-(id)description;
@end

