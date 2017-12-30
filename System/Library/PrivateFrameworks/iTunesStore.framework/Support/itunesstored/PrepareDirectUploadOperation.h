/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:03 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class DirectUploadRequest;

@interface PrepareDirectUploadOperation : ISOperation {

	/*^block*/id _outputBlock;
	DirectUploadRequest* _request;

}

@property (copy) id outputBlock; 
-(id)_uploadURL;
-(id)_newURLRequestWithURL:(id)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(void)run;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
@end
