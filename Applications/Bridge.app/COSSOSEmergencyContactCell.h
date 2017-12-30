/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/Bridge-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, _HKEmergencyContact;

@interface COSSOSEmergencyContactCell : UITableViewCell {

	UILabel* _nameLabel;
	UILabel* _phoneNumberLabel;
	UILabel* _phoneNumberTypeLabel;
	_HKEmergencyContact* _contact;

}

@property (nonatomic,retain) _HKEmergencyContact * contact;              //@synthesize contact=_contact - In the implementation block
+(id)_contactStore;
-(id)_phoneNumberIdentifierForContact:(id)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(_HKEmergencyContact *)contact;
-(void)setContact:(_HKEmergencyContact *)arg1 ;
@end

