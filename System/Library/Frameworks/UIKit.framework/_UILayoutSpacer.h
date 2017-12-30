/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UILayoutGuide.h>
#import <UIKit/UILayoutSupport.h>

@class NSLayoutYAxisAnchor, NSLayoutDimension, NSArray, NSString;

@interface _UILayoutSpacer : UILayoutGuide <UILayoutSupport> {

	char _compatibilityGuideAllowsArchivingAsSubview;
	char _horizontal;
	NSArray* _constraintsToRemoveAtRuntime;

}

@property (assign,setter=_setHorizontal:,getter=_isHorizontal,nonatomic) char _horizontal;                                                         //@synthesize horizontal=_horizontal - In the implementation block
@property (assign,setter=_setCompatibilityGuideAllowsArchivingAsSubview:,nonatomic) char _compatibilityGuideAllowsArchivingAsSubview;              //@synthesize compatibilityGuideAllowsArchivingAsSubview=_compatibilityGuideAllowsArchivingAsSubview - In the implementation block
@property (setter=_setConstraintsToRemoveAtRuntime:,nonatomic,copy) NSArray * _constraintsToRemoveAtRuntime;                                       //@synthesize constraintsToRemoveAtRuntime=_constraintsToRemoveAtRuntime - In the implementation block
@property (setter=_setArchivedIdentifier:,nonatomic,copy) NSString * _archivedIdentifier; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) float length; 
@property (readonly) NSLayoutYAxisAnchor * topAnchor; 
@property (readonly) NSLayoutYAxisAnchor * bottomAnchor; 
@property (readonly) NSLayoutDimension * heightAnchor; 
+(id)_verticalLayoutSpacer;
+(id)_horizontalLayoutSpacer;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(float)length;
-(id)_layoutVariablesWithAmbiguousValue;
-(NSArray *)_constraintsToRemoveAtRuntime;
-(void)_setConstraintsToRemoveAtRuntime:(id)arg1 ;
-(NSString *)_archivedIdentifier;
-(char)_isHorizontal;
-(void)_setUpCounterDimensionConstraint;
-(void)_setArchivedIdentifier:(id)arg1 ;
-(char)_compatibilityGuideAllowsArchivingAsSubview;
-(void)_setCompatibilityGuideAllowsArchivingAsSubview:(char)arg1 ;
-(void)_setHorizontal:(char)arg1 ;
@end

