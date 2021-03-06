/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAccessibilityIdentification.h>

@class NSString;

@interface UIAccessibilityElement : NSObject <UIAccessibilityIdentification> {

	CGRect _accessibilityFrameInContainerSpace;

}

@property (assign,nonatomic) id accessibilityContainer; 
@property (assign,nonatomic) char isAccessibilityElement; 
@property (nonatomic,retain) NSString * accessibilityLabel; 
@property (nonatomic,retain) NSString * accessibilityHint; 
@property (nonatomic,retain) NSString * accessibilityValue; 
@property (assign,nonatomic) CGRect accessibilityFrame; 
@property (assign,nonatomic) unsigned long long accessibilityTraits; 
@property (assign,nonatomic) CGRect accessibilityFrameInContainerSpace;              //@synthesize accessibilityFrameInContainerSpace=_accessibilityFrameInContainerSpace - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * accessibilityIdentifier; 
-(CGRect)accessibilityFrame;
-(NSString *)accessibilityLabel;
-(NSString *)accessibilityValue;
-(NSString *)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(char)isAccessibilityElement;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)setAccessibilityValue:(NSString *)arg1 ;
-(void)setAccessibilityHint:(NSString *)arg1 ;
-(void)setAccessibilityFrame:(CGRect)arg1 ;
-(void)setAccessibilityTraits:(unsigned long long)arg1 ;
-(void)setIsAccessibilityElement:(char)arg1 ;
-(id)initWithAccessibilityContainer:(id)arg1 ;
-(CGRect)accessibilityFrameInContainerSpace;
-(void)setAccessibilityFrameInContainerSpace:(CGRect)arg1 ;
@end

