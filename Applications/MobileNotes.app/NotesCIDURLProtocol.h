/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLProtocol.h>

@interface NotesCIDURLProtocol : NSURLProtocol
+(void)registerDataProvider:(id)arg1 forCIDURL:(id)arg2 ;
+(void)unregisterDataProviderForCIDURL:(id)arg1 ;
+(char)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
-(void)stopLoading;
-(void)startLoading;
@end

