/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSString;

@interface UIAccessibilityCustomRotor : NSObject {

	NSUUID* uuid;
	id targetElement;
	NSString* _name;
	/*^block*/id _itemSearchBlock;

}

@property (nonatomic,retain) NSUUID * uuid; 
@property (assign,nonatomic,__weak) id targetElement; 
@property (nonatomic,copy) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) id itemSearchBlock;                     //@synthesize itemSearchBlock=_itemSearchBlock - In the implementation block
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setItemSearchBlock:(id)arg1 ;
-(id)initWithName:(id)arg1 itemSearchBlock:(/*^block*/id)arg2 ;
-(id)targetElement;
-(void)setTargetElement:(id)arg1 ;
-(id)itemSearchBlock;
@end

