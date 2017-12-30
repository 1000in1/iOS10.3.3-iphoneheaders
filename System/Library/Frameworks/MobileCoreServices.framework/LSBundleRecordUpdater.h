/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileCoreServices/MobileCoreServices-Structs.h>
@class NSString;

@interface LSBundleRecordUpdater : NSObject {

	LSContext* _context;
	char _hasContext;
	unsigned _bundleID;
	LSBundleData _bundleData;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(void)parseSINFDictionary:(id)arg1 ;
-(void)parseiTunesMetadata:(id)arg1 ;
-(long)updateBundleRecord;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
@end

