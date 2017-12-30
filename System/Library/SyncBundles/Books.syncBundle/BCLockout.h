/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SyncBundles/Books.syncBundle/Books
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMLockFile, NSArray, NSString;

@interface BCLockout : NSObject {

	IMLockFile* _lockFile;
	char _isExclusive;
	NSArray* _startNotifications;
	NSArray* _endNotifications;

}

@property (nonatomic,retain) NSString * path; 
@property (nonatomic,retain) NSArray * startNotifications;              //@synthesize startNotifications=_startNotifications - In the implementation block
@property (nonatomic,retain) NSArray * endNotifications;                //@synthesize endNotifications=_endNotifications - In the implementation block
-(NSArray *)startNotifications;
-(void)_sendNotfications:(id)arg1 isLock:(char)arg2 ;
-(NSArray *)endNotifications;
-(void)setStartNotifications:(NSArray *)arg1 ;
-(void)setEndNotifications:(NSArray *)arg1 ;
-(char)lock:(char)arg1 ;
-(void)dealloc;
-(NSString *)path;
-(void)unlock;
-(void)setPath:(NSString *)arg1 ;
@end

