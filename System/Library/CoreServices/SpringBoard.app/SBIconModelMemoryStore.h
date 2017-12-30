/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBIconModelStore.h>

@class NSDictionary, NSString;

@interface SBIconModelMemoryStore : NSObject <SBIconModelStore> {

	NSDictionary* _currentState;
	NSDictionary* _desiredState;

}

@property (nonatomic,copy) NSDictionary * currentState;              //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,copy) NSDictionary * desiredState;              //@synthesize desiredState=_desiredState - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithITunesRepresentation:(id)arg1 ;
-(id)loadDesiredIconState:(id*)arg1 ;
-(id)loadCurrentIconState:(id*)arg1 ;
-(char)deleteDesiredIconState:(id*)arg1 ;
-(char)deleteCurrentIconState:(id*)arg1 ;
-(char)saveDesiredIconState:(id)arg1 error:(id*)arg2 ;
-(char)saveCurrentIconState:(id)arg1 error:(id*)arg2 ;
-(id)initWithCurrentState:(id)arg1 desiredState:(id)arg2 ;
-(void)setDesiredState:(NSDictionary *)arg1 ;
-(NSDictionary *)desiredState;
-(id)init;
-(NSDictionary *)currentState;
-(void)setCurrentState:(NSDictionary *)arg1 ;
@end

