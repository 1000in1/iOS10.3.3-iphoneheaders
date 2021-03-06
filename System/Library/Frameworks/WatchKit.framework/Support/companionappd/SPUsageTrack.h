/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:34:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/WatchKit.framework/Support/companionappd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface SPUsageTrack : NSObject {

	NSMutableDictionary* _appUsageTrack;
	NSObject*<OS_dispatch_queue> _usageTrackQueue;

}

@property (nonatomic,retain) NSMutableDictionary * appUsageTrack;                       //@synthesize appUsageTrack=_appUsageTrack - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> usageTrackQueue;              //@synthesize usageTrackQueue=_usageTrackQueue - In the implementation block
-(void)setAppUsageTrack:(NSMutableDictionary *)arg1 ;
-(void)_prepareString:(char*)arg1 fromArray:(unsigned*)arg2 ;
-(NSMutableDictionary *)appUsageTrack;
-(void)_printString:(char*)arg1 fromArray:(unsigned*)arg2 ;
-(void)_printSeparator;
-(void)_updateDataCount:(unsigned)arg1 application:(id)arg2 toGizmo:(char)arg3 ;
-(unsigned*)_arrayForApplication:(id)arg1 toGizmo:(char)arg2 ;
-(int)_indexForSize:(unsigned)arg1 ;
-(id)_aggdScalarKeyForIndex:(int)arg1 application:(id)arg2 toGizmo:(char)arg3 ;
-(id)_aggdDistKeyForApplication:(id)arg1 toGizmo:(char)arg2 ;
-(id)_aggdKeyForApplication:(id)arg1 toGizmo:(char)arg2 ;
-(void)_logUsageData;
-(void)dataSentToGizmo:(unsigned)arg1 application:(id)arg2 ;
-(void)dataReceiedFromGizmo:(unsigned)arg1 application:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)usageTrackQueue;
-(void)setUsageTrackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
@end

