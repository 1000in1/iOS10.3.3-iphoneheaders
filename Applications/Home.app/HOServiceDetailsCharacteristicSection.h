/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet;

@interface HOServiceDetailsCharacteristicSection : NSObject {

	NSString* _sectionIdentifier;
	NSString* _sectionTitle;
	NSString* _titleForSectionSorting;
	/*^block*/id _itemComparator;
	NSSet* _characteristicTypes;
	NSSet* _items;

}

@property (nonatomic,copy,readonly) NSString * sectionIdentifier;              //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,readonly) int sectionPriority; 
@property (nonatomic,copy) NSString * sectionTitle;                            //@synthesize sectionTitle=_sectionTitle - In the implementation block
@property (nonatomic,copy) NSString * titleForSectionSorting;                  //@synthesize titleForSectionSorting=_titleForSectionSorting - In the implementation block
@property (nonatomic,copy) id itemComparator;                                  //@synthesize itemComparator=_itemComparator - In the implementation block
@property (nonatomic,copy) NSSet * characteristicTypes;                        //@synthesize characteristicTypes=_characteristicTypes - In the implementation block
@property (nonatomic,copy) NSSet * items;                                      //@synthesize items=_items - In the implementation block
-(int)sectionPriority;
-(NSString *)titleForSectionSorting;
-(void)setTitleForSectionSorting:(NSString *)arg1 ;
-(void)setCharacteristicTypes:(NSSet *)arg1 ;
-(id)init;
-(NSSet *)items;
-(void)setItems:(NSSet *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setSectionTitle:(NSString *)arg1 ;
-(NSString *)sectionTitle;
-(NSString *)sectionIdentifier;
-(void)setItemComparator:(id)arg1 ;
-(NSSet *)characteristicTypes;
-(id)itemComparator;
@end

