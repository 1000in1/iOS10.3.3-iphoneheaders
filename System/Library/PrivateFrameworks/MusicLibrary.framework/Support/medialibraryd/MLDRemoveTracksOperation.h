/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:14 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <medialibraryd/MLDDatabaseOperation.h>

@interface MLDRemoveTracksOperation : MLDDatabaseOperation
-(char)_verifyLibraryConnectionAndAttributesProperties:(id*)arg1 ;
-(char)_removeTracksWithPersistentIDs:(id)arg1 fromSource:(int)arg2 usingTransaction:(id)arg3 ;
-(char)_removeSource:(int)arg1 usingTransaction:(id)arg2 ;
-(unsigned)type;
-(void)main;
@end

