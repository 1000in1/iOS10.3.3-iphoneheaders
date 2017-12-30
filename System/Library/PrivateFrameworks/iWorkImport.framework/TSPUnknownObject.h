/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@protocol OS_dispatch_data;
@class NSObject, NSString, TSPLazyReferenceArray, NSArray;

@interface TSPUnknownObject : TSPObject {

	shared_ptr<TSP::ArchiveInfo>* _archiveInfo;
	NSObject*<OS_dispatch_data> _messagesData;
	NSString* _packageLocator;
	TSPLazyReferenceArray* _objects;
	NSArray* _datas;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_data> serializedData; 
-(id)packageLocator;
-(void)willModifyForUpgrade;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)willModify;
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(NSObject*<OS_dispatch_data>)serializedData;
@end

