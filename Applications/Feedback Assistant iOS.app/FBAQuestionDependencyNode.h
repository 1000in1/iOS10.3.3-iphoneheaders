/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBAQuestionDependencyGraph, NSNumber, NSString, NSSet, NSHashTable, NSPredicate;

@interface FBAQuestionDependencyNode : NSObject {

	FBAQuestionDependencyGraph* _graph;
	NSNumber* _questionID;
	NSString* _tat;
	NSSet* _dependencyTats;
	NSHashTable* _dependencyChildren;
	NSPredicate* _visibilityPredicateTemplate;

}

@property (retain) NSHashTable * dependencyChildren;                       //@synthesize dependencyChildren=_dependencyChildren - In the implementation block
@property (retain) NSSet * dependencyTats;                                 //@synthesize dependencyTats=_dependencyTats - In the implementation block
@property (retain) NSPredicate * visibilityPredicateTemplate;              //@synthesize visibilityPredicateTemplate=_visibilityPredicateTemplate - In the implementation block
@property (__weak) FBAQuestionDependencyGraph * graph;                     //@synthesize graph=_graph - In the implementation block
@property (readonly) NSNumber * questionID;                                //@synthesize questionID=_questionID - In the implementation block
@property (readonly) NSString * tat;                                       //@synthesize tat=_tat - In the implementation block
@property (readonly) NSSet * dependentChildren; 
-(NSNumber *)questionID;
-(id)initWithQuestion:(id)arg1 ;
-(NSSet *)dependencyTats;
-(void)registerDependentChild:(id)arg1 ;
-(char)isVisibleInFormResponse:(id)arg1 ;
-(NSSet *)dependentChildren;
-(NSString *)tat;
-(id)dependentTatsForConditions:(id)arg1 ;
-(id)predicateForConditions:(id)arg1 ;
-(NSHashTable *)dependencyChildren;
-(NSPredicate *)visibilityPredicateTemplate;
-(id)_predicateFromLeafArray:(id)arg1 ;
-(id)_substitutionFromToken:(id)arg1 ;
-(void)setDependencyTats:(NSSet *)arg1 ;
-(void)setDependencyChildren:(NSHashTable *)arg1 ;
-(void)setVisibilityPredicateTemplate:(NSPredicate *)arg1 ;
-(FBAQuestionDependencyGraph *)graph;
-(void)setGraph:(FBAQuestionDependencyGraph *)arg1 ;
@end

