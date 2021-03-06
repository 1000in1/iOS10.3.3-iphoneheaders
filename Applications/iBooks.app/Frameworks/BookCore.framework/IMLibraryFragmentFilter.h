/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookCore/BookCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableDictionary;

@interface IMLibraryFragmentFilter : NSObject <NSCoding> {

	NSMutableDictionary* _identifiedDocuements;
	SCD_Struct_IM5 _specification;

}
+(SCD_Struct_IM7)fragmentFilterSpecificationForDocumentLength:(int)arg1 librarySpecification:(SCD_Struct_IM5)arg2 ;
-(void)addFilter:(id)arg1 withIdentifier:(id)arg2 ;
-(id)initWithFilterSpecification:(SCD_Struct_IM5)arg1 ;
-(void)addDocument:(id)arg1 withIdentifier:(id)arg2 ;
-(char)containsDocumentWithIdentifier:(id)arg1 ;
-(id)candidateIdentifiersForQuery:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)allIdentifiers;
-(unsigned)documentCount;
@end

