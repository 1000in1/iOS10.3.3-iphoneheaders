/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Tips.app/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface TPSHtmlParserContextItem : NSObject {

	char _ignoreText;
	char _accessibilityElement;
	unsigned _itemType;
	NSMutableDictionary* _attributes;

}

@property (assign,nonatomic) char ignoreText;                               //@synthesize ignoreText=_ignoreText - In the implementation block
@property (assign,nonatomic) char accessibilityElement;                     //@synthesize accessibilityElement=_accessibilityElement - In the implementation block
@property (assign,nonatomic) unsigned itemType;                             //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
+(id)itemWithContextItemType:(unsigned)arg1 attributes:(id)arg2 ignoreText:(char)arg3 accessibilityElement:(char)arg4 ;
+(id)itemWithContextItemType:(unsigned)arg1 attributes:(id)arg2 ;
-(id)initWithContextItemType:(unsigned)arg1 attributes:(id)arg2 ignoreText:(char)arg3 accessibilityElement:(char)arg4 ;
-(char)ignoreText;
-(void)setIgnoreText:(char)arg1 ;
-(char)accessibilityElement;
-(void)setAccessibilityElement:(char)arg1 ;
-(NSMutableDictionary *)attributes;
-(void)setAttributes:(NSMutableDictionary *)arg1 ;
-(unsigned)itemType;
-(void)setItemType:(unsigned)arg1 ;
@end

