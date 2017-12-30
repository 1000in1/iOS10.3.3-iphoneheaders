/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MFSearchSuggestion.h>

@class NSString, MFMessageCriterion, NSArray;

@interface MFSearchMessageStatusSuggestion : MFSearchSuggestion {

	NSString* _title;
	NSString* _atomTitle;
	MFMessageCriterion* _criterion;
	NSArray* _words;

}
+(id)suggestionWithTitle:(id)arg1 atomTitle:(id)arg2 words:(id)arg3 criterion:(id)arg4 ;
+(char)supportsSecureCoding;
+(id)suggestion;
-(char)matchesUsingPhraseManager:(id)arg1 ;
-(id)initWithTitle:(id)arg1 atomTitle:(id)arg2 words:(id)arg3 criterion:(id)arg4 ;
-(id)atomTitle;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)category;
-(id)title;
-(id)subtitle;
-(id)contactIdentifier;
-(id)criterion;
@end

