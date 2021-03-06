/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/AssetExplorer.bundle/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssetExplorer/AssetExplorer-Structs.h>
@class NSDictionary, PXIndexPathSet;

@interface AEProgressViewModelSnapshot : NSObject {

	unsigned _correspondingDataSourceIdentifier;
	NSDictionary* __progressByIndexPath;
	PXIndexPathSet* __pathsWithProgress;

}

@property (nonatomic,readonly) NSDictionary * _progressByIndexPath;                     //@synthesize _progressByIndexPath=__progressByIndexPath - In the implementation block
@property (nonatomic,readonly) PXIndexPathSet * _pathsWithProgress;                     //@synthesize _pathsWithProgress=__pathsWithProgress - In the implementation block
@property (nonatomic,readonly) unsigned correspondingDataSourceIdentifier;              //@synthesize correspondingDataSourceIdentifier=_correspondingDataSourceIdentifier - In the implementation block
-(NSDictionary *)_progressByIndexPath;
-(id)initWithProgressByIndexPath:(id)arg1 dataSourceIdenfitier:(unsigned)arg2 ;
-(PXIndexPathSet *)_pathsWithProgress;
-(unsigned)correspondingDataSourceIdentifier;
-(id)progressForIndexPath:(PXSimpleIndexPath)arg1 ;
-(char)hasProgressForIndexPath:(PXSimpleIndexPath)arg1 ;
@end

