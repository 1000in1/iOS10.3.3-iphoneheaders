/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:03 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface ShowServerPromptOperation : ISOperation {

	NSString* _promptIdentifier;

}

@property (readonly) NSString * promptIdentifier; 
-(id)initWithPromptIdentifier:(id)arg1 ;
-(char)_promptNeedsDisplay;
-(id)_newStoreURLOperation:(id*)arg1 ;
-(char)_automaticDownloadsPromptNeedsDisplay;
-(NSString *)promptIdentifier;
-(id)init;
-(void)dealloc;
-(void)run;
@end

