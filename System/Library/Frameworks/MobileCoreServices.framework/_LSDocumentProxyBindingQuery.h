/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/_LSQuery.h>

@class LSDocumentProxy, NSString;

@interface _LSDocumentProxyBindingQuery : _LSQuery {

	char _withTypeOwner;
	char _airDropStyle;
	LSDocumentProxy* _documentProxy;
	NSString* _handlerRank;

}

@property (nonatomic,retain,readonly) LSDocumentProxy * documentProxy;              //@synthesize documentProxy=_documentProxy - In the implementation block
@property (nonatomic,readonly) char withTypeOwner;                                  //@synthesize withTypeOwner=_withTypeOwner - In the implementation block
@property (nonatomic,readonly) char airDropStyle;                                   //@synthesize airDropStyle=_airDropStyle - In the implementation block
@property (nonatomic,copy,readonly) NSString * handlerRank;                         //@synthesize handlerRank=_handlerRank - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithDocumentProxy:(id)arg1 withTypeOwner:(char)arg2 airDropStyle:(char)arg3 handlerRank:(id)arg4 ;
-(NSString *)handlerRank;
-(char)airDropStyle;
-(int)calculatePriorityForApp:(id)arg1 cloudOwner:(id)arg2 preferredHandler:(id)arg3 ;
-(char)withTypeOwner;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(char)_shouldCacheResolvedResults;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(LSDocumentProxy *)documentProxy;
@end

