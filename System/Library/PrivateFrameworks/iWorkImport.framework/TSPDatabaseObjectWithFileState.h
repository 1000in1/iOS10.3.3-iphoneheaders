/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:38 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPDatabaseObject.h>

@class NSString, NSURL;

@interface TSPDatabaseObjectWithFileState : TSPDatabaseObject {

	NSString* _fileState;
	NSURL* _packageURL;

}
-(char)hasDataState;
-(long long)dataState;
-(id)initWithIdentifier:(long long)arg1 classType:(int)arg2 fileState:(id)arg3 packageURL:(id)arg4 ;
-(char)hasFileState;
-(id)fileState;
-(id)fileURL;
@end
