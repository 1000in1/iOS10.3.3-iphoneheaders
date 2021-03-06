/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:39:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PublishingBundles/PublishToYouku.bundle/PublishToYouku
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoUpload/VUPublishPost.h>
#import <libobjc.A.dylib/JSONHTTPRequestDelegate.h>

@class YoukuAuthenticatedRequest, VUFileUpload, NSString, NSNumber, NSArray, VUCategory;

@interface YoukuPublishPost : VUPublishPost <JSONHTTPRequestDelegate> {

	YoukuAuthenticatedRequest* _currentRequest;
	VUFileUpload* _file;
	int _uploadState;
	NSString* _uploadHost;
	NSString* _uploadToken;
	NSNumber* _sliceTaskID;
	long long _offset;
	int _length;
	long long _transferred;
	char _finished;
	NSString* _uploadServerIP;
	NSString* _filePath;
	NSString* _title;
	NSString* _postDescription;
	NSArray* _tags;
	VUCategory* _category;
	unsigned _accessType;

}

@property (nonatomic,retain) NSString * filePath;                     //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,retain) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * postDescription;              //@synthesize postDescription=_postDescription - In the implementation block
@property (nonatomic,retain) NSArray * tags;                          //@synthesize tags=_tags - In the implementation block
@property (nonatomic,retain) VUCategory * category;                   //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) unsigned accessType;                     //@synthesize accessType=_accessType - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_URLForUploadAction:(id)arg1 ;
-(id)_verifyParameters;
-(void)_check;
-(id)_URLForJSONAction:(id)arg1 ;
-(void)_uploadCreate;
-(void)_createFile;
-(id)_publicType;
-(void)_uploadSlice;
-(void)_newSlice;
-(NSArray *)tags;
-(NSString *)postDescription;
-(void)setTitle:(NSString *)arg1 ;
-(void)setCategory:(VUCategory *)arg1 ;
-(VUCategory *)category;
-(NSString *)title;
-(void)_commit;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
-(unsigned)accessType;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_errorWithCode:(int)arg1 ;
-(void)setTags:(NSArray *)arg1 ;
-(void)_handleResponse:(id)arg1 ;
-(void)startUpload;
-(void)setPostDescription:(NSString *)arg1 ;
-(id)_tags;
-(void)setAccessType:(unsigned)arg1 ;
-(void)request:(id)arg1 didReceiveObject:(id)arg2 ;
@end

