/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:16 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, SinfsArray;

@interface DownloadDRM : NSObject {

	NSArray* _sinfs;
	char _DRMFree;

}

@property (getter=isDRMFree,readonly) char DRMFree;              //@synthesize DRMFree=_DRMFree - In the implementation block
@property (readonly) NSArray * sinfs;                            //@synthesize sinfs=_sinfs - In the implementation block
@property (readonly) SinfsArray * pinfsArray; 
@property (readonly) SinfsArray * sinfsArray; 
-(id)initWithSinfArray:(id)arg1 ;
-(id)_sinfsArrayWithDataKey:(id)arg1 ;
-(id)firstDataForSinfDataKey:(id)arg1 ;
-(SinfsArray *)pinfsArray;
-(id)sinfForIdentifier:(int)arg1 ;
-(SinfsArray *)sinfsArray;
-(char)isDRMFree;
-(id)init;
-(NSArray *)sinfs;
@end

