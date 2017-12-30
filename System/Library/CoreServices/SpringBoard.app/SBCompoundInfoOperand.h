/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBInfoOperand;

@interface SBCompoundInfoOperand : NSObject {

	SBInfoOperand* _activeOperand;
	SBInfoOperand* _referenceOperand;

}

@property (nonatomic,readonly) SBInfoOperand * activeOperand;                            //@synthesize activeOperand=_activeOperand - In the implementation block
@property (nonatomic,readonly) SBInfoOperand * referenceOperand;                         //@synthesize referenceOperand=_referenceOperand - In the implementation block
@property (getter=isSectionOperand,nonatomic,readonly) char sectionOperand; 
+(id)compoundOperandWithOperand:(id)arg1 referenceOperand:(id)arg2 ;
-(SBInfoOperand *)activeOperand;
-(SBInfoOperand *)referenceOperand;
-(char)isSectionOperand;
-(id)initWithOperand:(id)arg1 operand:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
@end

