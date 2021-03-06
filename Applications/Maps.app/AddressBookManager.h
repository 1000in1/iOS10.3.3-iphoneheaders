/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactStore, CNContact, NSArray, NSDictionary, NSMutableDictionary, AddressCorrectedLocationAttributesStorage;

@interface AddressBookManager : NSObject {

	CNContactStore* _contactStore;
	CNContact* _meCard;
	NSArray* _properties;
	char _needsCollectAddresses;
	NSDictionary* _homeAddresses;
	NSDictionary* _workAddresses;
	NSMutableDictionary* _queuedActionsForAddressIdentifiers;
	AddressCorrectedLocationAttributesStorage* _correctedLocationAttributesStorage;

}

@property (nonatomic,copy,readonly) NSArray * properties; 
@property (nonatomic,copy,readonly) CNContactStore * contactStore; 
@property (nonatomic,retain) AddressCorrectedLocationAttributesStorage * correctedLocationAttributesStorage;              //@synthesize correctedLocationAttributesStorage=_correctedLocationAttributesStorage - In the implementation block
+(char)addressBookAllowed;
+(id)sharedManager;
-(void)updateStore:(id)arg1 ;
-(char)addressBookSetMe:(id)arg1 ;
-(id)meCardHomeAddress;
-(id)meCardWorkAddress;
-(id)allHomeAddresses;
-(id)allWorkAddresses;
-(void)collectAddress;
-(id)contactForRecordId:(int)arg1 ;
-(id)senderNameForAddress:(id)arg1 ofType:(id)arg2 ;
-(id)addressForIdentifier:(id)arg1 ;
-(id)addressForAddressObject:(id)arg1 ;
-(void)updateAddressIdentifier:(id)arg1 withCorrectedLocationAttributes:(id)arg2 locationOfInterest:(id)arg3 ;
-(void)performForIdentifier:(id)arg1 block:(/*^block*/id)arg2 ;
-(AddressCorrectedLocationAttributesStorage *)correctedLocationAttributesStorage;
-(void)setCorrectedLocationAttributesStorage:(AddressCorrectedLocationAttributesStorage *)arg1 ;
-(id)init;
-(NSArray *)properties;
-(void)setNeedsUpdate;
-(CNContactStore *)contactStore;
-(char)meCardExists;
-(id)meCard;
@end

