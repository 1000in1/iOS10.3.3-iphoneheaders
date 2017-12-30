/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:03 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/imagent.app/imagent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSString;

@interface ParentalControlsService : NSObject {

	char _disableService;
	char _forceWhiteList;
	NSSet* _whitelist;
	NSString* _name;

}

@property (assign) char disableService;              //@synthesize disableService=_disableService - In the implementation block
@property (assign) char forceWhiteList;              //@synthesize forceWhiteList=_forceWhiteList - In the implementation block
@property (retain) NSSet * whitelist;                //@synthesize whitelist=_whitelist - In the implementation block
@property (retain) NSString * name;                  //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSSet *)whitelist;
-(void)setWhitelist:(NSSet *)arg1 ;
-(char)disableService;
-(void)setDisableService:(char)arg1 ;
-(char)forceWhiteList;
-(void)setForceWhiteList:(char)arg1 ;
@end

