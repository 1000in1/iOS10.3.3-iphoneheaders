/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MFSearchSuggestionCategory, MFMessageCriterion, NSString, UIImage;

@interface MFSearchSuggestion : NSObject <NSSecureCoding>

@property (nonatomic,retain,readonly) MFSearchSuggestionCategory * category; 
@property (nonatomic,retain,readonly) MFMessageCriterion * criterion; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,retain,readonly) UIImage * image; 
@property (nonatomic,retain,readonly) NSString * contactIdentifier; 
@property (nonatomic,copy,readonly) NSString * atomTitle; 
@property (nonatomic,retain,readonly) UIImage * atomImage; 
@property (nonatomic,readonly) char supportsRanking; 
@property (nonatomic,readonly) double ranking; 
@property (nonatomic,readonly) char exactMatch; 
+(char)supportsSecureCoding;
-(NSString *)atomTitle;
-(UIImage *)atomImage;
-(char)supportsRanking;
-(char)exactMatch;
-(double)ranking;
-(id)criterionWithSelectedScope:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(MFSearchSuggestionCategory *)category;
-(NSString *)title;
-(UIImage *)image;
-(NSString *)subtitle;
-(NSString *)contactIdentifier;
-(MFMessageCriterion *)criterion;
@end

