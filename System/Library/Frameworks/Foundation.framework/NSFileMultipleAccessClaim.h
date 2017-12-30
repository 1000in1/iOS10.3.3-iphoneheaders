/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFileAccessClaim.h>

@class NSMutableArray, NSFileAccessNode;

@interface NSFileMultipleAccessClaim : NSFileAccessClaim {

	NSMutableArray* _readingURLs;
	unsigned* _readingOptions;
	char* _readingURLsDidChange;
	NSMutableArray* _writingURLs;
	unsigned* _writingOptions;
	char* _writingURLsDidChange;
	NSMutableArray* _readingLocations;
	NSMutableArray* _writingLocations;
	NSFileAccessNode* _rootNode;
	unsigned _currentlyLinkResolvingURLIndex;
	int _readingLinkResolutionCount;

}
+(char)supportsSecureCoding;
-(char)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(char)arg2 ;
-(void)forwardUsingConnection:(id)arg1 crashHandler:(/*^block*/id)arg2 ;
-(void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2 ;
-(id)allURLs;
-(void)granted;
-(void)invokeClaimer;
-(char)shouldCancelInsteadOfWaiting;
-(char)blocksClaim:(id)arg1 ;
-(void)devalueSelf;
-(char)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned)arg2 ;
-(char)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned)arg2 ;
-(char)shouldBeRevokedPriorToInvokingAccessor;
-(void)resolveURLsThenMaybeContinueInvokingClaimer:(/*^block*/id)arg1 ;
-(id)initWithPurposeID:(id)arg1 intents:(id)arg2 claimer:(/*^block*/id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
@end

