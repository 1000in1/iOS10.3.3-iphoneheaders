/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetExpertCenter/Experts/QueryPrediction.bundle/QueryPrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QueryPrediction/QueryPrediction-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface QPReason : NSObject <NSSecureCoding, NSCopying> {

	unsigned _reason;

}
+(id)shortAggdCodesForReasons:(id)arg1 ;
+(id)stringsForReasons:(id)arg1 ;
+(char)supportsSecureCoding;
-(id)asShortAggdCode;
-(id)asString;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithValue:(unsigned)arg1 ;
-(unsigned)rawValue;
@end

