/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/XPCServices/com.apple.mobilenotes.HTMLConverter.xpc/com.apple.mobilenotes.HTMLConverter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFileWrapper.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSData;

@interface ICRemoteFileWrapper : NSFileWrapper <NSSecureCoding> {

	NSURL* _remoteURL;
	NSData* _cachedData;

}

@property (nonatomic,retain) NSURL * remoteURL;                //@synthesize remoteURL=_remoteURL - In the implementation block
@property (nonatomic,retain) NSData * cachedData;              //@synthesize cachedData=_cachedData - In the implementation block
+(char)supportsSecureCoding;
-(char)isDirectory;
-(id)fileWrappers;
-(void)removeFileWrapper:(id)arg1 ;
-(id)addFileWrapper:(id)arg1 ;
-(char)isSymbolicLink;
-(char)matchesContentsOfURL:(id)arg1 ;
-(char)readFromURL:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(id)symbolicLinkDestinationURL;
-(id)keyForFileWrapper:(id)arg1 ;
-(id)serializedRepresentation;
-(id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)regularFileContents;
-(id)preferredFilename;
-(char)writeToURL:(id)arg1 options:(unsigned)arg2 originalContentsURL:(id)arg3 error:(id*)arg4 ;
-(NSData *)cachedData;
-(void)setCachedData:(NSData *)arg1 ;
-(id)filename;
-(NSURL *)remoteURL;
-(void)setRemoteURL:(NSURL *)arg1 ;
-(id)initWithRemoteURL:(id)arg1 ;
-(id)dataWithError:(id*)arg1 ;
-(id)fileAttributes;
@end

