/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, CALayer, CAValueFunction;

@interface CASpring : NSObject <NSCopying, NSMutableCopying, NSCoding> {

	NSString* _name;
	CALayer* _layerA;
	CALayer* _layerB;
	CGPoint _attachmentPointA;
	CGPoint _attachmentPointB;
	CAValueFunction* _function;
	float _stiffness;
	float _damping;
	float _restLength;
	char _enabled;
	id _delegate;

}

@property (copy) NSString * name; 
@property (getter=isEnabled) char enabled; 
@property (retain) CALayer * layerA; 
@property (retain) CALayer * layerB; 
@property (assign) CGPoint attachmentPointA; 
@property (assign) CGPoint attachmentPointB; 
@property (retain) CAValueFunction * function; 
@property (assign) float restLength; 
@property (assign) float stiffness; 
@property (assign) float damping; 
@property (__weak) id<CASpringDelegate> delegate; 
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
+(id)spring;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(CALayer *)layerA;
-(CALayer *)layerB;
-(CGPoint)attachmentPointB;
-(float)restLength;
-(void)setRestLength:(float)arg1 ;
-(id)init;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<CASpringDelegate>)arg1 ;
-(void)dealloc;
-(id<CASpringDelegate>)delegate;
-(void)setStiffness:(float)arg1 ;
-(void)setDamping:(float)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(float)damping;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setLayerA:(CALayer *)arg1 ;
-(void)setAttachmentPointA:(CGPoint)arg1 ;
-(void)setLayerB:(CALayer *)arg1 ;
-(void)setAttachmentPointB:(CGPoint)arg1 ;
-(CGPoint)attachmentPointA;
-(float)stiffness;
-(void)setFunction:(CAValueFunction *)arg1 ;
-(CAValueFunction *)function;
@end
