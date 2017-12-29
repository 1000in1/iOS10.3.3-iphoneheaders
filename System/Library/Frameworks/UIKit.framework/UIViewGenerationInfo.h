/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIViewGenerator;
@class NSMutableArray;

@interface UIViewGenerationInfo : NSObject {

	char _needsUpdateViewHierarchy;
	char _hasUpdatesToApply;
	id<_UIViewGenerator> _viewGenerator;
	int _numberOfDependencies;
	NSMutableArray* _dependentViewGenerators;

}

@property (assign,nonatomic,__weak) id<_UIViewGenerator> viewGenerator;              //@synthesize viewGenerator=_viewGenerator - In the implementation block
@property (assign,nonatomic) char needsUpdateViewHierarchy;                          //@synthesize needsUpdateViewHierarchy=_needsUpdateViewHierarchy - In the implementation block
@property (assign,nonatomic) char hasUpdatesToApply;                                 //@synthesize hasUpdatesToApply=_hasUpdatesToApply - In the implementation block
@property (assign,nonatomic) int numberOfDependencies;                               //@synthesize numberOfDependencies=_numberOfDependencies - In the implementation block
@property (nonatomic,retain) NSMutableArray * dependentViewGenerators;               //@synthesize dependentViewGenerators=_dependentViewGenerators - In the implementation block
-(void)setViewGenerator:(id<_UIViewGenerator>)arg1 ;
-(void)setNeedsUpdateViewHierarchy:(char)arg1 ;
-(void)setHasUpdatesToApply:(char)arg1 ;
-(id)initWithGenerator:(id)arg1 ;
-(id<_UIViewGenerator>)viewGenerator;
-(char)needsUpdateViewHierarchy;
-(char)hasUpdatesToApply;
-(int)numberOfDependencies;
-(void)setNumberOfDependencies:(int)arg1 ;
-(NSMutableArray *)dependentViewGenerators;
-(void)setDependentViewGenerators:(NSMutableArray *)arg1 ;
@end
