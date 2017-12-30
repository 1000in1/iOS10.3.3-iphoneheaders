/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:28 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/PlugIns/com.apple.CloudDocsUI.CloudSharing.appex/com.apple.CloudDocsUI.CloudSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <com.apple.CloudDocsUI.CloudSharing/_UIShareTableValueCell.h>

@class UILabel, NSLayoutConstraint, CKShareParticipantContact, NSString;

@interface BRParticipantInfoCell : UITableViewCell <_UIShareTableValueCell> {

	UILabel* _accountTypeLabel;
	UILabel* _accountValueLabel;
	NSLayoutConstraint* _companyLabelConstraint;
	CKShareParticipantContact* _representedValue;

}

@property (nonatomic,retain) CKShareParticipantContact * representedValue;              //@synthesize representedValue=_representedValue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRepresentedValue:(CKShareParticipantContact *)arg1 ;
-(CKShareParticipantContact *)representedValue;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(char)canBecomeFirstResponder;
-(void)prepareForReuse;
-(void)setAccessoryType:(int)arg1 ;
-(void)copy:(id)arg1 ;
@end

