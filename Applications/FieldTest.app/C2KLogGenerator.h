/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FieldTest.app/FieldTest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FieldTest/EURLogGenerator.h>

@interface C2KLogGenerator : EURLogGenerator
+(void)processTemplate:(id)arg1 storeDisplayIntoDict:(id)arg2 storeLookupIntoDict:(id)arg3 ;
+(id)getDisplayFromState:(id)arg1 ;
+(id)generator;
-(id)getStartCommand;
-(id)generateLogUsingState:(id)arg1 ;
-(void)updateState:(id)arg1 withData:(id)arg2 ;
-(void)updateFromLog:(id)arg1 usingLookup:(id)arg2 usingState:(id)arg3 ;
@end

