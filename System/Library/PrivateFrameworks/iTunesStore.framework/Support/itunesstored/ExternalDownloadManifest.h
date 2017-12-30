/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:02 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface ExternalDownloadManifest : NSObject {

	NSArray* _invalidDownloads;
	NSArray* _validDownloads;

}

@property (readonly) NSArray * invalidDownloads; 
@property (readonly) NSArray * validDownloads; 
-(NSArray *)invalidDownloads;
-(id)initWithValidDownloads:(id)arg1 invalidDownloads:(id)arg2 ;
-(char)_parsePropertyList:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSArray *)validDownloads;
-(id)initWithPropertyList:(id)arg1 ;
@end

