/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/_LSQuery.h>

@interface _UTTypeQuery : _LSQuery {

	unsigned long long _flags;

}

@property (assign,setter=_setResolveInactiveDeclarations:,nonatomic) char _resolveInactiveDeclarations; 
+(id)typeQueryWithTag:(id)arg1 ofClass:(id)arg2 conformsTo:(id)arg3 limit:(int)arg4 ;
+(id)typeQueryForAllDeclaredIdentifiers;
+(id)typeQueryWithIdentifier:(id)arg1 ;
+(id)typeQueryWithDescendantsOfIdentifier:(id)arg1 searchDepthLimit:(unsigned)arg2 ;
+(id)typeQueryWithTag:(id)arg1 ofClass:(id)arg2 conformsTo:(id)arg3 ;
-(char)_resolveInactiveDeclarations;
-(void)_setResolveInactiveDeclarations:(char)arg1 ;
-(id)resolve;
@end

