/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/Frameworks/IMUtil.framework/IMUtil
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>

@class NSMutableData, NSString;

@interface NSURLConnectionToCallbackAdapter : NSObject <NSURLConnectionDataDelegate> {

	NSMutableData* _responseData;
	/*^block*/id _successCallback;
	/*^block*/id _errorCallback;

}

@property (nonatomic,retain) NSMutableData * responseData;              //@synthesize responseData=_responseData - In the implementation block
@property (nonatomic,copy) id successCallback;                          //@synthesize successCallback=_successCallback - In the implementation block
@property (nonatomic,copy) id errorCallback;                            //@synthesize errorCallback=_errorCallback - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSuccessCallback:(id)arg1 ;
-(id)successCallback;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(NSMutableData *)responseData;
-(void)setResponseData:(NSMutableData *)arg1 ;
-(void)setErrorCallback:(id)arg1 ;
-(id)errorCallback;
@end

