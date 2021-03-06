/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLExpressionIntermediate.h>

@class NSExpression, NSSQLFetchIntermediate, NSSQLEntity, NSMutableString, NSString, NSSQLColumn, NSMutableArray;

@interface NSSQLSubqueryExpressionIntermediate : NSSQLExpressionIntermediate {

	NSExpression* _trailingKeypath;
	NSExpression* _variableExpression;
	NSSQLFetchIntermediate* _fetchIntermediate;
	NSSQLEntity* _selectFromEntity;
	NSMutableString* _selectFromCorrelationTarget;
	NSString* _selectEntityAlias;
	NSSQLEntity* _governingEntityForVariable;
	NSSQLColumn* _variableColumn;
	NSString* _variableAlias;
	NSSQLColumn* _targetColumn;
	NSString* _targetAlias;
	NSMutableArray* _keypathsToPromote;
	char _useDistinct;
	char _isCount;
	char _hasTrailingFunction;
	char _onlyTrailIsCount;
	char _subqueryHasTruePredicate;

}
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)initWithExpression:(id)arg1 trailingKeypath:(id)arg2 inScope:(id)arg3 ;
-(id)governingAliasForKeypathExpression:(id)arg1 ;
-(id)governingEntityForKeypathExpression:(id)arg1 ;
-(void)_promoteJoinsForSubqueryScopedKeypaths;
-(id)fetchIntermediateForKeypathExpression:(id)arg1 ;
-(void)selectDistinct;
-(char)keypathExpressionIsSafeLHSForIn:(id)arg1 ;
-(void)_promoteJoinsForSubqueryScopedKeypath:(id)arg1 ;
-(id)_generateSQLForVariableExpression:(id)arg1 allowToMany:(char)arg2 inContext:(id)arg3 ;
-(char)_isKeypathScopedToSubquery:(id)arg1 ;
-(void)_setVariableColumn:(id)arg1 ;
-(char)canDoDirectJoinGivenPredicate:(id)arg1 ;
-(void)_createCollectionJoinsForFetchInContext:(id)arg1 ;
-(void)_createSelectClauseInFetchWithContext:(id)arg1 ;
-(void)dealloc;
@end

