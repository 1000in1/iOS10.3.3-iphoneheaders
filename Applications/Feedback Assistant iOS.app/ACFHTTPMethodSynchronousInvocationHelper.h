/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Feedback Assistant iOS/ACFHTTPMethodInvocationDelegate.h>

@class NSError, NSData, NSString;

@interface ACFHTTPMethodSynchronousInvocationHelper : NSObject <ACFHTTPMethodInvocationDelegate> {

	NSError* _error;
	NSData* _result;

}

@property (retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (retain) NSData * result;                                 //@synthesize result=_result - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSData *)result;
-(void)setResult:(NSData *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)httpMethodInvocation:(id)arg1 didFinishWithResult:(id)arg2 ;
-(void)httpMethodInvocation:(id)arg1 didFailWithError:(id)arg2 ;
@end

