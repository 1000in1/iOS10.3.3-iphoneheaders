/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString, NSDictionary;

@interface AVMetadataMachineReadableCodeObjectInternal : NSObject {

	char decoded;
	NSArray* corners;
	NSString* stringValue;
	NSDictionary* basicDescriptor;

}

@property (retain) NSArray * corners; 
@property (retain) NSString * stringValue; 
@property (retain) NSDictionary * basicDescriptor; 
@property (assign) char decoded; 
-(void)dealloc;
-(NSString *)stringValue;
-(NSArray *)corners;
-(void)setStringValue:(NSString *)arg1 ;
-(NSDictionary *)basicDescriptor;
-(void)setBasicDescriptor:(NSDictionary *)arg1 ;
-(char)decoded;
-(void)setDecoded:(char)arg1 ;
-(void)setCorners:(NSArray *)arg1 ;
@end

