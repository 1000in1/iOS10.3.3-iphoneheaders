/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBWallpaperAggdLogger : NSObject {

	long long _aggd_lockscreenWallpaperType;
	long long _aggd_lockscreenWallpaperIdentifier;
	long long _aggd_homescreenWallpaperType;
	long long _aggd_homescreenWallpaperIdentifier;
	long long _aggd_irisWallpaperEnabled;
	long long _aggd_sharedWallpaper;

}
-(void)_clearAggdKeysForLocations:(int)arg1 ;
-(void)updateWallpaperAggdKeysForLocations:(int)arg1 withHasVideo:(char)arg2 hasProcedural:(char)arg3 name:(id)arg4 ;
-(void)saveWallpaperAggdCurrentValues;
-(void)incrementIrisPlayCount;
-(unsigned)_bucketedPlayCount;
-(void)_resetPlayCountDate;
-(id)init;
-(id)_valueString;
@end

