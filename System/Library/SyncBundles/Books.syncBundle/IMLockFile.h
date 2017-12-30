/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SyncBundles/Books.syncBundle/Books
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IMLockFile : NSObject {

	NSString* _path;
	int _fd;
	char _locked;

}

@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) char locked;                  //@synthesize locked=_locked - In the implementation block
-(char)tryLock:(char)arg1 ;
-(char)lock:(char)arg1 ;
-(char)_lock:(char)arg1 blocking:(char)arg2 ;
-(void)dealloc;
-(NSString *)path;
-(void)unlock;
-(id)initWithPath:(id)arg1 ;
-(char)locked;
@end
