/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:21 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/Support/pairedsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSSet;

@interface PSYWatchSyncClientState : NSObject {

	NSArray* _completedActivityLabels;
	NSArray* _activeActivityLabels;
	NSSet* _completedActivityLabelsSet;
	NSSet* _activeActivityLabelsSet;
	unsigned _syncSessionState;
	unsigned _syncSessionType;
	unsigned _version;

}

@property (nonatomic,readonly) unsigned syncSessionState;                       //@synthesize syncSessionState=_syncSessionState - In the implementation block
@property (nonatomic,readonly) unsigned syncSessionType;                        //@synthesize syncSessionType=_syncSessionType - In the implementation block
@property (nonatomic,readonly) NSArray * activeActivityLabels;                  //@synthesize activeActivityLabels=_activeActivityLabels - In the implementation block
@property (nonatomic,readonly) NSArray * completedActivityLabels;               //@synthesize completedActivityLabels=_completedActivityLabels - In the implementation block
@property (nonatomic,readonly) NSSet * activeActivityLabelsSet;                 //@synthesize activeActivityLabelsSet=_activeActivityLabelsSet - In the implementation block
@property (nonatomic,readonly) NSSet * completedActivityLabelsSet;              //@synthesize completedActivityLabelsSet=_completedActivityLabelsSet - In the implementation block
@property (nonatomic,readonly) unsigned version;                                //@synthesize version=_version - In the implementation block
-(NSArray *)activeActivityLabels;
-(NSArray *)completedActivityLabels;
-(id)initWithSyncSessionState:(unsigned)arg1 syncSessionType:(unsigned)arg2 activities:(id)arg3 completedActivities:(id)arg4 ;
-(NSSet *)completedActivityLabelsSet;
-(NSSet *)activeActivityLabelsSet;
-(id)plistRepresentation;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)version;
-(id)initWithPlistRepresentation:(id)arg1 ;
-(unsigned)syncSessionState;
-(unsigned)syncSessionType;
@end
