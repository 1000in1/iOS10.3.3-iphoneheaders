/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:38 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPDirectoryPackage.h>

@interface TSPExpandedDirectoryPackage : TSPDirectoryPackage
+(char)isValidPackageAtURL:(id)arg1 ;
+(char)hasZipArchive;
-(void)prepareForDocumentReplacementWithSuccess:(char)arg1 forSafeSave:(char)arg2 originalURL:(id)arg3 ;
-(unsigned long long)encodedLengthForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(char)arg2 ;
-(id)newRawReadChannelForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(char)arg2 ;
@end

