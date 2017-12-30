/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLExpressionIntermediate.h>

@interface NSSQLKeypathExpressionIntermediate : NSSQLExpressionIntermediate {

	char _substitutePK;

}

@property (assign,nonatomic) char substitutePK;              //@synthesize substitutePK=_substitutePK - In the implementation block
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)_generateSQLForKeyPathExpression:(id)arg1 allowToMany:(char)arg2 inContext:(id)arg3 ;
-(id)_propertyDescriptionForKeypath:(id)arg1 startingAtEntity:(id)arg2 allowToMany:(char)arg3 lastKeyVisited:(id*)arg4 inContext:(id)arg5 ;
-(id)_propertyDescriptionsForKeypath:(id)arg1 rootedAtEntity:(id)arg2 allowToMany:(char)arg3 lastKeyVisited:(id*)arg4 inContext:(id)arg5 ;
-(id)_generateSQLForProperty:(id)arg1 startEntity:(id)arg2 startAlias:(id)arg3 keypath:(id)arg4 inContext:(id)arg5 ;
-(char)substitutePK;
-(void)setSubstitutePK:(char)arg1 ;
@end

